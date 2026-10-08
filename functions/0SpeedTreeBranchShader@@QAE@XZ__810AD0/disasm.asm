0x810AD0: push    0FFFFFFFFh; SpeedTreeBranchShader ctor: ShadowLightShader base, 28 branch vertex-shader refs at +0x9C and 10 branch pixel-shader refs at +0x10C.
0x810AD2: push    offset ??0SpeedTreeBranchShader@@QAE@XZ_SEH
0x810AD7: mov     eax, large fs:0
0x810ADD: push    eax
0x810ADE: push    ecx
0x810ADF: push    esi
0x810AE0: mov     eax, ds:0B30AACh
0x810AE5: xor     eax, esp
0x810AE7: push    eax
0x810AE8: lea     eax, [esp+18h+var_C]
0x810AEC: mov     large fs:0, eax
0x810AF2: mov     esi, ecx
0x810AF4: mov     [esp+18h+var_10], esi
0x810AF8: mov     eax, [esp+18h+arg_0]
0x810AFC: push    0
0x810AFE: push    0
0x810B00: push    0
0x810B02: push    eax
0x810B03: call    ??0ShadowLightShader@@QAE@XZ; ShadowLightShader::ShadowLightShader(void)
0x810B08: push    offset NiPointerSlot_Release; a5
0x810B0D: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x810B12: push    1Ch; size
0x810B14: push    4; a2
0x810B16: lea     ecx, [esi+9Ch]
0x810B1C: push    ecx; a1
0x810B1D: mov     [esp+2Ch+var_4], 0
0x810B25: mov     dword ptr [esi], offset ??_7SpeedTreeBranchShader@@6B@; const SpeedTreeBranchShader::`vftable'
0x810B2B: call    ArrayConstructor
0x810B30: push    offset NiPointerSlot_Release; a5
0x810B35: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x810B3A: push    0Ah; size
0x810B3C: push    4; a2
0x810B3E: lea     edx, [esi+10Ch]
0x810B44: push    edx; a1
0x810B45: mov     byte ptr [esp+2Ch+var_4], 1
0x810B4A: call    ArrayConstructor
0x810B4F: mov     eax, esi
0x810B51: mov     ecx, [esp+18h+var_C]
0x810B55: mov     large fs:0, ecx
0x810B5C: pop     ecx
0x810B5D: pop     esi
0x810B5E: add     esp, 10h
0x810B61: retn    4
0x9D1020: mov     ecx, [ebp-10h]; this
0x9D1023: jmp     ??1ShadowLightShader@@UAE@XZ; ShadowLightShader::~ShadowLightShader(void)
0x9D1028: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D102D: push    1Ch; int
0x9D102F: push    4; unsigned int
0x9D1031: mov     eax, [ebp-10h]
0x9D1034: add     eax, 9Ch ; 'œ'
0x9D1039: push    eax; void *
0x9D103A: call    $LN21
0x9D103F: retn
0x9D1040: mov     edx, [esp+arg_4]
0x9D1044: lea     eax, [edx-8]
0x9D1047: mov     ecx, [edx-0Ch]
0x9D104A: xor     ecx, eax
0x9D104C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D1051: mov     eax, offset stru_AF9784
0x9D1056: jmp     ___CxxFrameHandler3
