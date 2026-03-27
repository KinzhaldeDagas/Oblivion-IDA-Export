0x6E5620: push    ecx
0x6E5621: push    esi
0x6E5622: mov     esi, ecx
0x6E5624: fld     dword ptr [esi+8]
0x6E5627: fld     [esp+8+arg_0]
0x6E562B: fld     st
0x6E562D: fucomp  st(2)
0x6E562F: fnstsw  ax
0x6E5631: fstp    st(1)
0x6E5633: test    ah, 44h
0x6E5636: jp      short loc_6E564A
0x6E5638: mov     eax, [esp+8+arg_8]
0x6E563C: fstp    st
0x6E563E: fld     dword ptr [esi+1Ch]
0x6E5641: pop     esi
0x6E5642: fstp    dword ptr [eax]
0x6E5644: mov     al, 1
0x6E5646: pop     ecx
0x6E5647: retn    0Ch
0x6E564A: mov     eax, [esi+20h]
0x6E564D: cmp     eax, 0FFFFh
0x6E5652: jz      short loc_6E5682
0x6E5654: fsub    dword ptr [esi+0Ch]
0x6E5657: mov     ecx, [esi+18h]
0x6E565A: fld     dword ptr [esi+10h]
0x6E565D: push    eax; int
0x6E565E: fsub    dword ptr [esi+0Ch]
0x6E5661: push    ecx; int
0x6E5662: push    1; int
0x6E5664: lea     edx, [esi+1Ch]
0x6E5667: fdivp   st(1), st
0x6E5669: push    edx; int
0x6E566A: push    ecx
0x6E566B: mov     ecx, [esi+14h]
0x6E566E: fstp    [esp+1Ch+var_4]
0x6E5672: fld     [esp+1Ch+var_4]
0x6E5676: fstp    [esp+1Ch+var_1C]; float
0x6E5679: call    sub_6E72F0
0x6E567E: fld     [esp+8+arg_0]
0x6E5682: fld     dword ptr [esi+1Ch]
0x6E5685: mov     eax, [esp+8+arg_8]
0x6E5689: fstp    dword ptr [eax]
0x6E568B: mov     al, 1
0x6E568D: fstp    dword ptr [esi+8]
0x6E5690: pop     esi
0x6E5691: pop     ecx
0x6E5692: retn    0Ch
