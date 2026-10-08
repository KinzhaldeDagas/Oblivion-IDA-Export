0x798090: sub     esp, 0Ch; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::SetNumLodLevels clears the two nested strip containers and 32-bit triangle totals, records the unsigned-short LOD count, resizes both outer vectors with empty inner values, and zeroes totals. Exact element widths derive from the shipped executable.
0x798093: push    ebx
0x798094: push    ebp
0x798095: push    esi
0x798096: push    edi
0x798097: mov     edi, ecx
0x798099: mov     esi, [edi+40h]
0x79809C: cmp     [edi+3Ch], esi
0x79809F: lea     ebp, [edi+38h]
0x7980A2: jbe     short loc_7980A9
0x7980A4: call    __invalid_parameter_noinfo
0x7980A9: mov     ebx, [ebp+4]
0x7980AC: cmp     ebx, [ebp+8]
0x7980AF: jbe     short loc_7980B6
0x7980B1: call    __invalid_parameter_noinfo
0x7980B6: push    esi; last
0x7980B7: push    ebp; last
0x7980B8: push    ebx; first
0x7980B9: push    ebp; first
0x7980BA: lea     eax, [esp+2Ch+Src]
0x7980BE: push    eax; result
0x7980BF: mov     ecx, ebp; this
0x7980C1: call    OB_stVector_stVectorUShort_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short>>. Move/copy-assigns the suffix, destroys the vacated owner range, updates end, and returns the checked iterator.
0x7980C6: mov     esi, [edi+50h]
0x7980C9: cmp     [edi+4Ch], esi
0x7980CC: lea     ebx, [edi+48h]
0x7980CF: jbe     short loc_7980D6
0x7980D1: call    __invalid_parameter_noinfo
0x7980D6: mov     eax, [ebx+4]
0x7980D9: cmp     eax, [ebx+8]
0x7980DC: mov     [esp+1Ch+var_C], eax
0x7980E0: jbe     short loc_7980EB
0x7980E2: call    __invalid_parameter_noinfo
0x7980E7: mov     eax, [esp+1Ch+var_C]
0x7980EB: push    esi; last
0x7980EC: push    ebx; last
0x7980ED: push    eax; first
0x7980EE: push    ebx; first
0x7980EF: lea     ecx, [esp+2Ch+Src]
0x7980F3: push    ecx; result
0x7980F4: mov     ecx, ebx; this
0x7980F6: call    OB_stVector_stVectorUShortPtr_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short*>>. Uses the 4-byte inner-vector assignment family, destroys vacated owners, and updates end.
0x7980FB: mov     eax, [edi+30h]
0x7980FE: cmp     [edi+2Ch], eax
0x798101: lea     esi, [edi+28h]
0x798104: mov     dword ptr [esp+1Ch+Src], eax
0x798108: jbe     short loc_79810F
0x79810A: call    __invalid_parameter_noinfo
0x79810F: mov     eax, [esi+4]
0x798112: cmp     eax, [esi+8]
0x798115: mov     [esp+1Ch+var_C], eax
0x798119: jbe     short loc_798124
0x79811B: call    __invalid_parameter_noinfo
0x798120: mov     eax, [esp+1Ch+var_C]
0x798124: mov     edx, dword ptr [esp+1Ch+Src]
0x798128: push    edx; last
0x798129: push    esi; last
0x79812A: push    eax; first
0x79812B: push    esi; first
0x79812C: lea     eax, [esp+2Ch+Src]
0x798130: push    eax; result
0x798131: mov     ecx, esi; this
0x798133: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x798138: mov     cx, [esp+1Ch+lodCount]
0x79813D: mov     [edi+20h], cx
0x798141: sub     esp, 10h
0x798144: movzx   edi, cx
0x798147: mov     eax, esp
0x798149: xor     edx, edx
0x79814B: mov     dword ptr [esp+2Ch+lodCount], esp
0x79814F: push    edi; newSize
0x798150: mov     ecx, ebp; this
0x798152: mov     [eax+4], edx
0x798155: mov     [eax+8], edx
0x798158: mov     [eax+0Ch], edx
0x79815B: call    OB_stVector_stVectorUShort_ResizeFill_010201A0; OBLIVION AUTHORITY (2026-08-30): Resizes vector<vector<unsigned short>> using an empty inner fill value. Growth delegates to the decoded outer insert-fill; shrink destroys erased inner owners.
0x798160: sub     esp, 10h
0x798163: mov     eax, esp
0x798165: xor     ebp, ebp
0x798167: mov     dword ptr [esp+2Ch+lodCount], esp
0x79816B: push    edi; newSize
0x79816C: mov     ecx, ebx; this
0x79816E: mov     [eax+4], ebp
0x798171: mov     [eax+8], ebp
0x798174: mov     [eax+0Ch], ebp
0x798177: call    OB_stVector_stVectorUShortPtr_ResizeFill_010201A0; OBLIVION AUTHORITY (2026-08-30): Resizes vector<vector<unsigned short*>>. Its 4-byte pointer element permits structural reuse of the shared vector<vector<4-byte>> insert helper; the semantic type is fixed by CIndexedGeometry callers.
0x79817C: push    ebp; value
0x79817D: push    edi; newSize
0x79817E: mov     ecx, esi; this
0x798180: call    OB_stVectorUInt32_ResizeFill_010201A0; OBLIVION AUTHORITY (2026-08-30): Resizes a vector<unsigned int>, inserting fill values when growing and erasing the tail when shrinking; used for per-LOD triangle totals.
0x798185: xor     ebx, ebx
0x798187: cmp     edi, ebp
0x798189: jle     short loc_7981B5
0x79818B: jmp     short loc_798190
0x798190: mov     ecx, [esi+4]
0x798193: cmp     ecx, ebp
0x798195: jz      short loc_7981A3
0x798197: mov     eax, [esi+8]
0x79819A: sub     eax, ecx
0x79819C: sar     eax, 2
0x79819F: cmp     ebx, eax
0x7981A1: jb      short loc_7981A8
0x7981A3: call    __invalid_parameter_noinfo
0x7981A8: mov     ecx, [esi+4]
0x7981AB: mov     [ecx+ebx*4], ebp
0x7981AE: add     ebx, 1
0x7981B1: cmp     ebx, edi
0x7981B3: jl      short loc_798190
0x7981B5: pop     edi
0x7981B6: pop     esi
0x7981B7: pop     ebp
0x7981B8: pop     ebx
0x7981B9: add     esp, 0Ch
0x7981BC: retn    4
