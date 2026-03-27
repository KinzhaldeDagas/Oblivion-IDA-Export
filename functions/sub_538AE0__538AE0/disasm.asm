0x538AE0: push    edi
0x538AE1: mov     edi, ecx
0x538AE3: mov     ecx, [edi]
0x538AE5: test    ecx, ecx
0x538AE7: jz      short loc_538B19
0x538AE9: mov     eax, [ecx]
0x538AEB: mov     edx, [eax+5Ch]
0x538AEE: push    esi
0x538AEF: mov     esi, [esp+8+arg_0]
0x538AF3: push    esi
0x538AF4: call    edx
0x538AF6: test    esi, esi
0x538AF8: jz      short loc_538B18
0x538AFA: mov     edi, [edi]
0x538AFC: push    19h
0x538AFE: push    56h ; 'V'
0x538B00: push    0ADh ; '­'
0x538B05: push    58h ; 'X'
0x538B07: call    sub_8AEB80
0x538B0C: add     esp, 10h
0x538B0F: push    eax
0x538B10: push    edi
0x538B11: mov     ecx, esi
0x538B13: call    sub_88BB60
0x538B18: pop     esi
0x538B19: pop     edi
0x538B1A: retn    4
