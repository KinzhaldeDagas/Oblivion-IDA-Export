0x8DEF20: mov     eax, [ecx+2Ch]
0x8DEF23: sub     eax, 0
0x8DEF26: jz      short loc_8DEF43
0x8DEF28: dec     eax
0x8DEF29: jz      short loc_8DEF43
0x8DEF2B: dec     eax
0x8DEF2C: jnz     short locret_8DEF52
0x8DEF2E: mov     eax, [esp+arg_0]
0x8DEF32: mov     ecx, [ecx+10h]
0x8DEF35: push    eax
0x8DEF36: lea     edx, [esp+4+arg_0]
0x8DEF3A: push    edx
0x8DEF3B: call    sub_8996C0
0x8DEF40: retn    4
0x8DEF43: mov     ecx, [esp+arg_0]
0x8DEF47: push    0
0x8DEF49: push    1
0x8DEF4B: push    7
0x8DEF4D: call    sub_8A9AB0
0x8DEF52: retn    4
