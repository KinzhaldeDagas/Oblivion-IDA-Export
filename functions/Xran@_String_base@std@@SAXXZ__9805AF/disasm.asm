0x9805AF: push    44h ; 'D'
0x9805B1: mov     eax, offset loc_9D7C1E
0x9805B6: call    __EH_prolog3
0x9805BB: push    offset aInvalidStringP
0x9805C0: lea     ecx, [ebp+var_28]
0x9805C3: call    sub_414750
0x9805C8: and     [ebp+var_4], 0
0x9805CC: lea     eax, [ebp+var_28]
0x9805CF: push    eax
0x9805D0: lea     ecx, [ebp+var_50]
0x9805D3: call    sub_4146E0
0x9805D8: push    offset __TI3?AVout_of_range@std@@; throw info for 'class std::out_of_range'
0x9805DD: lea     eax, [ebp+var_50]
0x9805E0: push    eax
0x9805E1: mov     [ebp+var_50], offset ??_7out_of_range@std@@6B@
0x9805E8: call    ThrowException??
0x9D7C16: lea     ecx, [ebp+var_28]; this
0x9D7C19: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9D7C1E: mov     edx, [esp-4+arg_4]
0x9D7C22: lea     eax, [edx+0Ch]
0x9D7C25: mov     ecx, [edx-54h]
0x9D7C28: xor     ecx, eax
0x9D7C2A: call    @__security_check_cookie@4
0x9D7C2F: mov     eax, offset stru_AFF75C
0x9D7C34: jmp     ___CxxFrameHandler3
