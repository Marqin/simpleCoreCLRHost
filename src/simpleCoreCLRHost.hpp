/*
 *  Copyright (c) Hubert Jarosz. All rights reserved.
 *  Licensed under the MIT license. See LICENSE file in the project root for full license information.
 */

#pragma once

#include <string>

int runFromEntryPoint(
        const std::string& currentExeAbsolutePath,
        const std::string& clrFilesAbsolutePath,
        const std::string& managedAssemblyAbsoluteDir,
        const std::string& assemblyName,
        const std::string& entryPointType,
        const std::string& entryPointName);
