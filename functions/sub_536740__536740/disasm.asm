0x536740: push    edi
0x536741: mov     edi, [esp+4+arg_0]
0x536745: test    edi, edi
0x536747: jz      short loc_53679F
0x536749: cmp     dword ptr [edi+0A8h], 0
0x536750: jz      short loc_53675B
0x536752: push    0
0x536754: mov     ecx, edi
0x536756: call    sub_435CE0
0x53675B: mov     eax, [edi]
0x53675D: mov     edx, [eax+8]
0x536760: mov     ecx, edi
0x536762: call    edx
0x536764: test    eax, eax
0x536766: jz      short loc_53679F
0x536768: movzx   eax, word ptr [edi+0B6h]
0x53676F: push    esi
0x536770: xor     esi, esi
0x536772: test    eax, eax
0x536774: jbe     short loc_53679E
0x536776: cmp     eax, esi
0x536778: ja      short loc_53677E
0x53677A: xor     eax, eax
0x53677C: jmp     short loc_536787
0x53677E: mov     eax, [edi+0B0h]
0x536784: mov     eax, [eax+esi*4]
0x536787: push    eax
0x536788: call    sub_536740
0x53678D: movzx   eax, word ptr [edi+0B6h]
0x536794: add     esi, 1
0x536797: add     esp, 4
0x53679A: cmp     eax, esi
0x53679C: ja      short loc_53677E
0x53679E: pop     esi
0x53679F: pop     edi
0x5367A0: retn
