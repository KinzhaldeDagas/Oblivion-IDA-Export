0x55CAA0: push    ebp
0x55CAA1: push    esi
0x55CAA2: mov     esi, [esp+8+arg_0]
0x55CAA6: push    edi
0x55CAA7: mov     ebp, ecx
0x55CAA9: xor     edi, edi
0x55CAAB: jmp     short loc_55CAB0
0x55CAAD: align 10h
0x55CAB0: mov     eax, [ebp+0]
0x55CAB3: mov     edx, [eax+9Ch]
0x55CAB9: mov     ecx, ebp
0x55CABB: call    edx
0x55CABD: mov     edx, [eax]
0x55CABF: mov     ecx, eax
0x55CAC1: mov     eax, [edx+68h]
0x55CAC4: push    edi
0x55CAC5: call    eax
0x55CAC7: fstp    [esp+0Ch+arg_0]
0x55CACB: fldz
0x55CACD: fld     [esp+0Ch+arg_0]
0x55CAD1: fcom    st(1)
0x55CAD3: fnstsw  ax
0x55CAD5: fstp    st(1)
0x55CAD7: test    ah, 41h
0x55CADA: jnz     short loc_55CB39
0x55CADC: fld1
0x55CADE: fcompp
0x55CAE0: fnstsw  ax
0x55CAE2: test    ah, 1
0x55CAE5: jnz     short loc_55CB3B
0x55CAE7: mov     ecx, [esi+10h]
0x55CAEA: mov     edx, [ecx]
0x55CAEC: mov     eax, [edx+20h]
0x55CAEF: push    edi
0x55CAF0: call    eax
0x55CAF2: test    eax, eax
0x55CAF4: jz      short loc_55CB3B
0x55CAF6: cmp     byte ptr [esi+1Ch], 0
0x55CAFA: jnz     short loc_55CB0F
0x55CAFC: mov     edx, [esi]
0x55CAFE: lea     ecx, [esi+4]
0x55CB01: push    ecx
0x55CB02: push    edx
0x55CB03: call    sub_5508F0
0x55CB08: add     esp, 8
0x55CB0B: mov     byte ptr [esi+1Ch], 1
0x55CB0F: mov     ecx, [esi+10h]
0x55CB12: mov     eax, [ecx]
0x55CB14: mov     edx, [eax+20h]
0x55CB17: push    edi
0x55CB18: call    edx
0x55CB1A: fld     [esp+0Ch+arg_0]
0x55CB1E: mov     edx, [eax]
0x55CB20: mov     edx, [edx+4]
0x55CB23: push    ecx
0x55CB24: mov     ecx, [esi+14h]
0x55CB27: fstp    [esp+10h+var_10]
0x55CB2A: push    ecx
0x55CB2B: mov     ecx, [esi+18h]
0x55CB2E: push    ecx
0x55CB2F: lea     ecx, [esi+4]
0x55CB32: push    ecx
0x55CB33: mov     ecx, eax
0x55CB35: call    edx
0x55CB37: jmp     short loc_55CB3B
0x55CB39: fstp    st
0x55CB3B: add     edi, 1
0x55CB3E: cmp     edi, 10h
0x55CB41: jl      loc_55CAB0
0x55CB47: pop     edi
0x55CB48: pop     esi
0x55CB49: pop     ebp
0x55CB4A: retn    4
