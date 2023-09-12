//
// Created by charles on 11/09/23.
//

#ifndef LAMP_BG3_H
#define LAMP_BG3_H

#include "../gameControl.h"

#include "../../imgui/imgui.h"
#include "../../lampFilesystem.h"
#include "../../nfd/include/nfd.h"
    namespace Lamp::Game {
        class BG3: public gameControl {
        public:

            std::string installDirPath = "steam/install/path";
            std::string appDataPath = "app/data/path";

            enum ModType{
                BG3_ENGINE_INJECTION = 0,
                BG3_MOD,
                BG3_BIN_OVERRIDE,
                BG3_DATA_OVERRIDE,
                NaN
            };

            std::list<Lamp::Core::lampMod::Mod *> ModList;


            static BG3& getInstance()
            {
                static BG3 instance;
                return instance;
            }

            BG3(BG3 const&) = delete;
            void operator=(BG3 const&)  = delete;

            void registerArchive(std::string Path) override;

            bool ConfigMenu() override;
            bool createFileStructure() override;

            bool startDeployment() override;

            bool preCleanUp() override;
            bool preDeployment() override;
            bool deployment() override;
            void postDeploymentTasks() override;

            bool collectJsonData();

            void listArchives() override;
        private:
            BG3(){
                installDirPath = Lamp::Core::lampFilesystem::getInstance().loadKeyData(Core::lampConfig::BG3, "installDirPath");
                appDataPath = Lamp::Core::lampFilesystem::getInstance().loadKeyData(Core::lampConfig::BG3, "appDataPath");

            };
        };
    }
// Lamp

#endif //LAMP_BG3_H
