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
0x6F17A3: push    12h; MaxCount
0x6F17A5: push    offset aVectorTTooLong; "vector<T> too long"
0x6F17AA: lea     ecx, [esp+5Ch+var_50]
0x6F17AE: mov     [esp+5Ch+var_38], 0Fh
0x6F17B6: mov     [esp+5Ch+var_3C], 0
0x6F17BE: mov     [esp+5Ch+var_4C], 0
0x6F17C3: call    sub_414500
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
