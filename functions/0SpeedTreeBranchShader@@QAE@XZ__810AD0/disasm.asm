0x810AD0: push    0FFFFFFFFh
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
0x810B08: push    offset sub_7016A0; a5
0x810B0D: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x810B12: push    1Ch; size
0x810B14: push    4; a2
0x810B16: lea     ecx, [esi+9Ch]
0x810B1C: push    ecx; a1
0x810B1D: mov     [esp+2Ch+var_4], 0
0x810B25: mov     dword ptr [esi], offset ??_7SpeedTreeBranchShader@@6B@; const SpeedTreeBranchShader::`vftable'
0x810B2B: call    ArrayConstructor
0x810B30: push    offset sub_7016A0; a5
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
