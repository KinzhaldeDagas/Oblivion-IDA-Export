0x79BB20: push    0FFFFFFFFh
0x79BB22: push    offset SEH_79BB20
0x79BB27: mov     eax, large fs:0
0x79BB2D: push    eax
0x79BB2E: sub     esp, 34h
0x79BB31: push    ebx
0x79BB32: push    ebp
0x79BB33: push    esi
0x79BB34: push    edi
0x79BB35: mov     eax, ds:0B30AACh
0x79BB3A: xor     eax, esp
0x79BB3C: push    eax
0x79BB3D: lea     eax, [esp+54h+var_C]
0x79BB41: mov     large fs:0, eax
0x79BB47: mov     ecx, [esp+54h+arg_4]
0x79BB4B: mov     ebp, [esp+54h+arg_0]
0x79BB4F: sub     ecx, ebp
0x79BB51: mov     eax, 2AAAAAABh
0x79BB56: imul    ecx
0x79BB58: mov     ecx, [esp+54h+arg_8]
0x79BB5C: sar     edx, 3
0x79BB5F: mov     ebx, edx
0x79BB61: sub     ecx, ebp
0x79BB63: shr     ebx, 1Fh
0x79BB66: add     ebx, edx
0x79BB68: mov     eax, 2AAAAAABh
0x79BB6D: imul    ecx
0x79BB6F: sar     edx, 3
0x79BB72: mov     ecx, edx
0x79BB74: shr     ecx, 1Fh
0x79BB77: add     ecx, edx
0x79BB79: test    ebx, ebx
0x79BB7B: mov     eax, ecx
0x79BB7D: mov     [esp+54h+arg_4], eax
0x79BB81: mov     edi, ebx
0x79BB83: jz      short loc_79BB96
0x79BB85: cdq
0x79BB86: idiv    edi
0x79BB88: mov     [esp+54h+arg_4], edi
0x79BB8C: mov     eax, [esp+54h+arg_4]
0x79BB90: test    edx, edx
0x79BB92: mov     edi, edx
0x79BB94: jnz     short loc_79BB85
0x79BB96: cmp     eax, ecx
0x79BB98: jge     loc_79BD0B
0x79BB9E: test    eax, eax
0x79BBA0: jle     loc_79BD0B
0x79BBA6: lea     esi, [ebx+ebx*2]
0x79BBA9: shl     esi, 4
0x79BBAC: lea     eax, [eax+eax*2]
0x79BBAF: shl     eax, 4
0x79BBB2: mov     [esp+54h+var_40], esi
0x79BBB6: lea     ebp, [eax+ebp+14h]
0x79BBBA: jmp     short loc_79BBC4
0x79BBBC: align 10h
0x79BBC0: mov     esi, [esp+54h+var_40]
0x79BBC4: lea     edi, [ebp-14h]
0x79BBC7: push    edi
0x79BBC8: lea     ecx, [esp+58h+var_3C]
0x79BBCC: call    sub_79AD70
0x79BBD1: fld     dword ptr [ebp-4]
0x79BBD4: mov     cl, [ebp+4]
0x79BBD7: fstp    [esp+54h+var_2C]
0x79BBDB: fld     dword ptr [ebp+0]
0x79BBDE: mov     edx, [ebp+14h]
0x79BBE1: mov     eax, [ebp+18h]
0x79BBE4: fstp    [esp+54h+var_28]
0x79BBE8: fld     dword ptr [ebp+8]
0x79BBEB: mov     [esp+54h+var_24], cl
0x79BBEF: fstp    [esp+54h+var_20]
0x79BBF3: mov     [esp+54h+var_14], edx
0x79BBF7: fld     dword ptr [ebp+0Ch]
0x79BBFA: mov     [esp+54h+var_10], eax
0x79BBFE: fstp    [esp+54h+var_1C]
0x79BC02: fld     dword ptr [ebp+10h]
0x79BC05: fstp    [esp+54h+var_18]
0x79BC09: lea     eax, [esi+ebp-14h]
0x79BC0D: cmp     eax, [esp+54h+arg_8]
0x79BC11: mov     esi, [esp+54h+arg_0]
0x79BC15: mov     [esp+54h+var_4], 0
0x79BC1D: jz      short loc_79BC21
0x79BC1F: mov     esi, eax
0x79BC21: lea     ecx, [ebp-14h]
0x79BC24: cmp     esi, ecx
0x79BC26: jz      short loc_79BC98
0x79BC28: push    esi
0x79BC29: mov     ecx, edi
0x79BC2B: call    sub_79B160
0x79BC30: fld     dword ptr [esi+10h]
0x79BC33: fstp    dword ptr [edi+10h]
0x79BC36: fld     dword ptr [esi+14h]
0x79BC39: fstp    dword ptr [edi+14h]
0x79BC3C: mov     dl, [esi+18h]
0x79BC3F: mov     [edi+18h], dl
0x79BC42: fld     dword ptr [esi+1Ch]
0x79BC45: fstp    dword ptr [edi+1Ch]
0x79BC48: fld     dword ptr [esi+20h]
0x79BC4B: fstp    dword ptr [edi+20h]
0x79BC4E: fld     dword ptr [esi+24h]
0x79BC51: fstp    dword ptr [edi+24h]
0x79BC54: mov     eax, [esi+28h]
0x79BC57: mov     [edi+28h], eax
0x79BC5A: mov     ecx, [esi+2Ch]
0x79BC5D: mov     [edi+2Ch], ecx
0x79BC60: mov     ecx, [esp+54h+arg_8]
0x79BC64: sub     ecx, esi
0x79BC66: mov     eax, 2AAAAAABh
0x79BC6B: imul    ecx
0x79BC6D: sar     edx, 3
0x79BC70: mov     eax, edx
0x79BC72: shr     eax, 1Fh
0x79BC75: add     eax, edx
0x79BC77: cmp     ebx, eax
0x79BC79: mov     edi, esi
0x79BC7B: jge     short loc_79BC83
0x79BC7D: add     esi, [esp+54h+var_40]
0x79BC81: jmp     short loc_79BC91
0x79BC83: mov     ecx, ebx
0x79BC85: sub     ecx, eax
0x79BC87: lea     esi, [ecx+ecx*2]
0x79BC8A: shl     esi, 4
0x79BC8D: add     esi, [esp+54h+arg_0]
0x79BC91: lea     eax, [ebp-14h]
0x79BC94: cmp     esi, eax
0x79BC96: jnz     short loc_79BC28
0x79BC98: lea     edx, [esp+54h+var_3C]
0x79BC9C: push    edx
0x79BC9D: mov     ecx, edi
0x79BC9F: call    sub_79B160
0x79BCA4: fld     [esp+54h+var_2C]
0x79BCA8: mov     al, [esp+54h+var_24]
0x79BCAC: fstp    dword ptr [edi+10h]
0x79BCAF: fld     [esp+54h+var_28]
0x79BCB3: mov     ecx, [esp+54h+var_14]
0x79BCB7: mov     edx, [esp+54h+var_10]
0x79BCBB: fstp    dword ptr [edi+14h]
0x79BCBE: fld     [esp+54h+var_20]
0x79BCC2: mov     [edi+18h], al
0x79BCC5: mov     eax, [esp+54h+var_38]
0x79BCC9: fstp    dword ptr [edi+1Ch]
0x79BCCC: test    eax, eax
0x79BCCE: fld     [esp+54h+var_1C]
0x79BCD2: fstp    dword ptr [edi+20h]
0x79BCD5: mov     [edi+28h], ecx
0x79BCD8: fld     [esp+54h+var_18]
0x79BCDC: mov     [edi+2Ch], edx
0x79BCDF: fstp    dword ptr [edi+24h]
0x79BCE2: mov     [esp+54h+var_4], 0FFFFFFFFh
0x79BCEA: jz      short loc_79BCF5
0x79BCEC: push    eax
0x79BCED: call    FormHeapFree
0x79BCF2: add     esp, 4
0x79BCF5: mov     eax, [esp+54h+arg_4]
0x79BCF9: sub     eax, 1
0x79BCFC: sub     ebp, 30h ; '0'
0x79BCFF: test    eax, eax
0x79BD01: mov     [esp+54h+arg_4], eax
0x79BD05: jg      loc_79BBC0
0x79BD0B: mov     ecx, [esp+54h+var_C]
0x79BD0F: mov     large fs:0, ecx
0x79BD16: pop     ecx
0x79BD17: pop     edi
0x79BD18: pop     esi
0x79BD19: pop     ebp
0x79BD1A: pop     ebx
0x79BD1B: add     esp, 40h
0x79BD1E: retn
