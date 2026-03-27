0x8A6410: mov     eax, [ecx+54h]
0x8A6413: test    eax, eax
0x8A6415: jz      short loc_8A641E
0x8A6417: mov     dl, [eax+28h]
0x8A641A: test    dl, dl
0x8A641C: jnz     short locret_8A6439
0x8A641E: mov     dl, [ecx+91h]
0x8A6424: test    dl, dl
0x8A6426: jnz     short locret_8A6439
0x8A6428: mov     ecx, [ecx+8]
0x8A642B: test    ecx, ecx
0x8A642D: jz      short locret_8A6439
0x8A642F: push    eax
0x8A6430: push    ecx
0x8A6431: call    sub_8CBC00
0x8A6436: add     esp, 8
0x8A6439: retn
