0x4CBB20: push    ebx
0x4CBB21: push    ebp
0x4CBB22: push    esi
0x4CBB23: mov     ebp, ecx
0x4CBB25: push    edi
0x4CBB26: push    ebp; a2
0x4CBB27: mov     ecx, offset stru_B35C80; this
0x4CBB2C: call    sub_496EA0
0x4CBB31: lea     esi, [ebp+48h]
0x4CBB34: test    esi, esi
0x4CBB36: jz      short loc_4CBB7C
0x4CBB38: mov     bl, [esp+10h+arg_4]
0x4CBB3C: lea     esp, [esp+0]
0x4CBB40: cmp     dword ptr [esi+4], 0
0x4CBB44: jnz     short loc_4CBB4B
0x4CBB46: cmp     dword ptr [esi], 0
0x4CBB49: jz      short loc_4CBB7C
0x4CBB4B: mov     edi, [esi]
0x4CBB4D: mov     eax, [edi]
0x4CBB4F: mov     edx, [eax+170h]
0x4CBB55: mov     ecx, edi
0x4CBB57: call    edx
0x4CBB59: test    eax, eax
0x4CBB5B: mov     esi, [esi+4]
0x4CBB5E: jz      short loc_4CBB78
0x4CBB60: test    bl, bl
0x4CBB62: jz      short loc_4CBB6F
0x4CBB64: mov     ecx, [edi+8]
0x4CBB67: shr     ecx, 5
0x4CBB6A: test    cl, 1
0x4CBB6D: jnz     short loc_4CBB78
0x4CBB6F: mov     dl, [esp+10h+arg_0]
0x4CBB73: cmp     [eax+4], dl
0x4CBB76: jz      short loc_4CBB90
0x4CBB78: test    esi, esi
0x4CBB7A: jnz     short loc_4CBB40
0x4CBB7C: push    ebp; a2
0x4CBB7D: mov     ecx, offset stru_B35C80; this
0x4CBB82: call    sub_496F50
0x4CBB87: pop     edi
0x4CBB88: pop     esi
0x4CBB89: pop     ebp
0x4CBB8A: xor     eax, eax
0x4CBB8C: pop     ebx
0x4CBB8D: retn    8
0x4CBB90: push    ebp; a2
0x4CBB91: mov     ecx, offset stru_B35C80; this
0x4CBB96: call    sub_496F50
0x4CBB9B: mov     eax, edi
0x4CBB9D: pop     edi
0x4CBB9E: pop     esi
0x4CBB9F: pop     ebp
0x4CBBA0: pop     ebx
0x4CBBA1: retn    8
