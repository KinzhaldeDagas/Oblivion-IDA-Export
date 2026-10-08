0x79AAD0: push    ecx; Checked/uninitialized-copy trampoline for SFrondVertex ranges; delegates to 0x79A9B0 and returns the constructed end.
0x79AAD1: mov     edx, [esp+4+destinationFirst]
0x79AAD5: mov     byte ptr [esp+4+var_4], 0
0x79AAD9: mov     eax, [esp+4+var_4]
0x79AADC: push    eax
0x79AADD: mov     eax, [esp+8+destinationFirst]
0x79AAE1: push    edx
0x79AAE2: mov     edx, [esp+0Ch+first]
0x79AAE6: push    ecx
0x79AAE7: mov     ecx, [esp+10h+last]
0x79AAEB: push    eax; destinationFirst
0x79AAEC: push    ecx; last
0x79AAED: push    edx; first
0x79AAEE: call    OB_SFrondVertex_UninitializedCopy_010201A0; Copies 0x38-byte SFrondVertex records from [first,last) into uninitialized destination storage and returns the constructed end.
0x79AAF3: add     esp, 1Ch
0x79AAF6: retn    0Ch
