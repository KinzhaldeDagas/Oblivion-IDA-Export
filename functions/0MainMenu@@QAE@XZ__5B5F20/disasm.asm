0x5B5F20: push    0FFFFFFFFh
0x5B5F22: push    offset ??0MainMenu@@QAE@XZ_SEH
0x5B5F27: mov     eax, large fs:0
0x5B5F2D: push    eax
0x5B5F2E: push    ecx
0x5B5F2F: push    ebx
0x5B5F30: push    esi
0x5B5F31: push    edi
0x5B5F32: mov     eax, ds:0B30AACh
0x5B5F37: xor     eax, esp
0x5B5F39: push    eax
0x5B5F3A: lea     eax, [esp+20h+var_C]
0x5B5F3E: mov     large fs:0, eax
0x5B5F44: mov     esi, ecx
0x5B5F46: mov     [esp+20h+var_10], esi
0x5B5F4A: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5B5F4F: xor     ebx, ebx
0x5B5F51: mov     dword ptr [esi], offset ??_7MainMenu@@6B@; const MainMenu::`vftable'
0x5B5F57: mov     ds:0B3B40Ch, esi
0x5B5F5D: mov     [esi+28h], ebx
0x5B5F60: mov     [esi+30h], ebx
0x5B5F63: mov     [esi+34h], ebx
0x5B5F66: mov     [esi+38h], ebx
0x5B5F69: mov     [esi+3Ch], ebx
0x5B5F6C: mov     [esi+40h], ebx
0x5B5F6F: mov     [esi+44h], ebx
0x5B5F72: mov     [esi+4Dh], bl
0x5B5F75: mov     [esi+4Ch], bl
0x5B5F78: mov     eax, ds:0B33428h
0x5B5F7D: cmp     eax, ebx
0x5B5F7F: mov     [esp+20h+var_4], ebx
0x5B5F83: jz      loc_5B600C
0x5B5F89: cmp     [eax+20h], ebx
0x5B5F8C: setnz   al
0x5B5F8F: cmp     al, bl
0x5B5F91: mov     ds:0B3B408h, al
0x5B5F96: jnz     short loc_5B5FAD
0x5B5F98: mov     eax, ds:0B03094h
0x5B5F9D: push    1
0x5B5F9F: push    eax
0x5B5FA0: call    sub_410C40
0x5B5FA5: add     esp, 8
0x5B5FA8: mov     ds:0B3B408h, al
0x5B5FAD: mov     ecx, ds:0B33398h
0x5B5FB3: mov     byte ptr ds:0B3C0ECh, 1
0x5B5FBA: mov     edi, [ecx+24h]
0x5B5FBD: push    3
0x5B5FBF: mov     ecx, edi
0x5B5FC1: call    sub_6AC330
0x5B5FC6: cmp     edi, ebx
0x5B5FC8: jz      short loc_5B5FF0
0x5B5FCA: mov     eax, ds:0B33428h
0x5B5FCF: cmp     eax, ebx
0x5B5FD1: jz      short loc_5B5FE4
0x5B5FD3: mov     eax, [eax+20h]
0x5B5FD6: cmp     eax, ebx
0x5B5FD8: setnz   cl
0x5B5FDB: cmp     cl, bl
0x5B5FDD: jz      short loc_5B5FE4
0x5B5FDF: cmp     eax, 2
0x5B5FE2: jnz     short loc_5B5FF0
0x5B5FE4: mov     ecx, edi
0x5B5FE6: call    sub_6A8D50
0x5B5FEB: call    sub_5B5AC0
0x5B5FF0: mov     byte ptr ds:0B3B409h, 1
0x5B5FF7: mov     eax, esi
0x5B5FF9: mov     ecx, [esp+20h+var_C]
0x5B5FFD: mov     large fs:0, ecx
0x5B6004: pop     ecx
0x5B6005: pop     edi
0x5B6006: pop     esi
0x5B6007: pop     ebx
0x5B6008: add     esp, 10h
0x5B600B: retn
0x5B600C: mov     ds:0B3B408h, bl
0x5B6012: jmp     short loc_5B5F98
