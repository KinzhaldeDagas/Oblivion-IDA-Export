0x7A4BF0: push    ecx; Typed uninitialized-copy wrapper. The executable continues after the call and returns the constructed destination end; its former noreturn boundary was false.
0x7A4BF1: mov     edx, [esp+4+destinationFirst]
0x7A4BF5: mov     byte ptr [esp+4+var_4], 0
0x7A4BF9: mov     eax, [esp+4+var_4]
0x7A4BFC: push    eax
0x7A4BFD: mov     eax, [esp+8+destinationFirst]
0x7A4C01: push    edx
0x7A4C02: mov     edx, [esp+0Ch+first]
0x7A4C06: push    ecx
0x7A4C07: mov     ecx, [esp+10h+last]
0x7A4C0B: push    eax; destinationFirst
0x7A4C0C: push    ecx; last
0x7A4C0D: push    edx; first
0x7A4C0E: call    OB_SIdvLeafTexture_UninitializedCopy_010201A0; Exception-safe uninitialized deep copy of 0x54-byte SIdvLeafTexture records. Normal completion returns destination end; the separate SEH landing path destroys the constructed prefix and rethrows.
0x7A4C13: add     esp, 1Ch; Restored normal fall-through after uninitialized copy; returns the destination-end pointer with retn 0x0C.
0x7A4C16: retn    0Ch
