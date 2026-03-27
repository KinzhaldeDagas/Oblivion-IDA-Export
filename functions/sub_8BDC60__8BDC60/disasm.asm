0x8BDC60: push    esi
0x8BDC61: push    edi
0x8BDC62: mov     edi, [esp+8+arg_0]
0x8BDC66: push    edi
0x8BDC67: mov     esi, ecx
0x8BDC69: call    sub_89FD10
0x8BDC6E: fldz
0x8BDC70: test    esi, esi
0x8BDC72: jz      short loc_8BDC84
0x8BDC74: mov     eax, [esi+8]
0x8BDC77: test    eax, eax
0x8BDC79: jz      short loc_8BDC84
0x8BDC7B: fld     dword ptr [eax+34h]
0x8BDC7E: fstp    [esp+8+arg_0]
0x8BDC82: jmp     short loc_8BDC88
0x8BDC84: fst     [esp+8+arg_0]
0x8BDC88: test    esi, esi
0x8BDC8A: fld     [esp+8+arg_0]
0x8BDC8E: fstp    dword ptr [edi+24h]
0x8BDC91: jz      short loc_8BDC9F
0x8BDC93: mov     eax, [esi+8]
0x8BDC96: test    eax, eax
0x8BDC98: jz      short loc_8BDC9F
0x8BDC9A: add     eax, 20h ; ' '
0x8BDC9D: jmp     short loc_8BDCA4
0x8BDC9F: mov     eax, offset flt_B2F080
0x8BDCA4: test    esi, esi
0x8BDCA6: fld     dword ptr [eax]
0x8BDCA8: fstp    dword ptr [edi+10h]
0x8BDCAB: fld     dword ptr [eax+4]
0x8BDCAE: fstp    dword ptr [edi+14h]
0x8BDCB1: fld     dword ptr [eax+8]
0x8BDCB4: fstp    dword ptr [edi+18h]
0x8BDCB7: fld     dword ptr [eax+0Ch]
0x8BDCBA: fstp    dword ptr [edi+1Ch]
0x8BDCBD: jz      short loc_8BDCCB
0x8BDCBF: mov     esi, [esi+8]
0x8BDCC2: test    esi, esi
0x8BDCC4: jz      short loc_8BDCCB
0x8BDCC6: fstp    st
0x8BDCC8: fld     dword ptr [esi+30h]
0x8BDCCB: fstp    [esp+8+arg_0]
0x8BDCCF: fld     [esp+8+arg_0]
0x8BDCD3: fstp    dword ptr [edi+20h]
0x8BDCD6: pop     edi
0x8BDCD7: pop     esi
0x8BDCD8: retn    4
