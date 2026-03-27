0x673B70: sub     esp, 8
0x673B73: mov     eax, ds:0B333C4h
0x673B78: mov     ecx, [esp+8+arg_0]
0x673B7C: push    0
0x673B7E: push    eax
0x673B7F: call    TesObjectREF_GetDistance
0x673B84: fstp    [esp+8+var_8]
0x673B87: mov     ecx, ds:0B333C4h
0x673B8D: push    0
0x673B8F: push    ecx
0x673B90: mov     ecx, [esp+10h+arg_4]
0x673B94: call    TesObjectREF_GetDistance
0x673B99: fstp    [esp+8+var_4]
0x673B9D: fld     [esp+8+var_8]
0x673BA0: fld     [esp+8+var_4]
0x673BA4: fcom    st(1)
0x673BA6: fnstsw  ax
0x673BA8: test    ah, 41h
0x673BAB: jnz     short loc_673BB8
0x673BAD: fstp    st(1)
0x673BAF: or      eax, 0FFFFFFFFh
0x673BB2: fstp    st
0x673BB4: add     esp, 8
0x673BB7: retn
0x673BB8: fcompp
0x673BBA: fnstsw  ax
0x673BBC: test    ah, 5
0x673BBF: jp      short loc_673BCA
0x673BC1: mov     eax, 1
0x673BC6: add     esp, 8
0x673BC9: retn
0x673BCA: xor     eax, eax
0x673BCC: add     esp, 8
0x673BCF: retn
