0x60E010: push    0FFFFFFFFh
0x60E012: push    offset SEH_8C8970
0x60E017: mov     eax, large fs:0
0x60E01D: push    eax
0x60E01E: push    ecx
0x60E01F: push    esi
0x60E020: push    edi
0x60E021: mov     eax, ds:0B30AACh
0x60E026: xor     eax, esp
0x60E028: push    eax
0x60E029: lea     eax, [esp+1Ch+var_C]
0x60E02D: mov     large fs:0, eax
0x60E033: mov     edi, ecx
0x60E035: push    40h ; '@'; Size
0x60E037: call    FormHeapAlloc
0x60E03C: mov     esi, eax
0x60E03E: add     esp, 4
0x60E041: mov     [esp+1Ch+var_10], esi
0x60E045: test    esi, esi
0x60E047: mov     [esp+1Ch+var_4], 0
0x60E04F: jz      short loc_60E064
0x60E051: mov     ecx, esi; this
0x60E053: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x60E058: mov     dword ptr [esi], offset ??_7BSDoorHavokController@@6B@; const BSDoorHavokController::`vftable'
0x60E05E: mov     byte ptr [esi+3Ch], 0
0x60E062: jmp     short loc_60E066
0x60E064: xor     esi, esi
0x60E066: mov     eax, [esp+1Ch+arg_0]
0x60E06A: push    eax
0x60E06B: push    esi
0x60E06C: mov     ecx, edi
0x60E06E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x60E076: call    NiTimeController_CopyMembers; Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
0x60E07B: and     word ptr [esi+8], 0FFF7h
0x60E081: mov     eax, esi
0x60E083: mov     ecx, [esp+1Ch+var_C]
0x60E087: mov     large fs:0, ecx
0x60E08E: pop     ecx
0x60E08F: pop     edi
0x60E090: pop     esi
0x60E091: add     esp, 10h
0x60E094: retn    4
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
