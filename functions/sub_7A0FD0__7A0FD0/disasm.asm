0x7A0FD0: push    ecx; Outer guide-LOD vector uninitialized ownership-move thunk; preserves the returned destination end.
0x7A0FD1: mov     edx, [esp+4+destinationFirst]
0x7A0FD5: mov     byte ptr [esp+4+var_4], 0
0x7A0FD9: mov     eax, [esp+4+var_4]
0x7A0FDC: push    eax
0x7A0FDD: mov     eax, [esp+8+destinationFirst]
0x7A0FE1: push    edx
0x7A0FE2: mov     edx, [esp+0Ch+first]
0x7A0FE6: push    ecx
0x7A0FE7: mov     ecx, [esp+10h+last]
0x7A0FEB: push    eax; destinationFirst
0x7A0FEC: push    ecx; last
0x7A0FED: push    edx; first
0x7A0FEE: call    OB_stVector_stVector_SFrondGuide_UninitializedMove_010201A0; Exception-safe uninitialized ownership move for guide-LOD level vectors. Constructs an empty destination element, swaps its begin/end/capacity with the source, and advances at 0x10-byte stride; unwind destroys constructed destinations.
0x7A0FF3: add     esp, 1Ch
0x7A0FF6: retn    0Ch
