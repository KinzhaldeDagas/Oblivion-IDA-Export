0x79BDD0: mov     eax, [esp+last]; Thin checked/STL trampoline for destruction of an SFrondTexture range.
0x79BDD4: mov     edx, [esp+first]
0x79BDD8: push    eax
0x79BDD9: push    ecx
0x79BDDA: mov     ecx, [esp+8+last]
0x79BDDE: push    ecx; last
0x79BDDF: push    edx; first
0x79BDE0: call    OB_SFrondTexture_DestroyRange_010201A0; Destroys [first,last) SFrondTexture records at 0x2C-byte stride by releasing each embedded filename string.
0x79BDE5: add     esp, 10h
0x79BDE8: retn    8
