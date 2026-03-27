0x484BA0: mov     ecx, [ecx]
0x484BA2: or      eax, 0FFFFFFFFh
0x484BA5: test    ecx, ecx
0x484BA7: jz      short locret_484BB7
0x484BA9: mov     ecx, [ecx]
0x484BAB: test    ecx, ecx
0x484BAD: jz      short locret_484BB7
0x484BAF: call    sub_422C40
0x484BB4: movsx   eax, al
0x484BB7: retn
