0x5340C0: add     ecx, 14h
0x5340C3: cmp     byte ptr [esp+arg_4], 0
0x5340C8: jz      short loc_5340D7
0x5340CA: mov     eax, [esp+arg_0]
0x5340CE: push    eax
0x5340CF: call    sub_8B1570
0x5340D4: retn    8
0x5340D7: mov     [esp+arg_4], 1
0x5340DF: jmp     sub_8B0E80
