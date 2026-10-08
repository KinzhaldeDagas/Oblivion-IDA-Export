0x789030: sub     esp, 8; CSpeedTreeRT::FreeProjectedShadowData. Oblivion destroys CSpeedTreeRT+0x50 projected-shadow storage and clears branch/frond scratch vectors. This is a distinct post-Compute cleanup, not DeleteTransientData.
0x789033: push    ebx
0x789034: push    esi
0x789035: push    edi
0x789036: mov     edi, ecx
0x789038: mov     esi, [edi+50h]
0x78903B: xor     ebx, ebx
0x78903D: cmp     esi, ebx
0x78903F: jz      short loc_78906C
0x789041: cmp     dword ptr [esi+3Ch], 10h
0x789045: jb      short loc_789053
0x789047: mov     eax, [esi+28h]
0x78904A: push    eax
0x78904B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x789050: add     esp, 4
0x789053: mov     dword ptr [esi+3Ch], 0Fh
0x78905A: mov     [esi+38h], ebx
0x78905D: push    esi
0x78905E: mov     [esi+28h], bl
0x789061: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x789066: add     esp, 4
0x789069: mov     [edi+50h], ebx
0x78906C: mov     eax, [edi+4]
0x78906F: cmp     eax, ebx
0x789071: jz      short loc_7890A5
0x789073: lea     esi, [eax+0E8h]
0x789079: push    ebp
0x78907A: mov     ebp, [esi+8]
0x78907D: cmp     [esi+4], ebp
0x789080: jbe     short loc_789087
0x789082: call    __invalid_parameter_noinfo
0x789087: mov     ebx, [esi+4]
0x78908A: cmp     ebx, [esi+8]
0x78908D: jbe     short loc_789094
0x78908F: call    __invalid_parameter_noinfo
0x789094: push    ebp; last
0x789095: push    esi; last
0x789096: push    ebx; first
0x789097: push    esi; first
0x789098: lea     ecx, [esp+28h+result]
0x78909C: push    ecx; result
0x78909D: mov     ecx, esi; this
0x78909F: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x7890A4: pop     ebp
0x7890A5: mov     edi, [edi+60h]
0x7890A8: test    edi, edi
0x7890AA: jz      short loc_7890DC
0x7890AC: lea     esi, [edi+0E8h];
0x7890B2: mov     edi, [esi+8]
0x7890B5: cmp     [esi+4], edi
0x7890B8: jbe     short loc_7890BF
0x7890BA: call    __invalid_parameter_noinfo
0x7890BF: mov     ebx, [esi+4]
0x7890C2: cmp     ebx, [esi+8]
0x7890C5: jbe     short loc_7890CC
0x7890C7: call    __invalid_parameter_noinfo
0x7890CC: push    edi; last
0x7890CD: push    esi; last
0x7890CE: push    ebx; first
0x7890CF: push    esi; first
0x7890D0: lea     edx, [esp+24h+result]
0x7890D4: push    edx; result
0x7890D5: mov     ecx, esi; this
0x7890D7: call    OB_stVector4_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
0x7890DC: pop     edi
0x7890DD: pop     esi
0x7890DE: pop     ebx
0x7890DF: add     esp, 8
0x7890E2: retn
