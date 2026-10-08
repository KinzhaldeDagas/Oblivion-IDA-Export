0x7A8D90: push    ecx; OBLIVION AUTHORITY (2026-08-30): Inserts one SLodEntry at a debug vector iterator and returns the relocated iterator.
0x7A8D91: push    ebx
0x7A8D92: push    ebp
0x7A8D93: mov     ebp, [esp+0Ch+position.owner]
0x7A8D97: push    esi
0x7A8D98: mov     esi, ecx
0x7A8D9A: push    edi
0x7A8D9B: mov     edi, [esi+4]
0x7A8D9E: test    edi, edi
0x7A8DA0: jz      short loc_7A8DAE
0x7A8DA2: mov     eax, [esi+8]
0x7A8DA5: mov     ecx, eax
0x7A8DA7: sub     ecx, edi
0x7A8DA9: sar     ecx, 3
0x7A8DAC: jnz     short loc_7A8DB2
0x7A8DAE: xor     ebx, ebx
0x7A8DB0: jmp     short loc_7A8DD1
0x7A8DB2: cmp     edi, eax
0x7A8DB4: jbe     short loc_7A8DBB
0x7A8DB6: call    __invalid_parameter_noinfo
0x7A8DBB: test    ebp, ebp
0x7A8DBD: jz      short loc_7A8DC3
0x7A8DBF: cmp     ebp, esi
0x7A8DC1: jz      short loc_7A8DC8
0x7A8DC3: call    __invalid_parameter_noinfo
0x7A8DC8: mov     ebx, [esp+14h+position.current]
0x7A8DCC: sub     ebx, edi
0x7A8DCE: sar     ebx, 3
0x7A8DD1: mov     edx, [esp+14h+value]
0x7A8DD5: mov     eax, [esp+14h+position.current]
0x7A8DD9: push    edx; value
0x7A8DDA: push    1; count
0x7A8DDC: push    eax; position
0x7A8DDD: push    ebp; positionOwner
0x7A8DDE: mov     ecx, esi; this
0x7A8DE0: call    OB_stVectorLeafLodEntry_InsertFill_010201A0; OBLIVION AUTHORITY (2026-08-30): Core fill-insert for the 0x10-byte vector<CLeafLodEngine::SLodEntry>; handles capacity growth, relocation, and repeated 8-byte pair insertion.
0x7A8DE5: mov     edi, [esi+4]
0x7A8DE8: cmp     edi, [esi+8]
0x7A8DEB: jbe     short loc_7A8DF2
0x7A8DED: call    __invalid_parameter_noinfo
0x7A8DF2: mov     [esp+14h+position.current], edi
0x7A8DF6: lea     edi, [edi+ebx*8]
0x7A8DF9: cmp     edi, [esi+8]
0x7A8DFC: ja      short loc_7A8E03
0x7A8DFE: cmp     edi, [esi+4]
0x7A8E01: jnb     short loc_7A8E08
0x7A8E03: call    __invalid_parameter_noinfo
0x7A8E08: mov     eax, [esp+14h+result]
0x7A8E0C: mov     [eax+4], edi
0x7A8E0F: pop     edi
0x7A8E10: mov     [eax], esi
0x7A8E12: pop     esi
0x7A8E13: pop     ebp
0x7A8E14: pop     ebx
0x7A8E15: pop     ecx
0x7A8E16: retn    10h
