0x811A30: push    0FFFFFFFFh
0x811A32: push    offset SEH_811A30
0x811A37: mov     eax, large fs:0
0x811A3D: push    eax
0x811A3E: push    ecx
0x811A3F: push    ebx
0x811A40: push    ebp
0x811A41: push    esi
0x811A42: push    edi
0x811A43: mov     eax, ds:0B30AACh
0x811A48: xor     eax, esp
0x811A4A: push    eax
0x811A4B: lea     eax, [esp+24h+var_C]
0x811A4F: mov     large fs:0, eax
0x811A55: mov     esi, ecx
0x811A57: lea     eax, [esp+24h+a3]
0x811A5B: push    eax
0x811A5C: call    sub_772630
0x811A61: mov     ecx, [esp+28h+a3]
0x811A65: push    2
0x811A67: push    3
0x811A69: push    0
0x811A6B: push    ecx
0x811A6C: mov     [esp+38h+var_4], 0
0x811A74: call    sub_801110
0x811A79: mov     ecx, [esi+7Ch]; this
0x811A7C: mov     edx, [esp+38h+a3]
0x811A80: mov     eax, [ecx+14h]
0x811A83: add     esp, 14h
0x811A86: push    edx; a3
0x811A87: push    eax; a2
0x811A88: call    sub_760010
0x811A8D: mov     ebp, [esi+7Ch]
0x811A90: mov     ebx, [esi+8Ch]
0x811A96: mov     edi, [ebp+58h]
0x811A99: cmp     edi, ebx
0x811A9B: jz      short loc_811ACE
0x811A9D: test    edi, edi
0x811A9F: jz      short loc_811ABD
0x811AA1: lea     ecx, [edi+4]
0x811AA4: push    ecx; lpAddend
0x811AA5: call    dword ptr ds:0A2807Ch
0x811AAB: test    eax, eax
0x811AAD: jnz     short loc_811ABD
0x811AAF: test    edi, edi
0x811AB1: jz      short loc_811ABD
0x811AB3: mov     edx, [edi]
0x811AB5: mov     eax, [edx]
0x811AB7: push    1
0x811AB9: mov     ecx, edi
0x811ABB: call    eax
0x811ABD: test    ebx, ebx
0x811ABF: mov     [ebp+58h], ebx
0x811AC2: jz      short loc_811ACE
0x811AC4: add     ebx, 4
0x811AC7: push    ebx; lpAddend
0x811AC8: call    dword ptr ds:0A28078h
0x811ACE: mov     ebp, [esi+7Ch]
0x811AD1: mov     ebx, [esi+9Ch]
0x811AD7: mov     edi, [ebp+44h]
0x811ADA: cmp     edi, ebx
0x811ADC: jz      short loc_811B0F
0x811ADE: test    edi, edi
0x811AE0: jz      short loc_811AFE
0x811AE2: lea     ecx, [edi+4]
0x811AE5: push    ecx; lpAddend
0x811AE6: call    dword ptr ds:0A2807Ch
0x811AEC: test    eax, eax
0x811AEE: jnz     short loc_811AFE
0x811AF0: test    edi, edi
0x811AF2: jz      short loc_811AFE
0x811AF4: mov     edx, [edi]
0x811AF6: mov     eax, [edx]
0x811AF8: push    1
0x811AFA: mov     ecx, edi
0x811AFC: call    eax
0x811AFE: test    ebx, ebx
0x811B00: mov     [ebp+44h], ebx
0x811B03: jz      short loc_811B0F
0x811B05: add     ebx, 4
0x811B08: push    ebx; lpAddend
0x811B09: call    dword ptr ds:0A28078h
0x811B0F: cmp     dword ptr ds:0B42F48h, 2
0x811B16: jl      short loc_811B37
0x811B18: mov     edi, [esi+7Ch]
0x811B1B: cmp     dword ptr [edi+30h], 0
0x811B1F: jnz     short loc_811B29
0x811B21: call    sub_772DF0
0x811B26: mov     [edi+30h], eax
0x811B29: mov     ecx, [edi+30h]
0x811B2C: push    0
0x811B2E: push    0Ah
0x811B30: push    18h
0x811B32: call    sub_772CD0
0x811B37: mov     edi, [esi+7Ch]
0x811B3A: cmp     dword ptr [edi+30h], 0
0x811B3E: jnz     short loc_811B48
0x811B40: call    sub_772DF0
0x811B45: mov     [edi+30h], eax
0x811B48: mov     ecx, [edi+30h]
0x811B4B: push    0
0x811B4D: push    7
0x811B4F: push    0A8h ; '¨'
0x811B54: call    sub_772CD0
0x811B59: mov     edi, [esi+7Ch]
0x811B5C: cmp     dword ptr [edi+30h], 0
0x811B60: jnz     short loc_811B6A
0x811B62: call    sub_772DF0
0x811B67: mov     [edi+30h], eax
0x811B6A: mov     ecx, [edi+30h]
0x811B6D: push    0
0x811B6F: push    0
0x811B71: push    1Bh
0x811B73: call    sub_772CD0
0x811B78: mov     edi, [esi+7Ch]
0x811B7B: cmp     dword ptr [edi+30h], 0
0x811B7F: jnz     short loc_811B89
0x811B81: call    sub_772DF0
0x811B86: mov     [edi+30h], eax
0x811B89: mov     ecx, [edi+30h]
0x811B8C: push    0
0x811B8E: push    1
0x811B90: push    7
0x811B92: call    sub_772CD0
0x811B97: mov     edi, [esi+7Ch]
0x811B9A: cmp     dword ptr [edi+30h], 0
0x811B9E: jnz     short loc_811BA8
0x811BA0: call    sub_772DF0
0x811BA5: mov     [edi+30h], eax
0x811BA8: mov     ecx, [edi+30h]
0x811BAB: push    0
0x811BAD: push    4
0x811BAF: push    17h
0x811BB1: call    sub_772CD0
0x811BB6: mov     esi, [esi+7Ch]
0x811BB9: cmp     dword ptr [esi+30h], 0
0x811BBD: jnz     short loc_811BC7
0x811BBF: call    sub_772DF0
0x811BC4: mov     [esi+30h], eax
0x811BC7: mov     ecx, [esi+30h]
0x811BCA: push    0
0x811BCC: push    1
0x811BCE: push    0Eh
0x811BD0: call    sub_772CD0
0x811BD5: mov     eax, [esp+24h+a3]
0x811BD9: test    eax, eax
0x811BDB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x811BE3: jz      short loc_811BF8
0x811BE5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x811BE9: mov     ecx, eax
0x811BEB: add     eax, 5Ch ; '\'
0x811BEE: cmp     dword ptr [eax], 0
0x811BF1: jnz     short loc_811BF8
0x811BF3: call    sub_772560
0x811BF8: mov     ecx, [esp+24h+var_C]
0x811BFC: mov     large fs:0, ecx
0x811C03: pop     ecx
0x811C04: pop     edi
0x811C05: pop     esi
0x811C06: pop     ebp
0x811C07: pop     ebx
0x811C08: add     esp, 10h
0x811C0B: retn
