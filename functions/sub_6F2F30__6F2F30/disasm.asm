0x6F2F30: push    ebx
0x6F2F31: mov     ebx, [esp+4+arg_0]
0x6F2F35: push    esi
0x6F2F36: mov     esi, [esp+8+arg_4]
0x6F2F3A: cmp     ebx, esi
0x6F2F3C: jz      short loc_6F2F6B
0x6F2F3E: push    edi
0x6F2F3F: mov     edi, [esp+0Ch+arg_8]
0x6F2F43: push    0FFFFFFFFh
0x6F2F45: push    0
0x6F2F47: sub     esi, 2Ch ; ','
0x6F2F4A: sub     edi, 2Ch ; ','
0x6F2F4D: push    esi
0x6F2F4E: mov     ecx, edi
0x6F2F50: call    sub_414420
0x6F2F55: lea     eax, [esi+1Ch]
0x6F2F58: push    eax
0x6F2F59: lea     ecx, [edi+1Ch]
0x6F2F5C: call    sub_6F2610
0x6F2F61: cmp     esi, ebx
0x6F2F63: jnz     short loc_6F2F43
0x6F2F65: mov     eax, edi
0x6F2F67: pop     edi
0x6F2F68: pop     esi
0x6F2F69: pop     ebx
0x6F2F6A: retn
0x6F2F6B: mov     eax, [esp+8+arg_8]
0x6F2F6F: pop     esi
0x6F2F70: pop     ebx
0x6F2F71: retn
