0x790B90: push    0FFFFFFFFh
0x790B92: push    offset SEH_7A7090
0x790B97: mov     eax, large fs:0
0x790B9D: push    eax
0x790B9E: sub     esp, 44h
0x790BA1: mov     eax, ds:0B30AACh
0x790BA6: xor     eax, esp
0x790BA8: push    eax
0x790BA9: lea     eax, [esp+54h+var_C]
0x790BAD: mov     large fs:0, eax
0x790BB3: push    12h; MaxCount
0x790BB5: push    offset aVectorTTooLong; "vector<T> too long"
0x790BBA: lea     ecx, [esp+5Ch+var_50]
0x790BBE: mov     [esp+5Ch+var_38], 0Fh
0x790BC6: mov     [esp+5Ch+var_3C], 0
0x790BCE: mov     [esp+5Ch+var_4C], 0
0x790BD3: call    sub_414500
0x790BD8: lea     eax, [esp+54h+var_50]
0x790BDC: push    eax
0x790BDD: lea     ecx, [esp+58h+var_34]
0x790BE1: mov     [esp+58h+var_4], 0
0x790BE9: call    sub_4146E0
0x790BEE: push    offset __TI3?AVlength_error@std@@; throw info for 'class std::length_error'
0x790BF3: lea     ecx, [esp+58h+var_34]
0x790BF7: push    ecx
0x790BF8: mov     [esp+5Ch+var_34], offset ??_7length_error@std@@6B@; const std::length_error::`vftable'
0x790C00: call    ThrowException??
