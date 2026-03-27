0x7E8BB0: push    0FFFFFFFFh
0x7E8BB2: push    offset ??0TallGrassShader@@QAE@XZ_SEH
0x7E8BB7: mov     eax, large fs:0
0x7E8BBD: push    eax
0x7E8BBE: sub     esp, 8
0x7E8BC1: push    ebx
0x7E8BC2: push    ebp
0x7E8BC3: push    esi
0x7E8BC4: push    edi
0x7E8BC5: mov     eax, ds:0B30AACh
0x7E8BCA: xor     eax, esp
0x7E8BCC: push    eax
0x7E8BCD: lea     eax, [esp+28h+var_C]
0x7E8BD1: mov     large fs:0, eax
0x7E8BD7: mov     esi, ecx
0x7E8BD9: mov     [esp+28h+var_10], esi
0x7E8BDD: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7E8BE2: push    offset sub_4027D0; a5
0x7E8BE7: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7E8BEC: push    3; size
0x7E8BEE: push    4; a2
0x7E8BF0: lea     eax, [esi+7Ch]
0x7E8BF3: push    eax; a1
0x7E8BF4: mov     [esp+3Ch+var_4], 0
0x7E8BFC: mov     dword ptr [esi], offset ??_7TallGrassShader@@6B@; const TallGrassShader::`vftable'
0x7E8C02: call    ArrayConstructor
0x7E8C07: push    offset sub_7016A0; a5
0x7E8C0C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7E8C11: push    28h ; '('; size
0x7E8C13: push    4; a2
0x7E8C15: lea     edi, [esi+94h]
0x7E8C1B: push    edi; a1
0x7E8C1C: mov     byte ptr [esp+3Ch+var_4], 1
0x7E8C21: call    ArrayConstructor
0x7E8C26: push    offset sub_7016A0; a5
0x7E8C2B: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7E8C30: push    9; size
0x7E8C32: push    4; a2
0x7E8C34: lea     ebx, [esi+134h]
0x7E8C3A: push    ebx; a1
0x7E8C3B: mov     byte ptr [esp+3Ch+var_4], 2
0x7E8C40: call    ArrayConstructor
0x7E8C45: fldz
0x7E8C47: fst     dword ptr [esi+164h]
0x7E8C4D: mov     byte ptr [esp+28h+var_4], 3
0x7E8C52: fst     dword ptr [esi+168h]
0x7E8C58: mov     [esp+28h+var_14], 28h ; '('
0x7E8C60: fst     dword ptr [esi+16Ch]
0x7E8C66: fst     dword ptr [esi+170h]
0x7E8C6C: fst     dword ptr [esi+174h]
0x7E8C72: fst     dword ptr [esi+178h]
0x7E8C78: fst     dword ptr [esi+17Ch]
0x7E8C7E: fst     dword ptr [esi+180h]
0x7E8C84: fst     dword ptr [esi+184h]
0x7E8C8A: fst     dword ptr [esi+188h]
0x7E8C90: fst     dword ptr [esi+18Ch]
0x7E8C96: fst     dword ptr [esi+190h]
0x7E8C9C: mov     ebp, [edi]
0x7E8C9E: test    ebp, ebp
0x7E8CA0: jz      short loc_7E8CC9
0x7E8CA2: lea     ecx, [ebp+4]
0x7E8CA5: fstp    st
0x7E8CA7: push    ecx; lpAddend
0x7E8CA8: call    dword ptr ds:0A2807Ch
0x7E8CAE: test    eax, eax
0x7E8CB0: jnz     short loc_7E8CC1
0x7E8CB2: test    ebp, ebp
0x7E8CB4: jz      short loc_7E8CC1
0x7E8CB6: mov     edx, [ebp+0]
0x7E8CB9: mov     eax, [edx]
0x7E8CBB: push    1
0x7E8CBD: mov     ecx, ebp
0x7E8CBF: call    eax
0x7E8CC1: fldz
0x7E8CC3: mov     dword ptr [edi], 0
0x7E8CC9: add     edi, 4
0x7E8CCC: sub     [esp+28h+var_14], 1
0x7E8CD1: jnz     short loc_7E8C9C
0x7E8CD3: mov     ebp, ebx
0x7E8CD5: mov     ebx, 2
0x7E8CDA: mov     edi, [ebp+0]
0x7E8CDD: test    edi, edi
0x7E8CDF: jz      short loc_7E8D08
0x7E8CE1: lea     ecx, [edi+4]
0x7E8CE4: fstp    st
0x7E8CE6: push    ecx; lpAddend
0x7E8CE7: call    dword ptr ds:0A2807Ch
0x7E8CED: test    eax, eax
0x7E8CEF: jnz     short loc_7E8CFF
0x7E8CF1: test    edi, edi
0x7E8CF3: jz      short loc_7E8CFF
0x7E8CF5: mov     edx, [edi]
0x7E8CF7: mov     eax, [edx]
0x7E8CF9: push    1
0x7E8CFB: mov     ecx, edi
0x7E8CFD: call    eax
0x7E8CFF: fldz
0x7E8D01: mov     dword ptr [ebp+0], 0
0x7E8D08: add     ebp, 4
0x7E8D0B: sub     ebx, 1
0x7E8D0E: jnz     short loc_7E8CDA
0x7E8D10: mov     edi, [esi+24h]
0x7E8D13: mov     ebx, [esp+28h+arg_0]
0x7E8D17: cmp     edi, ebx
0x7E8D19: jz      short loc_7E8D54
0x7E8D1B: test    edi, edi
0x7E8D1D: jz      short loc_7E8D3F
0x7E8D1F: lea     ecx, [edi+4]
0x7E8D22: fstp    st
0x7E8D24: push    ecx; lpAddend
0x7E8D25: call    dword ptr ds:0A2807Ch
0x7E8D2B: test    eax, eax
0x7E8D2D: jnz     short loc_7E8D3D
0x7E8D2F: test    edi, edi
0x7E8D31: jz      short loc_7E8D3D
0x7E8D33: mov     edx, [edi]
0x7E8D35: mov     eax, [edx]
0x7E8D37: push    1
0x7E8D39: mov     ecx, edi
0x7E8D3B: call    eax
0x7E8D3D: fldz
0x7E8D3F: test    ebx, ebx
0x7E8D41: mov     [esi+24h], ebx
0x7E8D44: jz      short loc_7E8D54
0x7E8D46: add     ebx, 4
0x7E8D49: fstp    st
0x7E8D4B: push    ebx; lpAddend
0x7E8D4C: call    dword ptr ds:0A28078h
0x7E8D52: fldz
0x7E8D54: fstp    dword ptr [esi+88h]
0x7E8D5A: cmp     dword ptr ds:0B42F48h, 2
0x7E8D61: mov     ecx, ds:0B25AD0h
0x7E8D67: mov     edx, ds:0B25AD4h
0x7E8D6D: mov     eax, ds:0B25AD8h
0x7E8D72: mov     ds:0B460D0h, ecx
0x7E8D78: mov     ecx, ds:0B25ADCh
0x7E8D7E: mov     ds:0B460D4h, edx
0x7E8D84: mov     ds:0B460D8h, eax
0x7E8D89: mov     ds:0B460DCh, ecx
0x7E8D8F: jl      short loc_7E8D9C
0x7E8D91: mov     word ptr [esi+160h], 0E4h ; 'ä'
0x7E8D9A: jmp     short loc_7E8DA5
0x7E8D9C: mov     word ptr [esi+160h], 50h ; 'P'
0x7E8DA5: movzx   eax, word ptr [esi+160h]
0x7E8DAC: xor     ecx, ecx
0x7E8DAE: mov     edx, 10h
0x7E8DB3: mul     edx
0x7E8DB5: seto    cl
0x7E8DB8: neg     ecx
0x7E8DBA: or      ecx, eax
0x7E8DBC: push    ecx; Size
0x7E8DBD: call    FormHeapAlloc
0x7E8DC2: mov     [esi+158h], eax
0x7E8DC8: add     esp, 4
0x7E8DCB: mov     dword ptr [esi+15Ch], 0
0x7E8DD5: mov     eax, esi
0x7E8DD7: mov     ecx, dword ptr [esp+28h+var_C]
0x7E8DDB: mov     large fs:0, ecx
0x7E8DE2: pop     ecx
0x7E8DE3: pop     edi
0x7E8DE4: pop     esi
0x7E8DE5: pop     ebp
0x7E8DE6: pop     ebx
0x7E8DE7: add     esp, 14h
0x7E8DEA: retn    4
