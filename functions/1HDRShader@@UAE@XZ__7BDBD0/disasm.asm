0x7BDBD0: push    0FFFFFFFFh
0x7BDBD2: push    offset ??1HDRShader@@UAE@XZ_SEH
0x7BDBD7: mov     eax, large fs:0
0x7BDBDD: push    eax
0x7BDBDE: push    ecx
0x7BDBDF: push    ebx
0x7BDBE0: push    ebp
0x7BDBE1: push    esi
0x7BDBE2: push    edi
0x7BDBE3: mov     eax, ds:0B30AACh
0x7BDBE8: xor     eax, esp
0x7BDBEA: push    eax
0x7BDBEB: lea     eax, [esp+24h+var_C]
0x7BDBEF: mov     large fs:0, eax
0x7BDBF5: mov     ebp, ecx
0x7BDBF7: mov     [esp+24h+var_10], ebp
0x7BDBFB: mov     dword ptr [ebp+0], offset ??_7HDRShader@@6B@; const HDRShader::`vftable'
0x7BDC02: mov     [esp+24h+var_4], 5
0x7BDC0A: lea     edi, [ebp+0B0h]
0x7BDC10: mov     ebx, 8
0x7BDC15: mov     esi, [edi-20h]
0x7BDC18: test    esi, esi
0x7BDC1A: jz      short loc_7BDC3F
0x7BDC1C: lea     eax, [esi+4]
0x7BDC1F: push    eax; lpAddend
0x7BDC20: call    dword ptr ds:0A2807Ch
0x7BDC26: test    eax, eax
0x7BDC28: jnz     short loc_7BDC38
0x7BDC2A: test    esi, esi
0x7BDC2C: jz      short loc_7BDC38
0x7BDC2E: mov     edx, [esi]
0x7BDC30: mov     eax, [edx]
0x7BDC32: push    1
0x7BDC34: mov     ecx, esi
0x7BDC36: call    eax
0x7BDC38: mov     dword ptr [edi-20h], 0
0x7BDC3F: mov     esi, [edi]
0x7BDC41: test    esi, esi
0x7BDC43: jz      short loc_7BDC67
0x7BDC45: lea     ecx, [esi+4]
0x7BDC48: push    ecx; lpAddend
0x7BDC49: call    dword ptr ds:0A2807Ch
0x7BDC4F: test    eax, eax
0x7BDC51: jnz     short loc_7BDC61
0x7BDC53: test    esi, esi
0x7BDC55: jz      short loc_7BDC61
0x7BDC57: mov     edx, [esi]
0x7BDC59: mov     eax, [edx]
0x7BDC5B: push    1
0x7BDC5D: mov     ecx, esi
0x7BDC5F: call    eax
0x7BDC61: mov     dword ptr [edi], 0
0x7BDC67: add     edi, 4
0x7BDC6A: sub     ebx, 1
0x7BDC6D: jnz     short loc_7BDC15
0x7BDC6F: lea     esi, [ebp+0D4h]
0x7BDC75: mov     edi, 0Dh
0x7BDC7A: lea     ebx, [ebx+0]
0x7BDC80: mov     ecx, [esi]
0x7BDC82: test    ecx, ecx
0x7BDC84: jz      short loc_7BDC97
0x7BDC86: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BDC8A: jnz     short loc_7BDC91
0x7BDC8C: call    sub_7604D0
0x7BDC91: mov     dword ptr [esi], 0
0x7BDC97: add     esi, 4
0x7BDC9A: sub     edi, 1
0x7BDC9D: jnz     short loc_7BDC80
0x7BDC9F: mov     ecx, ds:0B43328h
0x7BDCA5: push    ecx; a2
0x7BDCA6: mov     ecx, ds:0B42F50h; this
0x7BDCAC: call    sub_7C1EE0
0x7BDCB1: mov     esi, [ebp+118h]
0x7BDCB7: mov     edi, ds:0A2807Ch
0x7BDCBD: xor     ebx, ebx
0x7BDCBF: cmp     esi, ebx
0x7BDCC1: jz      short loc_7BDCE1
0x7BDCC3: lea     edx, [esi+4]
0x7BDCC6: push    edx; lpAddend
0x7BDCC7: call    edi ; InterlockedDecrement
0x7BDCC9: test    eax, eax
0x7BDCCB: jnz     short loc_7BDCDB
0x7BDCCD: cmp     esi, ebx
0x7BDCCF: jz      short loc_7BDCDB
0x7BDCD1: mov     eax, [esi]
0x7BDCD3: mov     edx, [eax]
0x7BDCD5: push    1
0x7BDCD7: mov     ecx, esi
0x7BDCD9: call    edx
0x7BDCDB: mov     [ebp+118h], ebx
0x7BDCE1: mov     esi, [ebp+11Ch]
0x7BDCE7: cmp     esi, ebx
0x7BDCE9: jz      short loc_7BDD09
0x7BDCEB: lea     eax, [esi+4]
0x7BDCEE: push    eax; lpAddend
0x7BDCEF: call    edi ; InterlockedDecrement
0x7BDCF1: test    eax, eax
0x7BDCF3: jnz     short loc_7BDD03
0x7BDCF5: cmp     esi, ebx
0x7BDCF7: jz      short loc_7BDD03
0x7BDCF9: mov     edx, [esi]
0x7BDCFB: mov     eax, [edx]
0x7BDCFD: push    1
0x7BDCFF: mov     ecx, esi
0x7BDD01: call    eax
0x7BDD03: mov     [ebp+11Ch], ebx
0x7BDD09: mov     esi, ds:0B43328h
0x7BDD0F: cmp     esi, ebx
0x7BDD11: jz      short loc_7BDD31
0x7BDD13: lea     ecx, [esi+4]
0x7BDD16: push    ecx; lpAddend
0x7BDD17: call    edi ; InterlockedDecrement
0x7BDD19: test    eax, eax
0x7BDD1B: jnz     short loc_7BDD2B
0x7BDD1D: cmp     esi, ebx
0x7BDD1F: jz      short loc_7BDD2B
0x7BDD21: mov     edx, [esi]
0x7BDD23: mov     eax, [edx]
0x7BDD25: push    1
0x7BDD27: mov     ecx, esi
0x7BDD29: call    eax
0x7BDD2B: mov     ds:0B43328h, ebx
0x7BDD31: mov     esi, [ebp+11Ch]
0x7BDD37: cmp     esi, ebx
0x7BDD39: mov     byte ptr [esp+24h+var_4], 4
0x7BDD3E: jz      short loc_7BDD58
0x7BDD40: lea     ecx, [esi+4]
0x7BDD43: push    ecx; lpAddend
0x7BDD44: call    edi ; InterlockedDecrement
0x7BDD46: test    eax, eax
0x7BDD48: jnz     short loc_7BDD58
0x7BDD4A: cmp     esi, ebx
0x7BDD4C: jz      short loc_7BDD58
0x7BDD4E: mov     edx, [esi]
0x7BDD50: mov     eax, [edx]
0x7BDD52: push    1
0x7BDD54: mov     ecx, esi
0x7BDD56: call    eax
0x7BDD58: mov     esi, [ebp+118h]
0x7BDD5E: cmp     esi, ebx
0x7BDD60: mov     byte ptr [esp+24h+var_4], 3
0x7BDD65: jz      short loc_7BDD7F
0x7BDD67: lea     ecx, [esi+4]
0x7BDD6A: push    ecx; lpAddend
0x7BDD6B: call    edi ; InterlockedDecrement
0x7BDD6D: test    eax, eax
0x7BDD6F: jnz     short loc_7BDD7F
0x7BDD71: cmp     esi, ebx
0x7BDD73: jz      short loc_7BDD7F
0x7BDD75: mov     edx, [esi]
0x7BDD77: mov     eax, [edx]
0x7BDD79: push    1
0x7BDD7B: mov     ecx, esi
0x7BDD7D: call    eax
0x7BDD7F: push    offset sub_4027D0; void (__thiscall *)(void *)
0x7BDD84: push    0Dh; int
0x7BDD86: push    4; unsigned int
0x7BDD88: lea     eax, [ebp+0D4h]
0x7BDD8E: push    eax; void *
0x7BDD8F: mov     byte ptr [esp+34h+var_4], 2
0x7BDD94: call    $LN21
0x7BDD99: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7BDD9E: push    8; int
0x7BDDA0: push    4; unsigned int
0x7BDDA2: lea     eax, [ebp+0B0h]
0x7BDDA8: push    eax; void *
0x7BDDA9: mov     byte ptr [esp+34h+var_4], 1
0x7BDDAE: call    $LN21
0x7BDDB3: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7BDDB8: push    8; int
0x7BDDBA: push    4; unsigned int
0x7BDDBC: lea     ecx, [ebp+90h]
0x7BDDC2: push    ecx; void *
0x7BDDC3: mov     byte ptr [esp+34h+var_4], 0
0x7BDDC8: call    $LN21
0x7BDDCD: mov     ecx, ebp; this
0x7BDDCF: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7BDDD7: call    ??1BSImageSpaceShader@@UAE@XZ; BSImageSpaceShader::~BSImageSpaceShader(void)
0x7BDDDC: mov     ecx, dword ptr [esp+24h+var_C]
0x7BDDE0: mov     large fs:0, ecx
0x7BDDE7: pop     ecx
0x7BDDE8: pop     edi
0x7BDDE9: pop     esi
0x7BDDEA: pop     ebp
0x7BDDEB: pop     ebx
0x7BDDEC: add     esp, 10h
0x7BDDEF: retn
