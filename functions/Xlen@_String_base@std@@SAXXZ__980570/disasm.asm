0x980570: push    44h
0x980572: mov     eax, offset loc_9D7C1E
0x980577: call    __EH_prolog3
0x98057C: push    offset aStringTooLong
0x980581: lea     ecx, [ebp+var_28]
0x980584: call    sub_414750
0x980589: and     [ebp+var_4], 0
0x98058D: lea     eax, [ebp+var_28]
0x980590: push    eax
0x980591: lea     ecx, [ebp+var_50]
0x980594: call    sub_4146E0
0x980599: push    offset __TI3?AVlength_error@std@@; throw info for 'class std::length_error'
0x98059E: lea     eax, [ebp+var_50]
0x9805A1: push    eax
0x9805A2: mov     [ebp+var_50], offset ??_7length_error@std@@6B@
0x9805A9: call    ThrowException??
0x9D7C16: lea     ecx, [ebp+var_28]; this
0x9D7C19: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9D7C1E: mov     edx, [esp-4+arg_4]
0x9D7C22: lea     eax, [edx+0Ch]
0x9D7C25: mov     ecx, [edx-54h]
0x9D7C28: xor     ecx, eax
0x9D7C2A: call    @__security_check_cookie@4
0x9D7C2F: mov     eax, offset stru_AFF75C
0x9D7C34: jmp     ___CxxFrameHandler3
