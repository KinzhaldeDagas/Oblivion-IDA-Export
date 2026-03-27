0x701400: mov     ecx, [esp+arg_4]
0x701404: test    ecx, ecx
0x701406: js      short loc_70140B
0x701408: xor     eax, eax
0x70140A: retn
0x70140B: mov     eax, ds:0B256A0h
0x701410: test    eax, eax
0x701412: jnz     short loc_70141E
0x701414: mov     eax, offset sub_701020
0x701419: mov     ds:0B256A0h, eax
0x70141E: push    ecx
0x70141F: mov     ecx, [esp+4+arg_0]
0x701423: push    ecx
0x701424: call    eax ; sub_701020
0x701426: add     esp, 8
0x701429: retn
