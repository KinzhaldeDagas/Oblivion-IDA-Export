0x5F7A80: sub     esp, 10h
0x5F7A83: push    esi
0x5F7A84: mov     esi, [esp+14h+arg_0]
0x5F7A88: push    edi
0x5F7A89: mov     edi, ecx
0x5F7A8B: cmp     edi, esi
0x5F7A8D: jz      loc_5F7B68
0x5F7A93: mov     eax, [esi+8]
0x5F7A96: shr     eax, 0Bh
0x5F7A99: test    al, 1
0x5F7A9B: jnz     loc_5F7B68
0x5F7AA1: mov     edx, [esi]
0x5F7AA3: mov     eax, [edx+154h]
0x5F7AA9: mov     ecx, esi
0x5F7AAB: call    eax
0x5F7AAD: test    eax, eax
0x5F7AAF: jz      loc_5F7B68
0x5F7AB5: mov     edx, [esi]
0x5F7AB7: mov     eax, [edx+0E8h]
0x5F7ABD: mov     ecx, esi
0x5F7ABF: call    eax
0x5F7AC1: test    al, al
0x5F7AC3: jnz     loc_5F7B68
0x5F7AC9: mov     edx, [esi]
0x5F7ACB: mov     eax, [edx+190h]
0x5F7AD1: mov     ecx, esi
0x5F7AD3: call    eax
0x5F7AD5: test    al, al
0x5F7AD7: jz      short loc_5F7AF4
0x5F7AD9: mov     ecx, edi
0x5F7ADB: call    sub_5E1030
0x5F7AE0: test    al, al
0x5F7AE2: jz      short loc_5F7AF4
0x5F7AE4: mov     edx, [edi]
0x5F7AE6: mov     eax, [edx+380h]
0x5F7AEC: mov     ecx, edi
0x5F7AEE: call    eax
0x5F7AF0: cmp     eax, esi
0x5F7AF2: jz      short loc_5F7B68
0x5F7AF4: fld     dword ptr [esi+2Ch]
0x5F7AF7: lea     ecx, [esp+18h+var_C]
0x5F7AFB: fsub    dword ptr [edi+2Ch]
0x5F7AFE: fstp    [esp+18h+var_C]
0x5F7B02: fld     dword ptr [esi+30h]
0x5F7B05: fsub    dword ptr [edi+30h]
0x5F7B08: fstp    [esp+18h+var_8]
0x5F7B0C: fld     dword ptr [esi+34h]
0x5F7B0F: fsub    dword ptr [edi+34h]
0x5F7B12: fstp    [esp+18h+var_4]
0x5F7B16: call    sub_43F350
0x5F7B1B: mov     ecx, [edi+58h]
0x5F7B1E: fstp    [esp+18h+var_10]
0x5F7B22: mov     edx, [ecx]
0x5F7B24: mov     eax, [edx+4CCh]
0x5F7B2A: call    eax
0x5F7B2C: cmp     esi, eax
0x5F7B2E: mov     ecx, offset unk_B36AC0
0x5F7B33: jnz     short loc_5F7B44
0x5F7B35: call    GameSetting_GetSafeFloatPointer
0x5F7B3A: fld     dword ptr [eax]
0x5F7B3C: fmul    qword ptr ds:0A3FA98h
0x5F7B42: jmp     short loc_5F7B51
0x5F7B44: call    GameSetting_GetSafeFloatPointer
0x5F7B49: fld     dword ptr [eax]
0x5F7B4B: fmul    qword ptr ds:0A31C70h
0x5F7B51: fstp    [esp+18h+arg_0]
0x5F7B55: fld     [esp+18h+var_10]
0x5F7B59: fld     [esp+18h+arg_0]
0x5F7B5D: fcomp   st(1)
0x5F7B5F: fnstsw  ax
0x5F7B61: test    ah, 5
0x5F7B64: jp      short loc_5F7B72
0x5F7B66: fstp    st
0x5F7B68: pop     edi
0x5F7B69: xor     al, al
0x5F7B6B: pop     esi
0x5F7B6C: add     esp, 10h
0x5F7B6F: retn    8
0x5F7B72: fcomp   qword ptr ds:0A309F0h
0x5F7B78: fnstsw  ax
0x5F7B7A: test    ah, 5
0x5F7B7D: jp      short loc_5F7B98
0x5F7B7F: cmp     esi, ds:0B333C4h
0x5F7B85: jz      short loc_5F7B98
0x5F7B87: mov     ecx, [edi+58h]
0x5F7B8A: mov     edx, [ecx]
0x5F7B8C: mov     eax, [edx+4E0h]
0x5F7B92: call    eax
0x5F7B94: cmp     esi, eax
0x5F7B96: jnz     short loc_5F7B68
0x5F7B98: lea     ecx, [esp+18h+var_C]
0x5F7B9C: push    ecx
0x5F7B9D: call    sub_683CB0
0x5F7BA2: fstp    [esp+1Ch+arg_0]
0x5F7BA6: fld     [esp+1Ch+arg_0]
0x5F7BAA: add     esp, 4
0x5F7BAD: fsub    dword ptr [edi+28h]
0x5F7BB0: fstp    [esp+18h+arg_0]
0x5F7BB4: fld     [esp+18h+arg_0]
0x5F7BB8: fcom    qword ptr ds:0A3D5B8h
0x5F7BBE: fnstsw  ax
0x5F7BC0: fld     qword ptr ds:0A3D5B0h
0x5F7BC6: test    ah, 41h
0x5F7BC9: jnz     short loc_5F7BD9
0x5F7BCB: fsub    st(1), st
0x5F7BCD: fxch    st(1)
0x5F7BCF: fstp    [esp+18h+arg_0]
0x5F7BD3: fld     [esp+18h+arg_0]
0x5F7BD7: fxch    st(1)
0x5F7BD9: fxch    st(1)
0x5F7BDB: fcom    qword ptr ds:0A491E0h
0x5F7BE1: fnstsw  ax
0x5F7BE3: test    ah, 5
0x5F7BE6: jp      short loc_5F7BF0
0x5F7BE8: faddp   st(1), st
0x5F7BEA: fstp    [esp+18h+arg_0]
0x5F7BEE: jmp     short loc_5F7BF4
0x5F7BF0: fstp    st
0x5F7BF2: fstp    st
0x5F7BF4: mov     ecx, [edi+58h]
0x5F7BF7: mov     edx, [ecx]
0x5F7BF9: mov     eax, [edx+4CCh]
0x5F7BFF: call    eax
0x5F7C01: cmp     esi, eax
0x5F7C03: jnz     short loc_5F7C0D
0x5F7C05: fld     dword ptr ds:0A6EA80h
0x5F7C0B: jmp     short loc_5F7C13
0x5F7C0D: fld     dword ptr ds:0A3F3E0h
0x5F7C13: fstp    [esp+18h+var_10]
0x5F7C17: fld     [esp+18h+arg_0]
0x5F7C1B: fabs
0x5F7C1D: fstp    [esp+18h+arg_0]
0x5F7C21: fld     [esp+18h+arg_0]
0x5F7C25: fld     [esp+18h+var_10]
0x5F7C29: fcompp
0x5F7C2B: fnstsw  ax
0x5F7C2D: test    ah, 5
0x5F7C30: jnp     loc_5F7B68
0x5F7C36: mov     edx, [esi]
0x5F7C38: mov     eax, [edx+190h]
0x5F7C3E: mov     ecx, esi
0x5F7C40: call    eax
0x5F7C42: test    al, al
0x5F7C44: jz      loc_5F7CE0
0x5F7C4A: mov     ecx, ds:0B333C4h
0x5F7C50: cmp     edi, ecx
0x5F7C52: jz      short loc_5F7C82
0x5F7C54: cmp     esi, ecx
0x5F7C56: jz      short loc_5F7C82
0x5F7C58: mov     edx, [edi]
0x5F7C5A: mov     eax, [edx+18Ch]
0x5F7C60: mov     ecx, edi
0x5F7C62: call    eax
0x5F7C64: test    eax, eax
0x5F7C66: jz      short loc_5F7C7C
0x5F7C68: mov     edx, [esi]
0x5F7C6A: mov     eax, [edx+18Ch]
0x5F7C70: mov     ecx, esi
0x5F7C72: call    eax
0x5F7C74: test    eax, eax
0x5F7C76: jnz     loc_5F7B68
0x5F7C7C: mov     ecx, ds:0B333C4h
0x5F7C82: cmp     byte ptr [esp+18h+arg_4], 0
0x5F7C87: jz      short loc_5F7CE0
0x5F7C89: cmp     esi, ecx
0x5F7C8B: mov     byte ptr [esp+18h+arg_4], 1
0x5F7C90: jnz     short loc_5F7C9B
0x5F7C92: push    0
0x5F7C94: call    PlayerCharacter_IsPlayerInCombat
0x5F7C99: jmp     short loc_5F7CA9
0x5F7C9B: mov     edx, [esi]
0x5F7C9D: mov     eax, [edx+334h]
0x5F7CA3: push    1
0x5F7CA5: mov     ecx, esi
0x5F7CA7: call    eax
0x5F7CA9: push    0; int
0x5F7CAB: push    0; int
0x5F7CAD: mov     byte ptr [esp+20h+arg_0], al
0x5F7CB1: mov     ecx, [esp+20h+arg_0]
0x5F7CB5: push    ecx; int
0x5F7CB6: lea     edx, [esp+24h+arg_4]
0x5F7CBA: push    edx; int
0x5F7CBB: push    esi; int
0x5F7CBC: push    0; int
0x5F7CBE: mov     ecx, edi; int
0x5F7CC0: call    Actor_GetDetectionLevel
0x5F7CC5: test    eax, eax
0x5F7CC7: jle     loc_5F7B68
0x5F7CCD: cmp     esi, ds:0B333C4h
0x5F7CD3: jnz     short loc_5F7CE0
0x5F7CD5: cmp     byte ptr [esp+18h+arg_4], 0
0x5F7CDA: jz      loc_5F7B68
0x5F7CE0: pop     edi
0x5F7CE1: mov     al, 1
0x5F7CE3: pop     esi
0x5F7CE4: add     esp, 10h
0x5F7CE7: retn    8
