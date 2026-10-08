0x79E120: push    ecx; Checked/STL trampoline for overlap-safe backward SFrondTexture range assignment.
0x79E121: mov     ecx, [esp+4+destinationLast]
0x79E125: mov     edx, [esp+4+destinationLast]
0x79E129: mov     byte ptr [esp+4+var_4], 0
0x79E12D: mov     eax, [esp+4+var_4]
0x79E130: push    eax
0x79E131: mov     eax, [esp+8+destinationLast]
0x79E135: push    ecx
0x79E136: mov     ecx, [esp+0Ch+last]
0x79E13A: push    edx
0x79E13B: mov     edx, [esp+10h+first]
0x79E13F: push    eax; destinationLast
0x79E140: push    ecx; last
0x79E141: push    edx; first
0x79E142: call    OB_SFrondTexture_CopyAssignRangeBackwardThunk_010201A0; Checked/STL trampoline around backward SFrondTexture range assignment; returns destination begin.
0x79E147: add     esp, 1Ch
0x79E14A: retn
