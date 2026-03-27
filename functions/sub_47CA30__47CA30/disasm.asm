0x47CA30: push    esi
0x47CA31: mov     esi, [ecx+0Ch]
0x47CA34: test    esi, esi
0x47CA36: jz      short loc_47CA80
0x47CA38: push    edi
0x47CA39: mov     edi, [esp+8+arg_4]
0x47CA3D: mov     eax, [esi]
0x47CA3F: mov     edx, [eax+4]
0x47CA42: mov     ecx, esi
0x47CA44: call    edx
0x47CA46: test    eax, eax
0x47CA48: jz      short loc_47CA5E
0x47CA4A: lea     ebx, [ebx+0]
0x47CA50: cmp     eax, offset dword_B3CD7C
0x47CA55: jz      short loc_47CA84
0x47CA57: mov     eax, [eax+4]
0x47CA5A: test    eax, eax
0x47CA5C: jnz     short loc_47CA50
0x47CA5E: xor     al, al
0x47CA60: neg     al
0x47CA62: sbb     eax, eax
0x47CA64: and     eax, esi
0x47CA66: jz      short loc_47CA78
0x47CA68: fld     [esp+8+arg_0]
0x47CA6C: push    edi; int
0x47CA6D: push    ecx
0x47CA6E: mov     ecx, eax
0x47CA70: fstp    [esp+10h+var_10]; float
0x47CA73: call    sub_47C740
0x47CA78: mov     esi, [esi+34h]
0x47CA7B: test    esi, esi
0x47CA7D: jnz     short loc_47CA3D
0x47CA7F: pop     edi
0x47CA80: pop     esi
0x47CA81: retn    8
0x47CA84: mov     al, 1
0x47CA86: jmp     short loc_47CA60
