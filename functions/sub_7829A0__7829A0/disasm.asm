0x7829A0: push    ebx
0x7829A1: mov     ebx, [esp+4+arg_0]
0x7829A5: push    esi
0x7829A6: mov     esi, ecx
0x7829A8: cmp     [esi+8], ebx
0x7829AB: push    edi
0x7829AC: jnb     short loc_7829D4
0x7829AE: mov     eax, [esi+10h]
0x7829B1: test    eax, eax
0x7829B3: jz      short loc_7829BD
0x7829B5: mov     ecx, [eax]
0x7829B7: mov     edx, [ecx+8]
0x7829BA: push    eax
0x7829BB: call    edx
0x7829BD: test    bl, 0Fh
0x7829C0: mov     dword ptr [esi+10h], 0
0x7829C7: mov     eax, ebx
0x7829C9: jz      short loc_7829D1
0x7829CB: and     eax, 0FFFFFFF0h
0x7829CE: add     eax, 20h ; ' '
0x7829D1: mov     [esi+8], eax
0x7829D4: cmp     dword ptr [esi+10h], 0
0x7829D8: lea     edi, [esi+10h]
0x7829DB: jnz     short loc_782A14
0x7829DD: cmp     [esp+0Ch+arg_10], 0
0x7829E2: mov     ecx, 208h
0x7829E7: jz      short loc_7829EE
0x7829E9: mov     ecx, 218h
0x7829EE: mov     eax, [esi+0Ch]
0x7829F1: mov     edx, [eax]
0x7829F3: mov     edx, [edx+68h]
0x7829F6: push    ebp
0x7829F7: mov     ebp, [esi+4]
0x7829FA: push    0
0x7829FC: push    edi
0x7829FD: push    0
0x7829FF: push    ebp
0x782A00: push    ecx
0x782A01: mov     ecx, [esi+8]
0x782A04: push    ecx
0x782A05: push    eax
0x782A06: call    edx
0x782A08: test    eax, eax
0x782A0A: pop     ebp
0x782A0B: jl      short loc_782A14
0x782A0D: mov     dword ptr [esi+14h], 0
0x782A14: cmp     [esp+0Ch+arg_C], 0
0x782A19: jnz     short loc_782A3C
0x782A1B: mov     ecx, [esi+14h]
0x782A1E: mov     eax, [esi+8]
0x782A21: sub     eax, ecx
0x782A23: cmp     eax, ebx
0x782A25: jb      short loc_782A3C
0x782A27: mov     eax, [esp+0Ch+arg_4]
0x782A2B: mov     [eax], ecx
0x782A2D: mov     ecx, [esp+0Ch+arg_8]
0x782A31: add     [esi+14h], ebx
0x782A34: mov     dword ptr [ecx], 1000h
0x782A3A: jmp     short loc_782A53
0x782A3C: mov     eax, [esp+0Ch+arg_4]
0x782A40: mov     ecx, [esp+0Ch+arg_8]
0x782A44: mov     dword ptr [eax], 0
0x782A4A: mov     [esi+14h], ebx
0x782A4D: mov     dword ptr [ecx], 2000h
0x782A53: cmp     dword ptr [eax], 0
0x782A56: jnz     short loc_782A5E
0x782A58: mov     dword ptr [ecx], 2000h
0x782A5E: mov     eax, [edi]
0x782A60: pop     edi
0x782A61: pop     esi
0x782A62: pop     ebx
0x782A63: retn    14h
