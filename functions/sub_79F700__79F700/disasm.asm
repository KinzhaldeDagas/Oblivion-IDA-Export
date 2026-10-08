0x79F700: push    ebp; Oblivion-authoritative fill insertion for st_vector<SFrondGuide>. Snapshots the deep guide value for alias safety, inserts count 0x30 records, uses exception-safe placement construction, reuses capacity or grows by 1.5x, and deep-moves overlapping guide ranges.
0x79F701: mov     ebp, esp
0x79F703: push    0FFFFFFFFh
0x79F705: push    offset SEH_79F700
0x79F70A: mov     eax, large fs:0
0x79F710: push    eax
0x79F711: sub     esp, 3Ch
0x79F714: push    ebx
0x79F715: push    esi
0x79F716: push    edi
0x79F717: mov     eax, ds:0B30AACh
0x79F71C: xor     eax, ebp
0x79F71E: push    eax
0x79F71F: lea     eax, [ebp+var_C]
0x79F722: mov     large fs:0, eax
0x79F728: mov     [ebp+var_10], esp
0x79F72B: mov     esi, ecx
0x79F72D: mov     [ebp+var_14], esi
0x79F730: mov     edi, [ebp+source]
0x79F733: push    edi; source
0x79F734: lea     ecx, [ebp+var_48]; this
0x79F737: call    OB_stVector_SFrondVertex_CopyCtor_010201A0; Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
0x79F73C: fld     dword ptr [edi+10h]
0x79F73F: mov     al, [edi+18h]
0x79F742: fstp    [ebp+var_38]
0x79F745: fld     dword ptr [edi+14h]
0x79F748: mov     ecx, [edi+28h]
0x79F74B: mov     edx, [edi+2Ch]
0x79F74E: fstp    [ebp+var_34]
0x79F751: fld     dword ptr [edi+1Ch]
0x79F754: mov     [ebp+var_30], al
0x79F757: fstp    [ebp+var_2C]
0x79F75A: mov     [ebp+var_20], ecx
0x79F75D: fld     dword ptr [edi+20h]
0x79F760: mov     [ebp+var_1C], edx
0x79F763: fstp    [ebp+var_28]
0x79F766: fld     dword ptr [edi+24h]
0x79F769: fstp    [ebp+var_24]
0x79F76C: mov     ecx, [esi+4]
0x79F76F: xor     ebx, ebx
0x79F771: cmp     ecx, ebx
0x79F773: mov     [ebp+var_4], ebx
0x79F776: jz      short loc_79F78E
0x79F778: mov     edx, [esi+0Ch]
0x79F77B: sub     edx, ecx
0x79F77D: mov     eax, 2AAAAAABh
0x79F782: imul    edx
0x79F784: sar     edx, 3
0x79F787: mov     ebx, edx
0x79F789: shr     ebx, 1Fh
0x79F78C: add     ebx, edx
0x79F78E: mov     edi, [ebp+arg_8]
0x79F791: test    edi, edi
0x79F793: jz      loc_79F9FF
0x79F799: test    ecx, ecx
0x79F79B: jnz     short loc_79F7A1
0x79F79D: xor     eax, eax
0x79F79F: jmp     short loc_79F7B7
0x79F7A1: mov     edx, [esi+8]
0x79F7A4: sub     edx, ecx
0x79F7A6: mov     eax, 2AAAAAABh
0x79F7AB: imul    edx
0x79F7AD: sar     edx, 3
0x79F7B0: mov     eax, edx
0x79F7B2: shr     eax, 1Fh
0x79F7B5: add     eax, edx
0x79F7B7: mov     edx, 5555555h
0x79F7BC: sub     edx, eax
0x79F7BE: cmp     edx, edi
0x79F7C0: jnb     short loc_79F7C7
0x79F7C2: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x79F7C7: test    ecx, ecx
0x79F7C9: jnz     short loc_79F7CF
0x79F7CB: xor     eax, eax
0x79F7CD: jmp     short loc_79F7E5
0x79F7CF: mov     edx, [esi+8]
0x79F7D2: sub     edx, ecx
0x79F7D4: mov     eax, 2AAAAAABh
0x79F7D9: imul    edx
0x79F7DB: sar     edx, 3
0x79F7DE: mov     eax, edx
0x79F7E0: shr     eax, 1Fh
0x79F7E3: add     eax, edx
0x79F7E5: add     eax, edi
0x79F7E7: cmp     ebx, eax
0x79F7E9: jnb     loc_79F919
0x79F7EF: mov     eax, ebx
0x79F7F1: shr     eax, 1
0x79F7F3: mov     edx, 5555555h
0x79F7F8: sub     edx, eax
0x79F7FA: cmp     edx, ebx
0x79F7FC: jnb     short loc_79F802
0x79F7FE: xor     ebx, ebx
0x79F800: jmp     short loc_79F804
0x79F802: add     ebx, eax
0x79F804: test    ecx, ecx
0x79F806: jnz     short loc_79F80C
0x79F808: xor     eax, eax
0x79F80A: jmp     short loc_79F822
0x79F80C: mov     edx, [esi+8]
0x79F80F: sub     edx, ecx
0x79F811: mov     eax, 2AAAAAABh
0x79F816: imul    edx
0x79F818: sar     edx, 3
0x79F81B: mov     eax, edx
0x79F81D: shr     eax, 1Fh
0x79F820: add     eax, edx
0x79F822: add     eax, edi
0x79F824: cmp     ebx, eax
0x79F826: jnb     short loc_79F833
0x79F828: mov     ecx, esi; this
0x79F82A: call    OB_stVector_SFrondGuide_Size_010201A0; Oblivion-authoritative size query for the compact SFrondGuide vector. Computes (end-begin)/0x30; returns zero when begin is null.
0x79F82F: mov     ebx, eax
0x79F831: add     ebx, edi
0x79F833: push    0
0x79F835: push    ebx; count
0x79F836: call    OB_stVector_SFrondGuide_Allocate_010201A0; Allocates count compact 0x30-byte SFrondGuide records from FormHeap and throws std::bad_alloc on count*0x30 overflow.
0x79F83B: mov     ecx, [esi+4]
0x79F83E: mov     byte ptr [ebp+var_18], 0
0x79F842: mov     edx, [ebp+var_18]
0x79F845: push    edx
0x79F846: mov     [ebp+arg_8], eax
0x79F849: mov     edx, [ebp+arg_8]
0x79F84C: push    edx
0x79F84D: push    esi
0x79F84E: push    eax; destinationFirst
0x79F84F: mov     [ebp+source], eax
0x79F852: mov     eax, [ebp+last]
0x79F855: push    eax; last
0x79F856: push    ecx; first
0x79F857: mov     byte ptr [ebp+var_4], 1
0x79F85B: call    OB_SFrondGuide_UninitializedCopy_010201A0; Exception-safe uninitialized copy of compact SFrondGuide records. Placement-copy-constructs [first,last) into destination; unwind cleanup destroys the already constructed prefix before rethrowing.
0x79F860: add     esp, 20h
0x79F863: lea     ecx, [ebp+var_48]
0x79F866: push    ecx; value
0x79F867: push    edi; count
0x79F868: push    eax; destination
0x79F869: mov     ecx, esi; this
0x79F86B: mov     [ebp+arg_8], eax
0x79F86E: call    OB_stVector_SFrondGuide_UninitializedFillNThunk_010201A0; Vector-context checked uninitialized_fill_n wrapper for compact SFrondGuide. Exception-safe construction is delegated to 0x79E190; returns destination+count.
0x79F873: mov     ecx, [esi+8]
0x79F876: mov     byte ptr [ebp+var_18], 0
0x79F87A: mov     edx, [ebp+var_18]
0x79F87D: push    edx
0x79F87E: mov     [ebp+arg_8], eax
0x79F881: mov     edx, [ebp+arg_8]
0x79F884: push    edx
0x79F885: push    esi
0x79F886: push    eax; destinationFirst
0x79F887: mov     eax, [ebp+last]
0x79F88A: push    ecx; last
0x79F88B: push    eax; first
0x79F88C: call    OB_SFrondGuide_UninitializedCopy_010201A0; Exception-safe uninitialized copy of compact SFrondGuide records. Placement-copy-constructs [first,last) into destination; unwind cleanup destroys the already constructed prefix before rethrowing.
0x79F891: mov     ecx, [esi+4]
0x79F894: add     esp, 18h
0x79F897: test    ecx, ecx
0x79F899: jnz     short loc_79F89F
0x79F89B: xor     eax, eax
0x79F89D: jmp     short loc_79F8B5
0x79F89F: mov     edx, [esi+8]
0x79F8A2: sub     edx, ecx
0x79F8A4: mov     eax, 2AAAAAABh
0x79F8A9: imul    edx
0x79F8AB: sar     edx, 3
0x79F8AE: mov     eax, edx
0x79F8B0: shr     eax, 1Fh
0x79F8B3: add     eax, edx
0x79F8B5: add     edi, eax
0x79F8B7: test    ecx, ecx
0x79F8B9: jz      short loc_79F8D6
0x79F8BB: mov     edx, [ebp+arg_8]
0x79F8BE: mov     eax, [esi+8]
0x79F8C1: push    edx
0x79F8C2: push    esi
0x79F8C3: push    eax; last
0x79F8C4: push    ecx; first
0x79F8C5: call    OB_SFrondGuide_DestroyRange_010201A0; Destroys every compact SFrondGuide in [first,last), freeing each embedded SFrondVertex vector.
0x79F8CA: mov     ecx, [esi+4]
0x79F8CD: push    ecx
0x79F8CE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79F8D3: add     esp, 14h
0x79F8D6: mov     eax, [ebp+source]
0x79F8D9: lea     edx, [ebx+ebx*2]
0x79F8DC: shl     edx, 4
0x79F8DF: lea     ecx, [edi+edi*2]
0x79F8E2: add     edx, eax
0x79F8E4: shl     ecx, 4
0x79F8E7: add     ecx, eax
0x79F8E9: mov     [esi+0Ch], edx
0x79F8EC: mov     [esi+8], ecx
0x79F8EF: mov     [esi+4], eax
0x79F8F2: jmp     loc_79F9FF
0x79F8F7: mov     edx, [ebp+arg_8]
0x79F8FA: mov     esi, [ebp+source]
0x79F8FD: mov     ecx, [ebp+var_14]
0x79F900: push    edx; last
0x79F901: push    esi; first
0x79F902: call    OB_SFrondGuide_DestroyRangeThunk_010201A0; Thin destroy-range trampoline for compact SFrondGuide records.
0x79F907: push    esi
0x79F908: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79F90D: add     esp, 4
0x79F910: push    0
0x79F912: push    0
0x79F914: call    ThrowException??
0x79F919: mov     ecx, [esi+8]
0x79F91C: mov     ebx, [ebp+last]
0x79F91F: mov     edx, ecx
0x79F921: sub     edx, ebx
0x79F923: mov     eax, 2AAAAAABh
0x79F928: imul    edx
0x79F92A: sar     edx, 3
0x79F92D: mov     eax, edx
0x79F92F: shr     eax, 1Fh
0x79F932: add     eax, edx
0x79F934: cmp     eax, edi
0x79F936: mov     [ebp+source], ecx
0x79F939: jnb     loc_79F9C7
0x79F93F: lea     eax, [edi+edi*2]
0x79F942: shl     eax, 4
0x79F945: mov     [ebp+source], eax
0x79F948: add     eax, ebx
0x79F94A: push    eax; destinationFirst
0x79F94B: push    ecx; last
0x79F94C: push    ebx; first
0x79F94D: mov     ecx, esi; this
0x79F94F: call    OB_stVector_SFrondGuide_UninitializedCopyThunk_010201A0; Vector-context checked trampoline for exception-safe uninitialized SFrondGuide range copy. The vector owner is used by checked-iterator machinery; constructed records are 0x30 bytes.
0x79F954: mov     ecx, [esi+8]
0x79F957: lea     edx, [ebp+var_48]
0x79F95A: push    edx; value
0x79F95B: mov     edx, ecx
0x79F95D: sub     edx, ebx
0x79F95F: mov     eax, 2AAAAAABh
0x79F964: imul    edx
0x79F966: sar     edx, 3
0x79F969: mov     eax, edx
0x79F96B: shr     eax, 1Fh
0x79F96E: add     eax, edx
0x79F970: sub     edi, eax
0x79F972: push    edi; count
0x79F973: push    ecx; destination
0x79F974: mov     ecx, esi; this
0x79F976: mov     byte ptr [ebp+var_4], 3
0x79F97A: call    OB_stVector_SFrondGuide_UninitializedFillNThunk_010201A0; Vector-context checked uninitialized_fill_n wrapper for compact SFrondGuide. Exception-safe construction is delegated to 0x79E190; returns destination+count.
0x79F97F: mov     eax, [ebp+source]
0x79F982: add     [esi+8], eax
0x79F985: mov     esi, [esi+8]
0x79F988: lea     ecx, [ebp+var_48]
0x79F98B: push    ecx; value
0x79F98C: sub     esi, eax
0x79F98E: push    esi; last
0x79F98F: push    ebx; first
0x79F990: mov     [ebp+var_4], 0
0x79F997: call    OB_SFrondGuide_FillRange_010201A0; Fills an initialized compact SFrondGuide range from one value using deep vector assignment plus scalar-field copies.
0x79F99C: add     esp, 0Ch
0x79F99F: jmp     short loc_79F9FF
0x79F9A1: mov     eax, [ebp+arg_8]
0x79F9A4: mov     ecx, [ebp+var_14]
0x79F9A7: mov     edx, [ecx+8]
0x79F9AA: lea     eax, [eax+eax*2]
0x79F9AD: shl     eax, 4
0x79F9B0: add     edx, eax
0x79F9B2: push    edx; last
0x79F9B3: mov     edx, [ebp+last]
0x79F9B6: add     eax, edx
0x79F9B8: push    eax; first
0x79F9B9: call    OB_SFrondGuide_DestroyRangeThunk_010201A0; Thin destroy-range trampoline for compact SFrondGuide records.
0x79F9BE: push    0
0x79F9C0: push    0
0x79F9C2: call    ThrowException??
0x79F9C7: push    ecx; destinationFirst
0x79F9C8: lea     edi, [edi+edi*2]
0x79F9CB: mov     eax, ecx
0x79F9CD: shl     edi, 4
0x79F9D0: sub     eax, edi
0x79F9D2: push    ecx; last
0x79F9D3: push    eax; first
0x79F9D4: mov     ecx, esi; this
0x79F9D6: mov     [ebp+arg_8], eax
0x79F9D9: call    OB_stVector_SFrondGuide_UninitializedCopyThunk_010201A0; Vector-context checked trampoline for exception-safe uninitialized SFrondGuide range copy. The vector owner is used by checked-iterator machinery; constructed records are 0x30 bytes.
0x79F9DE: mov     ecx, [ebp+arg_8]
0x79F9E1: mov     [esi+8], eax
0x79F9E4: mov     eax, [ebp+source]
0x79F9E7: push    eax; destinationLast
0x79F9E8: push    ecx; last
0x79F9E9: push    ebx; first
0x79F9EA: call    OB_SFrondGuide_CopyAssignRangeBackwardCheckedThunk_010201A0; Checked/STL trampoline for overlap-safe backward SFrondGuide range assignment.
0x79F9EF: lea     edx, [ebp+var_48]
0x79F9F2: push    edx; value
0x79F9F3: add     edi, ebx
0x79F9F5: push    edi; last
0x79F9F6: push    ebx; first
0x79F9F7: call    OB_SFrondGuide_FillRange_010201A0; Fills an initialized compact SFrondGuide range from one value using deep vector assignment plus scalar-field copies.
0x79F9FC: add     esp, 18h
0x79F9FF: mov     eax, [ebp+var_48.begin]
0x79FA02: test    eax, eax
0x79FA04: jz      short loc_79FA0F
0x79FA06: push    eax
0x79FA07: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79FA0C: add     esp, 4
0x79FA0F: mov     ecx, [ebp+var_C]
0x79FA12: mov     large fs:0, ecx
0x79FA19: pop     ecx
0x79FA1A: pop     edi
0x79FA1B: pop     esi
0x79FA1C: pop     ebx
0x79FA1D: mov     esp, ebp
0x79FA1F: pop     ebp
0x79FA20: retn    10h
0x9CC500: lea     ecx, [ebp+var_48]; this
0x9CC503: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC508: mov     edx, [esp-4+last]
0x9CC50C: lea     eax, [edx+0Ch]
0x9CC50F: mov     ecx, [edx-4Ch]
0x9CC512: xor     ecx, eax
0x9CC514: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC519: mov     eax, offset stru_AF57E0
0x9CC51E: jmp     ___CxxFrameHandler3
