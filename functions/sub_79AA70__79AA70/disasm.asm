0x79AA70: push    ecx; Thin backward-copy trampoline for overlap-safe initialized SFrondVertex movement; delegates to 0x79A890.
0x79AA71: mov     ecx, [esp+4+destinationLast]
0x79AA75: mov     edx, [esp+4+destinationLast]
0x79AA79: mov     byte ptr [esp+4+var_4], 0
0x79AA7D: mov     eax, [esp+4+var_4]
0x79AA80: push    eax
0x79AA81: mov     eax, [esp+8+destinationLast]
0x79AA85: push    ecx
0x79AA86: mov     ecx, [esp+0Ch+last]
0x79AA8A: push    edx
0x79AA8B: mov     edx, [esp+10h+first]
0x79AA8F: push    eax; destinationLast
0x79AA90: push    ecx; last
0x79AA91: push    edx; first
0x79AA92: call    OB_SFrondVertex_CopyBackward_010201A0; Overlap-safe backward copy/assignment of initialized 0x38-byte SFrondVertex records from [first,last) into the range ending at destinationLast.
0x79AA97: add     esp, 1Ch
0x79AA9A: retn
