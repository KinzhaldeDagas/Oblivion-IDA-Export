0x77BEE0: cmp     byte ptr ds:0B4288Ch, 0
0x77BEE7: jnz     short locret_77BF3A
0x77BEE9: push    16h
0x77BEEB: mov     byte ptr ds:0B4288Ch, 1
0x77BEF2: call    sub_77BE60
0x77BEF7: push    17h
0x77BEF9: call    sub_77BE60
0x77BEFE: push    18h
0x77BF00: call    sub_77BE60
0x77BF05: add     esp, 0Ch
0x77BF08: call    sub_772970
0x77BF0D: call    sub_7734A0
0x77BF12: call    sub_7797B0
0x77BF17: call    sub_76FAC0
0x77BF1C: call    sub_77D180
0x77BF21: call    sub_77F6F0
0x77BF26: call    sub_77BC90
0x77BF2B: call    sub_77BCE0
0x77BF30: call    sub_77BC40
0x77BF35: jmp     __cfltcvt_init
0x77BF3A: retn
