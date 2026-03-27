0x72FF40: mov     eax, [esp+arg_0]
0x72FF44: fld     [esp+arg_4]
0x72FF48: push    esi
0x72FF49: mov     esi, ecx
0x72FF4B: mov     ecx, [eax]
0x72FF4D: mov     [esi], ecx
0x72FF4F: mov     edx, [eax+4]
0x72FF52: fstp    dword ptr [esi+8]
0x72FF55: mov     eax, [esp+4+arg_8]
0x72FF59: mov     [esi+4], edx
0x72FF5C: mov     ecx, [eax]
0x72FF5E: mov     [esi+0Ch], ecx
0x72FF61: mov     edx, [eax+4]
0x72FF64: mov     eax, [esp+4+arg_C]
0x72FF68: mov     [esi+10h], edx
0x72FF6B: mov     ecx, [eax]
0x72FF6D: mov     [esi+14h], ecx
0x72FF70: mov     edx, [eax+4]
0x72FF73: mov     eax, [esp+4+arg_10]
0x72FF77: mov     ecx, esi
0x72FF79: mov     [esi+18h], edx
0x72FF7C: mov     [esi+44h], eax
0x72FF7F: call    sub_72FDF0
0x72FF84: mov     eax, esi
0x72FF86: pop     esi
0x72FF87: retn    14h
