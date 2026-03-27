0x542E00: mov     eax, ds:0B365C4h
0x542E05: test    eax, eax
0x542E07: jz      short locret_542E1F
0x542E09: cmp     dword ptr [eax+2Ch], 0
0x542E0D: jz      short locret_542E1F
0x542E0F: mov     ecx, [esp+a2]
0x542E13: push    ecx; a2
0x542E14: mov     ecx, [eax+2Ch]
0x542E17: add     ecx, 14h; this
0x542E1A: call    NiSmartPointer_Set??
0x542E1F: retn
