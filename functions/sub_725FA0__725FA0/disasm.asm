0x725FA0: mov     eax, [esp+Size]
0x725FA4: test    eax, eax
0x725FA6: jz      short loc_725FB4
0x725FA8: push    eax; Size
0x725FA9: call    FormHeapAlloc
0x725FAE: add     esp, 4
0x725FB1: retn    4
0x725FB4: xor     eax, eax
0x725FB6: retn    4
