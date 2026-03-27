0x6BCF10: cmp     byte ptr ds:0B3C344h, 0
0x6BCF17: jz      short loc_6BCF1C
0x6BCF19: xor     eax, eax
0x6BCF1B: retn
0x6BCF1C: push    2
0x6BCF1E: push    1
0x6BCF20: mov     byte ptr ds:0B3C344h, 1
0x6BCF27: mov     dword ptr ds:0B3D0A8h, offset sub_6BCDA0
0x6BCF31: mov     dword ptr ds:0B3D5E0h, offset sub_6BCE70
0x6BCF3B: mov     dword ptr ds:0B3D550h, offset sub_6BC330
0x6BCF45: mov     dword ptr ds:0B3D378h, offset sub_6BC900
0x6BCF4F: mov     dword ptr ds:0B3D2E8h, offset sub_6C0FE0
0x6BCF59: mov     byte ptr ds:0B3D3F0h, 40h ; '@'
0x6BCF60: call    sub_6BCEB0
0x6BCF65: add     esp, 8
0x6BCF68: mov     eax, 1
0x6BCF6D: retn
