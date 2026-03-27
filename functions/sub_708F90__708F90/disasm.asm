0x708F90: push    ecx
0x708F91: push    ebp
0x708F92: mov     ebp, [esp+8+arg_0]
0x708F96: push    esi
0x708F97: mov     esi, ecx
0x708F99: push    ebp
0x708F9A: mov     [esp+10h+var_4], esi
0x708F9E: call    sub_7081B0
0x708FA3: cmp     dword ptr [ebp+0D8h], 0A00010Eh
0x708FAD: jb      short loc_709012
0x708FAF: push    ebx
0x708FB0: mov     ecx, ebp
0x708FB2: call    sub_7124D0
0x708FB7: mov     ebx, eax
0x708FB9: test    ebx, ebx
0x708FBB: jz      short loc_709011
0x708FBD: push    edi
0x708FBE: mov     edi, edi
0x708FC0: mov     ecx, ebp
0x708FC2: sub     ebx, 1
0x708FC5: call    sub_7124A0
0x708FCA: mov     edi, eax
0x708FCC: test    edi, edi
0x708FCE: jz      short loc_70900C
0x708FD0: mov     eax, [esi+0CCh]
0x708FD6: mov     edx, [eax+4]
0x708FD9: add     esi, 0CCh ; 'Ì'
0x708FDF: mov     ecx, esi
0x708FE1: call    edx
0x708FE3: mov     [eax+8], edi
0x708FE6: mov     dword ptr [eax+4], 0
0x708FED: mov     ecx, [esi+4]
0x708FF0: mov     [eax], ecx
0x708FF2: mov     ecx, [esi+4]
0x708FF5: test    ecx, ecx
0x708FF7: jz      short loc_708FFE
0x708FF9: mov     [ecx+4], eax
0x708FFC: jmp     short loc_709001
0x708FFE: mov     [esi+8], eax
0x709001: add     dword ptr [esi+0Ch], 1
0x709005: mov     [esi+4], eax
0x709008: mov     esi, [esp+14h+var_4]
0x70900C: test    ebx, ebx
0x70900E: jnz     short loc_708FC0
0x709010: pop     edi
0x709011: pop     ebx
0x709012: pop     esi
0x709013: pop     ebp
0x709014: pop     ecx
0x709015: retn    4
