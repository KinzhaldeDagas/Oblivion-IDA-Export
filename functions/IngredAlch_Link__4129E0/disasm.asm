0x4129E0: mov     eax, [ecx+8]
0x4129E3: shr     eax, 3
0x4129E6: test    al, 1
0x4129E8: jnz     short locret_4129F3
0x4129EA: push    ecx
0x4129EB: add     ecx, 64h ; 'd'
0x4129EE: call    TESScriptableForm_Link
0x4129F3: retn
