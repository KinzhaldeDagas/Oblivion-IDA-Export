0x6F0010: mov     ecx, [esp+arg_4]
0x6F0014: test    ecx, ecx
0x6F0016: jbe     short locret_6F003C
0x6F0018: mov     edx, [esp+arg_8]
0x6F001C: mov     eax, [esp+arg_0]
0x6F0020: push    esi
0x6F0021: test    eax, eax
0x6F0023: jz      short loc_6F0031
0x6F0025: mov     esi, [edx]
0x6F0027: mov     [eax], esi
0x6F0029: mov     si, [edx+4]
0x6F002D: mov     [eax+4], si
0x6F0031: sub     ecx, 1
0x6F0034: add     eax, 6
0x6F0037: test    ecx, ecx
0x6F0039: ja      short loc_6F0021
0x6F003B: pop     esi
0x6F003C: retn
