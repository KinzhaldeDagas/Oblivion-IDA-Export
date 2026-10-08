0x79E0C0: push    ecx; Checked/STL trampoline for forward SFrondGuide copy-assignment; delegates to 0x79BE80 and returns destination end.
0x79E0C1: mov     ecx, [esp+4+last]
0x79E0C5: mov     edx, [esp+4+last]
0x79E0C9: mov     byte ptr [esp+4+var_4], 0
0x79E0CD: mov     eax, [esp+4+var_4]
0x79E0D0: push    eax
0x79E0D1: mov     eax, [esp+8+destinationFirst]
0x79E0D5: push    ecx
0x79E0D6: mov     ecx, [esp+0Ch+last]
0x79E0DA: push    edx
0x79E0DB: mov     edx, [esp+10h+first]
0x79E0DF: push    eax; destinationFirst
0x79E0E0: push    ecx; last
0x79E0E1: push    edx; first
0x79E0E2: call    OB_SFrondGuide_CopyAssignRangeForwardThunk_010201A0; Thin checked/STL wrapper around forward SFrondGuide range copy-assignment; returns destination end.
0x79E0E7: add     esp, 1Ch
0x79E0EA: retn
