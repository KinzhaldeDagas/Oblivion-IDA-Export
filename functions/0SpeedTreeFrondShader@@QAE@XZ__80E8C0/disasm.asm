0x80E8C0: push    0FFFFFFFFh; SpeedTreeFrondShader constructor. Current xrefs show construction only from frond shader-definition factory 0x80EE10, not from a TES4 geometry attachment path.
0x80E8C2: push    offset ??0SpeedTreeFrondShader@@QAE@XZ_SEH
0x80E8C7: mov     eax, large fs:0
0x80E8CD: push    eax
0x80E8CE: push    ecx
0x80E8CF: push    esi
0x80E8D0: mov     eax, ds:0B30AACh
0x80E8D5: xor     eax, esp
0x80E8D7: push    eax
0x80E8D8: lea     eax, [esp+18h+var_C]
0x80E8DC: mov     large fs:0, eax
0x80E8E2: mov     esi, ecx
0x80E8E4: mov     [esp+18h+var_10], esi
0x80E8E8: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x80E8ED: push    offset NiPointerSlot_Release; a5
0x80E8F2: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80E8F7: push    4; size
0x80E8F9: push    4; a2
0x80E8FB: lea     eax, [esi+7Ch]
0x80E8FE: push    eax; a1
0x80E8FF: mov     [esp+2Ch+var_4], 0
0x80E907: mov     dword ptr [esi], offset ??_7SpeedTreeFrondShader@@6B@; const SpeedTreeFrondShader::`vftable'
0x80E90D: call    ArrayConstructor
0x80E912: push    offset NiPointerSlot_Release; a5
0x80E917: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x80E91C: push    2; size
0x80E91E: push    4; a2
0x80E920: lea     ecx, [esi+8Ch]
0x80E926: push    ecx; a1
0x80E927: mov     byte ptr [esp+2Ch+var_4], 1
0x80E92C: call    ArrayConstructor
0x80E931: fldz
0x80E933: mov     dword ptr [esi+94h], 0
0x80E93D: fst     dword ptr [esi+98h]
0x80E943: fst     dword ptr [esi+9Ch]
0x80E949: mov     eax, esi
0x80E94B: fst     dword ptr [esi+0A0h]
0x80E951: fst     dword ptr [esi+0A4h]
0x80E957: fst     dword ptr [esi+0A8h]
0x80E95D: fst     dword ptr [esi+0ACh]
0x80E963: fst     dword ptr [esi+0B0h]
0x80E969: fstp    dword ptr [esi+0B4h]
0x80E96F: mov     ecx, [esp+18h+var_C]
0x80E973: mov     large fs:0, ecx
0x80E97A: pop     ecx
0x80E97B: pop     esi
0x80E97C: add     esp, 10h
0x80E97F: retn
0x9D0F50: mov     ecx, [ebp-10h]; this
0x9D0F53: jmp     ??1BSShader@@UAE@XZ;
0x9D0F58: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D0F5D: push    4; int
0x9D0F5F: push    4; unsigned int
0x9D0F61: mov     eax, [ebp-10h]
0x9D0F64: add     eax, 7Ch ; '|'
0x9D0F67: push    eax; void *
0x9D0F68: call    $LN21
0x9D0F6D: retn
0x9D0F6E: mov     edx, [esp+arg_4]
0x9D0F72: lea     eax, [edx-8]
0x9D0F75: mov     ecx, [edx-0Ch]
0x9D0F78: xor     ecx, eax
0x9D0F7A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0F7F: mov     eax, offset stru_AF96E8
0x9D0F84: jmp     ___CxxFrameHandler3
