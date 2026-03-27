0x97A9D0: mov     eax, [esp+arg_14]
0x97A9D4: mov     edx, [esp+arg_8]
0x97A9D8: push    ebx
0x97A9D9: mov     ebx, [esp+4+arg_20]
0x97A9DD: push    ebp
0x97A9DE: mov     ebp, [esp+8+arg_1C]
0x97A9E2: push    esi
0x97A9E3: push    edi
0x97A9E4: mov     edi, [esp+10h+arg_18]
0x97A9E8: push    ebx
0x97A9E9: push    ebp
0x97A9EA: push    edi
0x97A9EB: push    eax
0x97A9EC: mov     eax, [esp+20h+arg_4]
0x97A9F0: mov     esi, ecx
0x97A9F2: mov     ecx, [esp+20h+arg_10]
0x97A9F6: push    ecx
0x97A9F7: mov     ecx, [esp+24h+arg_0]
0x97A9FB: push    edx
0x97A9FC: push    eax
0x97A9FD: push    ecx
0x97A9FE: mov     ecx, esi
0x97AA00: call    sub_979EF0
0x97AA05: sub     ebp, edi
0x97AA07: cmp     ebp, [esp+10h+arg_28]
0x97AA0B: jl      loc_97AB6A
0x97AA11: mov     ebp, [esp+10h+arg_24]
0x97AA15: mov     ecx, [esp+10h+arg_1C]
0x97AA19: push    ebp
0x97AA1A: lea     edx, [esp+14h+arg_18]
0x97AA1E: push    edx
0x97AA1F: mov     edx, [esp+18h+arg_14]
0x97AA23: lea     eax, [esp+18h+arg_20]
0x97AA27: push    eax
0x97AA28: push    ebx
0x97AA29: push    ecx
0x97AA2A: push    edi
0x97AA2B: push    edx
0x97AA2C: mov     ecx, esi
0x97AA2E: call    sub_9797B0
0x97AA33: mov     eax, [esp+10h+arg_20]
0x97AA37: cmp     edi, eax
0x97AA39: jge     short loc_97AAA3
0x97AA3B: push    8Ch ; 'Œ'; Size
0x97AA40: call    FormHeapAlloc
0x97AA45: xor     ecx, ecx
0x97AA47: add     esp, 4
0x97AA4A: cmp     eax, ecx
0x97AA4C: jz      short loc_97AA6B
0x97AA4E: mov     dword ptr [eax], offset ??_7NiOBBNode@@6B@; const NiOBBNode::`vftable'
0x97AA54: mov     [eax+7Ch], ecx
0x97AA57: mov     [eax+80h], ecx
0x97AA5D: mov     [eax+84h], ecx
0x97AA63: mov     [eax+88h], ecx
0x97AA69: mov     ecx, eax
0x97AA6B: mov     eax, [esp+10h+arg_28]
0x97AA6F: mov     edx, [esp+10h+arg_20]
0x97AA73: push    eax
0x97AA74: mov     eax, [esp+14h+arg_14]
0x97AA78: push    ebx
0x97AA79: push    ebp
0x97AA7A: push    edx
0x97AA7B: mov     edx, [esp+20h+arg_10]
0x97AA7F: push    edi
0x97AA80: push    eax
0x97AA81: mov     eax, [esp+28h+arg_C]
0x97AA85: push    edx
0x97AA86: mov     edx, [esp+2Ch+arg_8]
0x97AA8A: push    eax
0x97AA8B: mov     eax, [esp+30h+arg_4]
0x97AA8F: push    edx
0x97AA90: mov     edx, [esp+34h+arg_0]
0x97AA94: push    eax
0x97AA95: push    edx
0x97AA96: mov     [esi+80h], ecx
0x97AA9C: call    sub_97A9D0
0x97AAA1: jmp     short loc_97AAE1
0x97AAA3: jnz     short loc_97AAE1
0x97AAA5: push    98h ; '˜'; Size
0x97AAAA: call    FormHeapAlloc
0x97AAAF: add     esp, 4
0x97AAB2: test    eax, eax
0x97AAB4: jz      short loc_97AAD9
0x97AAB6: movzx   ecx, word ptr [ebp+edi*4+0]
0x97AABB: mov     edx, [esp+10h+arg_C]
0x97AABF: push    ecx
0x97AAC0: mov     ecx, [esp+14h+arg_8]
0x97AAC4: push    edx
0x97AAC5: mov     edx, [esp+18h+arg_4]
0x97AAC9: push    ecx
0x97AACA: mov     ecx, [esp+1Ch+arg_0]
0x97AACE: push    edx
0x97AACF: push    ecx
0x97AAD0: mov     ecx, eax
0x97AAD2: call    sub_977530
0x97AAD7: jmp     short loc_97AADB
0x97AAD9: xor     eax, eax
0x97AADB: mov     [esi+80h], eax
0x97AAE1: mov     edi, [esp+10h+arg_18]
0x97AAE5: mov     eax, [esp+10h+arg_1C]
0x97AAE9: cmp     edi, eax
0x97AAEB: jge     loc_97AB7F
0x97AAF1: push    8Ch ; 'Œ'; Size
0x97AAF6: call    FormHeapAlloc
0x97AAFB: xor     ecx, ecx
0x97AAFD: add     esp, 4
0x97AB00: cmp     eax, ecx
0x97AB02: jz      short loc_97AB21
0x97AB04: mov     dword ptr [eax], offset ??_7NiOBBNode@@6B@; const NiOBBNode::`vftable'
0x97AB0A: mov     [eax+7Ch], ecx
0x97AB0D: mov     [eax+80h], ecx
0x97AB13: mov     [eax+84h], ecx
0x97AB19: mov     [eax+88h], ecx
0x97AB1F: jmp     short loc_97AB23
0x97AB21: xor     eax, eax
0x97AB23: mov     edx, [esp+10h+arg_1C]
0x97AB27: mov     ecx, ebx
0x97AB29: mov     ebx, ebp
0x97AB2B: push    ebx
0x97AB2C: push    edx
0x97AB2D: mov     edx, [esp+18h+arg_8]
0x97AB31: mov     [esi+84h], eax
0x97AB37: push    edi
0x97AB38: mov     esi, eax
0x97AB3A: mov     eax, [esp+1Ch+arg_14]
0x97AB3E: push    eax
0x97AB3F: mov     eax, [esp+20h+arg_4]
0x97AB43: mov     ebp, ecx
0x97AB45: mov     ecx, [esp+20h+arg_10]
0x97AB49: push    ecx
0x97AB4A: mov     ecx, [esp+24h+arg_0]
0x97AB4E: push    edx
0x97AB4F: push    eax
0x97AB50: push    ecx
0x97AB51: mov     ecx, esi
0x97AB53: call    sub_979EF0
0x97AB58: mov     edx, [esp+10h+arg_1C]
0x97AB5C: sub     edx, [esp+10h+arg_18]
0x97AB60: cmp     edx, [esp+10h+arg_28]
0x97AB64: jge     loc_97AA15
0x97AB6A: xor     eax, eax
0x97AB6C: pop     edi
0x97AB6D: mov     [esi+80h], eax
0x97AB73: mov     [esi+84h], eax
0x97AB79: pop     esi
0x97AB7A: pop     ebp
0x97AB7B: pop     ebx
0x97AB7C: retn    2Ch ; ','
0x97AB7F: jnz     short loc_97ABCC
0x97AB81: push    98h ; '˜'; Size
0x97AB86: call    FormHeapAlloc
0x97AB8B: add     esp, 4
0x97AB8E: test    eax, eax
0x97AB90: jz      short loc_97ABC4
0x97AB92: mov     ecx, [esp+10h+arg_1C]
0x97AB96: movzx   edx, word ptr [ebp+ecx*4+0]
0x97AB9B: mov     ecx, [esp+10h+arg_C]
0x97AB9F: push    edx
0x97ABA0: mov     edx, [esp+14h+arg_8]
0x97ABA4: push    ecx
0x97ABA5: mov     ecx, [esp+18h+arg_4]
0x97ABA9: push    edx
0x97ABAA: mov     edx, [esp+1Ch+arg_0]
0x97ABAE: push    ecx
0x97ABAF: push    edx
0x97ABB0: mov     ecx, eax
0x97ABB2: call    sub_977530
0x97ABB7: pop     edi
0x97ABB8: mov     [esi+84h], eax
0x97ABBE: pop     esi
0x97ABBF: pop     ebp
0x97ABC0: pop     ebx
0x97ABC1: retn    2Ch ; ','
0x97ABC4: xor     eax, eax
0x97ABC6: mov     [esi+84h], eax
0x97ABCC: pop     edi
0x97ABCD: pop     esi
0x97ABCE: pop     ebp
0x97ABCF: pop     ebx
0x97ABD0: retn    2Ch ; ','
