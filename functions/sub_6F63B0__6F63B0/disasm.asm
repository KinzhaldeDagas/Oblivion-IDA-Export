0x6F63B0: push    0FFFFFFFFh
0x6F63B2: push    offset SEH_6F63B0
0x6F63B7: mov     eax, large fs:0
0x6F63BD: push    eax
0x6F63BE: sub     esp, 2Ch
0x6F63C1: push    ebx
0x6F63C2: push    ebp
0x6F63C3: push    esi
0x6F63C4: push    edi
0x6F63C5: mov     eax, ds:0B30AACh
0x6F63CA: xor     eax, esp
0x6F63CC: push    eax
0x6F63CD: lea     eax, [esp+4Ch+var_C]
0x6F63D1: mov     large fs:0, eax
0x6F63D7: mov     edi, ecx
0x6F63D9: mov     eax, [edi+3Ch]
0x6F63DC: xor     ebx, ebx
0x6F63DE: cmp     eax, ebx
0x6F63E0: mov     [esp+4Ch+var_4], ebx
0x6F63E4: jz      short loc_6F63EF
0x6F63E6: push    eax; File
0x6F63E7: call    _fclose
0x6F63EC: add     esp, 4
0x6F63EF: push    ebx; count
0x6F63F0: lea     ecx, [edi+4]; this
0x6F63F3: push    offset EmptyString; source
0x6F63F8: mov     [esp+54h+var_24], ecx
0x6F63FC: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x6F6401: mov     eax, dword ptr [esp+4Ch+source.storage]
0x6F6405: mov     ebp, 10h
0x6F640A: cmp     [esp+4Ch+source.capacity], ebp
0x6F640E: mov     [edi+3Ch], ebx
0x6F6411: jnb     short loc_6F6417
0x6F6413: lea     eax, [esp+4Ch+source.storage]
0x6F6417: push    offset aRb; "rb"
0x6F641C: push    eax; Filename
0x6F641D: call    _fopen
0x6F6422: add     esp, 8
0x6F6425: cmp     eax, ebx
0x6F6427: mov     [edi+3Ch], eax
0x6F642A: jnz     short loc_6F6473
0x6F642C: sub     esp, 1Ch
0x6F642F: mov     ecx, esp; this
0x6F6431: mov     [esp+68h+var_24], esp
0x6F6435: push    0FFFFFFFFh; count
0x6F6437: push    ebx; offset
0x6F6438: lea     eax, [esp+70h+source]
0x6F643C: mov     dword ptr [ecx+18h], 0Fh
0x6F6443: mov     [ecx+14h], ebx
0x6F6446: push    eax; source
0x6F6447: mov     [ecx+4], bl
0x6F644A: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F644F: push    4; int
0x6F6451: call    sub_6F6BF0
0x6F6456: add     esp, 20h
0x6F6459: cmp     [esp+4Ch+source.capacity], ebp
0x6F645D: jb      short loc_6F646C
0x6F645F: mov     ecx, dword ptr [esp+4Ch+source.storage]
0x6F6463: push    ecx
0x6F6464: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F6469: add     esp, 4
0x6F646C: xor     al, al
0x6F646E: jmp     loc_6F66C4
0x6F6473: mov     eax, [edi+34h]
0x6F6476: lea     edx, [esp+4Ch+var_35]
0x6F647A: push    edx; int
0x6F647B: add     eax, 1
0x6F647E: push    eax; char *
0x6F647F: lea     ecx, [esp+54h+var_35+1]
0x6F6483: mov     [esp+54h+var_35], bl
0x6F6487: call    sub_6F2CD0
0x6F648C: mov     eax, dword ptr [esp+4Ch+var_35+5]
0x6F6490: cmp     eax, ebx
0x6F6492: mov     esi, [edi+34h]
0x6F6495: mov     byte ptr [esp+4Ch+var_4], 1
0x6F649A: jz      short loc_6F64A4
0x6F649C: mov     ecx, dword ptr [esp+4Ch+var_35+9]
0x6F64A0: sub     ecx, eax
0x6F64A2: jnz     short loc_6F64AD
0x6F64A4: call    __invalid_parameter_noinfo
0x6F64A9: mov     eax, dword ptr [esp+4Ch+var_35+5]
0x6F64AD: push    1; Count
0x6F64AF: push    esi; ElementSize
0x6F64B0: push    eax; DstBuf
0x6F64B1: mov     ecx, edi
0x6F64B3: call    sub_6F6060
0x6F64B8: test    al, al
0x6F64BA: jnz     short loc_6F64F3
0x6F64BC: mov     eax, dword ptr [esp+4Ch+var_35+5]
0x6F64C0: cmp     eax, ebx
0x6F64C2: jz      short loc_6F64CD
0x6F64C4: push    eax
0x6F64C5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F64CA: add     esp, 4
0x6F64CD: cmp     [esp+4Ch+source.capacity], ebp
0x6F64D1: mov     dword ptr [esp+4Ch+var_35+5], ebx
0x6F64D5: mov     dword ptr [esp+4Ch+var_35+9], ebx
0x6F64D9: mov     dword ptr [esp+4Ch+var_35+0Dh], ebx
0x6F64DD: jb      short loc_6F646C
0x6F64DF: mov     edx, dword ptr [esp+4Ch+source.storage]
0x6F64E3: push    edx
0x6F64E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F64E9: add     esp, 4
0x6F64EC: xor     al, al
0x6F64EE: jmp     loc_6F66C4
0x6F64F3: lea     eax, [esp+4Ch+var_35+1]
0x6F64F7: push    eax
0x6F64F8: lea     ecx, [esp+50h+var_1C]
0x6F64FC: call    sub_6F61A0
0x6F6501: cmp     dword ptr [edi+34h], 5
0x6F6505: lea     ebp, [edi+20h]
0x6F6508: mov     byte ptr [esp+4Ch+var_4], 2
0x6F650D: jnb     short loc_6F6514
0x6F650F: call    __invalid_parameter_noinfo
0x6F6514: cmp     dword ptr [ebp+18h], 10h
0x6F6518: jb      short loc_6F6523
0x6F651A: mov     ecx, [ebp+4]
0x6F651D: mov     [esp+4Ch+var_20], ecx
0x6F6521: jmp     short loc_6F652A
0x6F6523: lea     edx, [ebp+4]
0x6F6526: mov     [esp+4Ch+var_20], edx
0x6F652A: mov     esi, [esp+4Ch+var_1C.begin]
0x6F652E: cmp     esi, ebx
0x6F6530: mov     ebx, [esp+4Ch+var_1C.end]
0x6F6534: jz      short loc_6F653F
0x6F6536: mov     eax, ebx
0x6F6538: sub     eax, esi
0x6F653A: cmp     eax, 5
0x6F653D: ja      short loc_6F6544
0x6F653F: call    __invalid_parameter_noinfo
0x6F6544: sub     ebx, esi
0x6F6546: mov     eax, [esp+4Ch+var_20]
0x6F654A: mov     cl, [eax+5]
0x6F654D: mov     [esi+5], cl
0x6F6550: jnz     short loc_6F6557
0x6F6552: call    __invalid_parameter_noinfo
0x6F6557: mov     eax, esi
0x6F6559: lea     edx, [eax+1]
0x6F655C: lea     esp, [esp+0]
0x6F6560: mov     cl, [eax]
0x6F6562: add     eax, 1
0x6F6565: test    cl, cl
0x6F6567: jnz     short loc_6F6560
0x6F6569: sub     eax, edx
0x6F656B: mov     edx, [ebp+14h]
0x6F656E: push    eax; int
0x6F656F: push    esi; Size
0x6F6570: push    edx; int
0x6F6571: xor     ebx, ebx
0x6F6573: push    ebx; int
0x6F6574: mov     ecx, ebp
0x6F6576: call    sub_6F5DE0
0x6F657B: test    eax, eax
0x6F657D: jz      short loc_6F65E3
0x6F657F: sub     esp, 1Ch
0x6F6582: mov     ecx, esp; this
0x6F6584: mov     [esp+68h+var_24], esp
0x6F6588: push    0FFFFFFFFh; count
0x6F658A: push    ebx; offset
0x6F658B: lea     eax, [esp+70h+source]
0x6F658F: mov     dword ptr [ecx+18h], 0Fh
0x6F6596: mov     [ecx+14h], ebx
0x6F6599: push    eax; source
0x6F659A: mov     [ecx+4], bl
0x6F659D: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F65A2: push    2; int
0x6F65A4: call    sub_6F6BF0
0x6F65A9: add     esp, 20h
0x6F65AC: mov     ecx, edi
0x6F65AE: call    sub_6F5FA0
0x6F65B3: push    esi
0x6F65B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F65B9: mov     eax, dword ptr [esp+50h+var_35+5]
0x6F65BD: add     esp, 4
0x6F65C0: cmp     eax, ebx
0x6F65C2: jz      short loc_6F65CD
0x6F65C4: push    eax
0x6F65C5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F65CA: add     esp, 4
0x6F65CD: cmp     [esp+4Ch+source.capacity], 10h
0x6F65D2: mov     dword ptr [esp+4Ch+var_35+5], ebx
0x6F65D6: mov     dword ptr [esp+4Ch+var_35+9], ebx
0x6F65DA: mov     dword ptr [esp+4Ch+var_35+0Dh], ebx
0x6F65DE: jmp     loc_6F645D
0x6F65E3: mov     eax, dword ptr [esp+4Ch+var_35+5]
0x6F65E7: cmp     eax, ebx
0x6F65E9: jz      short loc_6F65F8
0x6F65EB: mov     edx, dword ptr [esp+4Ch+var_35+9]
0x6F65EF: mov     ecx, edx
0x6F65F1: sub     ecx, eax
0x6F65F3: cmp     ecx, 5
0x6F65F6: ja      short loc_6F6605
0x6F65F8: call    __invalid_parameter_noinfo
0x6F65FD: mov     edx, dword ptr [esp+4Ch+var_35+9]
0x6F6601: mov     eax, dword ptr [esp+4Ch+var_35+5]
0x6F6605: cmp     byte ptr [eax+5], 30h ; '0'
0x6F6609: jle     short loc_6F6672
0x6F660B: push    5
0x6F660D: mov     ecx, ebp
0x6F660F: call    sub_6EDA70
0x6F6614: push    5; int
0x6F6616: lea     ecx, [esp+50h+var_35+1]
0x6F661A: mov     esi, eax
0x6F661C: call    sub_6F1210
0x6F6621: mov     dl, [esi]
0x6F6623: cmp     dl, [eax]
0x6F6625: jz      short loc_6F666A
0x6F6627: sub     esp, 1Ch
0x6F662A: lea     eax, [esp+68h+source]
0x6F662E: mov     ecx, esp
0x6F6630: mov     [esp+68h+var_24], esp
0x6F6634: push    eax
0x6F6635: call    sub_414680
0x6F663A: push    4; int
0x6F663C: call    sub_6F6BF0
0x6F6641: add     esp, 20h
0x6F6644: mov     ecx, edi
0x6F6646: call    sub_6F5FA0
0x6F664B: lea     ecx, [esp+4Ch+var_1C]; this
0x6F664F: call    OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x6F6654: lea     ecx, [esp+4Ch+var_35+1]; this
0x6F6658: call    OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x6F665D: lea     ecx, [esp+4Ch+source]; this
0x6F6661: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x6F6666: xor     al, al
0x6F6668: jmp     short loc_6F66C4
0x6F666A: mov     edx, dword ptr [esp+4Ch+var_35+9]
0x6F666E: mov     eax, dword ptr [esp+4Ch+var_35+5]
0x6F6672: cmp     eax, ebx
0x6F6674: jz      short loc_6F667D
0x6F6676: sub     edx, eax
0x6F6678: cmp     edx, 5
0x6F667B: ja      short loc_6F6686
0x6F667D: call    __invalid_parameter_noinfo
0x6F6682: mov     eax, dword ptr [esp+4Ch+var_35+5]
0x6F6686: push    5
0x6F6688: mov     ecx, ebp
0x6F668A: lea     esi, [eax+5]
0x6F668D: call    sub_6EDA70
0x6F6692: mov     cl, [esi]
0x6F6694: push    0FFFFFFFFh; count
0x6F6696: push    ebx; offset
0x6F6697: lea     edx, [esp+54h+source]
0x6F669B: mov     [eax], cl
0x6F669D: mov     ecx, [esp+54h+var_24]; this
0x6F66A1: push    edx; source
0x6F66A2: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F66A7: lea     ecx, [esp+4Ch+var_1C]; this
0x6F66AB: call    OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x6F66B0: lea     ecx, [esp+4Ch+var_35+1]; this
0x6F66B4: call    OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x6F66B9: lea     ecx, [esp+4Ch+source]; this
0x6F66BD: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x6F66C2: mov     al, 1
0x6F66C4: mov     ecx, [esp+4Ch+var_C]
0x6F66C8: mov     large fs:0, ecx
0x6F66CF: pop     ecx
0x6F66D0: pop     edi
0x6F66D1: pop     esi
0x6F66D2: pop     ebp
0x6F66D3: pop     ebx
0x6F66D4: add     esp, 38h
0x6F66D7: retn    1Ch
0x9C8CC0: lea     ecx, [ebp+4]; this
0x9C8CC3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8CC8: lea     ecx, [ebp-34h]; this
0x9C8CCB: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9C8CD0: lea     ecx, [ebp-1Ch]; this
0x9C8CD3: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9C8CD8: mov     edx, dword ptr [esp+source.storage]
0x9C8CDC: lea     eax, [edx-3Ch]
0x9C8CDF: mov     ecx, [edx-40h]
0x9C8CE2: xor     ecx, eax
0x9C8CE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8CE9: mov     eax, offset stru_AF15DC
0x9C8CEE: jmp     ___CxxFrameHandler3
