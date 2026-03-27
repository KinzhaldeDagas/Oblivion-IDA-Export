0x95FB00: push    esi
0x95FB01: push    edi
0x95FB02: mov     edi, ecx
0x95FB04: xor     esi, esi
0x95FB06: cmp     [edi+0Eh], si
0x95FB0A: jbe     short loc_95FB38
0x95FB0C: push    ebx
0x95FB0D: mov     ebx, [esp+0Ch+arg_4]
0x95FB11: push    ebp
0x95FB12: mov     ebp, [esp+10h+arg_0]
0x95FB16: mov     eax, [edi+8]
0x95FB19: mov     ecx, [eax+esi*4]
0x95FB1C: mov     eax, [ebp+8]
0x95FB1F: mov     edx, [ecx]
0x95FB21: mov     eax, [eax+esi*4]
0x95FB24: mov     edx, [edx+14h]
0x95FB27: push    ebx
0x95FB28: push    eax
0x95FB29: call    edx
0x95FB2B: movzx   eax, word ptr [edi+0Eh]
0x95FB2F: add     esi, 1
0x95FB32: cmp     esi, eax
0x95FB34: jb      short loc_95FB16
0x95FB36: pop     ebp
0x95FB37: pop     ebx
0x95FB38: pop     edi
0x95FB39: pop     esi
0x95FB3A: retn    8
