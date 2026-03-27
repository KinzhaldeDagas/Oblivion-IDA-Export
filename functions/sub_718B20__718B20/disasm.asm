0x718B20: push    esi
0x718B21: push    edi
0x718B22: mov     edi, [esp+8+arg_0]
0x718B26: push    edi
0x718B27: mov     esi, ecx
0x718B29: call    sub_70FF20
0x718B2E: test    al, al
0x718B30: jz      short loc_718B58
0x718B32: lea     eax, [edi+24h]
0x718B35: push    eax
0x718B36: lea     ecx, [esi+24h]
0x718B39: call    sub_8AA390
0x718B3E: test    al, al
0x718B40: jnz     short loc_718B58
0x718B42: fld     dword ptr [esi+30h]
0x718B45: fld     dword ptr [edi+30h]
0x718B48: fucompp
0x718B4A: fnstsw  ax
0x718B4C: test    ah, 44h
0x718B4F: jp      short loc_718B58
0x718B51: pop     edi
0x718B52: xor     eax, eax
0x718B54: pop     esi
0x718B55: retn    4
0x718B58: pop     edi
0x718B59: mov     eax, 1
0x718B5E: pop     esi
0x718B5F: retn    4
