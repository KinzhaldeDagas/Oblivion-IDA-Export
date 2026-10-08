0x79AA40: push    ecx; Thin forward-copy trampoline for initialized SFrondVertex ranges; delegates to 0x79A950.
0x79AA41: mov     ecx, [esp+4+last]
0x79AA45: mov     edx, [esp+4+last]
0x79AA49: mov     byte ptr [esp+4+var_4], 0
0x79AA4D: mov     eax, [esp+4+var_4]
0x79AA50: push    eax
0x79AA51: mov     eax, [esp+8+destinationFirst]
0x79AA55: push    ecx
0x79AA56: mov     ecx, [esp+0Ch+last]
0x79AA5A: push    edx
0x79AA5B: mov     edx, [esp+10h+first]
0x79AA5F: push    eax; destinationFirst
0x79AA60: push    ecx; last
0x79AA61: push    edx; first
0x79AA62: call    OB_SFrondVertex_CopyForward_010201A0; Forward copy/assignment of initialized 0x38-byte SFrondVertex records from [first,last) into destinationFirst; returns destination end.
0x79AA67: add     esp, 1Ch
0x79AA6A: retn
