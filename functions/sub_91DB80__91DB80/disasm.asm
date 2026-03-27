0x91DB80: lea     eax, [ecx-20h]
0x91DB83: test    eax, eax
0x91DB85: jz      short loc_91DB97
0x91DB87: lea     eax, [ecx+8]
0x91DB8A: mov     ecx, [esp+arg_0]
0x91DB8E: push    eax
0x91DB8F: call    sub_898AD0
0x91DB94: retn    4
0x91DB97: mov     ecx, [esp+arg_0]
0x91DB9B: xor     eax, eax
0x91DB9D: push    eax
0x91DB9E: call    sub_898AD0
0x91DBA3: retn    4
