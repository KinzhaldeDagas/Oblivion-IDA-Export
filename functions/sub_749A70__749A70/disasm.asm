0x749A70: push    ebx
0x749A71: push    ebp
0x749A72: mov     ebp, [esp+8+arg_4]
0x749A76: push    esi
0x749A77: push    edi
0x749A78: mov     edi, [esp+10h+arg_0]
0x749A7C: push    ebp
0x749A7D: push    edi
0x749A7E: mov     ebx, ecx
0x749A80: call    sub_722700
0x749A85: mov     al, [ebx+0C0h]
0x749A8B: mov     [edi+0C0h], al
0x749A91: mov     esi, [ebx+0C8h]
0x749A97: test    esi, esi
0x749A99: jz      short loc_749AFC
0x749A9B: jmp     short loc_749AA0
0x749A9D: align 10h
0x749AA0: mov     ecx, [esi+8]
0x749AA3: mov     edx, [ecx]
0x749AA5: lea     eax, [esi+8]
0x749AA8: mov     eax, [edx+18h]
0x749AAB: mov     esi, [esi]
0x749AAD: push    ebp
0x749AAE: call    eax
0x749AB0: mov     edi, eax
0x749AB2: test    edi, edi
0x749AB4: mov     [esp+10h+arg_4], edi
0x749AB8: jz      short loc_749AC4
0x749ABA: lea     ecx, [edi+4]
0x749ABD: push    ecx; lpAddend
0x749ABE: call    dword ptr ds:0A28078h
0x749AC4: mov     ecx, [esp+10h+arg_0]
0x749AC8: lea     edx, [esp+10h+arg_4]
0x749ACC: push    edx
0x749ACD: add     ecx, 0C4h ; 'Ä'
0x749AD3: call    sub_7C16B0
0x749AD8: test    edi, edi
0x749ADA: jz      short loc_749AF4
0x749ADC: lea     eax, [edi+4]
0x749ADF: push    eax; lpAddend
0x749AE0: call    dword ptr ds:0A2807Ch
0x749AE6: test    eax, eax
0x749AE8: jnz     short loc_749AF4
0x749AEA: mov     edx, [edi]
0x749AEC: mov     eax, [edx]
0x749AEE: push    1
0x749AF0: mov     ecx, edi
0x749AF2: call    eax
0x749AF4: test    esi, esi
0x749AF6: jnz     short loc_749AA0
0x749AF8: mov     edi, [esp+10h+arg_0]
0x749AFC: fld     dword ptr [ebx+0E8h]
0x749B02: push    ebp
0x749B03: fstp    dword ptr [edi+0E8h]
0x749B09: mov     ecx, [ebx+0B4h]
0x749B0F: mov     edx, [ecx]
0x749B11: mov     eax, [edx+18h]
0x749B14: call    eax
0x749B16: mov     ebx, [esp+10h+arg_0]
0x749B1A: mov     esi, [ebx+0B4h]
0x749B20: mov     edi, eax
0x749B22: cmp     esi, edi
0x749B24: jz      short loc_749B5A
0x749B26: test    esi, esi
0x749B28: jz      short loc_749B46
0x749B2A: lea     ecx, [esi+4]
0x749B2D: push    ecx; lpAddend
0x749B2E: call    dword ptr ds:0A2807Ch
0x749B34: test    eax, eax
0x749B36: jnz     short loc_749B46
0x749B38: test    esi, esi
0x749B3A: jz      short loc_749B46
0x749B3C: mov     edx, [esi]
0x749B3E: mov     eax, [edx]
0x749B40: push    1
0x749B42: mov     ecx, esi
0x749B44: call    eax
0x749B46: test    edi, edi
0x749B48: mov     [ebx+0B4h], edi
0x749B4E: jz      short loc_749B5A
0x749B50: add     edi, 4
0x749B53: push    edi; lpAddend
0x749B54: call    dword ptr ds:0A28078h
0x749B5A: pop     edi
0x749B5B: pop     esi
0x749B5C: pop     ebp
0x749B5D: pop     ebx
0x749B5E: retn    8
