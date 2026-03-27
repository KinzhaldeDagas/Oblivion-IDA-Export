0x680F30: mov     ecx, [esp+arg_0]; this
0x680F34: test    ecx, ecx
0x680F36: jz      short loc_680F4F
0x680F38: call    MobileObject_GetCharProxy
0x680F3D: test    eax, eax
0x680F3F: jz      short loc_680F4F
0x680F41: mov     eax, [eax+368h]
0x680F47: test    eax, eax
0x680F49: jz      short loc_680F4F
0x680F4B: mov     eax, [eax+8]
0x680F4E: retn
0x680F4F: xor     eax, eax
0x680F51: retn
