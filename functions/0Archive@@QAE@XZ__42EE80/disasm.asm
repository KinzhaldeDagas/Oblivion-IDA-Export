0x42EE80: push    0FFFFFFFFh
0x42EE82: push    offset ??0Archive@@QAE@XZ_SEH
0x42EE87: mov     eax, large fs:0
0x42EE8D: push    eax
0x42EE8E: sub     esp, 150h
0x42EE94: mov     eax, ___security_cookie
0x42EE99: xor     eax, esp
0x42EE9B: mov     [esp+15Ch+var_10], eax
0x42EEA2: push    ebx
0x42EEA3: push    ebp
0x42EEA4: push    esi
0x42EEA5: push    edi
0x42EEA6: mov     eax, ___security_cookie
0x42EEAB: xor     eax, esp
0x42EEAD: push    eax
0x42EEAE: lea     eax, [esp+170h+var_C]
0x42EEB5: mov     large fs:0, eax
0x42EEBB: mov     ebx, [esp+170h+ArgList]
0x42EEC2: mov     esi, ecx
0x42EEC4: lea     edi, [esi+154h]
0x42EECA: mov     ecx, edi
0x42EECC: mov     [esp+170h+var_144], esi
0x42EED0: mov     [esp+170h+var_14C], ebx
0x42EED4: call    BSArchive?_constr
0x42EED9: mov     eax, [esp+170h+arg_4]
0x42EEE0: xor     ebp, ebp
0x42EEE2: push    ebp
0x42EEE3: push    eax
0x42EEE4: push    ebp
0x42EEE5: push    ebx
0x42EEE6: mov     ecx, esi
0x42EEE8: mov     [edi+24h], ebp
0x42EEEB: call    BSFile_constr; MEF v57 VERIFY 2026-10-08: VERIFIED PERF-1 eligibility provenance: Archive passes mode0 to BSFile_constr430970, then installs Archive vtableA35D74 at42EEFD. BSFile initializes callback+4=430050, mode+20=0, stream sentinel+30=FFFFFFFF, and existence flag+24. v57's native archive gate additionally requires an open handle+1C; unsupported stream state keeps native fallback. Constructor metadata alone is not evidence that every archive invocation takes the fast path.
0x42EEF0: lea     ecx, [esi+200h]; lpCriticalSection
0x42EEF6: mov     [esp+170h+var_4], ebp
0x42EEFD: mov     dword ptr [esi], offset ??_7Archive@@6BArchive@@@; const Archive::`vftable'{for `Archive'}
0x42EF03: call    NiInitalizeCriticalSection
0x42EF08: or      eax, 0FFFFFFFFh
0x42EF0B: cmp     byte ptr [esi+24h], 0
0x42EF0F: mov     byte ptr [esp+170h+var_4], 1
0x42EF17: mov     [esi+18Ch], eax
0x42EF1D: mov     [esi+190h], eax
0x42EF23: mov     [esi+178h], ebp
0x42EF29: mov     [esi+198h], ebp
0x42EF2F: mov     [esi+19Ch], ebp
0x42EF35: mov     [esi+1A0h], ebp; MEF PLAN 2026-09-07: Revalidated in current authoritative IDB. Cached-name owner initialization: +1A0h is setNULL here, +1A4h at42EF3B, and +194h flags cleared42EF41. Proposed construction leaves those ownersNULL and cached bit20h clear until a complete private name buffer plus all folder offset arrays are ready.
0x42EF3B: mov     [esi+1A4h], ebp
0x42EF41: mov     byte ptr [esi+194h], 0
0x42EF48: mov     [esi+1A8h], ebp
0x42EF4E: mov     [esi+188h], ebp
0x42EF54: mov     byte ptr [esi+1ACh], 0
0x42EF5B: jz      loc_42F488
0x42EF61: cmp     [esp+170h+arg_8], 0
0x42EF69: jz      short loc_42EF72
0x42EF6B: mov     byte ptr [esi+194h], 8
0x42EF72: push    ebp
0x42EF73: mov     ecx, esi
0x42EF75: call    BSFile_SetByteSwap
0x42EF7A: mov     edx, [esi+4]
0x42EF7D: push    1
0x42EF7F: lea     ecx, [esp+174h+var_154]
0x42EF83: push    ecx
0x42EF84: push    24h ; '$'
0x42EF86: push    edi
0x42EF87: push    esi
0x42EF88: mov     [esp+184h+var_154], 1
0x42EF90: call    edx
0x42EF92: add     esp, 14h
0x42EF95: cmp     dword ptr [edi], offset loc_415342
0x42EF9B: jnz     loc_42F481; MEF IMPLEMENTED v55 2026-09-07: Private cached-build failure uses this existing invalid-object epilogue after returning to the unchanged constructor stack/SEH. Original factory rejects bit1 and invokes deleting destructor. Tests check synthetic0x170 frame, preserved registers, SEH-link restoration andret16; no engine exception dispatch or security-cookie implementation is executed by fixture.
0x42EFA1: cmp     dword ptr [esi+158h], 67h ; 'g'
0x42EFA8: ja      loc_42F481; MEF IMPLEMENTED v55 2026-09-07: Private cached-build failure uses this existing invalid-object epilogue after returning to the unchanged constructor stack/SEH. Original factory rejects bit1 and invokes deleting destructor. Tests check synthetic0x170 frame, preserved registers, SEH-link restoration andret16; no engine exception dispatch or security-cookie implementation is executed by fixture.
0x42EFAE: test    byte ptr [esi+194h], 8
0x42EFB5: jnz     loc_42F359
0x42EFBB: call    ds:GetTickCount
0x42EFC1: push    ebx; ArgList
0x42EFC2: push    offset aLoadingArchive; "Loading archive %s"
0x42EFC7: mov     [esp+178h+var_148], eax
0x42EFCB: call    PrintToLog???
0x42EFD0: mov     ebp, [esi+164h]
0x42EFD6: xor     ecx, ecx
0x42EFD8: mov     eax, ebp
0x42EFDA: mov     edx, 10h
0x42EFDF: mul     edx
0x42EFE1: seto    cl
0x42EFE4: neg     ecx
0x42EFE6: or      ecx, eax
0x42EFE8: push    ecx; Size
0x42EFE9: call    FormHeapAlloc
0x42EFEE: mov     edi, eax
0x42EFF0: add     esp, 0Ch
0x42EFF3: mov     [esp+170h+var_150], edi
0x42EFF7: test    edi, edi
0x42EFF9: mov     byte ptr [esp+170h+var_4], 2
0x42F001: jz      short loc_42F013
0x42F003: push    offset BSAEntry_constr
0x42F008: push    ebp
0x42F009: push    10h
0x42F00B: push    edi
0x42F00C: call    sub_401080
0x42F011: jmp     short loc_42F015
0x42F013: xor     edi, edi
0x42F015: mov     eax, [esi+164h]
0x42F01B: shl     eax, 4
0x42F01E: push    eax; byteCount
0x42F01F: push    edi; destination
0x42F020: mov     ecx, esi; self
0x42F022: mov     byte ptr [esp+178h+var_4], 1
0x42F02A: mov     [esi+178h], edi
0x42F030: call    Archive_ReadBytes
0x42F035: test    byte ptr [esi+160h], 1
0x42F03C: jz      short loc_42F089
0x42F03E: mov     ecx, esi
0x42F040: call    sub_42BD70
0x42F045: test    al, al
0x42F047: jz      short loc_42F089
0x42F049: mov     eax, [esi+16Ch]
0x42F04F: or      byte ptr [esi+194h], 10h
0x42F056: push    eax; Size
0x42F057: call    FormHeapAlloc
0x42F05C: mov     edi, [esi+164h]
0x42F062: mov     [esi+198h], eax
0x42F068: xor     ecx, ecx
0x42F06A: mov     eax, edi
0x42F06C: mov     edx, 4
0x42F071: mul     edx
0x42F073: seto    cl
0x42F076: neg     ecx
0x42F078: or      ecx, eax
0x42F07A: push    ecx; Size
0x42F07B: call    FormHeapAlloc
0x42F080: add     esp, 8
0x42F083: mov     [esi+19Ch], eax
0x42F089: mov     eax, [esi+160h]
0x42F08F: shr     eax, 1
0x42F091: test    al, 1
0x42F093: jz      short loc_42F0E0
0x42F095: mov     ecx, esi
0x42F097: call    sub_42BD70
0x42F09C: test    al, al
0x42F09E: jz      short loc_42F0E0
0x42F0A0: mov     eax, [esi+170h]; MEF PLAN 2026-09-07: Revalidated in current authoritative IDB. Coordinated deferred-construction hook: replace this6-byte mov EAX,[ESI+170h] (8B8670010000) with jump42F0E0. This skips cached flag publication and both unchecked early allocations through42F0DA, leaving owner+1A0/+1A4 NULL. No outstanding cdecl args here.42F0E0 resetsEDI/counters; install only with private builder hook42F24F.
0x42F0A6: or      byte ptr [esi+194h], 20h
0x42F0AD: push    eax; Size
0x42F0AE: call    FormHeapAlloc
0x42F0B3: mov     edi, [esi+164h]
0x42F0B9: mov     [esi+1A0h], eax
0x42F0BF: xor     ecx, ecx
0x42F0C1: mov     eax, edi
0x42F0C3: mov     edx, 4
0x42F0C8: mul     edx
0x42F0CA: seto    cl
0x42F0CD: neg     ecx
0x42F0CF: or      ecx, eax
0x42F0D1: push    ecx; Size
0x42F0D2: call    FormHeapAlloc
0x42F0D7: add     esp, 8
0x42F0DA: mov     [esi+1A4h], eax; MEF PLAN 2026-09-07: Revalidated in current authoritative IDB. Existing top-level filename offset array is published here before any per-folder slots are initialized. Destructor42C114 later frees every slot up to folderCount, without an initialized-prefix count. A simple later failure return is unsafe with this publication; deferred private construction must bypass it.
0x42F0E0: xor     edi, edi
0x42F0E2: cmp     [esi+164h], edi
0x42F0E8: mov     [esp+170h+var_154], edi
0x42F0EC: mov     [esp+170h+var_158], edi
0x42F0F0: jbe     loc_42F219
0x42F0F6: xor     ebx, ebx
0x42F0F8: jmp     short loc_42F104
0x42F100: mov     edi, [esp+170h+var_154]
0x42F104: test    byte ptr [esi+160h], 1; MEF PLAN 2026-09-07: Intervening folder loop42F0E0..42F219 tests header+160h and sub42BD70; it does not inspect live cached-name bit20h. Deferring cached flag/filename owners does not change these observed gates. Directory storage and file metadata remain separate preconditions.
0x42F10B: jz      short loc_42F179
0x42F10D: mov     edx, [esi+4]
0x42F110: push    1
0x42F112: lea     eax, [esp+174h+var_150]
0x42F116: push    eax
0x42F117: push    1
0x42F119: lea     ecx, [esp+17Ch+var_159]
0x42F11D: push    ecx
0x42F11E: push    esi
0x42F11F: mov     [esp+184h+var_150], 1
0x42F127: call    edx
0x42F129: add     esp, 14h
0x42F12C: mov     ecx, esi
0x42F12E: call    sub_42BD70
0x42F133: test    al, al
0x42F135: jz      short loc_42F167
0x42F137: movzx   eax, [esp+170h+var_159]
0x42F13C: mov     ecx, [esi+198h]
0x42F142: add     ecx, edi
0x42F144: push    eax; byteCount
0x42F145: push    ecx; destination
0x42F146: mov     ecx, esi; self
0x42F148: call    Archive_ReadBytes
0x42F14D: mov     edx, [esi+19Ch]
0x42F153: mov     eax, [esp+170h+var_158]
0x42F157: mov     [edx+eax*4], edi
0x42F15A: movzx   ecx, [esp+170h+var_159]
0x42F15F: add     edi, ecx
0x42F161: mov     [esp+170h+var_154], edi
0x42F165: jmp     short loc_42F179
0x42F167: movzx   edx, [esp+170h+var_159]
0x42F16C: push    edx; byteCount
0x42F16D: lea     eax, [esp+174h+destination]
0x42F171: push    eax; destination
0x42F172: mov     ecx, esi; self
0x42F174: call    Archive_ReadBytes
0x42F179: mov     ecx, [esi+178h]
0x42F17F: mov     ebp, [ecx+ebx+8]
0x42F183: xor     ecx, ecx
0x42F185: mov     eax, ebp
0x42F187: mov     edx, 10h
0x42F18C: mul     edx
0x42F18E: seto    cl
0x42F191: neg     ecx
0x42F193: or      ecx, eax
0x42F195: push    ecx; Size
0x42F196: call    FormHeapAlloc; MEF PLAN 2026-09-07: Separate earlier metadata defect: per-folder file-entry allocation computes16*count with overflow saturation, but NULL becomesEDI0 then flows to read callback42F1EC for nonzero count. Read byte length instead uses unchecked SHL EDX,4 at42F1D6. Filename-only builder cannot fix this earlier allocation/read path. Metadata correction needs checked count/read extent and partial-array cleanup before using42F481 as a general failure exit.
0x42F19B: mov     edi, eax
0x42F19D: add     esp, 4
0x42F1A0: mov     [esp+170h+var_150], edi
0x42F1A4: test    edi, edi
0x42F1A6: mov     byte ptr [esp+170h+var_4], 3
0x42F1AE: jz      short loc_42F1C0
0x42F1B0: push    offset BSAEntry_constr
0x42F1B5: push    ebp
0x42F1B6: push    10h
0x42F1B8: push    edi
0x42F1B9: call    sub_401080
0x42F1BE: jmp     short loc_42F1C2
0x42F1C0: xor     edi, edi
0x42F1C2: mov     ecx, [esi+178h]
0x42F1C8: mov     edx, [ecx+ebx+8]
0x42F1CC: push    1
0x42F1CE: lea     eax, [esp+174h+var_150]
0x42F1D2: push    eax
0x42F1D3: mov     eax, [esi+4]
0x42F1D6: shl     edx, 4
0x42F1D9: push    edx
0x42F1DA: push    edi
0x42F1DB: push    esi
0x42F1DC: mov     byte ptr [esp+184h+var_4], 1
0x42F1E4: mov     [esp+184h+var_150], 1
0x42F1EC: call    eax
0x42F1EE: mov     eax, [esp+184h+var_158]
0x42F1F2: mov     ecx, [esi+178h]
0x42F1F8: mov     [ecx+ebx+0Ch], edi
0x42F1FC: add     eax, 1
0x42F1FF: add     esp, 14h
0x42F202: add     ebx, 10h
0x42F205: cmp     eax, [esi+164h]
0x42F20B: mov     [esp+170h+var_158], eax
0x42F20F: jb      loc_42F100
0x42F215: mov     ebx, [esp+170h+var_14C]
0x42F219: mov     edx, [esi+160h]
0x42F21F: shr     edx, 1
0x42F221: xor     edi, edi
0x42F223: test    dl, 1
0x42F226: jz      loc_42F313
0x42F22C: mov     eax, [esi+30h]
0x42F22F: cmp     eax, 0FFFFFFFFh
0x42F232: jnz     short loc_42F23A
0x42F234: mov     eax, [esi+148h]
0x42F23A: mov     ecx, esi
0x42F23C: mov     [esi+188h], eax
0x42F242: call    sub_42BD70
0x42F247: test    al, al
0x42F249: jz      loc_42F313
0x42F24F: mov     eax, [esi+170h]; MEF PLAN 2026-09-07: Revalidated in current authoritative IDB. Private cached-name builder hook,6-byte8B8670010000. All earlier folder/file arrays have completed; ESI=archive, no pending args, constructor SEH state1. Build exact-length raw table and checked per-folder u32 offset arrays privately; require returned bytes==declared length and each required NUL inside remaining bytes. Commit +1A0/+1A4 and bit20h only after success, then42F30F. On failure free private owners, retainNULL fields/clear bit20h, then42F481 marks invalid and returns object for factory destruction. Paired with42F0A0; plan only.
0x42F255: mov     ecx, [esi+1A0h]
0x42F25B: push    eax; byteCount
0x42F25C: push    ecx; destination
0x42F25D: mov     ecx, esi; self
0x42F25F: call    Archive_ReadBytes; MEF PLAN 2026-09-07: Cached table read returns a byte count in EAX via42C8E0, but constructor discards it at42F264 and scans declared storage. Require exact declared count before any terminator scan; allocation capacity is not proof of initialized input.
0x42F264: xor     ebx, ebx
0x42F266: cmp     [esi+164h], ebx
0x42F26C: mov     [esp+170h+var_158], ebx
0x42F270: jbe     loc_42F30F
0x42F276: xor     ebp, ebp
0x42F278: jmp     short loc_42F280
0x42F280: mov     edx, [esi+178h]
0x42F286: mov     eax, [edx+ebp+8]
0x42F28A: xor     ecx, ecx
0x42F28C: mov     edx, 4
0x42F291: mul     edx
0x42F293: seto    cl
0x42F296: neg     ecx
0x42F298: or      ecx, eax
0x42F29A: push    ecx; Size
0x42F29B: call    FormHeapAlloc
0x42F2A0: mov     ecx, [esi+1A4h]
0x42F2A6: mov     [ecx+ebx*4], eax
0x42F2A9: mov     edx, [esi+178h]
0x42F2AF: xor     ecx, ecx
0x42F2B1: add     esp, 4
0x42F2B4: cmp     [edx+ebp+8], ecx
0x42F2B8: jbe     short loc_42F2F9
0x42F2BA: lea     ebx, [ebx+0]
0x42F2C0: mov     eax, [esi+1A4h]
0x42F2C6: mov     edx, [eax+ebx*4]
0x42F2C9: mov     [edx+ecx*4], edi; MEF PLAN 2026-09-07: Revalidated in current authoritative IDB. Original constructor publishes each filename offset before unbounded terminator scan42F2D7. Replacement should record offsets only in its private arrays while bounded scanning; permit original empty strings, lengths within declared buffer, and unused trailing bytes. Do not add a255-character cap or require header totalFileCount equality as an unproven format policy.
0x42F2CC: mov     eax, [esi+1A0h]
0x42F2D2: add     eax, edi
0x42F2D4: lea     ebx, [eax+1]
0x42F2D7: mov     dl, [eax]; MEF PLAN 2026-09-07: Confirmed bounded-construction defect: loop reads [EAX] until NUL with no remaining-table comparison. Missing terminator or short read can scan outside declared allocation. Paired private-construction replacement42F0A0/42F24F fixes this stage only; earlier folder/file metadata validation remains separate.
0x42F2D9: add     eax, 1
0x42F2DC: test    dl, dl
0x42F2DE: jnz     short loc_42F2D7
0x42F2E0: sub     eax, ebx
0x42F2E2: mov     ebx, [esp+170h+var_158]
0x42F2E6: lea     edi, [edi+eax+1]
0x42F2EA: mov     eax, [esi+178h]
0x42F2F0: add     ecx, 1
0x42F2F3: cmp     ecx, [eax+ebp+8]
0x42F2F7: jb      short loc_42F2C0
0x42F2F9: add     ebx, 1
0x42F2FC: add     ebp, 10h
0x42F2FF: cmp     ebx, [esi+164h]
0x42F305: mov     [esp+170h+var_158], ebx
0x42F309: jb      loc_42F280
0x42F30F: mov     ebx, [esp+170h+var_14C]; MEF PLAN 2026-09-07: Revalidated in current authoritative IDB. Verified private-builder success continuation: reloads EBX filename argument from[ESP+24h], then GetTickCount overwritesEAX. Original loop EBP/EDI totals are dead: EBP reset42F357, EDI overwritten42F35E before next use. Helper should preserve callee-saved registers, ESP and constructor SEH; no need to reproduce native scan counters.
0x42F313: call    ds:GetTickCount
0x42F319: sub     eax, [esp+170h+var_148]
0x42F31D: test    eax, eax
0x42F31F: mov     [esp+170h+var_148], eax
0x42F323: fild    [esp+170h+var_148]
0x42F327: jge     short loc_42F32F
0x42F329: fadd    ds:flt_A2FC78
0x42F32F: fdiv    ds:dbl_A2FC70
0x42F335: mov     ecx, [esi+168h]
0x42F33B: mov     edx, [esi+164h]
0x42F341: sub     esp, 8
0x42F344: fstp    qword ptr [esp+178h+var_178]
0x42F347: push    ecx
0x42F348: push    edx
0x42F349: push    ebx; ArgList
0x42F34A: push    offset aFinishedLoadin; "Finished loading archive %s containing "...
0x42F34F: call    PrintToLog???
0x42F354: add     esp, 18h
0x42F357: xor     ebp, ebp
0x42F359: lea     eax, [esp+170h+var_140]
0x42F35D: push    eax; int
0x42F35E: lea     edi, [esi+3Ch]
0x42F361: push    edi; lpFileName
0x42F362: call    __stat64i32
0x42F367: add     esp, 8
0x42F36A: cmp     eax, 0FFFFFFFFh
0x42F36D: jnz     short loc_42F37D
0x42F36F: push    edi; ArgList
0x42F370: push    offset aCouldNotFind_9; "Could not find Archive %s to get fileti"...
0x42F375: call    PrintError
0x42F37A: add     esp, 8
0x42F37D: test    byte ptr [esi+194h], 8
0x42F384: mov     ecx, [esp+170h+var_120]
0x42F388: mov     edx, [esp+170h+var_11C]
0x42F38C: mov     [esi+180h], ecx
0x42F392: mov     [esi+184h], edx
0x42F398: jnz     loc_42F473
0x42F39E: cmp     bInvalidateOlderFiles_Archive, 0
0x42F3A5: jz      short loc_42F3FD
0x42F3A7: call    ds:GetTickCount
0x42F3AD: push    ebx; ArgList
0x42F3AE: push    offset aInvalidatingFi; "Invalidating files in archive %s"
0x42F3B3: mov     edi, eax
0x42F3B5: call    PrintToLog???
0x42F3BA: add     esp, 8
0x42F3BD: mov     ecx, esi
0x42F3BF: call    Archive_InvalidateOlderFiles
0x42F3C4: mov     ebp, eax
0x42F3C6: call    ds:GetTickCount
0x42F3CC: sub     eax, edi
0x42F3CE: test    eax, eax
0x42F3D0: mov     [esp+170h+var_148], eax
0x42F3D4: fild    [esp+170h+var_148]
0x42F3D8: jge     short loc_42F3E0
0x42F3DA: fadd    ds:flt_A2FC78
0x42F3E0: fdiv    ds:dbl_A2FC70
0x42F3E6: sub     esp, 8
0x42F3E9: fstp    qword ptr [esp+178h+var_178]
0x42F3EC: push    ebx
0x42F3ED: push    ebp; ArgList
0x42F3EE: push    offset aFinishedInvali; "Finished invalidating %i files in archi"...
0x42F3F3: call    PrintToLog???
0x42F3F8: add     esp, 14h
0x42F3FB: xor     ebp, ebp
0x42F3FD: cmp     [esp+170h+arg_C], 0
0x42F405: jz      short loc_42F473
0x42F407: xor     eax, eax
0x42F409: cmp     [esi+164h], ebp
0x42F40F: mov     [esp+170h+var_154], eax
0x42F413: jbe     short loc_42F473
0x42F415: jmp     short loc_42F422
0x42F417: jmp     short loc_42F420
0x42F420: xor     ebp, ebp
0x42F422: cmp     dword ptr [esi+164h], 0
0x42F429: jbe     short loc_42F464
0x42F42B: mov     ebx, eax
0x42F42D: shl     ebx, 4
0x42F430: xor     edi, edi
0x42F432: mov     eax, [esi+178h]
0x42F438: movzx   ecx, word ptr [esi+174h]
0x42F43F: mov     edx, [eax+ebx+0Ch]
0x42F443: add     eax, ebx
0x42F445: push    ecx
0x42F446: add     edx, edi
0x42F448: push    edx
0x42F449: push    eax
0x42F44A: call    ArchiveManager_InvalidatEFilesInAllBSA
0x42F44F: add     ebp, 1
0x42F452: add     esp, 0Ch
0x42F455: add     edi, 10h
0x42F458: cmp     ebp, [esi+164h]
0x42F45E: jb      short loc_42F432
0x42F460: mov     eax, [esp+170h+var_154]
0x42F464: add     eax, 1
0x42F467: cmp     eax, [esi+164h]
0x42F46D: mov     [esp+170h+var_154], eax
0x42F471: jb      short loc_42F420
0x42F473: push    2800h; HINSTANCE
0x42F478: mov     ecx, esi
0x42F47A: call    sub_4303F0
0x42F47F: jmp     short loc_42F488
0x42F481: or      byte ptr [esi+194h], 1; MEF PLAN 2026-09-07: Revalidated in current authoritative IDB. Existing invalid-archive path ORs owner+194h bit1, then42F488 returnsESI through normal SEH/cookie/RET10h epilogue. Suitable private cached-build failure AFTER helper frees private buffers and leaves name owner pointersNULL. Bypasses later invalidation calls42F3BF/42F44A. Do not returnNULL directly: factory would lose allocated Archive object.
0x42F488: mov     eax, esi
0x42F48A: mov     ecx, [esp+170h+var_C]
0x42F491: mov     large fs:0, ecx
0x42F498: pop     ecx
0x42F499: pop     edi
0x42F49A: pop     esi
0x42F49B: pop     ebp
0x42F49C: pop     ebx
0x42F49D: mov     ecx, [esp+15Ch+var_10]
0x42F4A4: xor     ecx, esp
0x42F4A6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42F4AB: add     esp, 15Ch
0x42F4B1: retn    10h
0x9ABBB0: mov     ecx, [ebp-144h]; this
0x9ABBB6: jmp     ??1BSFile@@UAE@XZ; BSFile::~BSFile(void)
0x9ABBBB: mov     ecx, [ebp-144h]
0x9ABBC1: add     ecx, 200h; lpCriticalSection
0x9ABBC7: jmp     NiDeleteCriticalSection
0x9ABBCC: mov     eax, [ebp-150h]
0x9ABBD2: push    eax
0x9ABBD3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9ABBD8: pop     ecx
0x9ABBD9: retn
0x9ABBDA: mov     eax, [ebp-150h]
0x9ABBE0: push    eax
0x9ABBE1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9ABBE6: pop     ecx
0x9ABBE7: retn
0x9ABBE8: mov     edx, [esp+arg_4]
0x9ABBEC: lea     eax, [edx-160h]
0x9ABBF2: mov     ecx, [edx-164h]
0x9ABBF8: xor     ecx, eax
0x9ABBFA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABBFF: add     eax, 10h
0x9ABC02: mov     ecx, [edx-4]
0x9ABC05: xor     ecx, eax
0x9ABC07: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABC0C: mov     eax, offset stru_AD8980
0x9ABC11: jmp     ___CxxFrameHandler3
