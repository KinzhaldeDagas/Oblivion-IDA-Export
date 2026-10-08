0x7A45A0: mov     eax, [esp+last]; Typed vector wrapper for destruction of an initialized SIdvLeafTexture range.
0x7A45A4: mov     edx, [esp+first]
0x7A45A8: push    eax
0x7A45A9: push    ecx
0x7A45AA: mov     ecx, [esp+8+last]
0x7A45AE: push    ecx; last
0x7A45AF: push    edx; first
0x7A45B0: call    OB_SIdvLeafTexture_DestroyRange_010201A0; Destroys [first,last) compact SIdvLeafTexture records at 0x54 stride, releasing each owned filename.
0x7A45B5: add     esp, 10h
0x7A45B8: retn    8
