0x6B6D40: sub     esp, 8
0x6B6D43: push    esi
0x6B6D44: mov     esi, ecx
0x6B6D46: mov     eax, [esi]
0x6B6D48: test    al, 1
0x6B6D4A: jnz     short loc_6B6DB1
0x6B6D4C: test    al, 2
0x6B6D4E: jz      short loc_6B6DB1
0x6B6D50: mov     eax, [esi+54h]
0x6B6D53: test    eax, eax
0x6B6D55: jz      short loc_6B6DB1
0x6B6D57: mov     ecx, [eax]
0x6B6D59: fld     [esp+0Ch+arg_4]
0x6B6D5D: mov     edx, [ecx+40h]
0x6B6D60: push    edi
0x6B6D61: mov     edi, [esp+10h+arg_8]
0x6B6D65: push    edi
0x6B6D66: push    ecx
0x6B6D67: fstp    [esp+18h+var_18]
0x6B6D6A: push    eax
0x6B6D6B: call    edx
0x6B6D6D: fld     [esp+10h+arg_0]
0x6B6D71: mov     eax, [esi+54h]
0x6B6D74: mov     ecx, [eax]
0x6B6D76: mov     edx, [ecx+44h]
0x6B6D79: push    edi
0x6B6D7A: push    ecx
0x6B6D7B: fstp    [esp+18h+var_18]
0x6B6D7E: push    eax
0x6B6D7F: call    edx
0x6B6D81: fld     [esp+10h+arg_4]
0x6B6D85: fmul    qword ptr ds:0A76F60h
0x6B6D8B: pop     edi
0x6B6D8C: fnstcw  word ptr [esp+0Ch+arg_4]
0x6B6D90: movzx   eax, word ptr [esp+0Ch+arg_4]
0x6B6D95: or      eax, 0C00h
0x6B6D9A: mov     [esp+0Ch+arg_8], eax
0x6B6D9E: fldcw   word ptr [esp+0Ch+arg_8]
0x6B6DA2: fistp   qword ptr [esp+0Ch+var_8]
0x6B6DA6: mov     eax, [esp+0Ch+var_8]
0x6B6DAA: mov     [esi+38h], eax
0x6B6DAD: fldcw   word ptr [esp+0Ch+arg_4]
0x6B6DB1: pop     esi
0x6B6DB2: add     esp, 8
0x6B6DB5: retn    0Ch
