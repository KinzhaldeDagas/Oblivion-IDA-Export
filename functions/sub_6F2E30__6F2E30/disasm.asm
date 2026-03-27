0x6F2E30: push    ebx
0x6F2E31: mov     ebx, [esp+4+arg_4]
0x6F2E35: push    esi
0x6F2E36: mov     esi, [esp+8+arg_0]
0x6F2E3A: cmp     esi, ebx
0x6F2E3C: jz      short loc_6F2E6B
0x6F2E3E: push    edi
0x6F2E3F: mov     edi, [esp+0Ch+arg_8]
0x6F2E43: push    0FFFFFFFFh
0x6F2E45: push    0
0x6F2E47: push    esi
0x6F2E48: mov     ecx, edi
0x6F2E4A: call    sub_414420
0x6F2E4F: lea     eax, [esi+1Ch]
0x6F2E52: push    eax
0x6F2E53: lea     ecx, [edi+1Ch]
0x6F2E56: call    sub_6F2610
0x6F2E5B: add     esi, 2Ch ; ','
0x6F2E5E: add     edi, 2Ch ; ','
0x6F2E61: cmp     esi, ebx
0x6F2E63: jnz     short loc_6F2E43
0x6F2E65: mov     eax, edi
0x6F2E67: pop     edi
0x6F2E68: pop     esi
0x6F2E69: pop     ebx
0x6F2E6A: retn
0x6F2E6B: mov     eax, [esp+8+arg_8]
0x6F2E6F: pop     esi
0x6F2E70: pop     ebx
0x6F2E71: retn
