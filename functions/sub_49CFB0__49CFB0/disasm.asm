0x49CFB0: push    0FFFFFFFFh
0x49CFB2: push    offset SEH_49CFB0
0x49CFB7: mov     eax, large fs:0
0x49CFBD: push    eax
0x49CFBE: push    ecx
0x49CFBF: push    ebp
0x49CFC0: push    esi
0x49CFC1: push    edi
0x49CFC2: mov     eax, ds:0B30AACh
0x49CFC7: xor     eax, esp
0x49CFC9: push    eax
0x49CFCA: lea     eax, [esp+20h+var_C]
0x49CFCE: mov     large fs:0, eax
0x49CFD4: mov     edi, ecx
0x49CFD6: mov     [esp+20h+var_10], edi
0x49CFDA: push    1
0x49CFDC: mov     [esp+24h+var_4], 7
0x49CFE4: call    WaterManager__Destroy?
0x49CFE9: mov     eax, ds:0B35234h
0x49CFEE: test    eax, eax
0x49CFF0: mov     ebp, ds:0A2807Ch
0x49CFF6: jz      short loc_49D01C
0x49CFF8: mov     esi, eax
0x49CFFA: add     eax, 4
0x49CFFD: push    eax; lpAddend
0x49CFFE: call    ebp ; InterlockedDecrement
0x49D000: test    eax, eax
0x49D002: jnz     short loc_49D012
0x49D004: test    esi, esi
0x49D006: jz      short loc_49D012
0x49D008: mov     eax, [esi]
0x49D00A: mov     edx, [eax]
0x49D00C: push    1
0x49D00E: mov     ecx, esi
0x49D010: call    edx
0x49D012: mov     dword ptr ds:0B35234h, 0
0x49D01C: mov     esi, [edi+48h]
0x49D01F: test    esi, esi
0x49D021: mov     byte ptr [esp+20h+var_4], 6
0x49D026: jz      short loc_49D040
0x49D028: lea     eax, [esi+4]
0x49D02B: push    eax; lpAddend
0x49D02C: call    ebp ; InterlockedDecrement
0x49D02E: test    eax, eax
0x49D030: jnz     short loc_49D040
0x49D032: test    esi, esi
0x49D034: jz      short loc_49D040
0x49D036: mov     edx, [esi]
0x49D038: mov     eax, [edx]
0x49D03A: push    1
0x49D03C: mov     ecx, esi
0x49D03E: call    eax
0x49D040: lea     ecx, [edi+30h]
0x49D043: mov     byte ptr [esp+20h+var_4], 5
0x49D048: call    ??1?$NiTPointerList@PAVWadingWaterData@@@@UAE@XZ; NiTPointerList<WadingWaterData *>::~NiTPointerList<WadingWaterData *>(void)
0x49D04D: mov     esi, [edi+14h]
0x49D050: test    esi, esi
0x49D052: mov     byte ptr [esp+20h+var_4], 4
0x49D057: jz      short loc_49D071
0x49D059: lea     ecx, [esi+4]
0x49D05C: push    ecx; lpAddend
0x49D05D: call    ebp ; InterlockedDecrement
0x49D05F: test    eax, eax
0x49D061: jnz     short loc_49D071
0x49D063: test    esi, esi
0x49D065: jz      short loc_49D071
0x49D067: mov     edx, [esi]
0x49D069: mov     eax, [edx]
0x49D06B: push    1
0x49D06D: mov     ecx, esi
0x49D06F: call    eax
0x49D071: mov     esi, [edi+10h]
0x49D074: test    esi, esi
0x49D076: mov     byte ptr [esp+20h+var_4], 3
0x49D07B: jz      short loc_49D095
0x49D07D: lea     ecx, [esi+4]
0x49D080: push    ecx; lpAddend
0x49D081: call    ebp ; InterlockedDecrement
0x49D083: test    eax, eax
0x49D085: jnz     short loc_49D095
0x49D087: test    esi, esi
0x49D089: jz      short loc_49D095
0x49D08B: mov     edx, [esi]
0x49D08D: mov     eax, [edx]
0x49D08F: push    1
0x49D091: mov     ecx, esi
0x49D093: call    eax
0x49D095: mov     esi, [edi+0Ch]
0x49D098: test    esi, esi
0x49D09A: mov     byte ptr [esp+20h+var_4], 2
0x49D09F: jz      short loc_49D0B9
0x49D0A1: lea     ecx, [esi+4]
0x49D0A4: push    ecx; lpAddend
0x49D0A5: call    ebp ; InterlockedDecrement
0x49D0A7: test    eax, eax
0x49D0A9: jnz     short loc_49D0B9
0x49D0AB: test    esi, esi
0x49D0AD: jz      short loc_49D0B9
0x49D0AF: mov     edx, [esi]
0x49D0B1: mov     eax, [edx]
0x49D0B3: push    1
0x49D0B5: mov     ecx, esi
0x49D0B7: call    eax
0x49D0B9: mov     esi, [edi+8]
0x49D0BC: test    esi, esi
0x49D0BE: mov     byte ptr [esp+20h+var_4], 1
0x49D0C3: jz      short loc_49D0DD
0x49D0C5: lea     ecx, [esi+4]
0x49D0C8: push    ecx; lpAddend
0x49D0C9: call    ebp ; InterlockedDecrement
0x49D0CB: test    eax, eax
0x49D0CD: jnz     short loc_49D0DD
0x49D0CF: test    esi, esi
0x49D0D1: jz      short loc_49D0DD
0x49D0D3: mov     edx, [esi]
0x49D0D5: mov     eax, [edx]
0x49D0D7: push    1
0x49D0D9: mov     ecx, esi
0x49D0DB: call    eax
0x49D0DD: mov     esi, [edi+4]
0x49D0E0: test    esi, esi
0x49D0E2: mov     byte ptr [esp+20h+var_4], 0
0x49D0E7: jz      short loc_49D101
0x49D0E9: lea     ecx, [esi+4]
0x49D0EC: push    ecx; lpAddend
0x49D0ED: call    ebp ; InterlockedDecrement
0x49D0EF: test    eax, eax
0x49D0F1: jnz     short loc_49D101
0x49D0F3: test    esi, esi
0x49D0F5: jz      short loc_49D101
0x49D0F7: mov     edx, [esi]
0x49D0F9: mov     eax, [edx]
0x49D0FB: push    1
0x49D0FD: mov     ecx, esi
0x49D0FF: call    eax
0x49D101: mov     edi, [edi]
0x49D103: test    edi, edi
0x49D105: mov     [esp+20h+var_4], 0FFFFFFFFh
0x49D10D: jz      short loc_49D127
0x49D10F: lea     ecx, [edi+4]
0x49D112: push    ecx; lpAddend
0x49D113: call    ebp ; InterlockedDecrement
0x49D115: test    eax, eax
0x49D117: jnz     short loc_49D127
0x49D119: test    edi, edi
0x49D11B: jz      short loc_49D127
0x49D11D: mov     edx, [edi]
0x49D11F: mov     eax, [edx]
0x49D121: push    1
0x49D123: mov     ecx, edi
0x49D125: call    eax
0x49D127: mov     ecx, dword ptr [esp+20h+var_C]
0x49D12B: mov     large fs:0, ecx
0x49D132: pop     ecx
0x49D133: pop     edi
0x49D134: pop     esi
0x49D135: pop     ebp
0x49D136: add     esp, 10h
0x49D139: retn
