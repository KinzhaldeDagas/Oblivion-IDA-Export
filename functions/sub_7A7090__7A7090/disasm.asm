0x7A7090: push    0FFFFFFFFh; Oblivion Random::load virtual. This base implementation is unsupported and always throws std::logic_error("Newran: illegal combination").
0x7A7092: push    offset SEH_7A7090
0x7A7097: mov     eax, large fs:0
0x7A709D: push    eax
0x7A709E: sub     esp, 44h
0x7A70A1: mov     eax, ds:0B30AACh
0x7A70A6: xor     eax, esp
0x7A70A8: push    eax
0x7A70A9: lea     eax, [esp+54h+var_C]
0x7A70AD: mov     large fs:0, eax
0x7A70B3: push    1Bh; count
0x7A70B5: push    offset aNewranIllegalC; "Newran: illegal combination"
0x7A70BA: lea     ecx, [esp+5Ch+var_50]; this
0x7A70BE: mov     [esp+5Ch+var_50.capacity], 0Fh
0x7A70C6: mov     [esp+5Ch+var_50.size], 0
0x7A70CE: mov     byte ptr [esp+5Ch+var_50.storage], 0
0x7A70D3: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A70D8: lea     eax, [esp+54h+var_50]
0x7A70DC: push    eax
0x7A70DD: lea     ecx, [esp+58h+var_34]
0x7A70E1: mov     [esp+58h+var_4], 0
0x7A70E9: call    sub_4146E0
0x7A70EE: push    offset __TI2?AVlogic_error@std@@; throw info for 'class std::logic_error'
0x7A70F3: lea     ecx, [esp+58h+var_34]
0x7A70F7: push    ecx
0x7A70F8: call    ThrowException??
0x9C8770: lea     ecx, [ebp-50h]; this
0x9C8773: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8778: mov     edx, [esp+arg_4]
0x9C877C: lea     eax, [edx-44h]
0x9C877F: mov     ecx, [edx-48h]
0x9C8782: xor     ecx, eax
0x9C8784: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8789: mov     eax, offset stru_AF0C3C
0x9C878E: jmp     ___CxxFrameHandler3
