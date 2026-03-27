0x6F2F80: push    ebx
0x6F2F81: mov     ebx, [esp+4+arg_0]
0x6F2F85: push    esi
0x6F2F86: mov     esi, [esp+8+arg_4]
0x6F2F8A: cmp     ebx, esi
0x6F2F8C: jz      short loc_6F2FC1
0x6F2F8E: push    edi
0x6F2F8F: mov     edi, [esp+0Ch+arg_8]
0x6F2F93: push    0FFFFFFFFh
0x6F2F95: push    0
0x6F2F97: sub     esi, 30h ; '0'
0x6F2F9A: sub     edi, 30h ; '0'
0x6F2F9D: push    esi
0x6F2F9E: mov     ecx, edi
0x6F2FA0: call    sub_414420
0x6F2FA5: mov     eax, [esi+1Ch]
0x6F2FA8: lea     ecx, [esi+20h]
0x6F2FAB: push    ecx
0x6F2FAC: lea     ecx, [edi+20h]
0x6F2FAF: mov     [edi+1Ch], eax
0x6F2FB2: call    sub_6F2770
0x6F2FB7: cmp     esi, ebx
0x6F2FB9: jnz     short loc_6F2F93
0x6F2FBB: mov     eax, edi
0x6F2FBD: pop     edi
0x6F2FBE: pop     esi
0x6F2FBF: pop     ebx
0x6F2FC0: retn
0x6F2FC1: mov     eax, [esp+8+arg_8]
0x6F2FC5: pop     esi
0x6F2FC6: pop     ebx
0x6F2FC7: retn
