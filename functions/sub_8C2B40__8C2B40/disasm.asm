0x8C2B40: sub     esp, 0Ch
0x8C2B43: push    esi
0x8C2B44: mov     esi, [esp+10h+arg_0]
0x8C2B48: push    edi
0x8C2B49: push    esi
0x8C2B4A: mov     edi, ecx
0x8C2B4C: call    sub_8A0D20
0x8C2B51: mov     edi, [edi+4]
0x8C2B54: test    edi, edi
0x8C2B56: jz      loc_8C2CD0
0x8C2B5C: push    ebx
0x8C2B5D: lea     eax, [edi+10h]
0x8C2B60: push    eax
0x8C2B61: lea     ecx, [esp+1Ch+var_C]
0x8C2B65: push    ecx
0x8C2B66: call    sub_4D68A0
0x8C2B6B: add     esp, 8
0x8C2B6E: push    offset aPivotina; "PivotInA"
0x8C2B73: lea     ecx, [esp+1Ch+var_C]
0x8C2B77: call    sub_707280
0x8C2B7C: movzx   ebx, word ptr [esi+0Ah]
0x8C2B80: movzx   edx, word ptr [esi+8]
0x8C2B84: cmp     ebx, edx
0x8C2B86: mov     [esp+18h+arg_0], eax
0x8C2B8A: jb      short loc_8C2B9A
0x8C2B8C: movzx   eax, word ptr [esi+0Eh]
0x8C2B90: add     eax, ebx
0x8C2B92: push    eax
0x8C2B93: mov     ecx, esi
0x8C2B95: call    NiTArray_SetSize
0x8C2B9A: lea     ecx, [esp+18h+arg_0]
0x8C2B9E: push    ecx
0x8C2B9F: push    ebx
0x8C2BA0: mov     ecx, esi
0x8C2BA2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C2BA7: lea     edx, [edi+40h]
0x8C2BAA: push    edx
0x8C2BAB: lea     eax, [esp+1Ch+var_C]
0x8C2BAF: push    eax
0x8C2BB0: call    sub_4D68A0
0x8C2BB5: add     esp, 8
0x8C2BB8: push    offset aPivotinb; "PivotInB"
0x8C2BBD: lea     ecx, [esp+1Ch+var_C]
0x8C2BC1: call    sub_707280
0x8C2BC6: movzx   ebx, word ptr [esi+0Ah]
0x8C2BCA: movzx   ecx, word ptr [esi+8]
0x8C2BCE: cmp     ebx, ecx
0x8C2BD0: mov     [esp+18h+arg_0], eax
0x8C2BD4: jb      short loc_8C2BE4
0x8C2BD6: movzx   edx, word ptr [esi+0Eh]
0x8C2BDA: add     edx, ebx
0x8C2BDC: push    edx
0x8C2BDD: mov     ecx, esi
0x8C2BDF: call    NiTArray_SetSize
0x8C2BE4: lea     eax, [esp+18h+arg_0]
0x8C2BE8: push    eax
0x8C2BE9: push    ebx
0x8C2BEA: mov     ecx, esi
0x8C2BEC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C2BF1: lea     ecx, [edi+50h]
0x8C2BF4: push    ecx
0x8C2BF5: lea     edx, [esp+1Ch+var_C]
0x8C2BF9: push    edx
0x8C2BFA: call    sub_4D68A0
0x8C2BFF: add     esp, 8
0x8C2C02: push    offset aAxleinb; "AxleInB"
0x8C2C07: lea     ecx, [esp+1Ch+var_C]
0x8C2C0B: call    sub_707280
0x8C2C10: movzx   ebx, word ptr [esi+0Ah]
0x8C2C14: mov     [esp+18h+arg_0], eax
0x8C2C18: movzx   eax, word ptr [esi+8]
0x8C2C1C: cmp     ebx, eax
0x8C2C1E: jb      short loc_8C2C2E
0x8C2C20: movzx   ecx, word ptr [esi+0Eh]
0x8C2C24: add     ecx, ebx
0x8C2C26: push    ecx
0x8C2C27: mov     ecx, esi
0x8C2C29: call    NiTArray_SetSize
0x8C2C2E: lea     edx, [esp+18h+arg_0]
0x8C2C32: push    edx
0x8C2C33: push    ebx
0x8C2C34: mov     ecx, esi
0x8C2C36: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C2C3B: lea     eax, [edi+20h]
0x8C2C3E: push    eax
0x8C2C3F: lea     ecx, [esp+1Ch+var_C]
0x8C2C43: push    ecx
0x8C2C44: call    sub_4D68A0
0x8C2C49: add     esp, 8
0x8C2C4C: push    offset aPerp2axleina1; "Perp2AxleInA1"
0x8C2C51: lea     ecx, [esp+1Ch+var_C]
0x8C2C55: call    sub_707280
0x8C2C5A: movzx   ebx, word ptr [esi+0Ah]
0x8C2C5E: movzx   edx, word ptr [esi+8]
0x8C2C62: cmp     ebx, edx
0x8C2C64: mov     [esp+18h+arg_0], eax
0x8C2C68: jb      short loc_8C2C78
0x8C2C6A: movzx   eax, word ptr [esi+0Eh]
0x8C2C6E: add     eax, ebx
0x8C2C70: push    eax
0x8C2C71: mov     ecx, esi
0x8C2C73: call    NiTArray_SetSize
0x8C2C78: lea     ecx, [esp+18h+arg_0]
0x8C2C7C: push    ecx
0x8C2C7D: push    ebx
0x8C2C7E: mov     ecx, esi
0x8C2C80: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C2C85: add     edi, 30h ; '0'
0x8C2C88: lea     edx, [esp+18h+var_C]
0x8C2C8C: push    edi
0x8C2C8D: push    edx
0x8C2C8E: call    sub_4D68A0
0x8C2C93: add     esp, 8
0x8C2C96: push    offset aPerp2axleina2; "Perp2AxleInA2"
0x8C2C9B: lea     ecx, [esp+1Ch+var_C]
0x8C2C9F: call    sub_707280
0x8C2CA4: movzx   edi, word ptr [esi+0Ah]
0x8C2CA8: mov     [esp+18h+arg_0], eax
0x8C2CAC: movzx   eax, word ptr [esi+8]
0x8C2CB0: cmp     edi, eax
0x8C2CB2: pop     ebx
0x8C2CB3: jb      short loc_8C2CC3
0x8C2CB5: movzx   ecx, word ptr [esi+0Eh]
0x8C2CB9: add     ecx, edi
0x8C2CBB: push    ecx
0x8C2CBC: mov     ecx, esi
0x8C2CBE: call    NiTArray_SetSize
0x8C2CC3: lea     edx, [esp+14h+arg_0]
0x8C2CC7: push    edx
0x8C2CC8: push    edi
0x8C2CC9: mov     ecx, esi
0x8C2CCB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C2CD0: pop     edi
0x8C2CD1: pop     esi
0x8C2CD2: add     esp, 0Ch
0x8C2CD5: retn    4
