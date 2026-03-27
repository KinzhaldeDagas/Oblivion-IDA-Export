0x701970: sub     esp, 24h
0x701973: mov     eax, [esp+24h+arg_0]
0x701977: fld     dword ptr [eax+6Ch]
0x70197A: mov     edx, 1
0x70197F: cmp     [ecx+200h], edx
0x701985: fstp    [esp+24h+var_24]
0x701988: fld     dword ptr [eax+78h]
0x70198B: fstp    [esp+24h+var_20]
0x70198F: fld     dword ptr [eax+84h]
0x701995: fstp    [esp+24h+var_1C]
0x701999: fld     dword ptr [eax+68h]
0x70199C: fstp    [esp+24h+var_18]
0x7019A0: fld     dword ptr [eax+74h]
0x7019A3: fstp    [esp+24h+var_14]
0x7019A7: fld     dword ptr [eax+80h]
0x7019AD: fstp    [esp+24h+var_10]
0x7019B1: fld     dword ptr [eax+64h]
0x7019B4: fstp    [esp+24h+var_C]
0x7019B8: fld     dword ptr [eax+70h]
0x7019BB: fstp    [esp+24h+var_8]
0x7019BF: fld     dword ptr [eax+7Ch]
0x7019C2: fstp    [esp+24h+var_4]
0x7019C6: jz      short loc_7019D0
0x7019C8: cmp     [ecx+204h], edx
0x7019CE: jnz     short loc_701A07
0x7019D0: cmp     [ecx+20Ch], dl
0x7019D6: jnz     short loc_701A07
0x7019D8: mov     edx, [ecx]
0x7019DA: push    esi
0x7019DB: lea     esi, [eax+110h]
0x7019E1: push    esi
0x7019E2: lea     esi, [eax+0ECh]
0x7019E8: push    esi
0x7019E9: lea     esi, [esp+30h+var_24]
0x7019ED: push    esi
0x7019EE: lea     esi, [esp+34h+var_18]
0x7019F2: push    esi
0x7019F3: lea     esi, [esp+38h+var_C]
0x7019F7: add     eax, 88h ; 'ˆ'
0x7019FC: push    esi
0x7019FD: push    eax
0x7019FE: mov     eax, [edx+140h]
0x701A04: call    eax
0x701A06: pop     esi
0x701A07: add     esp, 24h
0x701A0A: retn    4
