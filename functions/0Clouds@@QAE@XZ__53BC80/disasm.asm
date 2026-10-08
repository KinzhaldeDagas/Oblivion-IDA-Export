0x53BC80: push    0FFFFFFFFh
0x53BC82: push    offset ??1Clouds@@UAE@XZ_SEH
0x53BC87: mov     eax, large fs:0
0x53BC8D: push    eax
0x53BC8E: push    ecx
0x53BC8F: push    esi
0x53BC90: mov     eax, ds:0B30AACh
0x53BC95: xor     eax, esp
0x53BC97: push    eax
0x53BC98: lea     eax, [esp+18h+var_C]
0x53BC9C: mov     large fs:0, eax
0x53BCA2: mov     esi, ecx
0x53BCA4: mov     [esp+18h+var_10], esi
0x53BCA8: call    ??0SkyObject@@QAE@XZ; SkyObject::SkyObject(void)
0x53BCAD: push    offset NiPointerSlot_Release; a5
0x53BCB2: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x53BCB7: push    2; size
0x53BCB9: push    4; a2
0x53BCBB: lea     eax, [esi+8]
0x53BCBE: push    eax; a1
0x53BCBF: mov     [esp+2Ch+var_4], 0
0x53BCC7: mov     dword ptr [esi], offset ??_7Clouds@@6B@; const Clouds::`vftable'
0x53BCCD: call    ArrayConstructor
0x53BCD2: push    offset NiPointerSlot_Release; a5
0x53BCD7: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x53BCDC: push    2; size
0x53BCDE: push    4; a2
0x53BCE0: lea     ecx, [esi+10h]
0x53BCE3: push    ecx; a1
0x53BCE4: mov     byte ptr [esp+2Ch+var_4], 1
0x53BCE9: call    ArrayConstructor
0x53BCEE: mov     ecx, esi
0x53BCF0: mov     byte ptr [esp+18h+var_4], 2
0x53BCF5: call    sub_53B6E0
0x53BCFA: mov     ecx, esi
0x53BCFC: call    sub_53BBC0
0x53BD01: mov     eax, esi
0x53BD03: mov     ecx, [esp+18h+var_C]
0x53BD07: mov     large fs:0, ecx
0x53BD0E: pop     ecx
0x53BD0F: pop     esi
0x53BD10: add     esp, 10h
0x53BD13: retn
0x9BA2A0: mov     ecx, [ebp-10h]; this
0x9BA2A3: jmp     ??1SkyObject@@UAE@XZ; SkyObject::~SkyObject(void)
0x9BA2A8: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9BA2AD: push    2; int
0x9BA2AF: push    4; unsigned int
0x9BA2B1: mov     eax, [ebp-10h]
0x9BA2B4: add     eax, 8
0x9BA2B7: push    eax; void *
0x9BA2B8: call    $LN21
0x9BA2BD: retn
0x9BA2BE: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9BA2C3: push    2; int
0x9BA2C5: push    4; unsigned int
0x9BA2C7: mov     eax, [ebp-10h]
0x9BA2CA: add     eax, 10h
0x9BA2CD: push    eax; void *
0x9BA2CE: call    $LN21
0x9BA2D3: retn
0x9BA2D4: mov     edx, [esp+arg_4]
0x9BA2D8: lea     eax, [edx-8]
0x9BA2DB: mov     ecx, [edx-0Ch]
0x9BA2DE: xor     ecx, eax
0x9BA2E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA2E5: mov     eax, offset stru_AE44B0
0x9BA2EA: jmp     ___CxxFrameHandler3
