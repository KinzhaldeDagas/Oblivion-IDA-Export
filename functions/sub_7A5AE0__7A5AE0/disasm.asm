0x7A5AE0: push    ecx; Typed wrapper for backward SIdvLeafTexture copy assignment.
0x7A5AE1: mov     ecx, [esp+4+destinationEnd]
0x7A5AE5: mov     edx, [esp+4+destinationEnd]
0x7A5AE9: mov     byte ptr [esp+4+var_4], 0
0x7A5AED: mov     eax, [esp+4+var_4]
0x7A5AF0: push    eax
0x7A5AF1: mov     eax, [esp+8+destinationEnd]
0x7A5AF5: push    ecx
0x7A5AF6: mov     ecx, [esp+0Ch+last]
0x7A5AFA: push    edx
0x7A5AFB: mov     edx, [esp+10h+first]
0x7A5AFF: push    eax; destinationEnd
0x7A5B00: push    ecx; last
0x7A5B01: push    edx; first
0x7A5B02: call    OB_SIdvLeafTexture_CopyAssignRangeBackward_010201A0; Overlap-safe backward deep-copy assignment of compact SIdvLeafTexture records.
0x7A5B07: add     esp, 1Ch
0x7A5B0A: retn
