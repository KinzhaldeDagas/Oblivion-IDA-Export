0x954C10: push    ecx
0x954C11: mov     eax, [esp+4+arg_0]
0x954C15: push    ebx
0x954C16: mov     ebx, [esp+8+arg_4]
0x954C1A: push    ebp
0x954C1B: push    esi
0x954C1C: push    edi
0x954C1D: xor     edi, edi
0x954C1F: lea     ebp, [ecx+0Ch]
0x954C22: sub     ecx, eax
0x954C24: mov     [esp+14h+var_4], edi
0x954C28: lea     esi, [eax+10h]
0x954C2B: mov     [esp+14h+arg_4], ecx
0x954C2F: nop
0x954C30: fld     dword ptr [ebx+0Ch]
0x954C33: push    ecx
0x954C34: fld     dword ptr [esi-4]
0x954C37: fsub    dword ptr [ebx+edi*4]
0x954C3A: fmul    st, st(1)
0x954C3C: fstp    [esp+18h+var_18]
0x954C3F: fstp    st
0x954C41: call    sub_8ECA90
0x954C46: fstp    [esp+18h+var_18]
0x954C49: call    sub_8ECB30
0x954C4E: mov     [ebp+0], eax
0x954C51: fld     dword ptr [ebx+0Ch]
0x954C54: fld     dword ptr [esi]
0x954C56: fsub    dword ptr [ebx+edi*4]
0x954C59: fmul    st, st(1)
0x954C5B: fstp    [esp+18h+var_18]
0x954C5E: fstp    st
0x954C60: call    sub_8ECA90
0x954C65: fstp    [esp+18h+var_18]
0x954C68: call    sub_8ECB30
0x954C6D: mov     ecx, [esp+18h+arg_4]
0x954C71: mov     edx, [ebp+0]
0x954C74: add     esp, 4
0x954C77: inc     eax
0x954C78: mov     [ecx+esi], eax
0x954C7B: mov     ecx, [esp+14h+var_4]
0x954C7F: sub     eax, edx
0x954C81: cmp     ecx, eax
0x954C83: jg      short loc_954C89
0x954C85: mov     [esp+14h+var_4], eax
0x954C89: inc     edi
0x954C8A: add     esi, 8
0x954C8D: add     ebp, 8
0x954C90: cmp     edi, 3
0x954C93: jl      short loc_954C30
0x954C95: pop     edi
0x954C96: pop     esi
0x954C97: pop     ebp
0x954C98: pop     ebx
0x954C99: pop     ecx
0x954C9A: retn    8
