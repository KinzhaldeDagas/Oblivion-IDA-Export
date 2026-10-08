0x7A0FB0: mov     eax, [esp+last]; Outer guide-LOD vector destroy-range thunk.
0x7A0FB4: mov     edx, [esp+first]
0x7A0FB8: push    eax
0x7A0FB9: push    ecx
0x7A0FBA: mov     ecx, [esp+8+last]
0x7A0FBE: push    ecx; last
0x7A0FBF: push    edx; first
0x7A0FC0: call    OB_stVector_stVector_SFrondGuide_DestroyRange_010201A0; Destroys [first,last) guide-LOD levels. Every 16-byte element owns a vector of 0x30 SFrondGuide copies, so each inner guide range is deep-destroyed before its allocation is freed.
0x7A0FC5: add     esp, 10h
0x7A0FC8: retn    8
