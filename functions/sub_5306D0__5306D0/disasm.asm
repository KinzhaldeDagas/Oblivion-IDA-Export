0x5306D0: push    ebx
0x5306D1: mov     ebx, dword ptr [esp+4+a2]
0x5306D5: push    esi
0x5306D6: mov     esi, ecx
0x5306D8: mov     eax, [esi+8]
0x5306DB: mov     ecx, eax
0x5306DD: shr     ecx, 0Eh
0x5306E0: test    cl, 1
0x5306E3: jnz     short loc_53070B
0x5306E5: test    bl, bl
0x5306E7: jz      short loc_53070B
0x5306E9: shr     eax, 3
0x5306EC: test    al, 1
0x5306EE: jz      short loc_53070B
0x5306F0: push    esi
0x5306F1: call    TESTopic_static_GetTopicInfoParent?
0x5306F6: add     esp, 4
0x5306F9: test    eax, eax
0x5306FB: jz      short loc_53070B
0x5306FD: mov     edx, [eax]
0x5306FF: mov     ecx, eax
0x530701: mov     eax, [edx+90h]
0x530707: push    1
0x530709: call    eax
0x53070B: push    ebx; a2
0x53070C: mov     ecx, esi; this
0x53070E: call    TESForm_SetFromActiveFile
0x530713: pop     esi
0x530714: pop     ebx
0x530715: retn    4
