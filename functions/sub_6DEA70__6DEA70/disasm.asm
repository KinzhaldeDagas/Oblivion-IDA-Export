0x6DEA70: sub     esp, 0Ch
0x6DEA73: mov     eax, [ecx+30h]
0x6DEA76: fldz
0x6DEA78: movzx   ecx, byte ptr [ecx+40h]
0x6DEA7C: fst     [esp+0Ch+var_C]
0x6DEA7F: and     ecx, 7
0x6DEA82: fst     [esp+0Ch+var_8]; float
0x6DEA86: cmp     ecx, 3; switch 4 cases
0x6DEA89: fstp    [esp+0Ch+var_4]
0x6DEA8D: ja      short def_6DEA8F
0x6DEA8F: jmp     ds:jpt_6DEA8F[ecx*4]; switch jump
0x6DEA96: mov     ecx, [eax+1Ch]; jumptable 006DEA8F case 0
0x6DEA99: mov     edx, [eax+20h]
0x6DEA9C: mov     eax, [eax+24h]
0x6DEA9F: jmp     short loc_6DEAC0
0x6DEAA1: mov     ecx, [eax+28h]; jumptable 006DEA8F case 1
0x6DEAA4: mov     edx, [eax+2Ch]
0x6DEAA7: mov     eax, [eax+30h]
0x6DEAAA: jmp     short loc_6DEAC0
0x6DEAAC: mov     ecx, [eax+34h]; jumptable 006DEA8F case 2
0x6DEAAF: mov     edx, [eax+38h]
0x6DEAB2: mov     eax, [eax+3Ch]
0x6DEAB5: jmp     short loc_6DEAC0
0x6DEAB7: mov     ecx, [eax+40h]; jumptable 006DEA8F case 3
0x6DEABA: mov     edx, [eax+44h]
0x6DEABD: mov     eax, [eax+48h]
0x6DEAC0: mov     [esp+0Ch+var_4], eax
0x6DEAC4: mov     [esp+0Ch+var_8], edx
0x6DEAC8: mov     [esp+0Ch+var_C], ecx
