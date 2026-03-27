0x64F6A0: push    ebx
0x64F6A1: push    esi
0x64F6A2: mov     esi, ecx
0x64F6A4: mov     eax, [esi]
0x64F6A6: mov     edx, [eax+184h]
0x64F6AC: call    edx
0x64F6AE: mov     ebx, eax
0x64F6B0: mov     eax, [esi]
0x64F6B2: mov     edx, [eax+570h]
0x64F6B8: push    0
0x64F6BA: mov     ecx, esi
0x64F6BC: call    edx
0x64F6BE: cmp     dword ptr [esi+0C0h], 0
0x64F6C5: jz      short loc_64F6D3
0x64F6C7: mov     eax, [esp+8+arg_4]
0x64F6CB: add     [esi+0CCh], eax
0x64F6D1: jmp     short loc_64F6DA
0x64F6D3: mov     ecx, [esp+8+arg_4]
0x64F6D7: add     [esi+4], ecx
0x64F6DA: cmp     dword ptr [esi+4], 0
0x64F6DE: jge     short loc_64F6E7
0x64F6E0: mov     dword ptr [esi+4], 0
0x64F6E7: test    ebx, ebx
0x64F6E9: jz      short loc_64F74D
0x64F6EB: mov     eax, [ebx+18h]
0x64F6EE: push    edi
0x64F6EF: push    eax
0x64F6F0: call    sub_673980
0x64F6F5: mov     edx, [esi]
0x64F6F7: mov     edi, eax
0x64F6F9: mov     eax, [edx+180h]
0x64F6FF: add     esp, 4
0x64F702: mov     ecx, esi
0x64F704: call    eax
0x64F706: cmp     eax, edi
0x64F708: jl      short loc_64F74C
0x64F70A: mov     edx, [esi]
0x64F70C: mov     eax, [edx+17Ch]
0x64F712: add     edi, 0FFFFFFFFh
0x64F715: push    edi
0x64F716: mov     ecx, esi
0x64F718: call    eax
0x64F71A: mov     edx, [esi]
0x64F71C: mov     eax, [edx+180h]
0x64F722: mov     edi, [ebx+18h]
0x64F725: mov     ecx, esi
0x64F727: call    eax
0x64F729: mov     ecx, ds:0B152B0h[edi*4]
0x64F730: cmp     dword ptr [ecx+eax*4], 2Ch ; ','
0x64F734: jnz     short loc_64F74C
0x64F736: mov     edx, [esp+0Ch+arg_0]
0x64F73A: push    400h
0x64F73F: add     edx, 44h ; 'D'
0x64F742: push    edx
0x64F743: push    ebx
0x64F744: call    Script_AddEventToExtraScript
0x64F749: add     esp, 0Ch
0x64F74C: pop     edi
0x64F74D: pop     esi
0x64F74E: pop     ebx
0x64F74F: retn    8
