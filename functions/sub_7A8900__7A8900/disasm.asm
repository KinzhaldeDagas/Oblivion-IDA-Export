0x7A8900: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-30): Constructs and throws std::length_error("vector<bool> too long") for packed-pairing-bitset overflow.
0x7A8902: push    offset SEH_7A7090
0x7A8907: mov     eax, large fs:0
0x7A890D: push    eax
0x7A890E: sub     esp, 44h
0x7A8911: mov     eax, ds:0B30AACh
0x7A8916: xor     eax, esp
0x7A8918: push    eax
0x7A8919: lea     eax, [esp+54h+var_C]
0x7A891D: mov     large fs:0, eax
0x7A8923: push    15h; count
0x7A8925: push    offset aVectorBoolTooL; "vector<bool> too long"
0x7A892A: lea     ecx, [esp+5Ch+var_50]; this
0x7A892E: mov     [esp+5Ch+var_50.capacity], 0Fh
0x7A8936: mov     [esp+5Ch+var_50.size], 0
0x7A893E: mov     byte ptr [esp+5Ch+var_50.storage], 0
0x7A8943: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A8948: lea     eax, [esp+54h+var_50]
0x7A894C: push    eax
0x7A894D: lea     ecx, [esp+58h+var_34]
0x7A8951: mov     [esp+58h+var_4], 0
0x7A8959: call    sub_4146E0
0x7A895E: push    offset __TI3?AVlength_error@std@@; throw info for 'class std::length_error'
0x7A8963: lea     ecx, [esp+58h+var_34]
0x7A8967: push    ecx
0x7A8968: mov     [esp+5Ch+var_34], offset ??_7length_error@std@@6B@; const std::length_error::`vftable'
0x7A8970: call    ThrowException??
0x9C8770: lea     ecx, [ebp-50h]; this
0x9C8773: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8778: mov     edx, [esp+arg_4]
0x9C877C: lea     eax, [edx-44h]
0x9C877F: mov     ecx, [edx-48h]
0x9C8782: xor     ecx, eax
0x9C8784: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8789: mov     eax, offset stru_AF0C3C
0x9C878E: jmp     ___CxxFrameHandler3
