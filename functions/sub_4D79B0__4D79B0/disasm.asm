0x4D79B0: add     ecx, 44h ; 'D'
0x4D79B3: call    ExtraDataList__GetStartLocation
0x4D79B8: test    eax, eax
0x4D79BA: jz      short loc_4D79C8
0x4D79BC: mov     eax, [eax]
0x4D79BE: test    eax, eax
0x4D79C0: jz      short loc_4D79C8
0x4D79C2: cmp     byte ptr [eax+4], 35h ; '5'
0x4D79C6: jz      short locret_4D79CA
0x4D79C8: xor     eax, eax
0x4D79CA: retn
