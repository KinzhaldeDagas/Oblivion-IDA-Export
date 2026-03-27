0x5E53A1: test    esi, esi
0x5E53A3: jz      short loc_5E53B7
0x5E53A5: mov     edx, [esi]
0x5E53A7: mov     eax, [edx+284h]
0x5E53AD: push    7
0x5E53AF: mov     ecx, esi
0x5E53B1: call    eax
0x5E53B3: mov     esi, eax
0x5E53B5: jmp     short loc_5E53BC
0x5E53B7: mov     esi, 64h ; 'd'
0x5E53BC: fld     [esp+4+arg_10]
0x5E53C0: mov     edx, [edi]
0x5E53C2: mov     eax, [edx+284h]
0x5E53C8: sub     esp, 8
0x5E53CB: fstp    [esp+0Ch+var_8]
0x5E53CF: mov     ecx, edi
0x5E53D1: fld     [esp+0Ch+arg_C]
0x5E53D5: fstp    [esp+0Ch+var_C]; float
0x5E53D8: push    2; float
0x5E53DA: call    eax
0x5E53DC: push    eax; int
0x5E53DD: push    esi; int
0x5E53DE: push    ebp; int
0x5E53DF: call    Calc_MagicTargetResistanceFactor
0x5E53E4: add     esp, 14h
0x5E53E7: pop     esi
0x5E53E8: pop     edi
0x5E53E9: pop     ebp
0x5E53EA: pop     ebx
0x5E53EB: retn    0Ch
