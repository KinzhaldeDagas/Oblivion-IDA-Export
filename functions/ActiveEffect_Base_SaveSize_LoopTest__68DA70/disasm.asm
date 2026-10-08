0x68DA70: cmp     dword ptr [esi+4], 0
0x68DA74: jnz     short ActiveEffect_Base_SaveSize___LoopBody; Verified (Oblivion): size traversal calls each hit-effect vtable +0x74 with ECX=this, first explicit argument the owning ActiveEffect* (EDI), and second explicit argument the target reference passed to ActiveEffect_Base_SaveSize (EBX). This establishes the shared GetExtraSaveSize virtual signature.
0x68DA76: cmp     dword ptr [esi], 0
0x68DA79: jz      short ActiveEffect_Base_SaveSize___LoopExit
