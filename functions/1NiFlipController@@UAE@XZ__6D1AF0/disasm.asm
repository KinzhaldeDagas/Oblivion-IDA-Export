0x6D1AF0: push    0FFFFFFFFh
0x6D1AF2: push    offset ??0NiFlipController@@QAE@XZ_SEH
0x6D1AF7: mov     eax, large fs:0
0x6D1AFD: push    eax
0x6D1AFE: push    ecx
0x6D1AFF: push    esi
0x6D1B00: push    edi
0x6D1B01: mov     eax, ds:0B30AACh
0x6D1B06: xor     eax, esp
0x6D1B08: push    eax
0x6D1B09: lea     eax, [esp+1Ch+var_C]
0x6D1B0D: mov     large fs:0, eax
0x6D1B13: mov     esi, ecx
0x6D1B15: mov     [esp+1Ch+var_10], esi
0x6D1B19: mov     dword ptr [esi], offset ??_7NiFlipController@@6B@; const NiFlipController::`vftable'
0x6D1B1F: mov     eax, [esi+58h]
0x6D1B22: xor     edi, edi
0x6D1B24: push    eax
0x6D1B25: mov     [esp+20h+var_4], edi
0x6D1B29: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6D1B2E: mov     [esi+58h], edi
0x6D1B31: mov     eax, [esi+44h]
0x6D1B34: add     esp, 4
0x6D1B37: cmp     eax, edi
0x6D1B39: mov     dword ptr [esi+40h], offset ??_7?$NiTArray@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTArray<NiPointer<NiTexture>>::`vftable'
0x6D1B40: jz      short loc_6D1B5F
0x6D1B42: mov     ecx, [eax-4]
0x6D1B45: lea     edi, [eax-4]
0x6D1B48: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x6D1B4D: push    ecx; int
0x6D1B4E: push    4; unsigned int
0x6D1B50: push    eax; void *
0x6D1B51: call    $LN21
0x6D1B56: push    edi
0x6D1B57: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6D1B5C: add     esp, 4
0x6D1B5F: mov     ecx, esi; this
0x6D1B61: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6D1B69: call    ??1NiPoint3InterpController@@UAE@XZ; Shared single-interpolator-controller destructor body used by this controller family: releases refcounted interpolator smart pointer +0x3C, deleting at zero references, then destroys the time-controller base. Existing RTTI name reflects another identical controller specialization.
0x6D1B6E: mov     ecx, [esp+1Ch+var_C]
0x6D1B72: mov     large fs:0, ecx
0x6D1B79: pop     ecx
0x6D1B7A: pop     edi
0x6D1B7B: pop     esi
0x6D1B7C: add     esp, 10h
0x6D1B7F: retn
0x9C79F0: mov     ecx, [ebp-10h]; this
0x9C79F3: jmp     j_??1NiPoint3InterpController@@UAE@XZ; NiPoint3InterpController::~NiPoint3InterpController(void)
0x9C79F8: mov     edx, [esp+arg_4]
0x9C79FC: lea     eax, [edx-0Ch]
0x9C79FF: mov     ecx, [edx-10h]
0x9C7A02: xor     ecx, eax
0x9C7A04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7A09: mov     eax, offset stru_AEFDC4
0x9C7A0E: jmp     ___CxxFrameHandler3
