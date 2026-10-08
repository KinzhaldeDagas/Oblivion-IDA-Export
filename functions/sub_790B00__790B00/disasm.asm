0x790B00: mov     ecx, ds:0B429E4h; Source-match: CBranch::ClearBranchInfo/static branch-info clear helper. Clears the global/static branch info vector used by branch parsing/compute.
0x790B06: mov     eax, ds:0B429E0h
0x790B0B: sub     esp, 8
0x790B0E: cmp     eax, ecx
0x790B10: push    ebx
0x790B11: push    esi
0x790B12: push    edi
0x790B13: mov     ebx, ecx
0x790B15: jbe     short loc_790B27
0x790B17: call    __invalid_parameter_noinfo
0x790B1C: mov     ecx, ds:0B429E4h
0x790B22: mov     eax, ds:0B429E0h
0x790B27: cmp     eax, ecx
0x790B29: mov     esi, offset lastOwner
0x790B2E: mov     edi, eax
0x790B30: jbe     short loc_790B37
0x790B32: call    __invalid_parameter_noinfo
0x790B37: push    ebx; last
0x790B38: push    esi; last
0x790B39: push    edi; first
0x790B3A: mov     eax, offset lastOwner
0x790B3F: push    eax; first
0x790B40: lea     eax, [esp+24h+result]
0x790B44: push    eax; result
0x790B45: mov     ecx, offset lastOwner; this
0x790B4A: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x790B4F: pop     edi
0x790B50: pop     esi
0x790B51: pop     ebx
0x790B52: add     esp, 8
0x790B55: retn
