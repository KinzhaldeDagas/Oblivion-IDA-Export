0x7856B0: push    0FFFFFFFFh
0x7856B2: push    offset SEH_7856B0
0x7856B7: mov     eax, large fs:0
0x7856BD: push    eax
0x7856BE: sub     esp, 8
0x7856C1: push    ebx
0x7856C2: push    ebp
0x7856C3: push    esi
0x7856C4: push    edi
0x7856C5: mov     eax, ds:0B30AACh
0x7856CA: xor     eax, esp
0x7856CC: push    eax
0x7856CD: lea     eax, [esp+28h+var_C]
0x7856D1: mov     large fs:0, eax
0x7856D7: mov     esi, ecx
0x7856D9: mov     ecx, [esi+4]
0x7856DC: xor     edi, edi
0x7856DE: cmp     ecx, edi
0x7856E0: mov     [esp+28h+var_4], edi
0x7856E4: jnz     short loc_7856EA
0x7856E6: xor     eax, eax
0x7856E8: jmp     short loc_785700
0x7856EA: mov     edx, [esi+8]
0x7856ED: sub     edx, ecx
0x7856EF: mov     eax, 2AAAAAABh
0x7856F4: imul    edx
0x7856F6: sar     edx, 2
0x7856F9: mov     eax, edx
0x7856FB: shr     eax, 1Fh
0x7856FE: add     eax, edx
0x785700: mov     ebx, [esp+28h+arg_0]
0x785704: cmp     eax, ebx
0x785706: jnb     short loc_785741
0x785708: cmp     ecx, edi
0x78570A: jz      short loc_785722
0x78570C: mov     edx, [esi+8]
0x78570F: sub     edx, ecx
0x785711: mov     eax, 2AAAAAABh
0x785716: imul    edx
0x785718: sar     edx, 2
0x78571B: mov     edi, edx
0x78571D: shr     edi, 1Fh
0x785720: add     edi, edx
0x785722: mov     ebp, [esi+8]
0x785725: cmp     ecx, ebp
0x785727: jbe     short loc_78572E
0x785729: call    __invalid_parameter_noinfo
0x78572E: lea     eax, [esp+28h+arg_4]
0x785732: push    eax
0x785733: sub     ebx, edi
0x785735: push    ebx
0x785736: push    ebp
0x785737: push    esi
0x785738: mov     ecx, esi
0x78573A: call    sub_785050
0x78573F: jmp     short loc_7857A1
0x785741: cmp     ecx, edi
0x785743: jz      short loc_7857A1
0x785745: mov     edi, [esi+8]
0x785748: mov     edx, edi
0x78574A: sub     edx, ecx
0x78574C: mov     eax, 2AAAAAABh
0x785751: imul    edx
0x785753: sar     edx, 2
0x785756: mov     eax, edx
0x785758: shr     eax, 1Fh
0x78575B: add     eax, edx
0x78575D: cmp     ebx, eax
0x78575F: jnb     short loc_7857A1
0x785761: cmp     ecx, edi
0x785763: jbe     short loc_78576A
0x785765: call    __invalid_parameter_noinfo
0x78576A: mov     ebp, [esi+4]
0x78576D: cmp     ebp, [esi+8]
0x785770: jbe     short loc_785777
0x785772: call    __invalid_parameter_noinfo
0x785777: lea     ecx, [ebx+ebx*2]
0x78577A: lea     ebx, [ebp+ecx*8+0]
0x78577E: cmp     ebx, [esi+8]
0x785781: mov     [esp+28h+var_10], ebp
0x785785: ja      short loc_78578C
0x785787: cmp     ebx, [esi+4]
0x78578A: jnb     short loc_785791
0x78578C: call    __invalid_parameter_noinfo
0x785791: push    edi
0x785792: push    esi
0x785793: push    ebx
0x785794: push    esi
0x785795: lea     edx, [esp+38h+var_14]
0x785799: push    edx
0x78579A: mov     ecx, esi
0x78579C: call    sub_784AC0
0x7857A1: lea     ecx, [esp+28h+arg_4]; void *
0x7857A5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7857AD: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7857B2: mov     ecx, [esp+28h+var_C]
0x7857B6: mov     large fs:0, ecx
0x7857BD: pop     ecx
0x7857BE: pop     edi
0x7857BF: pop     esi
0x7857C0: pop     ebp
0x7857C1: pop     ebx
0x7857C2: add     esp, 14h
0x7857C5: retn    1Ch
