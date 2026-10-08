0x6FE7E0: push    0FFFFFFFFh
0x6FE7E2: push    offset ??1BSPSysArrayEmitter@@UAE@XZ_SEH
0x6FE7E7: mov     eax, large fs:0
0x6FE7ED: push    eax
0x6FE7EE: push    ecx
0x6FE7EF: push    esi
0x6FE7F0: push    edi
0x6FE7F1: mov     eax, ds:0B30AACh
0x6FE7F6: xor     eax, esp
0x6FE7F8: push    eax
0x6FE7F9: lea     eax, [esp+1Ch+var_C]
0x6FE7FD: mov     large fs:0, eax
0x6FE803: mov     esi, ecx
0x6FE805: mov     [esp+1Ch+var_10], esi
0x6FE809: mov     eax, [esi+5Ch]
0x6FE80C: test    eax, eax
0x6FE80E: mov     [esp+1Ch+var_4], 0
0x6FE816: mov     dword ptr [esi+58h], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x6FE81D: jz      short loc_6FE83C
0x6FE81F: mov     ecx, [eax-4]
0x6FE822: lea     edi, [eax-4]
0x6FE825: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x6FE82A: push    ecx; int
0x6FE82B: push    4; unsigned int
0x6FE82D: push    eax; void *
0x6FE82E: call    $LN21
0x6FE833: push    edi
0x6FE834: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6FE839: add     esp, 4
0x6FE83C: mov     ecx, esi; this
0x6FE83E: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6FE846: call    ??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x6FE84B: mov     ecx, [esp+1Ch+var_C]
0x6FE84F: mov     large fs:0, ecx
0x6FE856: pop     ecx
0x6FE857: pop     edi
0x6FE858: pop     esi
0x6FE859: add     esp, 10h
0x6FE85C: retn
0x9C92C0: mov     ecx, [ebp-10h]; this
0x9C92C3: jmp     j_??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x9C92C8: mov     edx, [esp+arg_4]
0x9C92CC: lea     eax, [edx-0Ch]
0x9C92CF: mov     ecx, [edx-10h]
0x9C92D2: xor     ecx, eax
0x9C92D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C92D9: mov     eax, offset stru_AF1BC8
0x9C92DE: jmp     ___CxxFrameHandler3
