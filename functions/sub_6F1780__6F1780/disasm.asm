0x6F1780: push    0FFFFFFFFh
0x6F1782: push    offset SEH_7A7090
0x6F1787: mov     eax, large fs:0
0x6F178D: push    eax
0x6F178E: sub     esp, 44h
0x6F1791: mov     eax, ds:0B30AACh
0x6F1796: xor     eax, esp
0x6F1798: push    eax
0x6F1799: lea     eax, [esp+54h+var_C]
0x6F179D: mov     large fs:0, eax
0x6F17A3: push    12h; count
0x6F17A5: push    offset aVectorTTooLong; "vector<T> too long"
0x6F17AA: lea     ecx, [esp+5Ch+var_50]; this
0x6F17AE: mov     [esp+5Ch+var_50.capacity], 0Fh
0x6F17B6: mov     [esp+5Ch+var_50.size], 0
0x6F17BE: mov     byte ptr [esp+5Ch+var_50.storage], 0
0x6F17C3: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x6F17C8: lea     eax, [esp+54h+var_50]
0x6F17CC: push    eax
0x6F17CD: lea     ecx, [esp+58h+var_34]
0x6F17D1: mov     [esp+58h+var_4], 0
0x6F17D9: call    sub_4146E0
0x6F17DE: push    offset __TI3?AVlength_error@std@@; throw info for 'class std::length_error'
0x6F17E3: lea     ecx, [esp+58h+var_34]
0x6F17E7: push    ecx
0x6F17E8: mov     [esp+5Ch+var_34], offset ??_7length_error@std@@6B@; const std::length_error::`vftable'
0x6F17F0: call    ThrowException??
0x9C8770: lea     ecx, [ebp-50h]; this
0x9C8773: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8778: mov     edx, [esp+arg_4]
0x9C877C: lea     eax, [edx-44h]
0x9C877F: mov     ecx, [edx-48h]
0x9C8782: xor     ecx, eax
0x9C8784: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8789: mov     eax, offset stru_AF0C3C
0x9C878E: jmp     ___CxxFrameHandler3
