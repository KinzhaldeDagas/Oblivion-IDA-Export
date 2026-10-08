0x795D20: push    esi; OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<unsigned short> value across an initialized owner range by repeated deep copy assignment.
0x795D21: mov     esi, [esp+4+first]
0x795D25: push    edi
0x795D26: mov     edi, [esp+8+last]
0x795D2A: cmp     esi, edi
0x795D2C: jz      short loc_795D43
0x795D2E: push    ebx
0x795D2F: mov     ebx, [esp+0Ch+value]
0x795D33: push    ebx; source
0x795D34: mov     ecx, esi; this
0x795D36: call    OB_stVectorUShort_CopyAssign_010201A0; OBLIVION AUTHORITY (2026-08-30): Deep copy assignment for vector<unsigned short>, with self/empty/reuse/reallocate paths and exact end repair.
0x795D3B: add     esi, 10h
0x795D3E: cmp     esi, edi
0x795D40: jnz     short loc_795D33
0x795D42: pop     ebx
0x795D43: pop     edi
0x795D44: pop     esi
0x795D45: retn
