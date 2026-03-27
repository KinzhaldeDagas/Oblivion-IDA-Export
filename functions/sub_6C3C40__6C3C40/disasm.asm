0x6C3C40: sub     esp, 20h
0x6C3C43: push    esi
0x6C3C44: mov     esi, ecx
0x6C3C46: mov     al, [esi+8]
0x6C3C49: shr     al, 5
0x6C3C4C: test    al, 1
0x6C3C4E: jz      short loc_6C3C5B
0x6C3C50: fld     dword ptr ds:0A7A164h
0x6C3C56: fstp    dword ptr [esi+28h]
0x6C3C59: jmp     short loc_6C3C89
0x6C3C5B: fld     [esp+24h+arg_0]
0x6C3C5F: push    ecx
0x6C3C60: fstp    [esp+28h+var_28]; float
0x6C3C63: call    sub_6C36B0
0x6C3C68: test    al, al
0x6C3C6A: jz      short loc_6C3C89
0x6C3C6C: mov     ecx, [esi+3Ch]
0x6C3C6F: test    ecx, ecx
0x6C3C71: jz      loc_6C3D78
0x6C3C77: mov     edx, [ecx]
0x6C3C79: mov     eax, [edx+94h]
0x6C3C7F: call    eax
0x6C3C81: test    al, al
0x6C3C83: jz      loc_6C3D78
0x6C3C89: mov     ecx, [esi+3Ch]
0x6C3C8C: test    ecx, ecx
0x6C3C8E: jz      loc_6C3D78
0x6C3C94: mov     edx, ds:0B24260h
0x6C3C9A: fld     dword ptr ds:0A79E10h
0x6C3CA0: mov     eax, ds:0B24264h
0x6C3CA5: fstp    [esp+24h+var_4]
0x6C3CA9: fld     dword ptr [esi+28h]
0x6C3CAC: mov     [esp+24h+var_20], edx
0x6C3CB0: mov     edx, ds:0B24268h
0x6C3CB6: mov     [esp+24h+var_18], edx
0x6C3CBA: mov     edx, ds:0B3CBA8h
0x6C3CC0: mov     [esp+24h+var_10], edx
0x6C3CC4: mov     edx, ds:0B3CBB0h
0x6C3CCA: mov     [esp+24h+var_1C], eax
0x6C3CCE: mov     eax, ds:0B3CBA4h
0x6C3CD3: mov     [esp+24h+var_8], edx
0x6C3CD7: mov     [esp+24h+var_14], eax
0x6C3CDB: mov     eax, ds:0B3CBACh
0x6C3CE0: lea     edx, [esp+24h+var_20]
0x6C3CE4: push    edx
0x6C3CE5: mov     edx, [esi+30h]
0x6C3CE8: mov     [esp+28h+var_C], eax
0x6C3CEC: mov     eax, [ecx]
0x6C3CEE: mov     eax, [eax+4Ch]
0x6C3CF1: push    edx
0x6C3CF2: push    ecx
0x6C3CF3: fstp    [esp+30h+var_30]
0x6C3CF6: call    eax
0x6C3CF8: test    al, al
0x6C3CFA: jz      short loc_6C3D78
0x6C3CFC: fld     [esp+24h+var_20]
0x6C3D00: mov     esi, [esi+30h]
0x6C3D03: fld     dword ptr ds:0A7DEB4h
0x6C3D09: fchs
0x6C3D0B: fucompp
0x6C3D0D: fnstsw  ax
0x6C3D0F: test    ah, 44h
0x6C3D12: jnp     short loc_6C3D29
0x6C3D14: mov     ecx, [esp+24h+var_20]
0x6C3D18: mov     [esi+54h], ecx
0x6C3D1B: mov     edx, [esp+24h+var_1C]
0x6C3D1F: mov     [esi+58h], edx
0x6C3D22: mov     eax, [esp+24h+var_18]
0x6C3D26: mov     [esi+5Ch], eax
0x6C3D29: fld     [esp+24h+var_10]
0x6C3D2D: fld     dword ptr ds:0A7DEB4h
0x6C3D33: fchs
0x6C3D35: fucompp
0x6C3D37: fnstsw  ax
0x6C3D39: test    ah, 44h
0x6C3D3C: jnp     short loc_6C3D4B
0x6C3D3E: lea     ecx, [esi+30h]
0x6C3D41: push    ecx
0x6C3D42: lea     ecx, [esp+28h+var_14]
0x6C3D46: call    sub_47C600
0x6C3D4B: fld     [esp+24h+var_4]
0x6C3D4F: fld     st
0x6C3D51: fld     dword ptr ds:0A7DEB4h
0x6C3D57: fchs
0x6C3D59: fucompp
0x6C3D5B: fnstsw  ax
0x6C3D5D: test    ah, 44h
0x6C3D60: jnp     short loc_6C3D76
0x6C3D62: fabs
0x6C3D64: fstp    [esp+24h+arg_0]
0x6C3D68: fld     [esp+24h+arg_0]
0x6C3D6C: fstp    dword ptr [esi+60h]
0x6C3D6F: pop     esi
0x6C3D70: add     esp, 20h
0x6C3D73: retn    4
0x6C3D76: fstp    st
0x6C3D78: pop     esi
0x6C3D79: add     esp, 20h
0x6C3D7C: retn    4
