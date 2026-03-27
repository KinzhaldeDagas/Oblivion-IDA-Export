0x8B8770: fld     dword ptr ds:0A96CFCh
0x8B8776: push    esi
0x8B8777: mov     esi, ecx
0x8B8779: mov     al, [esi+8]
0x8B877C: fst     dword ptr [esi+50h]
0x8B877F: shr     al, 3
0x8B8782: test    al, 1
0x8B8784: jz      short loc_8B87F8
0x8B8786: cmp     dword ptr [esi+30h], 0
0x8B878A: jz      short loc_8B87F8
0x8B878C: fld     dword ptr [esi+20h]
0x8B878F: fld     dword ptr ds:0A7DEB4h
0x8B8795: fchs
0x8B8797: fucompp
0x8B8799: fnstsw  ax
0x8B879B: fld     [esp+4+arg_0]
0x8B879F: test    ah, 44h
0x8B87A2: jnp     short loc_8B87C6
0x8B87A4: fld     st
0x8B87A6: fsub    dword ptr [esi+20h]
0x8B87A9: fstp    [esp+4+arg_0]
0x8B87AD: fld     [esp+4+arg_0]
0x8B87B1: fst     dword ptr [esi+50h]
0x8B87B4: fldz
0x8B87B6: fcompp
0x8B87B8: fnstsw  ax
0x8B87BA: test    ah, 41h
0x8B87BD: jnz     short loc_8B87C6
0x8B87BF: fxch    st(1)
0x8B87C1: fstp    dword ptr [esi+50h]
0x8B87C4: jmp     short loc_8B87C8
0x8B87C6: fstp    st(1)
0x8B87C8: mov     edx, [esi]
0x8B87CA: mov     eax, [edx+64h]
0x8B87CD: push    ecx
0x8B87CE: fstp    [esp+8+var_8]
0x8B87D1: call    eax
0x8B87D3: mov     ecx, esi
0x8B87D5: fstp    [esp+4+arg_0]
0x8B87D9: call    sub_8B8380
0x8B87DE: fld     [esp+4+arg_0]
0x8B87E2: fld     dword ptr [esi+18h]
0x8B87E5: fucompp
0x8B87E7: fnstsw  ax
0x8B87E9: test    ah, 44h
0x8B87EC: jp      short loc_8B87FA
0x8B87EE: and     word ptr [esi+8], 0FFF7h
0x8B87F4: pop     esi
0x8B87F5: retn    4
0x8B87F8: fstp    st
0x8B87FA: pop     esi
0x8B87FB: retn    4
