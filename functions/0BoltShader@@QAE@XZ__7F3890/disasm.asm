0x7F3890: push    0FFFFFFFFh
0x7F3892: push    offset ??0BoltShader@@QAE@XZ_SEH
0x7F3897: mov     eax, large fs:0
0x7F389D: push    eax
0x7F389E: sub     esp, 14h
0x7F38A1: push    ebx
0x7F38A2: push    ebp
0x7F38A3: push    esi
0x7F38A4: push    edi
0x7F38A5: mov     eax, ds:0B30AACh
0x7F38AA: xor     eax, esp
0x7F38AC: push    eax
0x7F38AD: lea     eax, [esp+34h+var_C]
0x7F38B1: mov     large fs:0, eax
0x7F38B7: mov     esi, ecx
0x7F38B9: mov     [esp+34h+var_10], esi
0x7F38BD: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7F38C2: fldz
0x7F38C4: mov     dword ptr [esi], offset ??_7BoltShader@@6B@; const BoltShader::`vftable'
0x7F38CA: fst     dword ptr [esi+128h]
0x7F38D0: fst     dword ptr [esi+12Ch]
0x7F38D6: xor     ebp, ebp
0x7F38D8: fst     dword ptr [esi+130h]
0x7F38DE: mov     [esp+34h+var_4], ebp
0x7F38E2: fst     dword ptr [esi+134h]
0x7F38E8: mov     [esi+178h], ebp
0x7F38EE: fst     dword ptr [esi+17Ch]
0x7F38F4: fst     dword ptr [esi+180h]
0x7F38FA: fst     dword ptr [esi+184h]
0x7F3900: fst     dword ptr [esi+188h]
0x7F3906: fst     dword ptr [esi+18Ch]
0x7F390C: fst     dword ptr [esi+190h]
0x7F3912: fst     dword ptr [esi+194h]
0x7F3918: fst     dword ptr [esi+198h]
0x7F391E: mov     [esi+19Ch], ebp
0x7F3924: mov     [esi+1A0h], ebp
0x7F392A: mov     byte ptr [esi+20h], 1
0x7F392E: mov     dword ptr [esi+7Ch], 17Fh
0x7F3935: mov     ecx, [esi+178h]
0x7F393B: cmp     ecx, ebp
0x7F393D: mov     byte ptr [esp+34h+var_4], 3
0x7F3942: jz      short loc_7F3959
0x7F3944: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F3948: jnz     short loc_7F3953
0x7F394A: fstp    st
0x7F394C: call    sub_7604D0
0x7F3951: fldz
0x7F3953: mov     [esi+178h], ebp
0x7F3959: mov     edi, [esi+24h]
0x7F395C: mov     ebx, [esp+34h+a2]
0x7F3960: cmp     edi, ebx
0x7F3962: jz      short loc_7F399D
0x7F3964: cmp     edi, ebp
0x7F3966: jz      short loc_7F3988
0x7F3968: lea     eax, [edi+4]
0x7F396B: fstp    st
0x7F396D: push    eax; lpAddend
0x7F396E: call    dword ptr ds:0A2807Ch
0x7F3974: test    eax, eax
0x7F3976: jnz     short loc_7F3986
0x7F3978: cmp     edi, ebp
0x7F397A: jz      short loc_7F3986
0x7F397C: mov     edx, [edi]
0x7F397E: mov     eax, [edx]
0x7F3980: push    1
0x7F3982: mov     ecx, edi
0x7F3984: call    eax
0x7F3986: fldz
0x7F3988: cmp     ebx, ebp
0x7F398A: mov     [esi+24h], ebx
0x7F398D: jz      short loc_7F399D
0x7F398F: add     ebx, 4
0x7F3992: fstp    st
0x7F3994: push    ebx; lpAddend
0x7F3995: call    dword ptr ds:0A28078h
0x7F399B: fldz
0x7F399D: mov     edi, [esi+19Ch]
0x7F39A3: cmp     edi, ebp
0x7F39A5: jz      short loc_7F39CD
0x7F39A7: lea     ecx, [edi+4]
0x7F39AA: fstp    st
0x7F39AC: push    ecx; lpAddend
0x7F39AD: call    dword ptr ds:0A2807Ch
0x7F39B3: test    eax, eax
0x7F39B5: jnz     short loc_7F39C5
0x7F39B7: cmp     edi, ebp
0x7F39B9: jz      short loc_7F39C5
0x7F39BB: mov     edx, [edi]
0x7F39BD: mov     eax, [edx]
0x7F39BF: push    1
0x7F39C1: mov     ecx, edi
0x7F39C3: call    eax
0x7F39C5: fldz
0x7F39C7: mov     [esi+19Ch], ebp
0x7F39CD: mov     edi, [esi+1A0h]
0x7F39D3: cmp     edi, ebp
0x7F39D5: jz      short loc_7F39FD
0x7F39D7: lea     ecx, [edi+4]
0x7F39DA: fstp    st
0x7F39DC: push    ecx; lpAddend
0x7F39DD: call    dword ptr ds:0A2807Ch
0x7F39E3: test    eax, eax
0x7F39E5: jnz     short loc_7F39F5
0x7F39E7: cmp     edi, ebp
0x7F39E9: jz      short loc_7F39F5
0x7F39EB: mov     edx, [edi]
0x7F39ED: mov     eax, [edx]
0x7F39EF: push    1
0x7F39F1: mov     ecx, edi
0x7F39F3: call    eax
0x7F39F5: fldz
0x7F39F7: mov     [esi+1A0h], ebp
0x7F39FD: fst     dword ptr [esi+84h]
0x7F3A03: fst     [esp+34h+var_20]
0x7F3A07: mov     ecx, [esp+34h+var_20]
0x7F3A0B: mov     [esi+128h], ecx
0x7F3A11: fst     [esp+34h+var_1C]
0x7F3A15: mov     edx, [esp+34h+var_1C]
0x7F3A19: fst     [esp+34h+var_18]
0x7F3A1D: mov     eax, [esp+34h+var_18]
0x7F3A21: fstp    [esp+34h+var_14]
0x7F3A25: mov     ecx, [esp+34h+var_14]
0x7F3A29: mov     [esi+12Ch], edx
0x7F3A2F: mov     [esi+130h], eax
0x7F3A35: mov     [esi+134h], ecx
0x7F3A3B: mov     edx, ds:0B25AE0h
0x7F3A41: mov     [esi+17Ch], edx
0x7F3A47: mov     eax, ds:0B25AE4h
0x7F3A4C: mov     [esi+180h], eax
0x7F3A52: mov     ecx, ds:0B25AE8h
0x7F3A58: mov     [esi+184h], ecx
0x7F3A5E: mov     edx, ds:0B25AECh
0x7F3A64: mov     [esi+188h], edx
0x7F3A6A: mov     eax, ds:0B25AE0h
0x7F3A6F: mov     [esi+18Ch], eax
0x7F3A75: mov     ecx, ds:0B25AE4h
0x7F3A7B: mov     [esi+190h], ecx
0x7F3A81: mov     edx, ds:0B25AE8h
0x7F3A87: mov     [esi+194h], edx
0x7F3A8D: mov     eax, ds:0B25AECh
0x7F3A92: mov     [esi+198h], eax
0x7F3A98: mov     eax, ds:0B468FCh
0x7F3A9D: cmp     eax, ebp
0x7F3A9F: jnz     short loc_7F3ABD
0x7F3AA1: xor     eax, eax
0x7F3AA3: cmp     dword ptr ds:0B42F48h, 2
0x7F3AAA: setl    al
0x7F3AAD: sub     eax, 1
0x7F3AB0: and     eax, 0A0h
0x7F3AB5: add     eax, 4Bh ; 'K'
0x7F3AB8: mov     ds:0B468FCh, eax
0x7F3ABD: test    eax, eax
0x7F3ABF: mov     [esp+34h+a2], eax
0x7F3AC3: fild    [esp+34h+a2]
0x7F3AC7: jge     short loc_7F3ACF
0x7F3AC9: fadd    dword ptr ds:0A2FC78h
0x7F3ACF: fmul    qword ptr ds:0A3C770h
0x7F3AD5: sub     esp, 8
0x7F3AD8: fstp    [esp+3Ch+a2]
0x7F3ADC: fld     [esp+3Ch+a2]
0x7F3AE0: fstp    [esp+3Ch+var_3C]; double
0x7F3AE3: call    _ceil
0x7F3AE8: fstp    [esp+3Ch+a2]
0x7F3AEC: xor     ecx, ecx
0x7F3AEE: fld     [esp+3Ch+a2]
0x7F3AF2: mov     edx, 10h
0x7F3AF7: fnstcw  word ptr [esp+3Ch+a2]
0x7F3AFB: movzx   eax, word ptr [esp+3Ch+a2]
0x7F3B00: or      eax, 0C00h
0x7F3B05: mov     [esp+3Ch+var_20], eax
0x7F3B09: fldcw   word ptr [esp+3Ch+var_20]
0x7F3B0D: fistp   qword ptr [esp+3Ch+var_20]
0x7F3B11: mov     edi, [esp+3Ch+var_20]
0x7F3B15: add     edi, edi
0x7F3B17: add     edi, edi
0x7F3B19: mov     eax, edi
0x7F3B1B: fldcw   word ptr [esp+3Ch+a2]
0x7F3B1F: mul     edx
0x7F3B21: seto    cl
0x7F3B24: neg     ecx
0x7F3B26: or      ecx, eax
0x7F3B28: push    ecx; Size
0x7F3B29: call    FormHeapAlloc
0x7F3B2E: shl     edi, 4
0x7F3B31: push    edi
0x7F3B32: push    ebp
0x7F3B33: push    eax
0x7F3B34: mov     [esi+80h], eax
0x7F3B3A: call    __memset
0x7F3B3F: push    40h ; '@'
0x7F3B41: lea     eax, [esi+138h]
0x7F3B47: push    ebp
0x7F3B48: push    eax
0x7F3B49: call    __memset
0x7F3B4E: push    0A0h ; ' '
0x7F3B53: lea     ecx, [esi+88h]
0x7F3B59: push    ebp
0x7F3B5A: push    ecx
0x7F3B5B: call    __memset
0x7F3B60: add     esp, 30h
0x7F3B63: mov     eax, esi
0x7F3B65: mov     ecx, dword ptr [esp+34h+var_C]
0x7F3B69: mov     large fs:0, ecx
0x7F3B70: pop     ecx
0x7F3B71: pop     edi
0x7F3B72: pop     esi
0x7F3B73: pop     ebp
0x7F3B74: pop     ebx
0x7F3B75: add     esp, 20h
0x7F3B78: retn    4
