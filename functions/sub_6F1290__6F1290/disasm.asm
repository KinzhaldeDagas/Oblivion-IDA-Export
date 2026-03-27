0x6F1290: mov     ecx, [esp+arg_4]
0x6F1294: test    ecx, ecx
0x6F1296: jbe     short locret_6F12C0
0x6F1298: mov     edx, [esp+arg_8]
0x6F129C: mov     eax, [esp+arg_0]
0x6F12A0: push    esi
0x6F12A1: test    eax, eax
0x6F12A3: jz      short loc_6F12B5
0x6F12A5: mov     esi, [edx]
0x6F12A7: mov     [eax], esi
0x6F12A9: mov     esi, [edx+4]
0x6F12AC: mov     [eax+4], esi
0x6F12AF: mov     esi, [edx+8]
0x6F12B2: mov     [eax+8], esi
0x6F12B5: sub     ecx, 1
0x6F12B8: add     eax, 0Ch
0x6F12BB: test    ecx, ecx
0x6F12BD: ja      short loc_6F12A1
0x6F12BF: pop     esi
0x6F12C0: retn
