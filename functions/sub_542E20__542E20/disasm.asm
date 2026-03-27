0x542E20: mov     eax, ds:0B365C4h
0x542E25: test    eax, eax
0x542E27: jz      short locret_542E3F
0x542E29: cmp     dword ptr [eax+2Ch], 0
0x542E2D: jz      short locret_542E3F
0x542E2F: mov     ecx, [esp+a2]
0x542E33: push    ecx; a2
0x542E34: mov     ecx, [eax+2Ch]
0x542E37: add     ecx, 10h; this
0x542E3A: call    NiSmartPointer_Set??
0x542E3F: retn
