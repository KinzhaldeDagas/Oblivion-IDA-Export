0x7A0EE0: push    0FFFFFFFFh
0x7A0EE2: push    offset SEH_7A0EE0
0x7A0EE7: mov     eax, large fs:0
0x7A0EED: push    eax
0x7A0EEE: sub     esp, 30h
0x7A0EF1: push    ebx
0x7A0EF2: mov     eax, ds:0B30AACh
0x7A0EF7: xor     eax, esp
0x7A0EF9: push    eax
0x7A0EFA: lea     eax, [esp+44h+var_C]
0x7A0EFE: mov     large fs:0, eax
0x7A0F04: fldz
0x7A0F06: xor     ebx, ebx
0x7A0F08: fst     [esp+44h+var_2C]
0x7A0F0C: mov     [esp+44h+var_38], ebx
0x7A0F10: fst     [esp+44h+var_28]
0x7A0F14: mov     [esp+44h+var_34], ebx
0x7A0F18: fst     [esp+44h+var_20]
0x7A0F1C: mov     [esp+44h+var_30], ebx
0x7A0F20: fst     [esp+44h+var_1C]
0x7A0F24: mov     [esp+44h+var_24], bl
0x7A0F28: fstp    [esp+44h+var_18]
0x7A0F2C: mov     [esp+44h+var_14], ebx
0x7A0F30: mov     [esp+44h+var_10], ebx
0x7A0F34: lea     eax, [esp+44h+var_3C]
0x7A0F38: push    eax
0x7A0F39: add     ecx, 8
0x7A0F3C: mov     [esp+48h+var_4], ebx
0x7A0F40: call    sub_7A0B50
