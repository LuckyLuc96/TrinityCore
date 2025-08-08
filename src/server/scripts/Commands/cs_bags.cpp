/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/* ScriptData
Name: bags_commandscript
%Complete: 1
Comment: All bag related commands
Category: commandscripts
EndScriptData */

#include "Chat.h"
#include "Player.h"
#include "ScriptMgr.h"

using namespace Trinity::ChatCommands;

class bags_commandscript : public CommandScript
{
public:
    bags_commandscript() : CommandScript("bags_commandscript") { }

};

void AddSC_bags_commandscript()
{
    new bags_commandscript();
}
