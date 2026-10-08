0x6C5EE0: push    0FFFFFFFFh
0x6C5EE2: push    offset ??1NiMultiTargetTransformController@@UAE@XZ_SEH
0x6C5EE7: mov     eax, large fs:0
0x6C5EED: push    eax
0x6C5EEE: push    ecx
0x6C5EEF: push    esi
0x6C5EF0: mov     eax, ds:0B30AACh
0x6C5EF5: xor     eax, esp
0x6C5EF7: push    eax
0x6C5EF8: lea     eax, [esp+18h+var_C]
0x6C5EFC: mov     large fs:0, eax
0x6C5F02: mov     esi, ecx
0x6C5F04: mov     [esp+18h+var_10], esi
0x6C5F08: call    NiInterpController_Construct; Constructs NiInterpController over NiTimeController, installs its vtable, and clears interpolator capability/manager flag 0x20.
0x6C5F0D: xor     eax, eax
0x6C5F0F: mov     [esp+18h+var_4], eax
0x6C5F13: mov     [esi+3Ch], eax
0x6C5F16: mov     [esi+40h], eax
0x6C5F19: mov     [esi+44h], ax
0x6C5F1D: mov     eax, [esp+18h+arg_0]
0x6C5F21: push    eax
0x6C5F22: mov     ecx, esi
0x6C5F24: mov     dword ptr [esi], offset ??_7NiMultiTargetTransformController@@6B@; const NiMultiTargetTransformController::`vftable'
0x6C5F2A: call    sub_6D0010
0x6C5F2F: mov     eax, esi
0x6C5F31: mov     ecx, [esp+18h+var_C]
0x6C5F35: mov     large fs:0, ecx
0x6C5F3C: pop     ecx
0x6C5F3D: pop     esi
0x6C5F3E: add     esp, 10h
0x6C5F41: retn    4
0x9C7500: mov     ecx, [ebp-10h]; this
0x9C7503: jmp     j_??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C7508: mov     edx, [esp+arg_4]
0x9C750C: lea     eax, [edx-8]
0x9C750F: mov     ecx, [edx-0Ch]
0x9C7512: xor     ecx, eax
0x9C7514: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7519: mov     eax, offset stru_AEF954
0x9C751E: jmp     ___CxxFrameHandler3
