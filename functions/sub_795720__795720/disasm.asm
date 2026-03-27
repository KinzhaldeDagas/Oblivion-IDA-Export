0x795720: sub     esp, 8
0x795723: push    ebx
0x795724: push    ebp
0x795725: push    esi
0x795726: mov     esi, ecx
0x795728: mov     ecx, [esi+4]
0x79572B: test    ecx, ecx
0x79572D: push    edi
0x79572E: jnz     short loc_795734
0x795730: xor     eax, eax
0x795732: jmp     short loc_79573C
0x795734: mov     eax, [esi+8]
0x795737: sub     eax, ecx
0x795739: sar     eax, 2
0x79573C: mov     ebx, [esp+18h+arg_0]
0x795740: cmp     eax, ebx
0x795742: jnb     short loc_79577B
0x795744: test    ecx, ecx
0x795746: jnz     short loc_79574C
0x795748: xor     edi, edi
0x79574A: jmp     short loc_795754
0x79574C: mov     edi, [esi+8]
0x79574F: sub     edi, ecx
0x795751: sar     edi, 2
0x795754: mov     ebp, [esi+8]
0x795757: cmp     ecx, ebp
0x795759: jbe     short loc_795760
0x79575B: call    __invalid_parameter_noinfo
0x795760: lea     eax, [esp+18h+arg_4]
0x795764: push    eax; int
0x795765: sub     ebx, edi
0x795767: push    ebx; int
0x795768: push    ebp; Src
0x795769: push    esi; int
0x79576A: mov     ecx, esi
0x79576C: call    sub_7950A0
0x795771: pop     edi
0x795772: pop     esi
0x795773: pop     ebp
0x795774: pop     ebx
0x795775: add     esp, 8
0x795778: retn    8
0x79577B: test    ecx, ecx
0x79577D: jz      short loc_7957C9
0x79577F: mov     ebp, [esi+8]
0x795782: mov     eax, ebp
0x795784: sub     eax, ecx
0x795786: sar     eax, 2
0x795789: cmp     ebx, eax
0x79578B: jnb     short loc_7957C9
0x79578D: cmp     ecx, ebp
0x79578F: jbe     short loc_795796
0x795791: call    __invalid_parameter_noinfo
0x795796: mov     edi, [esi+4]
0x795799: cmp     edi, [esi+8]
0x79579C: jbe     short loc_7957A3
0x79579E: call    __invalid_parameter_noinfo
0x7957A3: mov     [esp+18h+var_4], edi
0x7957A7: lea     edi, [edi+ebx*4]
0x7957AA: cmp     edi, [esi+8]
0x7957AD: ja      short loc_7957B4
0x7957AF: cmp     edi, [esi+4]
0x7957B2: jnb     short loc_7957B9
0x7957B4: call    __invalid_parameter_noinfo
0x7957B9: push    ebp; Src
0x7957BA: push    esi; int
0x7957BB: push    edi; Dst
0x7957BC: push    esi; int
0x7957BD: lea     ecx, [esp+28h+var_8]
0x7957C1: push    ecx; int
0x7957C2: mov     ecx, esi
0x7957C4: call    sub_439050
0x7957C9: pop     edi
0x7957CA: pop     esi
0x7957CB: pop     ebp
0x7957CC: pop     ebx
0x7957CD: add     esp, 8
0x7957D0: retn    8
