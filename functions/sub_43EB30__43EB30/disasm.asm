0x43EB30: sub     esp, 8; Constructs a 0x18-byte FaceGenMatrix. Embedded vector layout: allocator state +0x08, begin +0x0C, end +0x10, capacity end +0x14.
0x43EB33: push    ebx
0x43EB34: xor     eax, eax
0x43EB36: push    ebp
0x43EB37: push    esi
0x43EB38: push    edi
0x43EB39: mov     edi, ecx
0x43EB3B: lea     esi, [edi+8]
0x43EB3E: mov     [edi], eax
0x43EB40: mov     [edi+4], eax
0x43EB43: mov     ebx, eax
0x43EB45: cmp     eax, ebx
0x43EB47: mov     [esi+4], eax
0x43EB4A: mov     [esi+8], eax
0x43EB4D: mov     [esi+0Ch], eax
0x43EB50: jbe     short loc_43EB57
0x43EB52: call    __invalid_parameter_noinfo
0x43EB57: mov     ebp, [esi+4]
0x43EB5A: cmp     ebp, [esi+8]
0x43EB5D: jbe     short loc_43EB64
0x43EB5F: call    __invalid_parameter_noinfo
0x43EB64: push    ebx; last
0x43EB65: push    esi; last
0x43EB66: push    ebp; first
0x43EB67: push    esi; first
0x43EB68: lea     eax, [esp+28h+result]
0x43EB6C: push    eax; result
0x43EB6D: mov     ecx, esi; this
0x43EB6F: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x43EB74: mov     eax, edi
0x43EB76: pop     edi
0x43EB77: pop     esi
0x43EB78: pop     ebp
0x43EB79: pop     ebx
0x43EB7A: add     esp, 8
0x43EB7D: retn
