0x5369B0: mov     eax, ecx
0x5369B2: test    eax, eax
0x5369B4: jz      short locret_5369CC
0x5369B6: mov     ecx, [esp+arg_0]
0x5369BA: lea     ebx, [ebx+0]
0x5369C0: cmp     [eax+0Ch], ecx
0x5369C3: jz      short locret_5369CC
0x5369C5: mov     eax, [eax+4]
0x5369C8: test    eax, eax
0x5369CA: jnz     short loc_5369C0
0x5369CC: retn    4
