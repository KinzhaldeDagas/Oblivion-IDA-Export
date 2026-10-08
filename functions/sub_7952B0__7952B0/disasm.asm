0x7952B0: push    ecx; OBLIVION AUTHORITY (2026-08-30): vector<unsigned short> insert-fill core. Uses 2-byte element arithmetic, overlap-safe moves, and 1.5x growth.
0x7952B1: mov     eax, [esp+4+arg_C]
0x7952B5: push    ebp
0x7952B6: push    esi
0x7952B7: mov     esi, ecx
0x7952B9: movzx   ecx, word ptr [eax]
0x7952BC: mov     edx, [esi+4]
0x7952BF: test    edx, edx
0x7952C1: mov     [esp+0Ch+arg_C], ecx
0x7952C5: jnz     short loc_7952CB
0x7952C7: xor     eax, eax
0x7952C9: jmp     short loc_7952D2
0x7952CB: mov     eax, [esi+0Ch]
0x7952CE: sub     eax, edx
0x7952D0: sar     eax, 1
0x7952D2: mov     ebp, [esp+0Ch+value]
0x7952D6: test    ebp, ebp
0x7952D8: jz      loc_795478
0x7952DE: test    edx, edx
0x7952E0: jnz     short loc_7952E6
0x7952E2: xor     ecx, ecx
0x7952E4: jmp     short loc_7952ED
0x7952E6: mov     ecx, [esi+8]
0x7952E9: sub     ecx, edx
0x7952EB: sar     ecx, 1
0x7952ED: push    edi
0x7952EE: or      edi, 0FFFFFFFFh
0x7952F1: sub     edi, ecx
0x7952F3: cmp     edi, ebp
0x7952F5: jnb     short loc_7952FC
0x7952F7: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x7952FC: test    edx, edx
0x7952FE: jnz     short loc_795304
0x795300: xor     ecx, ecx
0x795302: jmp     short loc_79530B
0x795304: mov     ecx, [esi+8]
0x795307: sub     ecx, edx
0x795309: sar     ecx, 1
0x79530B: add     ecx, ebp
0x79530D: cmp     eax, ecx
0x79530F: push    ebx; MaxCount
0x795310: jnb     loc_7953E9
0x795316: mov     ecx, eax
0x795318: shr     ecx, 1
0x79531A: or      edi, 0FFFFFFFFh
0x79531D: sub     edi, ecx
0x79531F: cmp     edi, eax
0x795321: jnb     short loc_795327
0x795323: xor     eax, eax
0x795325: jmp     short loc_795329
0x795327: add     eax, ecx
0x795329: test    edx, edx
0x79532B: jnz     short loc_795331
0x79532D: xor     ecx, ecx
0x79532F: jmp     short loc_795338
0x795331: mov     ecx, [esi+8]
0x795334: sub     ecx, edx
0x795336: sar     ecx, 1
0x795338: add     ecx, ebp
0x79533A: cmp     eax, ecx
0x79533C: jnb     short loc_79534F
0x79533E: test    edx, edx
0x795340: jnz     short loc_795346
0x795342: xor     eax, eax
0x795344: jmp     short loc_79534D
0x795346: mov     eax, [esi+8]
0x795349: sub     eax, edx
0x79534B: sar     eax, 1
0x79534D: add     eax, ebp
0x79534F: add     eax, eax
0x795351: push    eax; Size
0x795352: mov     [esp+18h+var_4], eax
0x795356: call    FormHeapAlloc
0x79535B: mov     ebx, [esp+18h+position.current]
0x79535F: mov     ecx, [esi+4]
0x795362: mov     edi, eax
0x795364: mov     eax, ebx
0x795366: sub     eax, ecx
0x795368: add     esp, 4
0x79536B: sar     eax, 1
0x79536D: lea     eax, [eax+eax]
0x795370: lea     edx, [eax+edi]
0x795373: mov     [esp+14h+value], edx
0x795377: jz      short loc_795385
0x795379: push    eax; Src
0x79537A: push    ecx; Src
0x79537B: push    eax; DstSize
0x79537C: push    edi; Dst
0x79537D: call    _memmove_s
0x795382: add     esp, 10h
0x795385: mov     ecx, [esp+14h+value]
0x795389: lea     eax, [esp+14h+arg_C]
0x79538D: push    eax; value
0x79538E: push    ebp; count
0x79538F: push    ecx; destination
0x795390: mov     ecx, esi
0x795392: call    OB_stVectorUShort_UninitializedFillN_010201A0; OBLIVION AUTHORITY (2026-08-30): Trivial uninitialized_fill_n for unsigned-short storage; writes count copies and returns destination+count.
0x795397: mov     ecx, [esi+8]
0x79539A: sub     ecx, ebx
0x79539C: sar     ecx, 1
0x79539E: jz      short loc_7953AE
0x7953A0: add     ecx, ecx
0x7953A2: push    ecx; Src
0x7953A3: push    ebx; Src
0x7953A4: push    ecx; DstSize
0x7953A5: push    eax; Dst
0x7953A6: call    _memmove_s
0x7953AB: add     esp, 10h
0x7953AE: mov     ecx, [esi+4]
0x7953B1: test    ecx, ecx
0x7953B3: jnz     short loc_7953B9
0x7953B5: xor     eax, eax
0x7953B7: jmp     short loc_7953C0
0x7953B9: mov     eax, [esi+8]
0x7953BC: sub     eax, ecx
0x7953BE: sar     eax, 1
0x7953C0: add     ebp, eax
0x7953C2: test    ecx, ecx
0x7953C4: jz      short loc_7953CF
0x7953C6: push    ecx
0x7953C7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7953CC: add     esp, 4
0x7953CF: mov     edx, [esp+14h+var_4]
0x7953D3: pop     ebx
0x7953D4: lea     eax, [edi+ebp*2]
0x7953D7: add     edx, edi
0x7953D9: mov     [esi+4], edi
0x7953DC: pop     edi
0x7953DD: mov     [esi+0Ch], edx
0x7953E0: mov     [esi+8], eax
0x7953E3: pop     esi
0x7953E4: pop     ebp
0x7953E5: pop     ecx
0x7953E6: retn    10h
0x7953E9: mov     ebx, [esi+8]
0x7953EC: mov     edi, [esp+14h+position.current]
0x7953F0: mov     ecx, ebx
0x7953F2: sub     ecx, edi
0x7953F4: sar     ecx, 1
0x7953F6: lea     eax, [ebp+ebp+0]
0x7953FA: cmp     ecx, ebp
0x7953FC: mov     [esp+14h+value], eax
0x795400: mov     ecx, esi
0x795402: jnb     short loc_79544A
0x795404: add     eax, edi
0x795406: push    eax; destination
0x795407: push    ebx; last
0x795408: push    edi; first
0x795409: call    OB_stVectorUShort_UninitializedCopyRange_010201A0
0x79540E: mov     eax, [esi+8]
0x795411: mov     ecx, eax
0x795413: sub     ecx, edi
0x795415: sar     ecx, 1
0x795417: lea     edx, [esp+14h+arg_C]
0x79541B: push    edx; value
0x79541C: sub     ebp, ecx
0x79541E: push    ebp; count
0x79541F: push    eax; destination
0x795420: mov     ecx, esi
0x795422: call    OB_stVectorUShort_UninitializedFillN_010201A0; OBLIVION AUTHORITY (2026-08-30): Trivial uninitialized_fill_n for unsigned-short storage; writes count copies and returns destination+count.
0x795427: mov     eax, [esp+14h+value]
0x79542B: add     [esi+8], eax
0x79542E: mov     esi, [esi+8]
0x795431: lea     edx, [esp+14h+arg_C]
0x795435: push    edx; value
0x795436: sub     esi, eax
0x795438: push    esi; last
0x795439: push    edi; first
0x79543A: call    OB_stVectorUShort_CopyFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns one unsigned-short value across [first,last) and returns the advanced destination.
0x79543F: add     esp, 0Ch
0x795442: pop     ebx
0x795443: pop     edi
0x795444: pop     esi
0x795445: pop     ebp
0x795446: pop     ecx
0x795447: retn    10h
0x79544A: push    ebx; destination
0x79544B: mov     ebp, ebx
0x79544D: sub     ebp, eax
0x79544F: push    ebx; last
0x795450: push    ebp; first
0x795451: call    OB_stVectorUShort_UninitializedCopyRange_010201A0
0x795456: push    ebx; destinationEnd
0x795457: push    ebp; last
0x795458: push    edi; first
0x795459: mov     [esi+8], eax
0x79545C: call    OB_stVectorUShort_CopyBackwardRange_010201A0
0x795461: mov     ecx, [esp+20h+value]
0x795465: lea     eax, [esp+20h+arg_C]
0x795469: push    eax; value
0x79546A: add     ecx, edi
0x79546C: push    ecx; last
0x79546D: push    edi; first
0x79546E: call    OB_stVectorUShort_CopyFillRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Assigns one unsigned-short value across [first,last) and returns the advanced destination.
0x795473: add     esp, 18h
0x795476: pop     ebx
0x795477: pop     edi
0x795478: pop     esi
0x795479: pop     ebp
0x79547A: pop     ecx
0x79547B: retn    10h
