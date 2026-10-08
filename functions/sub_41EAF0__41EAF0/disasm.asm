0x41EAF0: push    0FFFFFFFFh; Verified ExtraLock lifecycle setter: if type 0x31 exists, frees its old ExtraLockData payload and replaces it; otherwise allocates a 16-byte ExtraLock wrapper, constructs it with the supplied 12-byte ExtraLockData*, and adds it to ExtraDataList.
0x41EAF2: push    offset SEH_8C8970
0x41EAF7: mov     eax, large fs:0
0x41EAFD: push    eax
0x41EAFE: push    ecx
0x41EAFF: push    esi
0x41EB00: push    edi
0x41EB01: mov     eax, ___security_cookie
0x41EB06: xor     eax, esp
0x41EB08: push    eax
0x41EB09: lea     eax, [esp+1Ch+var_C]
0x41EB0D: mov     large fs:0, eax
0x41EB13: mov     edi, ecx
0x41EB15: push    31h ; '1'; a2
0x41EB17: call    BaseExtraList_GetExtraData
0x41EB1C: mov     esi, eax
0x41EB1E: test    esi, esi
0x41EB20: jz      short loc_41EB37
0x41EB22: mov     eax, [esi+0Ch]
0x41EB25: push    eax
0x41EB26: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x41EB2B: mov     ecx, [esp+20h+lockData]
0x41EB2F: add     esp, 4
0x41EB32: mov     [esi+0Ch], ecx
0x41EB35: jmp     short loc_41EB73
0x41EB37: push    10h; Size
0x41EB39: call    FormHeapAlloc
0x41EB3E: add     esp, 4
0x41EB41: mov     [esp+1Ch+var_10], eax
0x41EB45: test    eax, eax
0x41EB47: mov     [esp+1Ch+var_4], 0
0x41EB4F: jz      short loc_41EB61
0x41EB51: mov     edx, [esp+1Ch+lockData]
0x41EB55: push    edx; lockData
0x41EB56: mov     ecx, eax; this
0x41EB58: call    ExtraLock_ctor; Verified ExtraLock constructor: initializes BSExtraData type 0x31 and wrapper vtable, clears the +8 base field, and stores the ExtraLockData* payload at +0x0C.
0x41EB5D: mov     esi, eax
0x41EB5F: jmp     short loc_41EB63
0x41EB61: xor     esi, esi
0x41EB63: push    esi; BSExtraData *
0x41EB64: mov     ecx, edi; ExtraDataList *
0x41EB66: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41EB6E: call    BaseExtraList_AddExtra
0x41EB73: mov     eax, esi
0x41EB75: mov     ecx, [esp+1Ch+var_C]
0x41EB79: mov     large fs:0, ecx
0x41EB80: pop     ecx
0x41EB81: pop     edi
0x41EB82: pop     esi
0x41EB83: add     esp, 10h
0x41EB86: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
