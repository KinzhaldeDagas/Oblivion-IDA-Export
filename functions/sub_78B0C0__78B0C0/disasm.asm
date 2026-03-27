0x78B0C0: mov     ecx, [ecx]
0x78B0C2: cmp     byte ptr [ecx+21h], 0
0x78B0C6: jz      short loc_78B0CD
0x78B0C8: jmp     sub_7A2620
0x78B0CD: push    3Ah ; ':'; MaxCount
0x78B0CF: push    offset aDeletetransien; "DeleteTransientData() called with no in"...
0x78B0D4: mov     ecx, offset dword_B2B614
0x78B0D9: call    sub_414500
0x78B0DE: retn
