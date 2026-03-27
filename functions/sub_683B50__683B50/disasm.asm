0x683B50: push    esi
0x683B51: push    edi
0x683B52: mov     edi, [esp+8+arg_0]
0x683B56: mov     esi, ecx
0x683B58: push    edi
0x683B59: lea     ecx, [esi+14h]
0x683B5C: call    sub_68C610
0x683B61: fstp    [esp+8+arg_0]
0x683B65: fldz
0x683B67: fld     [esp+8+arg_0]
0x683B6B: fcom    st(1)
0x683B6D: fnstsw  ax
0x683B6F: fstp    st(1)
0x683B71: test    ah, 41h
0x683B74: jp      short loc_683B88
0x683B76: push    edi
0x683B77: fstp    st
0x683B79: mov     ecx, esi
0x683B7B: call    sub_68A720
0x683B80: fstp    [esp+8+arg_0]
0x683B84: fld     [esp+8+arg_0]
0x683B88: pop     edi
0x683B89: pop     esi
0x683B8A: retn    4
