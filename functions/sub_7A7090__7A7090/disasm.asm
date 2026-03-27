0x7A7090: push    0FFFFFFFFh
0x7A7092: push    offset SEH_7A7090
0x7A7097: mov     eax, large fs:0
0x7A709D: push    eax
0x7A709E: sub     esp, 44h
0x7A70A1: mov     eax, ds:0B30AACh
0x7A70A6: xor     eax, esp
0x7A70A8: push    eax
0x7A70A9: lea     eax, [esp+54h+var_C]
0x7A70AD: mov     large fs:0, eax
0x7A70B3: push    1Bh; MaxCount
0x7A70B5: push    offset aNewranIllegalC; "Newran: illegal combination"
0x7A70BA: lea     ecx, [esp+5Ch+var_50]
0x7A70BE: mov     [esp+5Ch+var_38], 0Fh
0x7A70C6: mov     [esp+5Ch+var_3C], 0
0x7A70CE: mov     [esp+5Ch+var_4C], 0
0x7A70D3: call    sub_414500
0x7A70D8: lea     eax, [esp+54h+var_50]
0x7A70DC: push    eax
0x7A70DD: lea     ecx, [esp+58h+var_34]
0x7A70E1: mov     [esp+58h+var_4], 0
0x7A70E9: call    sub_4146E0
0x7A70EE: push    offset __TI2?AVlogic_error@std@@; throw info for 'class std::logic_error'
0x7A70F3: lea     ecx, [esp+58h+var_34]
0x7A70F7: push    ecx
0x7A70F8: call    ThrowException??
