0x684B30: sub     esp, 1Ch
0x684B33: push    ebx
0x684B34: push    esi
0x684B35: mov     esi, [esp+24h+arg_0]
0x684B39: xor     bl, bl
0x684B3B: test    esi, esi
0x684B3D: jz      loc_684CA4
0x684B43: mov     eax, [esi]
0x684B45: mov     edx, [eax+174h]
0x684B4B: push    ebp
0x684B4C: push    edi
0x684B4D: mov     ecx, esi
0x684B4F: call    edx
0x684B51: mov     ecx, [eax]
0x684B53: mov     edi, [esp+2Ch+arg_4]
0x684B57: mov     edx, [eax+4]
0x684B5A: mov     eax, [eax+8]
0x684B5D: mov     [esp+2Ch+var_18], ecx
0x684B61: fld     [esp+2Ch+var_18]
0x684B65: fsub    dword ptr [edi]
0x684B67: mov     [esp+2Ch+var_14], edx
0x684B6B: mov     [esp+2Ch+var_10], eax
0x684B6F: mov     ecx, esi; this
0x684B71: fstp    [esp+2Ch+var_C]
0x684B75: fld     [esp+2Ch+var_14]
0x684B79: fsub    dword ptr [edi+4]
0x684B7C: fstp    [esp+2Ch+var_8]
0x684B80: fld     [esp+2Ch+var_10]
0x684B84: fsub    dword ptr [edi+8]
0x684B87: fstp    [esp+2Ch+var_4]
0x684B8B: call    MobileObject_GetCharProxy
0x684B90: mov     ebp, eax
0x684B92: test    ebp, ebp
0x684B94: jz      short loc_684BAD
0x684B96: lea     ecx, [ebp+1E0h]
0x684B9C: call    sub_88D370
0x684BA1: test    eax, eax
0x684BA3: jz      short loc_684BAD
0x684BA5: fldz
0x684BA7: fstp    [esp+2Ch+var_4]
0x684BAB: jmp     short loc_684C21
0x684BAD: mov     ecx, esi
0x684BAF: call    sub_5E0660
0x684BB4: fstp    [esp+2Ch+arg_0]
0x684BB8: fldz
0x684BBA: fcom    [esp+2Ch+arg_0]
0x684BBE: fnstsw  ax
0x684BC0: test    ah, 44h
0x684BC3: jp      short loc_684BCF
0x684BC5: fld     dword ptr ds:0A2FFE8h
0x684BCB: fstp    [esp+2Ch+arg_0]
0x684BCF: fld     dword ptr [edi+8]
0x684BD2: fld     [esp+2Ch+var_10]
0x684BD6: fld     st
0x684BD8: fld     qword ptr ds:0A3AA50h
0x684BDE: fsub    st(1), st
0x684BE0: fxch    st(1)
0x684BE2: fstp    [esp+2Ch+var_1C]
0x684BE6: fld     [esp+2Ch+var_1C]
0x684BEA: fcomp   st(3)
0x684BEC: fnstsw  ax
0x684BEE: fstp    st(2)
0x684BF0: test    ah, 5
0x684BF3: jp      short loc_684C1B
0x684BF5: fld     dword ptr [edi+8]
0x684BF8: fld     [esp+2Ch+arg_0]
0x684BFC: faddp   st(2), st
0x684BFE: fxch    st(1)
0x684C00: faddp   st(2), st
0x684C02: fxch    st(1)
0x684C04: fstp    [esp+2Ch+arg_0]
0x684C08: fld     [esp+2Ch+arg_0]
0x684C0C: fcompp
0x684C0E: fnstsw  ax
0x684C10: test    ah, 41h
0x684C13: jnz     short loc_684C1F
0x684C15: fstp    [esp+2Ch+var_4]
0x684C19: jmp     short loc_684C21
0x684C1B: fstp    st(1)
0x684C1D: fstp    st
0x684C1F: fstp    st
0x684C21: cmp     [esp+2Ch+arg_C], 0
0x684C26: fld     [esp+2Ch+arg_8]
0x684C2A: fstp    [esp+2Ch+arg_0]
0x684C2E: jz      short loc_684C87
0x684C30: test    ebp, ebp
0x684C32: fld     dword ptr ds:0A427E4h
0x684C38: fstp    [esp+2Ch+arg_0]
0x684C3C: jz      short loc_684C7B
0x684C3E: mov     ecx, ebp
0x684C40: call    sub_8913C0
0x684C45: fmul    qword ptr ds:0A372E0h
0x684C4B: test    byte ptr [ebp+1F4h], 1
0x684C52: fstp    [esp+2Ch+arg_0]
0x684C56: jz      short loc_684C62
0x684C58: fld     [esp+2Ch+arg_0]
0x684C5C: fadd    st, st
0x684C5E: fstp    [esp+2Ch+arg_0]
0x684C62: fld     dword ptr ds:0A427E4h
0x684C68: fcom    [esp+2Ch+arg_0]
0x684C6C: fnstsw  ax
0x684C6E: test    ah, 41h
0x684C71: jnz     short loc_684C79
0x684C73: fstp    [esp+2Ch+arg_0]
0x684C77: jmp     short loc_684C7B
0x684C79: fstp    st
0x684C7B: fld     [esp+2Ch+arg_0]
0x684C7F: fadd    [esp+2Ch+arg_8]
0x684C83: fstp    [esp+2Ch+arg_0]
0x684C87: fld     [esp+2Ch+arg_0]
0x684C8B: push    ecx
0x684C8C: lea     ecx, [esp+30h+var_C]
0x684C90: fstp    [esp+30h+var_30]; float
0x684C93: push    ecx; int
0x684C94: call    sub_47F6F0
0x684C99: add     esp, 8
0x684C9C: pop     edi
0x684C9D: test    eax, eax
0x684C9F: pop     ebp
0x684CA0: mov     al, 1
0x684CA2: jle     short loc_684CA6
0x684CA4: mov     al, bl
0x684CA6: pop     esi
0x684CA7: pop     ebx
0x684CA8: add     esp, 1Ch
0x684CAB: retn
