0x95FC90: push    ebx
0x95FC91: push    ebp
0x95FC92: push    esi
0x95FC93: push    edi
0x95FC94: mov     edi, [esp+10h+arg_4]
0x95FC98: xor     esi, esi
0x95FC9A: cmp     [edi+0Eh], si
0x95FC9E: jbe     short loc_95FCF6
0x95FCA0: mov     ebx, [esp+10h+arg_24]
0x95FCA4: mov     ebp, [esp+10h+arg_20]
0x95FCA8: jmp     short loc_95FCB0
0x95FCAA: align 10h
0x95FCB0: mov     ecx, [esp+10h+arg_1C]
0x95FCB4: fld     [esp+10h+arg_0]
0x95FCB8: mov     edx, [esp+10h+arg_18]
0x95FCBC: mov     eax, [edi+8]
0x95FCBF: mov     eax, [eax+esi*4]
0x95FCC2: push    ebx; int
0x95FCC3: push    ebp; int
0x95FCC4: push    ecx; int
0x95FCC5: mov     ecx, [esp+1Ch+arg_14]
0x95FCC9: push    edx; int
0x95FCCA: mov     edx, [esp+20h+arg_10]
0x95FCCE: push    ecx; int
0x95FCCF: mov     ecx, [esp+24h+arg_C]
0x95FCD3: push    edx; int
0x95FCD4: mov     edx, [esp+28h+arg_8]
0x95FCD8: push    ecx; int
0x95FCD9: push    edx; int
0x95FCDA: push    eax; int
0x95FCDB: push    ecx
0x95FCDC: fstp    [esp+38h+var_38]; float
0x95FCDF: call    sub_95D9B0
0x95FCE4: add     esp, 28h
0x95FCE7: test    al, al
0x95FCE9: jnz     short loc_95FCFD
0x95FCEB: movzx   eax, word ptr [edi+0Eh]
0x95FCEF: add     esi, 1
0x95FCF2: cmp     esi, eax
0x95FCF4: jb      short loc_95FCB0
0x95FCF6: pop     edi
0x95FCF7: pop     esi
0x95FCF8: pop     ebp
0x95FCF9: xor     al, al
0x95FCFB: pop     ebx
0x95FCFC: retn
0x95FCFD: mov     [edi+14h], esi
0x95FD00: pop     edi
0x95FD01: pop     esi
0x95FD02: pop     ebp
0x95FD03: mov     al, 1
0x95FD05: pop     ebx
0x95FD06: retn
