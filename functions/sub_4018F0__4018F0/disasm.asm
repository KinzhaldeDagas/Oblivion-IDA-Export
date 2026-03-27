0x4018F0: push    esi
0x4018F1: push    edi
0x4018F2: mov     edi, [esp+8+arg_0]
0x4018F6: mov     eax, [edi+4]
0x4018F9: and     eax, 0FFFFFFFh
0x4018FE: xor     edx, edx
0x401900: div     dword ptr [ecx+4]
0x401903: sub     eax, 1
0x401906: cmp     eax, [ecx+30h]
0x401909: jl      short loc_401910
0x40190B: lea     eax, [ecx+3Ch]
0x40190E: jmp     short loc_401916
0x401910: mov     edx, [ecx+34h]
0x401913: lea     eax, [edx+eax*8]
0x401916: push    edi
0x401917: push    eax
0x401918: call    sub_401690
0x40191D: mov     esi, [esp+8+arg_4]
0x401921: mov     eax, [esi+4]
0x401924: and     eax, 0FFFFFFFh
0x401929: xor     edx, edx
0x40192B: div     dword ptr [ecx+4]
0x40192E: sub     eax, 1
0x401931: cmp     eax, [ecx+30h]
0x401934: jl      short loc_40193B
0x401936: lea     eax, [ecx+3Ch]
0x401939: jmp     short loc_401941
0x40193B: mov     edx, [ecx+34h]
0x40193E: lea     eax, [edx+eax*8]
0x401941: push    ebx
0x401942: push    esi
0x401943: push    eax
0x401944: call    sub_401690
0x401949: mov     eax, [edi+4]
0x40194C: mov     edx, [esi+4]
0x40194F: mov     ebx, eax
0x401951: and     edx, 0FFFFFFFh
0x401957: and     ebx, 0FFFFFFFh
0x40195D: lea     edx, [edx+ebx+8]
0x401961: and     eax, 0F0000000h
0x401966: or      edx, eax
0x401968: mov     [edi+4], edx
0x40196B: cmp     esi, [ecx+24h]
0x40196E: pop     ebx
0x40196F: jnz     short loc_401983
0x401971: add     dword ptr [ecx+1Ch], 0FFFFFFFFh
0x401975: push    edi
0x401976: mov     [ecx+24h], edi
0x401979: call    sub_4015F0
0x40197E: pop     edi
0x40197F: pop     esi
0x401980: retn    8
0x401983: mov     eax, [esi+4]
0x401986: and     eax, 0FFFFFFFh
0x40198B: mov     [eax+esi+8], edi
0x40198F: add     dword ptr [ecx+1Ch], 0FFFFFFFFh
0x401993: push    edi
0x401994: call    sub_4015F0
0x401999: pop     edi
0x40199A: pop     esi
0x40199B: retn    8
