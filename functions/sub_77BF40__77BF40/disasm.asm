0x77BF40: mov     eax, ds:0B42890h
0x77BF45: push    esi
0x77BF46: mov     esi, ecx
0x77BF48: mov     ecx, eax
0x77BF4A: add     eax, 1
0x77BF4D: test    ecx, ecx
0x77BF4F: mov     ds:0B42890h, eax
0x77BF54: jnz     short loc_77BF68
0x77BF56: push    offset sub_77BD90
0x77BF5B: push    offset sub_77BEE0
0x77BF60: call    sub_747C40
0x77BF65: add     esp, 8
0x77BF68: mov     eax, esi
0x77BF6A: pop     esi
0x77BF6B: retn
