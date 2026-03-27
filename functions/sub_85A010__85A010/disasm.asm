0x85A010: push    0FFFFFFFFh
0x85A012: push    offset SEH_85A010
0x85A017: mov     eax, large fs:0
0x85A01D: push    eax
0x85A01E: push    ebp
0x85A01F: push    esi
0x85A020: push    edi
0x85A021: mov     eax, ds:0B30AACh
0x85A026: xor     eax, esp
0x85A028: push    eax
0x85A029: lea     eax, [esp+1Ch+var_C]
0x85A02D: mov     large fs:0, eax
0x85A033: mov     ebp, ecx
0x85A035: cmp     [esp+1Ch+arg_18], 0
0x85A03A: jnz     loc_85A149
0x85A040: cmp     byte ptr [esp+1Ch+arg_10], 1
0x85A045: jnz     loc_85A1D9
0x85A04B: cmp     [esp+1Ch+arg_1C], 0
0x85A050: jz      short loc_85A059
0x85A052: mov     esi, 187h
0x85A057: jmp     short loc_85A072
0x85A059: cmp     byte ptr ds:0B43074h, 0
0x85A060: jz      short loc_85A06D
0x85A062: cmp     [esp+1Ch+arg_20], 0
0x85A067: jz      loc_85A0F8
0x85A06D: mov     esi, 184h
0x85A072: mov     edi, [esp+1Ch+arg_8]
0x85A076: push    10h; Size
0x85A078: call    FormHeapAlloc
0x85A07D: add     esp, 4
0x85A080: test    edi, edi
0x85A082: mov     [esp+1Ch+arg_10], eax
0x85A086: jz      short loc_85A0C0
0x85A088: test    eax, eax
0x85A08A: mov     [esp+1Ch+var_4], 0
0x85A092: jz      loc_85A13C
0x85A098: mov     ecx, [esp+1Ch+arg_14]
0x85A09C: movzx   edx, byte ptr [ecx]
0x85A09F: mov     ecx, [esp+1Ch+arg_0]
0x85A0A3: push    edi
0x85A0A4: push    1
0x85A0A6: push    edx
0x85A0A7: push    esi
0x85A0A8: push    ecx
0x85A0A9: push    eax
0x85A0AA: call    sub_7E2370
0x85A0AF: mov     [esp+34h+arg_10], eax
0x85A0B3: add     esp, 18h
0x85A0B6: lea     eax, [esp+1Ch+arg_10]
0x85A0BA: push    eax
0x85A0BB: jmp     loc_85A1B4
0x85A0C0: test    eax, eax
0x85A0C2: mov     [esp+1Ch+var_4], 1
0x85A0CA: jz      short loc_85A13C
0x85A0CC: mov     edx, [esp+1Ch+arg_4]
0x85A0D0: mov     ecx, [esp+1Ch+arg_14]
0x85A0D4: push    edx
0x85A0D5: movzx   edx, byte ptr [ecx]
0x85A0D8: mov     ecx, [esp+20h+arg_0]
0x85A0DC: push    1
0x85A0DE: push    edx
0x85A0DF: push    esi
0x85A0E0: push    ecx
0x85A0E1: push    eax
0x85A0E2: call    sub_7E2370
0x85A0E7: mov     [esp+34h+arg_10], eax
0x85A0EB: add     esp, 18h
0x85A0EE: lea     eax, [esp+1Ch+arg_10]
0x85A0F2: push    eax
0x85A0F3: jmp     loc_85A1B4
0x85A0F8: push    10h; Size
0x85A0FA: call    FormHeapAlloc
0x85A0FF: add     esp, 4
0x85A102: mov     [esp+1Ch+arg_10], eax
0x85A106: test    eax, eax
0x85A108: mov     [esp+1Ch+var_4], 2
0x85A110: jz      short loc_85A13C
0x85A112: mov     edx, [esp+1Ch+arg_14]
0x85A116: movzx   ecx, byte ptr [edx]
0x85A119: mov     edx, [esp+1Ch+arg_0]
0x85A11D: push    0
0x85A11F: push    0
0x85A121: push    ecx
0x85A122: push    186h
0x85A127: push    edx
0x85A128: push    eax
0x85A129: call    sub_7E2370
0x85A12E: mov     [esp+34h+arg_10], eax
0x85A132: add     esp, 18h
0x85A135: lea     eax, [esp+1Ch+arg_10]
0x85A139: push    eax
0x85A13A: jmp     short loc_85A1B4
0x85A13C: xor     eax, eax
0x85A13E: mov     [esp+1Ch+arg_10], eax
0x85A142: lea     eax, [esp+1Ch+arg_10]
0x85A146: push    eax
0x85A147: jmp     short loc_85A1B4
0x85A149: cmp     byte ptr [esp+1Ch+arg_10], 1
0x85A14E: jnz     loc_85A1D9
0x85A154: mov     esi, [esp+1Ch+arg_8]
0x85A158: push    10h; Size
0x85A15A: call    FormHeapAlloc
0x85A15F: add     esp, 4
0x85A162: test    esi, esi
0x85A164: mov     [esp+1Ch+arg_10], eax
0x85A168: jz      short loc_85A179
0x85A16A: test    eax, eax
0x85A16C: mov     [esp+1Ch+var_4], 3
0x85A174: jz      short loc_85A1A9
0x85A176: push    esi
0x85A177: jmp     short loc_85A18A
0x85A179: test    eax, eax
0x85A17B: mov     [esp+1Ch+var_4], 4
0x85A183: jz      short loc_85A1A9
0x85A185: mov     edx, [esp+1Ch+arg_4]
0x85A189: push    edx
0x85A18A: mov     ecx, [esp+20h+arg_14]
0x85A18E: movzx   edx, byte ptr [ecx]
0x85A191: mov     ecx, [esp+20h+arg_0]
0x85A195: push    1
0x85A197: push    edx
0x85A198: push    185h
0x85A19D: push    ecx
0x85A19E: push    eax
0x85A19F: call    sub_7E2370
0x85A1A4: add     esp, 18h
0x85A1A7: jmp     short loc_85A1AB
0x85A1A9: xor     eax, eax
0x85A1AB: lea     edx, [esp+1Ch+arg_10]
0x85A1AF: mov     [esp+1Ch+arg_10], eax
0x85A1B3: push    edx
0x85A1B4: lea     ecx, [ebp+28h]
0x85A1B7: mov     [esp+20h+var_4], 0FFFFFFFFh
0x85A1BF: call    sub_5B1E20
0x85A1C4: mov     ecx, [esp+1Ch+var_C]
0x85A1C8: mov     large fs:0, ecx
0x85A1CF: pop     ecx
0x85A1D0: pop     edi
0x85A1D1: pop     esi
0x85A1D2: pop     ebp
0x85A1D3: add     esp, 0Ch
0x85A1D6: retn    24h ; '$'
0x85A1D9: mov     eax, [esp+1Ch+arg_C]
0x85A1DD: add     word ptr [eax], 1
0x85A1E1: mov     ecx, [esp+1Ch+var_C]
0x85A1E5: mov     large fs:0, ecx
0x85A1EC: pop     ecx
0x85A1ED: pop     edi
0x85A1EE: pop     esi
0x85A1EF: pop     ebp
0x85A1F0: add     esp, 0Ch
0x85A1F3: retn    24h ; '$'
