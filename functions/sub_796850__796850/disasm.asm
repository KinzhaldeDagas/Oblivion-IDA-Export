0x796850: sub     esp, 8; OBLIVION AUTHORITY (2026-08-30): clear() for vector<vector<unsigned short>>, implemented as checked erase(begin,end) while retaining outer capacity.
0x796853: push    ebx
0x796854: push    esi
0x796855: mov     esi, ecx
0x796857: mov     ebx, [esi+8]
0x79685A: cmp     [esi+4], ebx
0x79685D: push    edi
0x79685E: jbe     short loc_796865
0x796860: call    __invalid_parameter_noinfo
0x796865: mov     edi, [esi+4]
0x796868: cmp     edi, [esi+8]
0x79686B: jbe     short loc_796872
0x79686D: call    __invalid_parameter_noinfo
0x796872: push    ebx; last
0x796873: push    esi; last
0x796874: push    edi; first
0x796875: push    esi; first
0x796876: lea     eax, [esp+24h+result]
0x79687A: push    eax; result
0x79687B: mov     ecx, esi; this
0x79687D: call    OB_stVector_stVectorUShort_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short>>. Move/copy-assigns the suffix, destroys the vacated owner range, updates end, and returns the checked iterator.
0x796882: pop     edi
0x796883: pop     esi
0x796884: pop     ebx
0x796885: add     esp, 8
0x796888: retn
