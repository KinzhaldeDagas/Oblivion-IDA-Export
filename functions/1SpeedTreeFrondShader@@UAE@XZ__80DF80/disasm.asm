0x80DF80: push    0FFFFFFFFh
0x80DF82: push    offset ??1SpeedTreeFrondShader@@UAE@XZ_SEH
0x80DF87: mov     eax, large fs:0
0x80DF8D: push    eax
0x80DF8E: push    ecx
0x80DF8F: push    ebx
0x80DF90: push    ebp
0x80DF91: push    esi
0x80DF92: push    edi
0x80DF93: mov     eax, ds:0B30AACh
0x80DF98: xor     eax, esp
0x80DF9A: push    eax
0x80DF9B: lea     eax, [esp+24h+var_C]
0x80DF9F: mov     large fs:0, eax
0x80DFA5: mov     ebp, ecx
0x80DFA7: mov     [esp+24h+var_10], ebp
0x80DFAB: mov     dword ptr [ebp+0], offset ??_7SpeedTreeFrondShader@@6B@; const SpeedTreeFrondShader::`vftable'
0x80DFB2: mov     [esp+24h+var_4], 3
0x80DFBA: lea     edi, [ebp+7Ch]
0x80DFBD: mov     ebx, 4
0x80DFC2: mov     esi, [edi]
0x80DFC4: test    esi, esi
0x80DFC6: jz      short loc_80DFEA
0x80DFC8: lea     eax, [esi+4]
0x80DFCB: push    eax; lpAddend
0x80DFCC: call    dword ptr ds:0A2807Ch
0x80DFD2: test    eax, eax
0x80DFD4: jnz     short loc_80DFE4
0x80DFD6: test    esi, esi
0x80DFD8: jz      short loc_80DFE4
0x80DFDA: mov     edx, [esi]
0x80DFDC: mov     eax, [edx]
0x80DFDE: push    1
0x80DFE0: mov     ecx, esi
0x80DFE2: call    eax
0x80DFE4: mov     dword ptr [edi], 0
0x80DFEA: add     edi, 4
0x80DFED: sub     ebx, 1
0x80DFF0: jnz     short loc_80DFC2
0x80DFF2: lea     edi, [ebp+8Ch]
0x80DFF8: mov     ebx, 2
0x80DFFD: lea     ecx, [ecx+0]
0x80E000: mov     esi, [edi]
0x80E002: test    esi, esi
0x80E004: jz      short loc_80E028
0x80E006: lea     ecx, [esi+4]
0x80E009: push    ecx; lpAddend
0x80E00A: call    dword ptr ds:0A2807Ch
0x80E010: test    eax, eax
0x80E012: jnz     short loc_80E022
0x80E014: test    esi, esi
0x80E016: jz      short loc_80E022
0x80E018: mov     edx, [esi]
0x80E01A: mov     eax, [edx]
0x80E01C: push    1
0x80E01E: mov     ecx, esi
0x80E020: call    eax
0x80E022: mov     dword ptr [edi], 0
0x80E028: add     edi, 4
0x80E02B: sub     ebx, 1
0x80E02E: jnz     short loc_80E000
0x80E030: mov     ecx, [ebp+94h]
0x80E036: or      esi, 0FFFFFFFFh
0x80E039: test    ecx, ecx
0x80E03B: mov     byte ptr [esp+24h+var_4], 2
0x80E040: jz      short loc_80E04C
0x80E042: add     [ecx+60h], esi
0x80E045: jnz     short loc_80E04C
0x80E047: call    sub_7604D0
0x80E04C: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80E051: push    2; int
0x80E053: push    4; unsigned int
0x80E055: lea     eax, [ebp+8Ch]
0x80E05B: push    eax; void *
0x80E05C: mov     byte ptr [esp+34h+var_4], 1
0x80E061: call    $LN21
0x80E066: push    offset sub_7016A0; void (__thiscall *)(void *)
0x80E06B: push    4; int
0x80E06D: push    4; unsigned int
0x80E06F: lea     eax, [ebp+7Ch]
0x80E072: push    eax; void *
0x80E073: mov     byte ptr [esp+34h+var_4], 0
0x80E078: call    $LN21
0x80E07D: mov     ecx, ebp; this
0x80E07F: mov     [esp+24h+var_4], esi
0x80E083: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x80E088: mov     ecx, [esp+24h+var_C]
0x80E08C: mov     large fs:0, ecx
0x80E093: pop     ecx
0x80E094: pop     edi
0x80E095: pop     esi
0x80E096: pop     ebp
0x80E097: pop     ebx
0x80E098: add     esp, 10h
0x80E09B: retn
