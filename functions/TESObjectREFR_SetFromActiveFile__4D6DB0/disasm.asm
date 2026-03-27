0x4D6DB0: push    ebx
0x4D6DB1: mov     ebx, dword ptr [esp+4+a2]
0x4D6DB5: push    esi
0x4D6DB6: mov     esi, ecx
0x4D6DB8: mov     eax, [esi+8]
0x4D6DBB: shr     eax, 0Eh
0x4D6DBE: test    al, 1
0x4D6DC0: jnz     short loc_4D6DE2
0x4D6DC2: test    bl, bl
0x4D6DC4: jz      short loc_4D6DE2
0x4D6DC6: mov     edx, [esi+18h]
0x4D6DC9: mov     eax, [edx]
0x4D6DCB: lea     ecx, [esi+18h]
0x4D6DCE: call    eax
0x4D6DD0: test    eax, eax
0x4D6DD2: jz      short loc_4D6DE2
0x4D6DD4: mov     edx, [eax]
0x4D6DD6: mov     ecx, eax
0x4D6DD8: mov     eax, [edx+90h]
0x4D6DDE: push    1
0x4D6DE0: call    eax
0x4D6DE2: push    ebx; a2
0x4D6DE3: mov     ecx, esi; this
0x4D6DE5: call    TESForm_SetFromActiveFile
0x4D6DEA: pop     esi
0x4D6DEB: pop     ebx
0x4D6DEC: retn    4
