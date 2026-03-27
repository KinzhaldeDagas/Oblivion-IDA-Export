0x556320: push    esi
0x556321: mov     esi, ecx
0x556323: mov     ecx, [esi+4]
0x556326: test    ecx, ecx
0x556328: push    edi
0x556329: mov     edi, [esp+8+arg_0]
0x55632D: jz      short loc_55633B
0x55632F: mov     eax, [esi+8]
0x556332: sub     eax, ecx
0x556334: sar     eax, 6
0x556337: cmp     edi, eax
0x556339: jb      short loc_556340
0x55633B: call    __invalid_parameter_noinfo
0x556340: mov     eax, edi
0x556342: shl     eax, 6
0x556345: add     eax, [esi+4]
0x556348: pop     edi
0x556349: pop     esi
0x55634A: retn    4
