0x9549C0: sub     esp, 10h
0x9549C3: mov     eax, [esp+10h+arg_0]
0x9549C7: push    ebx
0x9549C8: push    ebp
0x9549C9: push    esi
0x9549CA: mov     esi, [esp+1Ch+arg_4]
0x9549CE: push    edi
0x9549CF: mov     edi, ecx
0x9549D1: lea     ecx, [esi+28h]
0x9549D4: mov     [esp+20h+arg_0], ecx
0x9549D8: add     eax, 38h ; '8'
0x9549DB: mov     ecx, 1Eh
0x9549E0: sub     ecx, eax
0x9549E2: mov     [esp+20h+var_C], ecx
0x9549E6: mov     ecx, 21h ; '!'
0x9549EB: sub     ecx, eax
0x9549ED: lea     ebp, [eax+8]
0x9549F0: lea     ebx, [esi+10h]
0x9549F3: mov     [esp+20h+var_4], ecx
0x9549F7: mov     [esp+20h+var_10], 3
0x9549FF: nop
0x954A00: cmp     byte ptr [ebp+0], 1
0x954A04: jnz     short loc_954A42
0x954A06: mov     edx, [esp+20h+arg_0]
0x954A0A: mov     eax, [edx]
0x954A0C: mov     ecx, [esi+24h]
0x954A0F: mov     edx, [ebx]
0x954A11: mov     esi, [ebx-4]
0x954A14: sub     edx, eax
0x954A16: sar     edx, cl
0x954A18: sub     esi, eax
0x954A1A: sar     esi, cl
0x954A1C: mov     ecx, [edi+10h]
0x954A1F: inc     edx
0x954A20: push    edx
0x954A21: call    sub_956520
0x954A26: mov     ecx, [edi+10h]
0x954A29: push    esi
0x954A2A: call    sub_956520
0x954A2F: mov     eax, [esp+20h+var_C]
0x954A33: mov     ecx, [edi+10h]
0x954A36: add     eax, ebp
0x954A38: push    eax
0x954A39: call    sub_956520
0x954A3E: mov     esi, [esp+20h+arg_4]
0x954A42: cmp     byte ptr [ebp+0], 2
0x954A46: jnz     short loc_954A77
0x954A48: mov     ecx, [ebx-4]
0x954A4B: mov     edx, [ebx]
0x954A4D: inc     edx
0x954A4E: mov     [esp+20h+var_8], ecx
0x954A52: mov     ecx, [edi+10h]
0x954A55: push    edx
0x954A56: call    sub_956730
0x954A5B: mov     eax, [esp+20h+var_8]
0x954A5F: mov     ecx, [edi+10h]
0x954A62: push    eax
0x954A63: call    sub_956730
0x954A68: mov     ecx, [esp+20h+var_4]
0x954A6C: add     ecx, ebp
0x954A6E: push    ecx
0x954A6F: mov     ecx, [edi+10h]
0x954A72: call    sub_956520
0x954A77: add     [esp+20h+arg_0], 4
0x954A7C: mov     eax, [esp+20h+var_10]
0x954A80: inc     ebp
0x954A81: add     ebx, 8
0x954A84: dec     eax
0x954A85: mov     [esp+20h+var_10], eax
0x954A89: jnz     loc_954A00
0x954A8F: pop     edi
0x954A90: pop     esi
0x954A91: pop     ebp
0x954A92: pop     ebx
0x954A93: add     esp, 10h
0x954A96: retn    8
