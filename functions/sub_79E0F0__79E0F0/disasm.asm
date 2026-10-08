0x79E0F0: push    ecx; st_vector<SFrondTexture> uninitialized-copy thunk: deep-copy-constructs [first,last) into raw destination storage and returns destination end.
0x79E0F1: mov     edx, [esp+4+destinationFirst]
0x79E0F5: mov     byte ptr [esp+4+var_4], 0
0x79E0F9: mov     eax, [esp+4+var_4]
0x79E0FC: push    eax
0x79E0FD: mov     eax, [esp+8+destinationFirst]
0x79E101: push    edx
0x79E102: mov     edx, [esp+0Ch+first]
0x79E106: push    ecx
0x79E107: mov     ecx, [esp+10h+last]
0x79E10B: push    eax; destinationFirst
0x79E10C: push    ecx; last
0x79E10D: push    edx; first
0x79E10E: call    OB_SFrondTexture_UninitializedCopy_010201A0; Exception-safe uninitialized_copy for SFrondTexture. Normal path placement-copy-constructs [first,last) and returns destination end; the SEH cleanup landing path destroys the constructed prefix and rethrows.
0x79E113: add     esp, 1Ch
0x79E116: retn    0Ch
