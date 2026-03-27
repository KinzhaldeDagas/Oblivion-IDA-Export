0x7A8900: push    0FFFFFFFFh
0x7A8902: push    offset SEH_7A7090
0x7A8907: mov     eax, large fs:0
0x7A890D: push    eax
0x7A890E: sub     esp, 44h
0x7A8911: mov     eax, ds:0B30AACh
0x7A8916: xor     eax, esp
0x7A8918: push    eax
0x7A8919: lea     eax, [esp+54h+var_C]
0x7A891D: mov     large fs:0, eax
0x7A8923: push    15h; MaxCount
0x7A8925: push    offset aVectorBoolTooL; "vector<bool> too long"
0x7A892A: lea     ecx, [esp+5Ch+var_50]
0x7A892E: mov     [esp+5Ch+var_38], 0Fh
0x7A8936: mov     [esp+5Ch+var_3C], 0
0x7A893E: mov     [esp+5Ch+var_4C], 0
0x7A8943: call    sub_414500
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
