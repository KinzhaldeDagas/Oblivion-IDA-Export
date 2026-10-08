0x68DBF1: cmp     dword ptr [esi+4], 0
0x68DBF5: jnz     short ActiveEffect_Base_SaveEffect___LoopBody; Verified (Oblivion): save traversal calls each hit-effect vtable +0x78 with ECX=this, owner ActiveEffect* (EDI), and targetReference (EBX); then increments the serialized hit-effect count. This establishes the shared SaveExtraData virtual signature.
0x68DBF7: cmp     dword ptr [esi], 0
0x68DBFA: jz      short ActiveEffect_Base_SaveEffect___LoopExit
