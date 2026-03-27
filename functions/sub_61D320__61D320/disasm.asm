0x61D320: push    ecx
0x61D321: push    esi
0x61D322: mov     esi, ecx
0x61D324: mov     eax, [esi+6Ch]
0x61D327: cmp     eax, 0Eh
0x61D32A: jz      loc_61D401
0x61D330: cmp     eax, 10h
0x61D333: jz      loc_61D401
0x61D339: mov     ecx, [esi+3Ch]
0x61D33C: mov     eax, [ecx]
0x61D33E: mov     edx, [eax+25Ch]
0x61D344: call    edx
0x61D346: test    al, al
0x61D348: jnz     loc_61D401
0x61D34E: push    4
0x61D350: mov     ecx, esi
0x61D352: call    sub_619920
0x61D357: fld     dword ptr [esi+44h]
0x61D35A: fsub    dword ptr [esi+0ECh]
0x61D360: fld     dword ptr [esi+0F0h]
0x61D366: fcompp
0x61D368: fnstsw  ax
0x61D36A: test    ah, 5
0x61D36D: jp      short loc_61D3BF
0x61D36F: mov     ecx, [esi+3Ch]
0x61D372: call    sub_5E05B0
0x61D377: test    al, al
0x61D379: jnz     short loc_61D3BF
0x61D37B: mov     ecx, [esi+3Ch]
0x61D37E: push    3
0x61D380: mov     dword ptr [esi+0D0h], 101h
0x61D38A: call    sub_5E5850
0x61D38F: fld     dword ptr ds:0A3D65Ch
0x61D395: fcom    st(1)
0x61D397: fnstsw  ax
0x61D399: fstp    st(1)
0x61D39B: test    ah, 5
0x61D39E: jp      short loc_61D3AC
0x61D3A0: mov     ecx, [esi+3Ch]
0x61D3A3: fstp    st
0x61D3A5: push    3
0x61D3A7: call    sub_5E5850
0x61D3AC: fstp    [esp+8+var_4]
0x61D3B0: fld     dword ptr [esi+44h]
0x61D3B3: fstp    dword ptr [esi+0ECh]
0x61D3B9: fld     [esp+8+var_4]
0x61D3BD: jmp     short loc_61D3D4
0x61D3BF: fld     dword ptr [esi+44h]
0x61D3C2: mov     dword ptr [esi+0D0h], 201h
0x61D3CC: fstp    dword ptr [esi+0ECh]
0x61D3D2: fldz
0x61D3D4: fstp    dword ptr [esi+0F0h]
0x61D3DA: fld     dword ptr ds:0A30634h
0x61D3E0: fst     dword ptr [esi+0F4h]
0x61D3E6: fld     dword ptr [esi+44h]
0x61D3E9: fstp    dword ptr [esi+0D4h]
0x61D3EF: fld     dword ptr ds:0A46C30h
0x61D3F5: fstp    dword ptr [esi+0D8h]
0x61D3FB: fstp    dword ptr [esi+0DCh]
0x61D401: pop     esi
0x61D402: pop     ecx
0x61D403: retn
