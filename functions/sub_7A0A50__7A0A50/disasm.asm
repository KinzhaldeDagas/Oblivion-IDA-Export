0x7A0A50: push    ecx; Checked insert-one wrapper for st_vector<SFrondGuide>. Preserves the iterator index across possible reallocation, delegates to InsertFill(count=1), and returns the 8-byte {owner,current} iterator.
0x7A0A51: push    ebx
0x7A0A52: push    ebp
0x7A0A53: mov     ebp, [esp+0Ch+position]
0x7A0A57: push    esi
0x7A0A58: mov     esi, ecx
0x7A0A5A: push    edi
0x7A0A5B: mov     edi, [esi+4]
0x7A0A5E: test    edi, edi
0x7A0A60: jz      short loc_7A0A7C
0x7A0A62: mov     ebx, [esi+8]
0x7A0A65: mov     ecx, ebx
0x7A0A67: sub     ecx, edi
0x7A0A69: mov     eax, 2AAAAAABh
0x7A0A6E: imul    ecx
0x7A0A70: sar     edx, 3
0x7A0A73: mov     eax, edx
0x7A0A75: shr     eax, 1Fh
0x7A0A78: add     eax, edx
0x7A0A7A: jnz     short loc_7A0A84
0x7A0A7C: mov     ebx, [esp+14h+expectedOwner]
0x7A0A80: xor     edi, edi
0x7A0A82: jmp     short loc_7A0AB3
0x7A0A84: cmp     edi, ebx
0x7A0A86: jbe     short loc_7A0A8D
0x7A0A88: call    __invalid_parameter_noinfo
0x7A0A8D: mov     ebx, [esp+14h+expectedOwner]
0x7A0A91: test    ebx, ebx
0x7A0A93: jz      short loc_7A0A99
0x7A0A95: cmp     ebx, esi
0x7A0A97: jz      short loc_7A0A9E
0x7A0A99: call    __invalid_parameter_noinfo
0x7A0A9E: mov     ecx, ebp
0x7A0AA0: sub     ecx, edi
0x7A0AA2: mov     eax, 2AAAAAABh
0x7A0AA7: imul    ecx
0x7A0AA9: sar     edx, 3
0x7A0AAC: mov     edi, edx
0x7A0AAE: shr     edi, 1Fh
0x7A0AB1: add     edi, edx
0x7A0AB3: mov     ecx, [esp+14h+value]
0x7A0AB7: push    ecx; value
0x7A0AB8: push    1; count
0x7A0ABA: push    ebp; position
0x7A0ABB: push    ebx; expectedOwner
0x7A0ABC: mov     ecx, esi; this
0x7A0ABE: call    OB_stVector_SFrondGuide_InsertFill_010201A0; Oblivion-authoritative fill insertion for st_vector<SFrondGuide>. Snapshots the deep guide value for alias safety, inserts count 0x30 records, uses exception-safe placement construction, reuses capacity or grows by 1.5x, and deep-moves overlapping guide ranges.
0x7A0AC3: mov     ebx, [esi+4]
0x7A0AC6: cmp     ebx, [esi+8]
0x7A0AC9: jbe     short loc_7A0AD0
0x7A0ACB: call    __invalid_parameter_noinfo
0x7A0AD0: lea     edx, [edi+edi*2]
0x7A0AD3: shl     edx, 4
0x7A0AD6: lea     edi, [edx+ebx]
0x7A0AD9: cmp     edi, [esi+8]
0x7A0ADC: mov     [esp+14h+position], ebx
0x7A0AE0: ja      short loc_7A0AE7
0x7A0AE2: cmp     edi, [esi+4]
0x7A0AE5: jnb     short loc_7A0AEC
0x7A0AE7: call    __invalid_parameter_noinfo
0x7A0AEC: mov     eax, [esp+14h+result]
0x7A0AF0: mov     [eax+4], edi
0x7A0AF3: pop     edi
0x7A0AF4: mov     [eax], esi
0x7A0AF6: pop     esi
0x7A0AF7: pop     ebp
0x7A0AF8: pop     ebx
0x7A0AF9: pop     ecx
0x7A0AFA: retn    10h
