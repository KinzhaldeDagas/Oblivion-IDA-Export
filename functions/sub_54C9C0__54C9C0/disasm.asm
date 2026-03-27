0x54C9C0: push    ecx
0x54C9C1: push    ebx
0x54C9C2: mov     ebx, [esp+8+arg_0]
0x54C9C6: test    ebx, ebx
0x54C9C8: push    ebp
0x54C9C9: push    esi
0x54C9CA: jz      loc_54CAE3
0x54C9D0: mov     ebp, [esp+10h+arg_4]
0x54C9D4: test    ebp, ebp
0x54C9D6: jz      loc_54CAE3
0x54C9DC: cmp     dword ptr [ebp+0Ch], 0
0x54C9E0: jz      loc_54CAE3
0x54C9E6: mov     esi, [esp+10h+arg_8]
0x54C9EA: test    esi, esi
0x54C9EC: jz      loc_54CAE3
0x54C9F2: mov     eax, [ebx]
0x54C9F4: mov     edx, [eax+0Ch]
0x54C9F7: push    edi
0x54C9F8: mov     ecx, ebx
0x54C9FA: call    edx
0x54C9FC: fstp    dword ptr [esp+10h]
0x54CA00: fld     dword ptr [esp+10h]
0x54CA04: mov     eax, [ebx]
0x54CA06: fldz
0x54CA08: mov     edx, [eax+10h]
0x54CA0B: fsubrp  st(1), st
0x54CA0D: push    ecx
0x54CA0E: mov     ecx, ebx
0x54CA10: fstp    [esp+14h+arg_4]
0x54CA14: fldz
0x54CA16: fstp    [esp+14h+var_14]
0x54CA19: call    edx
0x54CA1B: mov     edi, [esi+4]
0x54CA1E: test    edi, edi
0x54CA20: jz      short loc_54CA55
0x54CA22: mov     esi, [edi+8]
0x54CA25: test    esi, esi
0x54CA27: jz      short loc_54CA4F
0x54CA29: mov     eax, [esi]
0x54CA2B: mov     edx, [eax+0Ch]
0x54CA2E: mov     ecx, esi
0x54CA30: call    edx
0x54CA32: fadd    [esp+10h+arg_4]
0x54CA36: push    1; char
0x54CA38: push    esi; int
0x54CA39: push    ebp; int
0x54CA3A: fstp    [esp+1Ch+arg_4]
0x54CA3E: fld     [esp+1Ch+arg_4]
0x54CA42: push    ebx; int
0x54CA43: push    ecx
0x54CA44: fstp    [esp+24h+var_24]; float
0x54CA47: call    sub_54C810
0x54CA4C: add     esp, 14h
0x54CA4F: mov     edi, [edi]
0x54CA51: test    edi, edi
0x54CA53: jnz     short loc_54CA22
0x54CA55: mov     eax, [ebx]
0x54CA57: fld     dword ptr [esp+10h]
0x54CA5B: mov     edx, [eax+10h]
0x54CA5E: push    ecx
0x54CA5F: mov     ecx, ebx
0x54CA61: fstp    [esp+14h+var_14]
0x54CA64: call    edx
0x54CA66: mov     eax, [ebx]
0x54CA68: mov     edx, [eax+0Ch]
0x54CA6B: mov     ebp, [ebp+4]
0x54CA6E: mov     ecx, ebx
0x54CA70: call    edx
0x54CA72: fstp    [esp+14h+arg_0]
0x54CA76: test    ebp, ebp
0x54CA78: jz      short loc_54CADB
0x54CA7A: lea     ebx, [ebx+0]
0x54CA80: mov     esi, [ebp+8]
0x54CA83: test    esi, esi
0x54CA85: jz      short loc_54CAD4
0x54CA87: mov     eax, [esi]
0x54CA89: mov     edx, [eax+24h]
0x54CA8C: mov     ecx, esi
0x54CA8E: call    edx
0x54CA90: mov     edi, eax
0x54CA92: test    edi, edi
0x54CA94: jz      short loc_54CAD4
0x54CA96: mov     eax, [esi]
0x54CA98: mov     edx, [eax+0Ch]
0x54CA9B: mov     ecx, esi
0x54CA9D: call    edx
0x54CA9F: fadd    [esp+14h+arg_0]
0x54CAA3: mov     eax, [esp+14h+arg_8]
0x54CAA7: push    0; char
0x54CAA9: push    edi; int
0x54CAAA: fstp    [esp+1Ch+arg_0]
0x54CAAE: fld     [esp+1Ch+arg_0]
0x54CAB2: push    eax; int
0x54CAB3: push    ebx; int
0x54CAB4: push    ecx
0x54CAB5: fstp    [esp+28h+var_28]; float
0x54CAB8: call    sub_54C810
0x54CABD: fld1
0x54CABF: mov     edx, [edi]
0x54CAC1: mov     eax, [edx+1Ch]
0x54CAC4: add     esp, 14h
0x54CAC7: push    0
0x54CAC9: push    1
0x54CACB: push    ecx
0x54CACC: fstp    [esp+20h+var_20]
0x54CACF: push    esi
0x54CAD0: mov     ecx, edi
0x54CAD2: call    eax
0x54CAD4: mov     ebp, [ebp+0]
0x54CAD7: test    ebp, ebp
0x54CAD9: jnz     short loc_54CA80
0x54CADB: pop     edi
0x54CADC: pop     esi
0x54CADD: pop     ebp
0x54CADE: mov     al, 1
0x54CAE0: pop     ebx
0x54CAE1: pop     ecx
0x54CAE2: retn
0x54CAE3: pop     esi
0x54CAE4: pop     ebp
0x54CAE5: xor     al, al
0x54CAE7: pop     ebx
0x54CAE8: pop     ecx
0x54CAE9: retn
