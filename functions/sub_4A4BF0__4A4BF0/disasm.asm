0x4A4BF0: push    0FFFFFFFFh
0x4A4BF2: push    offset SEH_4A4BF0
0x4A4BF7: mov     eax, large fs:0
0x4A4BFD: push    eax
0x4A4BFE: sub     esp, 10h
0x4A4C01: push    esi
0x4A4C02: push    edi
0x4A4C03: mov     eax, ds:0B30AACh
0x4A4C08: xor     eax, esp
0x4A4C0A: push    eax
0x4A4C0B: lea     eax, [esp+28h+var_C]
0x4A4C0F: mov     large fs:0, eax
0x4A4C15: mov     esi, ecx
0x4A4C17: mov     edi, [esp+28h+arg_0]
0x4A4C1B: test    edi, edi
0x4A4C1D: jz      loc_4A4E18
0x4A4C23: mov     eax, [edi]
0x4A4C25: mov     edx, [eax+0Ch]
0x4A4C28: mov     ecx, edi
0x4A4C2A: call    edx
0x4A4C2C: cmp     eax, 4
0x4A4C2F: jnz     loc_4A4E18
0x4A4C35: cmp     [esp+28h+arg_4], 0
0x4A4C3A: jz      loc_4A4E18
0x4A4C40: cmp     byte ptr [esi+5], 0
0x4A4C44: jz      short loc_4A4CA1
0x4A4C46: mov     al, [edi+4]
0x4A4C49: mov     [esi+4], al
0x4A4C4C: movzx   eax, byte ptr [edi+6]
0x4A4C50: mov     byte ptr [esp+28h+arg_0], al
0x4A4C54: mov     ecx, [esp+28h+arg_0]
0x4A4C58: push    ecx
0x4A4C59: mov     ecx, esi
0x4A4C5B: call    sub_4A3520
0x4A4C60: mov     edx, [edi]
0x4A4C62: mov     edx, [edx+28h]
0x4A4C65: lea     eax, [esp+28h+var_1C]
0x4A4C69: push    eax
0x4A4C6A: mov     ecx, edi
0x4A4C6C: call    edx
0x4A4C6E: mov     edx, [esi]
0x4A4C70: push    eax
0x4A4C71: mov     eax, [edx+2Ch]
0x4A4C74: mov     ecx, esi
0x4A4C76: mov     [esp+2Ch+var_4], 0
0x4A4C7E: call    eax
0x4A4C80: mov     ecx, dword ptr [esp+28h+var_1C]
0x4A4C84: push    ecx
0x4A4C85: call    FormHeapFree
0x4A4C8A: add     esp, 4
0x4A4C8D: mov     ecx, [esp+28h+var_C]
0x4A4C91: mov     large fs:0, ecx
0x4A4C98: pop     ecx
0x4A4C99: pop     edi
0x4A4C9A: pop     esi
0x4A4C9B: add     esp, 1Ch
0x4A4C9E: retn    8
0x4A4CA1: cmp     byte ptr [edi+5], 0
0x4A4CA5: jnz     loc_4A4E18
0x4A4CAB: cmp     byte ptr [esi+4], 0
0x4A4CAF: jz      short loc_4A4CF6
0x4A4CB1: mov     cl, [edi+4]
0x4A4CB4: test    cl, cl
0x4A4CB6: jz      loc_4A4E18
0x4A4CBC: mov     al, [edi+6]
0x4A4CBF: cmp     al, [esi+6]
0x4A4CC2: jbe     loc_4A4E18
0x4A4CC8: mov     [esi+4], cl
0x4A4CCB: mov     dl, [edi+6]
0x4A4CCE: mov     byte ptr [esp+28h+arg_0], dl
0x4A4CD2: mov     eax, [esp+28h+arg_0]
0x4A4CD6: push    eax
0x4A4CD7: mov     ecx, esi
0x4A4CD9: call    sub_4A3520
0x4A4CDE: mov     edx, [edi]
0x4A4CE0: mov     edx, [edx+28h]
0x4A4CE3: lea     eax, [esp+28h+var_1C]
0x4A4CE7: push    eax
0x4A4CE8: mov     ecx, edi
0x4A4CEA: call    edx
0x4A4CEC: mov     [esp+28h+var_4], 1
0x4A4CF4: jmp     short loc_4A4D29
0x4A4CF6: mov     al, [edi+4]
0x4A4CF9: test    al, al
0x4A4CFB: jz      short loc_4A4D58
0x4A4CFD: mov     [esi+4], al
0x4A4D00: mov     cl, [edi+6]
0x4A4D03: mov     byte ptr [esp+28h+arg_0], cl
0x4A4D07: mov     edx, [esp+28h+arg_0]
0x4A4D0B: push    edx
0x4A4D0C: mov     ecx, esi
0x4A4D0E: call    sub_4A3520
0x4A4D13: mov     eax, [edi]
0x4A4D15: mov     edx, [eax+28h]
0x4A4D18: lea     ecx, [esp+28h+var_1C]
0x4A4D1C: push    ecx
0x4A4D1D: mov     ecx, edi
0x4A4D1F: call    edx
0x4A4D21: mov     [esp+28h+var_4], 2
0x4A4D29: mov     edx, [esi]
0x4A4D2B: push    eax
0x4A4D2C: mov     eax, [edx+2Ch]
0x4A4D2F: mov     ecx, esi
0x4A4D31: call    eax
0x4A4D33: lea     ecx, [esp+28h+var_1C]; void *
0x4A4D37: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4A4D3F: call    BSStringT_Clear
0x4A4D44: mov     ecx, [esp+28h+var_C]
0x4A4D48: mov     large fs:0, ecx
0x4A4D4F: pop     ecx
0x4A4D50: pop     edi
0x4A4D51: pop     esi
0x4A4D52: add     esp, 1Ch
0x4A4D55: retn    8
0x4A4D58: mov     al, [edi+6]
0x4A4D5B: cmp     al, [esi+6]
0x4A4D5E: jbe     short loc_4A4D91
0x4A4D60: mov     edx, [edi]
0x4A4D62: mov     edx, [edx+28h]
0x4A4D65: lea     eax, [esp+28h+var_14]
0x4A4D69: push    eax
0x4A4D6A: mov     ecx, edi
0x4A4D6C: call    edx
0x4A4D6E: mov     edx, [esi]
0x4A4D70: push    eax
0x4A4D71: mov     eax, [edx+2Ch]
0x4A4D74: mov     ecx, esi
0x4A4D76: mov     [esp+2Ch+var_4], 3
0x4A4D7E: call    eax
0x4A4D80: lea     ecx, [esp+28h+var_14]; void *
0x4A4D84: mov     [esp+28h+var_4], 0FFFFFFFFh
0x4A4D8C: call    BSStringT_Clear
0x4A4D91: movzx   ecx, byte ptr [edi+6]
0x4A4D95: movzx   eax, byte ptr [esi+6]
0x4A4D99: mov     edi, eax
0x4A4D9B: mov     edx, 64h ; 'd'
0x4A4DA0: imul    edi, eax
0x4A4DA3: sub     edx, eax
0x4A4DA5: imul    edx, ecx
0x4A4DA8: add     edx, edi
0x4A4DAA: mov     [esp+28h+arg_0], edx
0x4A4DAE: mov     edx, 64h ; 'd'
0x4A4DB3: sub     edx, ecx
0x4A4DB5: fild    [esp+28h+arg_0]
0x4A4DB9: imul    edx, eax
0x4A4DBC: mov     eax, ecx
0x4A4DBE: imul    eax, ecx
0x4A4DC1: add     edx, eax
0x4A4DC3: mov     [esp+28h+arg_0], edx
0x4A4DC7: push    ecx
0x4A4DC8: fiadd   [esp+2Ch+arg_0]
0x4A4DCC: fstp    [esp+2Ch+arg_0]
0x4A4DD0: fld     [esp+2Ch+arg_0]
0x4A4DD4: fmul    qword ptr ds:0A40048h
0x4A4DDA: fstp    [esp+2Ch+arg_0]
0x4A4DDE: fld     [esp+2Ch+arg_0]
0x4A4DE2: fstp    [esp+2Ch+var_2C]; float
0x4A4DE5: call    sub_4842F0
0x4A4DEA: fnstcw  word ptr [esp+2Ch+arg_0]
0x4A4DEE: add     esp, 4
0x4A4DF1: movzx   eax, word ptr [esp+28h+arg_0]
0x4A4DF6: or      eax, 0C00h
0x4A4DFB: mov     [esp+28h+arg_4], eax
0x4A4DFF: fldcw   word ptr [esp+28h+arg_4]
0x4A4E03: fistp   [esp+28h+arg_4]
0x4A4E07: movzx   ecx, byte ptr [esp+28h+arg_4]
0x4A4E0C: push    ecx
0x4A4E0D: mov     ecx, esi
0x4A4E0F: fldcw   word ptr [esp+2Ch+arg_0]
0x4A4E13: call    sub_4A3520
0x4A4E18: mov     ecx, [esp+28h+var_C]
0x4A4E1C: mov     large fs:0, ecx
0x4A4E23: pop     ecx
0x4A4E24: pop     edi
0x4A4E25: pop     esi
0x4A4E26: add     esp, 1Ch
0x4A4E29: retn    8
