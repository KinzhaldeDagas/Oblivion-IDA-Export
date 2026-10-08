0x6C3F00: push    0FFFFFFFFh
0x6C3F02: push    offset SEH_8C62B0
0x6C3F07: mov     eax, large fs:0
0x6C3F0D: push    eax
0x6C3F0E: push    ecx
0x6C3F0F: push    esi
0x6C3F10: mov     eax, ds:0B30AACh
0x6C3F15: xor     eax, esp
0x6C3F17: push    eax
0x6C3F18: lea     eax, [esp+18h+var_C]
0x6C3F1C: mov     large fs:0, eax
0x6C3F22: push    40h ; '@'; Size
0x6C3F24: call    FormHeapAlloc
0x6C3F29: mov     esi, eax
0x6C3F2B: add     esp, 4
0x6C3F2E: mov     [esp+18h+var_10], esi
0x6C3F32: xor     eax, eax
0x6C3F34: cmp     esi, eax
0x6C3F36: mov     [esp+18h+var_4], eax
0x6C3F3A: jz      short loc_6C3F4B
0x6C3F3C: mov     ecx, esi
0x6C3F3E: call    NiSingleInterpController_Construct; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6C3F43: mov     dword ptr [esi], offset ??_7NiTransformController@@6B@; const NiTransformController::`vftable'
0x6C3F49: mov     eax, esi
0x6C3F4B: mov     ecx, [esp+18h+var_C]
0x6C3F4F: mov     large fs:0, ecx
0x6C3F56: pop     ecx
0x6C3F57: pop     esi
0x6C3F58: add     esp, 10h
0x6C3F5B: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
