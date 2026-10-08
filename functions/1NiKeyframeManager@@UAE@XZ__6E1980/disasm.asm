0x6E1980: push    0FFFFFFFFh
0x6E1982: push    offset ??1NiKeyframeManager@@UAE@XZ_SEH
0x6E1987: mov     eax, large fs:0
0x6E198D: push    eax
0x6E198E: push    ecx
0x6E198F: push    esi
0x6E1990: mov     eax, ds:0B30AACh
0x6E1995: xor     eax, esp
0x6E1997: push    eax
0x6E1998: lea     eax, [esp+18h+var_C]
0x6E199C: mov     large fs:0, eax
0x6E19A2: mov     esi, ecx
0x6E19A4: mov     [esp+18h+var_10], esi
0x6E19A8: lea     ecx, [esi+3Ch]
0x6E19AB: mov     [esp+18h+var_4], 0
0x6E19B3: call    ??1?$NiTStringPointerMap@V?$NiPointer@VNiSequence@@@@@@UAE@XZ; NiTStringPointerMap<NiPointer<NiSequence>>::~NiTStringPointerMap<NiPointer<NiSequence>>(void)
0x6E19B8: mov     ecx, esi; this
0x6E19BA: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6E19C2: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6E19C7: mov     ecx, [esp+18h+var_C]
0x6E19CB: mov     large fs:0, ecx
0x6E19D2: pop     ecx
0x6E19D3: pop     esi
0x6E19D4: add     esp, 10h
0x6E19D7: retn
0x9C80C0: mov     ecx, [ebp-10h]; this
0x9C80C3: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C80C8: mov     edx, [esp+arg_4]
0x9C80CC: lea     eax, [edx-8]
0x9C80CF: mov     ecx, [edx-0Ch]
0x9C80D2: xor     ecx, eax
0x9C80D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C80D9: mov     eax, offset stru_AF03BC
0x9C80DE: jmp     ___CxxFrameHandler3
