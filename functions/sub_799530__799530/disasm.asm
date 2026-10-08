0x799530: mov     eax, [esp+value]; vector<float>::insert(position,count,value) implementation. Snapshots *value for alias safety, enforces max_size 0x3FFFFFFF, reuses capacity with overlap-aware moves/fills, or reallocates using the shipped approximately-1.5x growth policy.
0x799534: fld     dword ptr [eax]
0x799536: push    ebx
0x799537: push    esi
0x799538: fstp    [esp+8+value]
0x79953C: mov     esi, ecx
0x79953E: mov     ecx, [esi+4]
0x799541: test    ecx, ecx
0x799543: push    edi
0x799544: jnz     short loc_79954A
0x799546: xor     edi, edi
0x799548: jmp     short loc_799552
0x79954A: mov     edi, [esi+0Ch]
0x79954D: sub     edi, ecx
0x79954F: sar     edi, 2
0x799552: mov     ebx, [esp+0Ch+count]
0x799556: test    ebx, ebx
0x799558: jz      loc_7996DF
0x79955E: test    ecx, ecx
0x799560: jnz     short loc_799566
0x799562: xor     eax, eax
0x799564: jmp     short loc_79956E
0x799566: mov     eax, [esi+8]
0x799569: sub     eax, ecx
0x79956B: sar     eax, 2
0x79956E: mov     edx, 3FFFFFFFh
0x799573: sub     edx, eax
0x799575: cmp     edx, ebx
0x799577: jnb     short loc_79957E
0x799579: call    OB_stVector_ThrowLengthError_010201A0; Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
0x79957E: test    ecx, ecx
0x799580: jnz     short loc_799586
0x799582: xor     eax, eax
0x799584: jmp     short loc_79958E
0x799586: mov     eax, [esi+8]
0x799589: sub     eax, ecx
0x79958B: sar     eax, 2
0x79958E: add     eax, ebx
0x799590: cmp     edi, eax
0x799592: push    ebp
0x799593: jnb     loc_79964D
0x799599: mov     eax, edi
0x79959B: shr     eax, 1
0x79959D: mov     edx, 3FFFFFFFh
0x7995A2: sub     edx, eax
0x7995A4: cmp     edx, edi
0x7995A6: jnb     short loc_7995AC
0x7995A8: xor     edi, edi
0x7995AA: jmp     short loc_7995AE
0x7995AC: add     edi, eax
0x7995AE: test    ecx, ecx
0x7995B0: jnz     short loc_7995B6
0x7995B2: xor     eax, eax
0x7995B4: jmp     short loc_7995BE
0x7995B6: mov     eax, [esi+8]
0x7995B9: sub     eax, ecx
0x7995BB: sar     eax, 2
0x7995BE: add     eax, ebx
0x7995C0: cmp     edi, eax
0x7995C2: jnb     short loc_7995D6
0x7995C4: test    ecx, ecx
0x7995C6: jnz     short loc_7995CC
0x7995C8: xor     edi, edi
0x7995CA: jmp     short loc_7995D4
0x7995CC: mov     edi, [esi+8]
0x7995CF: sub     edi, ecx
0x7995D1: sar     edi, 2
0x7995D4: add     edi, ebx
0x7995D6: push    0
0x7995D8: push    edi; count
0x7995D9: call    OB_stVector4_Allocate_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded allocator for vectors with 4-byte elements. Validates count*4 overflow, throws bad_alloc on overflow, and allocates through FormHeapAlloc; FindPairs uses it for vector<bool>'s uint32 backing words.
0x7995DE: mov     ecx, [esi+4]
0x7995E1: add     esp, 8
0x7995E4: mov     ebp, eax
0x7995E6: mov     eax, [esp+10h+Src]
0x7995EA: push    ebp; destination
0x7995EB: push    eax; last
0x7995EC: push    ecx; first
0x7995ED: mov     ecx, esi
0x7995EF: call    OB_stVector4_UninitializedCopyRange_010201A0
0x7995F4: lea     edx, [esp+10h+value]
0x7995F8: push    edx; value
0x7995F9: push    ebx; count
0x7995FA: push    eax; destination
0x7995FB: mov     ecx, esi
0x7995FD: call    OB_stVectorFloat_UninitializedFillN_010201A0; vector<float> uninitialized-fill primitive: constructs count four-byte float elements at destination from *value and returns destination+count. Identified from Oblivion call shape and four-byte stride.
0x799602: mov     ecx, [esp+10h+Src]
0x799606: push    eax; destination
0x799607: mov     eax, [esi+8]
0x79960A: push    eax; last
0x79960B: push    ecx; first
0x79960C: mov     ecx, esi
0x79960E: call    OB_stVector4_UninitializedCopyRange_010201A0
0x799613: mov     eax, [esi+4]
0x799616: test    eax, eax
0x799618: jnz     short loc_79961E
0x79961A: xor     ecx, ecx
0x79961C: jmp     short loc_799626
0x79961E: mov     ecx, [esi+8]
0x799621: sub     ecx, eax
0x799623: sar     ecx, 2
0x799626: add     ebx, ecx
0x799628: test    eax, eax
0x79962A: jz      short loc_799635
0x79962C: push    eax
0x79962D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x799632: add     esp, 4
0x799635: lea     edx, [ebp+edi*4+0]
0x799639: lea     eax, [ebp+ebx*4+0]
0x79963D: mov     [esi+4], ebp
0x799640: pop     ebp
0x799641: pop     edi
0x799642: mov     [esi+0Ch], edx
0x799645: mov     [esi+8], eax
0x799648: pop     esi
0x799649: pop     ebx
0x79964A: retn    10h
0x79964D: mov     ebp, [esi+8]
0x799650: mov     edi, [esp+10h+Src]
0x799654: mov     ecx, ebp
0x799656: sub     ecx, edi
0x799658: sar     ecx, 2
0x79965B: lea     eax, ds:0[ebx*4]
0x799662: cmp     ecx, ebx
0x799664: mov     [esp+10h+count], eax
0x799668: mov     ecx, esi
0x79966A: jnb     short loc_7996B2
0x79966C: add     eax, edi
0x79966E: push    eax; destination
0x79966F: push    ebp; last
0x799670: push    edi; first
0x799671: call    OB_stVector4_UninitializedCopyRange_010201A0
0x799676: mov     eax, [esi+8]
0x799679: mov     ecx, eax
0x79967B: sub     ecx, edi
0x79967D: sar     ecx, 2
0x799680: lea     edx, [esp+10h+value]
0x799684: push    edx; value
0x799685: sub     ebx, ecx
0x799687: push    ebx; count
0x799688: push    eax; destination
0x799689: mov     ecx, esi
0x79968B: call    OB_stVectorFloat_UninitializedFillN_010201A0; vector<float> uninitialized-fill primitive: constructs count four-byte float elements at destination from *value and returns destination+count. Identified from Oblivion call shape and four-byte stride.
0x799690: mov     eax, [esp+10h+count]
0x799694: add     [esi+8], eax
0x799697: mov     esi, [esi+8]
0x79969A: lea     edx, [esp+10h+value]
0x79969E: push    edx; value
0x79969F: sub     esi, eax
0x7996A1: push    esi; last
0x7996A2: push    edi; first
0x7996A3: call    OB_stVectorFloat_CopyFillRange_010201A0; std::fill specialization for float: assigns *value across [first,last) and returns last. Shipped Oblivion callers use it for initialized portions of vector<float> growth/reuse.
0x7996A8: add     esp, 0Ch
0x7996AB: pop     ebp
0x7996AC: pop     edi
0x7996AD: pop     esi
0x7996AE: pop     ebx
0x7996AF: retn    10h
0x7996B2: push    ebp; destination
0x7996B3: mov     ebx, ebp
0x7996B5: sub     ebx, eax
0x7996B7: push    ebp; last
0x7996B8: push    ebx; first
0x7996B9: call    OB_stVector4_UninitializedCopyRange_010201A0
0x7996BE: push    ebp; destinationEnd
0x7996BF: push    ebx; last
0x7996C0: push    edi; first
0x7996C1: mov     [esi+8], eax
0x7996C4: call    OB_stVector4_CopyBackwardRange_010201A0
0x7996C9: mov     ecx, [esp+1Ch+count]
0x7996CD: lea     eax, [esp+1Ch+value]
0x7996D1: push    eax; value
0x7996D2: add     ecx, edi
0x7996D4: push    ecx; last
0x7996D5: push    edi; first
0x7996D6: call    OB_stVectorFloat_CopyFillRange_010201A0; std::fill specialization for float: assigns *value across [first,last) and returns last. Shipped Oblivion callers use it for initialized portions of vector<float> growth/reuse.
0x7996DB: add     esp, 18h
0x7996DE: pop     ebp
0x7996DF: pop     edi
0x7996E0: pop     esi
0x7996E1: pop     ebx
0x7996E2: retn    10h
