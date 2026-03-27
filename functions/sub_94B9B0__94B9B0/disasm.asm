0x94B9B0: push    ebp
0x94B9B1: mov     ebp, esp
0x94B9B3: and     esp, 0FFFFFFF0h
0x94B9B6: sub     esp, 30h
0x94B9B9: mov     eax, [ecx]
0x94B9BB: lea     edx, [esp+30h+var_20]
0x94B9BF: push    edx
0x94B9C0: mov     edx, [ebp+arg_0]
0x94B9C3: push    edx
0x94B9C4: push    offset xmmword_B2F090
0x94B9C9: call    dword ptr [eax+0Ch]
0x94B9CC: fld     [esp+30h+var_10]
0x94B9D0: mov     eax, [esi+8]
0x94B9D3: fchs
0x94B9D5: mov     ecx, [esi+4]
0x94B9D8: fstp    [esp+30h+var_24]
0x94B9DC: and     eax, 3FFFFFFFh
0x94B9E1: cmp     ecx, eax
0x94B9E3: mov     dword ptr [esp+30h+var_3C+0Ch], 3F800000h
0x94B9EA: mov     [esp+30h+var_2C], 0
0x94B9F2: mov     [esp+30h+var_28], 0
0x94B9FA: jnz     short loc_94BA07
0x94B9FC: push    10h
0x94B9FE: push    esi
0x94B9FF: call    sub_8A6EE0
0x94BA04: add     esp, 8
0x94BA07: mov     ecx, [esi+4]
0x94BA0A: mov     edx, [esi]
0x94BA0C: movaps  xmm0, [esp+30h+var_3C+0Ch]
0x94BA10: mov     eax, ecx
0x94BA12: shl     eax, 4
0x94BA15: add     eax, edx
0x94BA17: inc     ecx
0x94BA18: mov     [esi+4], ecx
0x94BA1B: movaps  xmmword ptr [eax], xmm0
0x94BA1E: fld     [esp+30h+var_C]
0x94BA22: mov     ecx, [esi+8]
0x94BA25: fchs
0x94BA27: mov     eax, [esi+4]
0x94BA2A: fstp    [esp+30h+var_24]
0x94BA2E: and     ecx, 3FFFFFFFh
0x94BA34: cmp     eax, ecx
0x94BA36: mov     dword ptr [esp+30h+var_3C+0Ch], 0
0x94BA3D: mov     [esp+30h+var_2C], 3F800000h
0x94BA45: mov     [esp+30h+var_28], 0
0x94BA4D: jnz     short loc_94BA5A
0x94BA4F: push    10h
0x94BA51: push    esi
0x94BA52: call    sub_8A6EE0
0x94BA57: add     esp, 8
0x94BA5A: mov     ecx, [esi+4]
0x94BA5D: mov     edx, [esi]
0x94BA5F: movaps  xmm0, [esp+30h+var_3C+0Ch]
0x94BA63: mov     eax, ecx
0x94BA65: shl     eax, 4
0x94BA68: add     eax, edx
0x94BA6A: inc     ecx
0x94BA6B: mov     [esi+4], ecx
0x94BA6E: movaps  xmmword ptr [eax], xmm0
0x94BA71: fld     [esp+30h+var_8]
0x94BA75: mov     edx, [esi+8]
0x94BA78: fchs
0x94BA7A: mov     eax, [esi+4]
0x94BA7D: fstp    [esp+30h+var_24]
0x94BA81: and     edx, 3FFFFFFFh
0x94BA87: cmp     eax, edx
0x94BA89: mov     dword ptr [esp+30h+var_3C+0Ch], 0
0x94BA90: mov     [esp+30h+var_2C], 0
0x94BA98: mov     [esp+30h+var_28], 3F800000h
0x94BAA0: jnz     short loc_94BAAD
0x94BAA2: push    10h
0x94BAA4: push    esi
0x94BAA5: call    sub_8A6EE0
0x94BAAA: add     esp, 8
0x94BAAD: mov     ecx, [esi+4]
0x94BAB0: mov     edx, [esi]
0x94BAB2: movaps  xmm0, [esp+30h+var_3C+0Ch]
0x94BAB6: mov     eax, ecx
0x94BAB8: shl     eax, 4
0x94BABB: add     eax, edx
0x94BABD: inc     ecx
0x94BABE: mov     [esi+4], ecx
0x94BAC1: movaps  xmmword ptr [eax], xmm0
0x94BAC4: mov     eax, dword ptr [esp+30h+var_20]
0x94BAC8: mov     ecx, [esi+8]
0x94BACB: mov     [esp+30h+var_24], eax
0x94BACF: mov     eax, [esi+4]
0x94BAD2: and     ecx, 3FFFFFFFh
0x94BAD8: cmp     eax, ecx
0x94BADA: mov     dword ptr [esp+30h+var_3C+0Ch], 0BF800000h
0x94BAE1: mov     [esp+30h+var_2C], 0
0x94BAE9: mov     [esp+30h+var_28], 0
0x94BAF1: jnz     short loc_94BAFE
0x94BAF3: push    10h
0x94BAF5: push    esi
0x94BAF6: call    sub_8A6EE0
0x94BAFB: add     esp, 8
0x94BAFE: mov     ecx, [esi+4]
0x94BB01: mov     edx, [esi]
0x94BB03: movaps  xmm0, [esp+30h+var_3C+0Ch]
0x94BB07: mov     eax, ecx
0x94BB09: shl     eax, 4
0x94BB0C: add     eax, edx
0x94BB0E: inc     ecx
0x94BB0F: mov     [esi+4], ecx
0x94BB12: movaps  xmmword ptr [eax], xmm0
0x94BB15: mov     eax, [esi+8]
0x94BB18: mov     ecx, [esi+4]
0x94BB1B: mov     edx, [esp+30h+var_1C]
0x94BB1F: and     eax, 3FFFFFFFh
0x94BB24: cmp     ecx, eax
0x94BB26: mov     dword ptr [esp+30h+var_3C+0Ch], 0
0x94BB2D: mov     [esp+30h+var_2C], 0BF800000h
0x94BB35: mov     [esp+30h+var_28], 0
0x94BB3D: mov     [esp+30h+var_24], edx
0x94BB41: jnz     short loc_94BB4E
0x94BB43: push    10h
0x94BB45: push    esi
0x94BB46: call    sub_8A6EE0
0x94BB4B: add     esp, 8
0x94BB4E: mov     ecx, [esi+4]
0x94BB51: mov     edx, [esi]
0x94BB53: movaps  xmm0, [esp+30h+var_3C+0Ch]
0x94BB57: mov     eax, ecx
0x94BB59: shl     eax, 4
0x94BB5C: add     eax, edx
0x94BB5E: inc     ecx
0x94BB5F: mov     [esi+4], ecx
0x94BB62: movaps  xmmword ptr [eax], xmm0
0x94BB65: mov     edx, [esi+8]
0x94BB68: mov     eax, [esi+4]
0x94BB6B: mov     ecx, [esp+30h+var_18]
0x94BB6F: and     edx, 3FFFFFFFh
0x94BB75: cmp     eax, edx
0x94BB77: mov     dword ptr [esp+30h+var_3C+0Ch], 0
0x94BB7E: mov     [esp+30h+var_2C], 0
0x94BB86: mov     [esp+30h+var_28], 0BF800000h
0x94BB8E: mov     [esp+30h+var_24], ecx
0x94BB92: jnz     short loc_94BB9F
0x94BB94: push    10h
0x94BB96: push    esi
0x94BB97: call    sub_8A6EE0
0x94BB9C: add     esp, 8
0x94BB9F: mov     ecx, [esi+4]
0x94BBA2: mov     edx, [esi]
0x94BBA4: movaps  xmm0, [esp+30h+var_3C+0Ch]
0x94BBA8: mov     eax, ecx
0x94BBAA: shl     eax, 4
0x94BBAD: add     eax, edx
0x94BBAF: inc     ecx
0x94BBB0: mov     [esi+4], ecx
0x94BBB3: movaps  xmmword ptr [eax], xmm0
0x94BBB6: mov     esp, ebp
0x94BBB8: pop     ebp
0x94BBB9: retn
