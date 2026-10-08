0x46A020: push    0FFFFFFFFh
0x46A022: push    offset TESContainer_CopyContentsToRef_SEH
0x46A027: mov     eax, large fs:0
0x46A02D: push    eax
0x46A02E: sub     esp, 124h
0x46A034: mov     eax, ds:0B30AACh
0x46A039: xor     eax, esp
0x46A03B: mov     [esp+130h+var_10], eax
0x46A042: push    ebx
0x46A043: push    ebp
0x46A044: push    esi
0x46A045: push    edi
0x46A046: mov     eax, ds:0B30AACh
0x46A04B: xor     eax, esp
0x46A04D: push    eax
0x46A04E: lea     eax, [esp+144h+var_C]
0x46A055: mov     large fs:0, eax
0x46A05B: mov     eax, [esp+144h+ntint]
0x46A062: xor     ebp, ebp
0x46A064: cmp     eax, ebp
0x46A066: mov     esi, ecx
0x46A068: mov     [esp+144h+var_124], eax
0x46A06C: jz      TESContainer_CopyContentsToRef___Done
0x46A072: push    ebp; int
0x46A073: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x46A078: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x46A07D: push    ebp; int
0x46A07E: push    eax; void *
0x46A07F: call    OblivionDynamicCast
0x46A084: add     esi, 8
0x46A087: xor     ebx, ebx
0x46A089: add     esp, 14h
0x46A08C: cmp     esi, ebp
0x46A08E: mov     edi, eax
0x46A090: mov     [esp+144h+var_118], edi
0x46A094: mov     [esp+144h+var_120], ebx
0x46A098: mov     [esp+144h+var_128], esi
0x46A09C: jz      TESContainer_CopyContentsToRef___PostAdditemMessageForPlayer
0x46A0A2: jmp     short TESContainer_CopyContentsToRef___ContentLoop_
0x9AE980: mov     eax, [ebp-130h]
0x9AE986: push    eax
0x9AE987: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AE98C: pop     ecx
0x9AE98D: retn
0x9AE98E: mov     eax, [ebp-130h]
0x9AE994: push    eax
0x9AE995: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AE99A: pop     ecx
0x9AE99B: retn
0x9AE99C: lea     ecx, [ebp-130h]; void *
0x9AE9A2: jmp     BSStringT_Clear
0x9AE9A7: mov     edx, [esp+unk]
0x9AE9AB: lea     eax, [edx-134h]
0x9AE9B1: mov     ecx, [edx-138h]
0x9AE9B7: xor     ecx, eax
0x9AE9B9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE9BE: add     eax, 10h
0x9AE9C1: mov     ecx, [edx-4]
0x9AE9C4: xor     ecx, eax
0x9AE9C6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE9CB: mov     eax, offset stru_ADB0F4
0x9AE9D0: jmp     ___CxxFrameHandler3
