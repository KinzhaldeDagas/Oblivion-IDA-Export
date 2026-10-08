0x788F00: sub     esp, 8; Oblivion CIndexedGeometry cleanup used after branch extraction: clears the float vector at +0xF8 and byte vector at +0x108, observed as primary wind weights and primary wind matrix indices.
0x788F03: push    ebx
0x788F04: push    ebp
0x788F05: push    esi
0x788F06: push    edi; MaxCount
0x788F07: mov     edi, ecx
0x788F09: mov     ebx, [edi+100h]
0x788F0F: cmp     [edi+0FCh], ebx
0x788F15: lea     esi, [edi+0F8h]
0x788F1B: jbe     short loc_788F22
0x788F1D: call    __invalid_parameter_noinfo
0x788F22: mov     ebp, [esi+4]
0x788F25: cmp     ebp, [esi+8]
0x788F28: jbe     short loc_788F2F
0x788F2A: call    __invalid_parameter_noinfo
0x788F2F: push    ebx; last
0x788F30: push    esi; last
0x788F31: push    ebp; first
0x788F32: push    esi; first
0x788F33: lea     eax, [esp+28h+result]
0x788F37: push    eax; result
0x788F38: mov     ecx, esi; this
0x788F3A: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x788F3F: mov     esi, [edi+110h]
0x788F45: cmp     [edi+10Ch], esi
0x788F4B: jbe     short loc_788F52
0x788F4D: call    __invalid_parameter_noinfo
0x788F52: mov     ebx, [edi+10Ch]
0x788F58: cmp     ebx, [edi+110h]
0x788F5E: jbe     short loc_788F65
0x788F60: call    __invalid_parameter_noinfo
0x788F65: cmp     ebx, esi
0x788F67: jz      short loc_788F8A
0x788F69: mov     eax, [edi+110h]
0x788F6F: sub     eax, esi
0x788F71: test    eax, eax
0x788F73: lea     ebp, [eax+ebx]
0x788F76: jle     short loc_788F84
0x788F78: push    eax; Src
0x788F79: push    esi; Src
0x788F7A: push    eax; DstSize
0x788F7B: push    ebx; Dst
0x788F7C: call    _memmove_s
0x788F81: add     esp, 10h
0x788F84: mov     [edi+110h], ebp
0x788F8A: pop     edi
0x788F8B: pop     esi
0x788F8C: pop     ebp
0x788F8D: pop     ebx
0x788F8E: add     esp, 8
0x788F91: retn
