0x65AC20: call    MobileObject_GetCharProxy
0x65AC25: test    eax, eax
0x65AC27: jz      short locret_65AC47
0x65AC29: cmp     [esp+arg_0], 0
0x65AC2E: jz      short loc_65AC3D
0x65AC30: or      dword ptr [eax+1F4h], 800h
0x65AC3A: retn    4
0x65AC3D: and     dword ptr [eax+1F4h], 0FFFFF7FFh
0x65AC47: retn    4
