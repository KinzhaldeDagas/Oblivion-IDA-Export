0x422F10: sub     esp, 54h; Authoritative extra-data writer. Requested canonical widths: XLOC12, XTEL28, XMRK0+FNAM1+FULL(strlen/known length + NUL)+TNAM2, XSED1, XCHG4(float), XHLT4(SInt32 converted from runtime float), XLCM4, XACT4(zero-extended flag byte), XCNT4(sign-extended SInt16), XSOL1. Iterates singleton extra list; REFR emits ONAM separately afterward.
0x422F13: push    ebp
0x422F14: push    esi
0x422F15: push    edi
0x422F16: mov     edi, ecx
0x422F18: push    offset aExtradatalistS; "ExtraDataList::Save"
0x422F1D: mov     ecx, 0B33800h
0x422F22: mov     [esp+64h+var_50], edi
0x422F26: call    NiEnterCriticalSection
0x422F2B: mov     esi, [edi+4]
0x422F2E: xor     ebp, ebp
0x422F30: cmp     esi, ebp
0x422F32: jz      loc_4233C8
0x422F38: push    ebx
0x422F39: jmp     short loc_422F44
0x422F3B: jmp     short loc_422F40
0x422F40: mov     edi, [esp+64h+var_50]
0x422F44: movzx   eax, byte ptr [esi+4]
0x422F48: add     eax, 0FFFFFFFCh; switch 85 cases
0x422F4B: cmp     eax, 54h
0x422F4E: ja      ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x422F54: movzx   eax, ds:byte_423450[eax]
0x422F5B: jmp     ds:jpt_422F5B[eax*4]; switch jump
0x422F62: movzx   ecx, byte ptr [esi+0Ch]; jumptable 00422F5B case 19
0x422F66: push    4; Size
0x422F68: lea     edx, [esp+68h+Src]
0x422F6C: push    edx; Src
0x422F6D: push    54434158h; int
0x422F72: mov     [esp+70h+Src], ecx
0x422F76: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x422F7B: add     esp, 0Ch
0x422F7E: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x422F83: mov     eax, [esi+0Ch]; Write XLOC exactly 12 bytes: level byte, three stack padding bytes, key FormID dword (0 if null), flags byte, three stack padding bytes. Only the two meaningful bytes and key dword are initialized here; padding is not normalized/zeroed. Writer never emits legacy 16-byte XLOC.
0x422F86: mov     byte ptr [esp+64h+var_2C], 0
0x422F8B: mov     byte ptr [esp+64h+var_24], 0
0x422F90: mov     [esp+64h+var_28], ebp
0x422F94: mov     cl, [eax+8]
0x422F97: mov     byte ptr [esp+64h+var_24], cl; The XLOC writer serializes the current lock flags byte+8 unchanged at0x422F97 into byte8 of the canonical12-byte output at0x422FC1. Immediately after plugin load this byte includes the forced locked-state bit0 set at0x425B0D, if the node survives linking. Source-compatible parsing retains the original byte; loaded semantic flags expose the runtime name is_locked.
0x422F9B: mov     dl, [eax]
0x422F9D: mov     byte ptr [esp+64h+var_2C], dl
0x422FA1: mov     eax, [eax+4]
0x422FA4: cmp     eax, ebp
0x422FA6: jz      short loc_422FB1
0x422FA8: mov     eax, [eax+0Ch]
0x422FAB: mov     [esp+64h+var_28], eax
0x422FAF: jmp     short loc_422FB5
0x422FB1: mov     [esp+64h+var_28], ebp
0x422FB5: push    0Ch; Size
0x422FB7: lea     ecx, [esp+68h+var_2C]
0x422FBB: push    ecx; Src
0x422FBC: push    434F4C58h; int
0x422FC1: call    TESForm_PutFormRecordChunkData; Verified canonical XLOC serialization: emits exactly 12 bytes containing the level byte, TESKey refID at +4 (zero when no key), and current flags byte at +8; it serializes the key's FormID rather than its pointer. Load forces runtime locked bit 0x01; LockEffect may leave marker bit 0x02, and the writer serializes current flags unchanged. Padding bytes are not explicitly initialized by this branch and remain Unknown.
0x422FC6: add     esp, 0Ch
0x422FC9: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x422FCE: mov     ecx, [esi+0Ch]; Write XTEL through TeleportData_SaveXTEL: exact 28 bytes only when linkedDoor is non-null; first dword is linked door FormID, followed by six transform floats. A loaded zero/empty XTEL can leave a singleton that this writer omits.
0x422FD1: call    TeleportData_SaveXTEL; XTEL writer: if linkedDoor is non-null, writes exact 28 bytes as linked door FormID plus six floats; if null, emits nothing.
0x422FD6: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x422FDB: push    4B524D58h; Write map marker as adjacent canonical XMRK(empty), FNAM(1), FULL(NUL-terminated length+1), TNAM(2).
0x422FE0: call    TESForm_AddChunk; Appends a six-byte empty CHUNK header (four-byte chunk ID plus zero 16-bit payload length) to the global TESForm save buffer.
0x422FE5: mov     ecx, [esi+0Ch]; this
0x422FE8: add     esp, 4
0x422FEB: call    MapMarkerData_SaveFNAM_FULL_TNAM; Map marker writer emits FNAM exactly 1 byte, FULL as known length/strlen + 1 including terminal NUL, and TNAM exactly 2 bytes; caller emits empty XMRK first.
0x422FF0: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x422FF5: mov     edx, [esi+0Ch]; jumptable 00422F5B case 39
0x422FF8: mov     eax, [edx+0Ch]
0x422FFB: push    4; Size
0x422FFD: lea     ecx, [esp+68h+var_48]
0x423001: push    ecx; Src
0x423002: push    4E574F58h; Verified XOWN file writer: dereferences ExtraOwnership.ownerForm and copies the owned TESForm's 32-bit refID at TESForm+0x0C into a canonical 4-byte XOWN chunk. This is a FormID value, not the runtime pointer. TESForm_PutFormRecordChunkData then writes the supplied 4-byte payload unchanged.
0x423007: mov     [esp+70h+var_48], eax; Canonical XOWN writer: extant nonzero ownership emits exact 4 bytes; zero input removed the node and is omitted.
0x42300B: call    TESForm_PutFormRecordChunkData; Canonical XOWN writer: extant nonzero owner emits exactly 4-byte FormID; zero input removes/omits the singleton.
0x423010: add     esp, 0Ch
0x423013: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423018: mov     edx, [esi+0Ch]; Verified XGLB file writer: reads ExtraGlobal.global, dereferences the TESGlobal*, and copies that form's 32-bit refID from TESForm+0x0C into a canonical 4-byte XGLB chunk; the chunk helper itself copies raw bytes.
0x42301B: mov     eax, [edx+0Ch]
0x42301E: push    4; Size
0x423020: lea     ecx, [esp+68h+var_44]
0x423024: push    ecx; Src
0x423025: push    424C4758h; int
0x42302A: mov     [esp+70h+var_44], eax; Canonical XGLB writer: extant nonzero global emits exact 4 bytes; zero input removed the node and is omitted.
0x42302E: call    TESForm_PutFormRecordChunkData; Canonical XGLB writer: extant nonzero global emits exactly 4-byte FormID; zero input removes/omits the singleton.
0x423033: add     esp, 0Ch
0x423036: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42303B: mov     edx, [esi+0Ch]; Write XCNT exactly 4 bytes by sign-extending the stored SInt16 count.
0x42303E: push    4; Size
0x423040: lea     eax, [esp+68h+Src]
0x423044: push    eax; Src
0x423045: push    4B4E5258h; Verified XRNK file writer: emits the ExtraRank signed 32-bit rank as exactly four bytes. ExtraDataList_SetRank removes rank -1, so extant nodes serialize all other values, including zero.
0x42304A: mov     [esp+70h+Src], edx; Canonical XRNK writer: extant rank emits exact 4-byte signed value; -1 removes/omits, while 0 is retained.
0x42304E: call    TESForm_PutFormRecordChunkData; Canonical XRNK writer: extant rank emits exactly 4 bytes; signed -1 is the removal sentinel and cannot remain.
0x423053: add     esp, 0Ch
0x423056: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42305B: movsx   ecx, word ptr [esi+0Ch]; jumptable 00422F5B case 42
0x42305F: push    4; Size
0x423061: lea     edx, [esp+68h+Src]
0x423065: push    edx; Src
0x423066: push    544E4358h; int
0x42306B: mov     [esp+70h+Src], ecx
0x42306F: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x423074: add     esp, 0Ch
0x423077: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42307C: fld     dword ptr [esi+0Ch]; Write XHLT exactly 4 bytes: runtime float health is converted/truncated to SInt32 before serialization.
0x42307F: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x423084: mov     [esp+64h+Src], eax
0x423088: push    4; Size
0x42308A: lea     eax, [esp+68h+Src]
0x42308E: push    eax; Src
0x42308F: push    544C4858h; int
0x423094: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x423099: add     esp, 0Ch
0x42309C: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4230A1: movzx   ecx, byte ptr [esi+0Ch]; Canonical XUSE writer (not XACT): zero-extends stored ExtraUses u8 and emits exact size4 for every extant node.
0x4230A5: push    4; Size
0x4230A7: lea     edx, [esp+68h+Src]
0x4230AB: push    edx; Src
0x4230AC: push    45535558h; int
0x4230B1: mov     [esp+70h+Src], ecx
0x4230B5: call    TESForm_PutFormRecordChunkData; Canonical XUSE writer emits exact size4 with stored u8 zero-extended; malformed serialized input normalizes to bounded low byte.
0x4230BA: add     esp, 0Ch
0x4230BD: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4230C2: fld     dword ptr [esi+0Ch]; jumptable 00422F5B case 45
0x4230C5: push    4; Size
0x4230C7: lea     eax, [esp+68h+Src]
0x4230CB: fstp    [esp+68h+Src]
0x4230CF: push    eax; Src
0x4230D0: push    4D495458h; int
0x4230D5: call    TESForm_PutFormRecordChunkData; Canonical XTIM writer emits exact size4 with runtime ExtraTimeLeft float32 bits, including zero/NaN.
0x4230DA: add     esp, 0Ch
0x4230DD: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4230E2: fld     dword ptr [esi+0Ch]; Write XCHG exactly 4 bytes as the stored float bit pattern.
0x4230E5: push    4; Size
0x4230E7: lea     ecx, [esp+68h+Src]
0x4230EB: fstp    [esp+68h+Src]
0x4230EF: push    ecx; Src
0x4230F0: push    47484358h; int
0x4230F5: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x4230FA: add     esp, 0Ch
0x4230FD: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423102: push    1; Write XSOL exactly 1 byte.
0x423104: lea     edx, [esi+0Ch]
0x423107: push    edx
0x423108: push    4C4F5358h
0x42310D: call    j_TESForm_PutCurrentChunkData
0x423112: add     esp, 0Ch
0x423115: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42311A: mov     eax, [esi+0Ch]; jumptable 00422F5B case 72
0x42311D: mov     ecx, [eax+0Ch]
0x423120: push    4; Size
0x423122: lea     edx, [esp+68h+var_40]
0x423126: push    edx; Src
0x423127: push    4E535058h; int
0x42312C: mov     [esp+70h+var_40], ecx
0x423130: call    TESForm_PutFormRecordChunkData; Canonical XPSN writer: after successful AlchemyItem link resolution, emits exact 4-byte FormID. Invalid targets were removed during post-load resolution.
0x423135: add     esp, 0Ch
0x423138: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42313D: push    38h ; '8'; Write XSED exactly 1 byte from ExtraSeed; 0xFF is the loader's remove sentinel. This extra is the per-reference TREE/SpeedTree seed selected by TESObjectREFR_SetTreeSeedByValue 0x4D7880.
0x42313F: mov     ecx, edi; this
0x423141: call    BaseExtraList_GetExtraData
0x423146: cmp     eax, ebp
0x423148: jnz     short loc_42314E
0x42314A: or      al, 0FFh
0x42314C: jmp     short loc_423151
0x42314E: mov     al, [eax+0Ch]
0x423151: mov     byte ptr [esp+64h+var_54+3], al
0x423155: push    1; Size
0x423157: lea     eax, [esp+68h+var_54+3]
0x42315B: push    eax; Src
0x42315C: push    44455358h; int
0x423161: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x423166: add     esp, 0Ch
0x423169: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42316E: mov     edi, [esi+0Ch]; jumptable 00422F5B case 8
0x423171: cmp     edi, ebp
0x423173: jz      short loc_42317A
0x423175: add     edi, 4
0x423178: jmp     short loc_42317C
0x42317A: xor     edi, edi
0x42317C: xor     ebx, ebx
0x42317E: cmp     edi, ebp
0x423180: mov     eax, edi
0x423182: jz      short loc_423192
0x423184: cmp     [eax], ebp
0x423186: jz      short loc_42318B
0x423188: add     ebx, 1
0x42318B: mov     eax, [eax+4]
0x42318E: cmp     eax, ebp
0x423190: jnz     short loc_423184
0x423192: cmp     ebx, ebp
0x423194: jbe     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42319A: xor     ecx, ecx
0x42319C: mov     eax, ebx
0x42319E: mov     edx, 4
0x4231A3: mul     edx
0x4231A5: seto    cl
0x4231A8: neg     ecx
0x4231AA: or      ecx, eax
0x4231AC: push    ecx; Size
0x4231AD: call    FormHeapAlloc
0x4231B2: add     esp, 4
0x4231B5: test    edi, edi
0x4231B7: mov     ebp, eax
0x4231B9: jz      short loc_4231D1
0x4231BB: jmp     short loc_4231C0
0x4231C0: mov     ecx, [edi]
0x4231C2: mov     edx, [ecx+0Ch]
0x4231C5: mov     [eax], edx
0x4231C7: mov     edi, [edi+4]
0x4231CA: add     eax, 4
0x4231CD: test    edi, edi
0x4231CF: jnz     short loc_4231C0
0x4231D1: lea     eax, ds:0[ebx*4]
0x4231D8: push    eax; Size
0x4231D9: push    ebp; Src
0x4231DA: push    524C4358h; int
0x4231DF: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x4231E4: push    ebp
0x4231E5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4231EA: add     esp, 10h
0x4231ED: xor     ebp, ebp
0x4231EF: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4231F4: fld     dword ptr [esi+0Ch]; jumptable 00422F5B case 4
0x4231F7: push    4; Size
0x4231F9: lea     ecx, [esp+68h+Src]
0x4231FD: fstp    [esp+68h+Src]
0x423201: push    ecx; Src
0x423202: push    574C4358h; int
0x423207: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x42320C: add     esp, 0Ch
0x42320F: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423214: mov     edx, [esi+0Ch]; jumptable 00422F5B case 12
0x423217: mov     eax, [edx+0Ch]
0x42321A: push    4; Size
0x42321C: lea     ecx, [esp+68h+var_3C]
0x423220: push    ecx; Src
0x423221: push    4D434358h; int
0x423226: mov     [esp+70h+var_3C], eax
0x42322A: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x42322F: add     esp, 0Ch
0x423232: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423237: mov     edx, [esi+0Ch]; jumptable 00422F5B case 5
0x42323A: mov     eax, [edx+0Ch]
0x42323D: push    4; Size
0x42323F: lea     ecx, [esp+68h+var_38]
0x423243: push    ecx; Src
0x423244: push    54574358h; int
0x423249: mov     [esp+70h+var_38], eax
0x42324D: call    TESForm_PutFormRecordChunkData; Verified helper contract: writes the 4-byte chunk code, 16-bit size, then memcpy-copies the supplied payload bytes unchanged. FormID conversion must therefore be performed by the caller; ExtraDataList_Save's XOWN branch supplies ownerForm->refID.
0x423252: add     esp, 0Ch
0x423255: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42325A: push    1; jumptable 00422F5B case 11
0x42325C: lea     edx, [esi+0Ch]
0x42325F: push    edx
0x423260: push    544D4358h
0x423265: call    j_TESForm_PutCurrentChunkData
0x42326A: add     esp, 0Ch
0x42326D: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423272: mov     eax, [esi+0Ch]; jumptable 00422F5B case 30
0x423275: mov     ecx, [eax+0Ch]
0x423278: mov     edx, [esi+10h]
0x42327B: mov     eax, [esi+14h]
0x42327E: mov     [esp+64h+var_10], edx
0x423282: push    14h; Size
0x423284: lea     edx, [esp+68h+var_14]
0x423288: mov     [esp+68h+var_14], ecx
0x42328C: mov     ecx, [esi+18h]
0x42328F: push    edx; Src
0x423290: push    4C535058h; int
0x423295: mov     [esp+70h+var_C], eax
0x423299: mov     [esp+70h+var_8], ecx
0x42329D: call    TESForm_PutFormRecordChunkData; XPSL plugin writer emits exact size20 but initializes only FormID + XYZ (first16); fifth dword is indeterminate stack data. Stored runtime rotZ is never serialized.
0x4232A2: add     esp, 0Ch
0x4232A5: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4232AA: mov     ecx, [esi+0Ch]; jumptable 00422F5B case 25
0x4232AD: call    ExtraRagDollDataArray_SaveXRGD
0x4232B2: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4232B7: mov     eax, [esi+0Ch]; jumptable 00422F5B case 24
0x4232BA: mov     ecx, [esi+10h]; Canonical XLOD writer: extant distant-data singleton always emits exact 12 bytes, including defaults created by empty input.
0x4232BD: mov     edx, [esi+14h]
0x4232C0: mov     [esp+64h+var_20], eax
0x4232C4: push    0Ch; Size
0x4232C6: lea     eax, [esp+68h+var_20]
0x4232CA: push    eax; Src
0x4232CB: push    444F4C58h; int
0x4232D0: mov     [esp+70h+var_1C], ecx
0x4232D4: mov     [esp+70h+var_18], edx
0x4232D8: call    TESForm_PutFormRecordChunkData; Verified Oblivion plugin writer emits ExtraDistantData as a 12-byte XLOD chunk from normal_00C (+0x0C..+0x17), including default values. Fallout stores the same three-float LandNormal at +0x0C but uses EType 0x13.
0x4232DD: add     esp, 0Ch
0x4232E0: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4232E5: mov     eax, [esi+0Ch]; Canonical XESP writer: exact 8 bytes for extant nonzero parent; byte4 preserves stored u8 flags. Bytes5..7 are indeterminate stack data.
0x4232E8: cmp     eax, ebp
0x4232EA: jz      ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4232F0: mov     ecx, [eax+0Ch]
0x4232F3: mov     dl, [esi+10h]
0x4232F6: push    8; Size
0x4232F8: lea     eax, [esp+68h+var_34]
0x4232FC: push    eax; Src
0x4232FD: push    50534558h; int
0x423302: mov     [esp+70h+var_34], ecx
0x423306: mov     [esp+70h+var_30], dl
0x42330A: call    TESForm_PutFormRecordChunkData; Canonical XESP writer: extant nonzero parent emits exactly 8 bytes. Parent FormID and flags byte are meaningful; bytes5..7 are uninitialized stack padding, not preserved input.
0x42330F: add     esp, 0Ch
0x423312: jmp     ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423317: mov     eax, [esi+0Ch]; Canonical XRTM writer: exact 4 bytes only for nonzero extant reference; zero removes/omits.
0x42331A: cmp     eax, ebp
0x42331C: jz      ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423322: mov     ecx, [eax+0Ch]
0x423325: push    4; Size
0x423327: lea     edx, [esp+68h+Src]
0x42332B: push    edx; Src
0x42332C: push    4D545258h; int
0x423331: mov     [esp+70h+Src], ecx
0x423335: call    TESForm_PutFormRecordChunkData; Canonical XRTM writer: extant nonzero random teleport marker emits exactly 4-byte FormID; zero removes/omits.
0x42333A: add     esp, 0Ch
0x42333D: jmp     short ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42333F: mov     eax, [esi+0Ch]; Canonical XMRC writer: exact 4 bytes only for nonzero extant reference; zero removes/omits.
0x423342: cmp     eax, ebp
0x423344: jz      short ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423346: mov     eax, [eax+0Ch]
0x423349: push    4; Size
0x42334B: lea     ecx, [esp+68h+Src]
0x42334F: push    ecx; Src
0x423350: push    43524D58h; int
0x423355: mov     [esp+70h+Src], eax
0x423359: call    TESForm_PutFormRecordChunkData; Canonical XMRC writer: extant nonzero merchant container emits exactly 4-byte FormID; zero removes/omits.
0x42335E: add     esp, 0Ch
0x423361: jmp     short ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423363: mov     eax, [esi+0Ch]; Canonical XHRS writer: exact 4 bytes only for nonzero extant reference; zero removes/omits.
0x423366: cmp     eax, ebp
0x423368: jz      short ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42336A: mov     edx, [eax+0Ch]
0x42336D: push    4; Size
0x42336F: lea     eax, [esp+68h+Src]
0x423373: push    eax; Src
0x423374: push    53524858h; int
0x423379: mov     [esp+70h+Src], edx
0x42337D: call    TESForm_PutFormRecordChunkData; Canonical XHRS writer: extant nonzero travel horse emits exactly 4-byte FormID; zero removes/omits.
0x423382: add     esp, 0Ch
0x423385: jmp     short ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x423387: mov     eax, [esi+0Ch]; Canonical XTRG writer: exact 4 bytes only for nonzero extant reference; zero removes/omits.
0x42338A: cmp     eax, ebp
0x42338C: jz      short ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x42338E: mov     ecx, [eax+0Ch]
0x423391: push    4; Size
0x423393: lea     edx, [esp+68h+Src]
0x423397: push    edx; Src
0x423398: push    47525458h; int
0x42339D: mov     [esp+70h+Src], ecx
0x4233A1: call    TESForm_PutFormRecordChunkData; Canonical XTRG writer: extant nonzero target emits exactly 4-byte FormID; zero removes/omits.
0x4233A6: add     esp, 0Ch
0x4233A9: jmp     short ExtraDataList_Save___def_422F5B; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4233AB: mov     eax, [esi+0Ch]; Write XLCM exactly 4 bytes from ExtraLevCreaModifier.
0x4233AE: push    eax
0x4233AF: push    4D434C58h
0x4233B4: call    TESForm_PutCurrentChunkData4
0x4233B9: add     esp, 8
0x4233BC: mov     esi, [esi+8]; jumptable 00422F5B default case, cases 6,7,9,10,13-18,20-23,26-29,31-35,37,38,48,52-55,57-62,64-66,69-71,73-76,78-87
0x4233BF: cmp     esi, ebp
0x4233C1: jnz     loc_422F40
0x4233C7: pop     ebx
0x4233C8: pop     edi
0x4233C9: pop     esi
0x4233CA: mov     ecx, 0B33800h; lpCriticalSection
0x4233CF: pop     ebp
0x4233D0: add     esp, 54h
0x4233D3: jmp     NiLeaveCriticalSection_0
