0x4AEC30: push    esi
0x4AEC31: mov     esi, ecx
0x4AEC33: mov     eax, [esi+8]
0x4AEC36: shr     eax, 3
0x4AEC39: test    al, 1
0x4AEC3B: jnz     short loc_4AEC4B
0x4AEC3D: call    sub_4AE830
0x4AEC42: push    1; a2
0x4AEC44: mov     ecx, esi; this
0x4AEC46: call    TESForm_SetIsLinked
0x4AEC4B: pop     esi
0x4AEC4C: retn
