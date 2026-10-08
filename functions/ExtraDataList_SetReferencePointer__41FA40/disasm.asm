0x41FA40: push    0FFFFFFFFh; Set or create ExtraReferencePointer (type 0x22) in one logical function, now merged through 0x41FAF4. This extra preserves persistent-reference provenance inside an already form-keyed inventory entry; it does not override EntryData.type or sourceRef->baseForm and therefore cannot restore a thrown proxy AMMO to its source WEAP.
0x41FA42: push    offset ExtraDataList_SetReferencePointer_SEH
0x41FA47: mov     eax, large fs:0
0x41FA4D: push    eax
0x41FA4E: push    esi
0x41FA4F: push    edi
0x41FA50: mov     eax, ___security_cookie
0x41FA55: xor     eax, esp
0x41FA57: push    eax
0x41FA58: lea     eax, [esp+18h+var_C]
0x41FA5C: mov     large fs:0, eax
0x41FA62: mov     edi, ecx
0x41FA64: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x41FA6A: call    sub_45A500
0x41FA6F: test    al, al
0x41FA71: mov     esi, [esp+18h+arg_0]
0x41FA75: jnz     short loc_41FA86
0x41FA77: test    esi, esi
0x41FA79: jz      short loc_41FA86
0x41FA7B: mov     ecx, esi; this
0x41FA7D: call    TESObjectREFR_IsPersistent; Outside the special global mode, a non-null target must be persistent; otherwise no ExtraReferencePointer is stored. Null is allowed and existing payloads can be cleared.
0x41FA82: test    al, al
0x41FA84: jz      short ExtraDataList_SetReferencePointer___Done
0x41FA86: push    22h ; '"'; Lookup/create ExtraReferencePointer type 0x22.
0x41FA88: mov     ecx, edi; this
0x41FA8A: call    BaseExtraList_GetExtraData
0x41FA8F: test    eax, eax
0x41FA91: jnz     short ExtraDataList_SetReferencePointer___SetRefPointer
0x41FA93: push    10h; Size
0x41FA95: call    FormHeapAlloc
0x41FA9A: add     esp, 4
0x41FA9D: mov     [esp+18h+arg_0], eax
0x41FAA1: test    eax, eax
0x41FAA3: mov     [esp+18h+var_4], 0
0x41FAAB: jz      short loc_41FAB7
0x41FAAD: push    esi; reference
0x41FAAE: mov     ecx, eax; this
0x41FAB0: call    ExtraReferencePointer_ctor; Construct 0x10-byte ExtraReferencePointer: BSExtraData header/type 0x22 plus TESObjectREFR pointer at +0x0C.
0x41FAB5: jmp     short loc_41FAB9
0x41FAB7: xor     eax, eax
0x41FAB9: push    eax; BSExtraData *
0x41FABA: mov     ecx, edi; ExtraDataList *
0x41FABC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41FAC4: call    BaseExtraList_AddExtra
0x41FAC9: mov     ecx, [esp+18h+var_C]
0x41FACD: mov     large fs:0, ecx
0x41FAD4: pop     ecx
0x41FAD5: pop     edi
0x41FAD6: pop     esi
0x41FAD7: add     esp, 0Ch
0x41FADA: retn    4
0x41FADD: mov     [eax+0Ch], esi
0x41FAE0: mov     ecx, [esp+18h+var_C]
0x41FAE4: mov     large fs:0, ecx
0x41FAEB: pop     ecx
0x41FAEC: pop     edi
0x41FAED: pop     esi
0x41FAEE: add     esp, 0Ch
0x41FAF1: retn    4
0x9C3090: mov     eax, [ebp+4]
0x9C3093: push    eax
0x9C3094: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3099: pop     ecx
0x9C309A: retn
0x9C309B: mov     edx, [esp+arg_4]
0x9C309F: lea     eax, [edx-8]
0x9C30A2: mov     ecx, [edx-0Ch]
0x9C30A5: xor     ecx, eax
0x9C30A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C30AC: mov     eax, offset stru_AEBD48
0x9C30B1: jmp     ___CxxFrameHandler3
