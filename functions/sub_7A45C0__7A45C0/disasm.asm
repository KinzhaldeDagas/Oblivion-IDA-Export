0x7A45C0: push    ecx; Typed vector wrapper for forward SIdvLeafTexture copy assignment.
0x7A45C1: mov     ecx, [esp+4+last]
0x7A45C5: mov     edx, [esp+4+last]
0x7A45C9: mov     byte ptr [esp+4+var_4], 0
0x7A45CD: mov     eax, [esp+4+var_4]
0x7A45D0: push    eax
0x7A45D1: mov     eax, [esp+8+destinationFirst]
0x7A45D5: push    ecx
0x7A45D6: mov     ecx, [esp+0Ch+last]
0x7A45DA: push    edx
0x7A45DB: mov     edx, [esp+10h+first]
0x7A45DF: push    eax; destinationFirst
0x7A45E0: push    ecx; last
0x7A45E1: push    edx; first
0x7A45E2: call    OB_SIdvLeafTexture_CopyAssignRangeForward_010201A0; Forward deep-copy assignment over existing 0x54-byte SIdvLeafTexture records; returns the destination end.
0x7A45E7: add     esp, 1Ch
0x7A45EA: retn
