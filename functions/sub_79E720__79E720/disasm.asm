0x79E720: push    ecx; Checked/STL trampoline for overlap-safe backward SFrondGuide range assignment.
0x79E721: mov     ecx, [esp+4+destinationLast]
0x79E725: mov     edx, [esp+4+destinationLast]
0x79E729: mov     byte ptr [esp+4+var_4], 0
0x79E72D: mov     eax, [esp+4+var_4]
0x79E730: push    eax
0x79E731: mov     eax, [esp+8+destinationLast]
0x79E735: push    ecx
0x79E736: mov     ecx, [esp+0Ch+last]
0x79E73A: push    edx
0x79E73B: mov     edx, [esp+10h+first]
0x79E73F: push    eax; destinationLast
0x79E740: push    ecx; last
0x79E741: push    edx; first
0x79E742: call    OB_SFrondGuide_CopyAssignRangeBackwardThunk_010201A0; Thin backward-copy wrapper for overlap-safe SFrondGuide range assignment; returns destination start.
0x79E747: add     esp, 1Ch
0x79E74A: retn
