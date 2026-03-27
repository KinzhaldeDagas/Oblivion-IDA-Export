0x43FCD0: mov     eax, ds:0B06A2Ch
0x43FCD5: push    ebx
0x43FCD6: push    esi
0x43FCD7: push    edi
0x43FCD8: mov     ebx, ecx
0x43FCDA: xor     edi, edi
0x43FCDC: lea     esp, [esp+0]
0x43FCE0: cmp     edi, eax
0x43FCE2: jnb     short loc_43FD19
0x43FCE4: xor     esi, esi
0x43FCE6: cmp     esi, eax
0x43FCE8: jnb     short loc_43FD14
0x43FCEA: mov     ecx, [ebx+8]
0x43FCED: push    esi
0x43FCEE: push    edi
0x43FCEF: call    GetGridEntry
0x43FCF4: test    eax, eax
0x43FCF6: jz      short loc_43FD0A
0x43FCF8: mov     ecx, [eax]; this
0x43FCFA: call    sub_4CE3C0
0x43FCFF: test    eax, eax
0x43FD01: jz      short loc_43FD0A
0x43FD03: mov     ecx, eax; int
0x43FD05: call    sub_4C2300
0x43FD0A: mov     eax, ds:0B06A2Ch
0x43FD0F: add     esi, 1
0x43FD12: jmp     short loc_43FCE6
0x43FD14: add     edi, 1
0x43FD17: jmp     short loc_43FCE0
0x43FD19: pop     edi
0x43FD1A: pop     esi
0x43FD1B: pop     ebx
0x43FD1C: retn
