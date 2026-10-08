enum _LDR_DDAG_STATE : __int32
{
LdrModulesMerged = 0xFFFFFFFB,
LdrModulesInitError = 0xFFFFFFFC,
LdrModulesSnapError = 0xFFFFFFFD,
LdrModulesUnloaded = 0xFFFFFFFE,
LdrModulesUnloading = 0xFFFFFFFF,
LdrModulesPlaceHolder = 0x0,
LdrModulesMapping = 0x1,
LdrModulesMapped = 0x2,
LdrModulesWaitingForDependencies = 0x3,
LdrModulesSnapping = 0x4,
LdrModulesSnapped = 0x5,
LdrModulesCondensed = 0x6,
LdrModulesReadyToInit = 0x7,
LdrModulesInitializing = 0x8,
LdrModulesReadyToRun = 0x9,
};
