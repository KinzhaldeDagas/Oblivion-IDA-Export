0x942FF0: push    esi
0x942FF1: mov     esi, ecx
0x942FF3: lea     ecx, [esi+8]
0x942FF6: call    sub_942BB0
0x942FFB: test    [esp+4+arg_0], 1
0x943000: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x943006: jz      short loc_94301B
0x943008: movzx   edx, word ptr [esi+4]
0x94300C: mov     ecx, ds:0BA7D98h
0x943012: mov     eax, [ecx]
0x943014: push    12h
0x943016: push    edx
0x943017: push    esi
0x943018: call    dword ptr [eax+14h]
0x94301B: mov     eax, esi
0x94301D: pop     esi
0x94301E: retn    4
