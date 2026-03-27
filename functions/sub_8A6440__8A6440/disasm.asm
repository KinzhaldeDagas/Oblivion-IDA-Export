0x8A6440: mov     eax, [ecx+54h]
0x8A6443: test    eax, eax
0x8A6445: jz      short locret_8A645B
0x8A6447: mov     dl, [eax+28h]
0x8A644A: test    dl, dl
0x8A644C: jz      short locret_8A645B
0x8A644E: push    eax
0x8A644F: mov     eax, [ecx+8]
0x8A6452: push    eax
0x8A6453: call    sub_8CBBB0
0x8A6458: add     esp, 8
0x8A645B: retn
