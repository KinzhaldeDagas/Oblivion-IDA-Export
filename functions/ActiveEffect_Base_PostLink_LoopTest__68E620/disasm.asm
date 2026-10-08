0x68E620: cmp     dword ptr [esi+4], 0
0x68E624: jnz     short ActiveEffect_Base_PostLink___LoopBody; Verified BSTempEffect ownership handoff after load: each +0x84 postLink callback receives owner ActiveEffect, linkContext, and null fallback; ActorProcessManager_RegisterTempEffect increments its refcount and inserts it. ActiveEffect::~ActiveEffect later clears ownerActiveEffect/sets bFinished and frees only its association nodes; the manager releases its own object reference after Update returns false or its parent cell unloads.
0x68E626: cmp     dword ptr [esi], 0
0x68E629: jz      short ActiveEffect_Base_PostLink___LoopExit
