//
// Created by charles on 11/09/23.
//

#ifndef LAMP_GAMECONTROL_H
#define LAMP_GAMECONTROL_H

#include <string>
#include <list>
#include "../lampMod.h"

namespace Lamp {
    namespace Game {
        class gameControl {
        public:
            virtual bool init() = 0;

            virtual bool close(std::list<Lamp::Core::lampMod> ModList) = 0;

            virtual int internalTypeToInt(Lamp::Core::lampMod Mod) = 0;
            virtual std::list<std::string> internalTypeListToStrings() = 0;

            virtual void registerArchive(std::string Path) = 0;


            virtual void ConfigMenu() = 0;

            /**
             * @brief Create the file structure for the game.
             * @return If the creation succeeded.
             */
            virtual bool createFileStructure() = 0;

            /**
             * @brief Clean and remove all files within the created file structure and in the game.
             * @return If the cleanup succeeded.
             */
            virtual bool preCleanUp() = 0;

            /**
             * @brief Reextract archives into the file structure in mod order.
             * @return If the extraction succeeded.
             */
            virtual bool preDeployment() = 0;

            /**
             * @brief  Copy or create symlinks to the game's data folders.
             * @return If the creation succeeded.
             */
            virtual bool deployment() = 0;

            /**
             * This is where you would run tools such as Bodyslide or Fnis.
             */
            virtual void postDeploymentTasks() = 0;


            virtual void listArchives() = 0;
        protected:
            gameControl(){}
        };
    }
} // Lamp

#endif //LAMP_GAMECONTROL_H
