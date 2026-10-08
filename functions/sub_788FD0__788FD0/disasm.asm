0x788FD0: mov     eax, [ecx+4]; Oblivion CSpeedTreeRT branch cleanup wrapper: when branchGeometry exists, clears its packed-color vector at CIndexedGeometry+0x58 after Bethesda copies the geometry.
0x788FD3: sub     esp, 8
0x788FD6: test    eax, eax
0x788FD8: jz      short loc_78900D
0x788FDA: push    ebx
0x788FDB: push    esi
0x788FDC: lea     esi, [eax+58h]
0x788FDF: push    edi
0x788FE0: mov     edi, [esi+8]
0x788FE3: cmp     [esi+4], edi
0x788FE6: jbe     short loc_788FED
0x788FE8: call    __invalid_parameter_noinfo
0x788FED: mov     ebx, [esi+4]
0x788FF0: cmp     ebx, [esi+8]
0x788FF3: jbe     short loc_788FFA
0x788FF5: call    __invalid_parameter_noinfo
0x788FFA: push    edi; last
0x788FFB: push    esi; last
0x788FFC: push    ebx; first
0x788FFD: push    esi; first
0x788FFE: lea     eax, [esp+24h+result]
0x789002: push    eax; result
0x789003: mov     ecx, esi; this
0x789005: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x78900A: pop     edi
0x78900B: pop     esi
0x78900C: pop     ebx
0x78900D: add     esp, 8
0x789010: retn
