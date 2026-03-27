0x704AD0: push    0FFFFFFFFh
0x704AD2: push    offset SEH_6FB0D0
0x704AD7: mov     eax, large fs:0
0x704ADD: push    eax
0x704ADE: sub     esp, 24h
0x704AE1: push    ebx
0x704AE2: push    ebp
0x704AE3: push    esi
0x704AE4: push    edi
0x704AE5: mov     eax, ds:0B30AACh
0x704AEA: xor     eax, esp
0x704AEC: push    eax
0x704AED: lea     eax, [esp+44h+var_C]
0x704AF1: mov     large fs:0, eax
0x704AF7: mov     edi, ecx
0x704AF9: mov     [esp+44h+var_1C], edi
0x704AFD: mov     ebp, [esp+44h+arg_0]
0x704B01: push    ebp
0x704B02: call    sub_700AC0
0x704B07: mov     eax, [ebp+0D8h]
0x704B0D: push    1
0x704B0F: lea     ecx, [esp+48h+arg_0]
0x704B13: cmp     eax, 14010002h
0x704B18: mov     eax, [ebp+21Ch]
0x704B1E: push    ecx
0x704B1F: jnb     short loc_704B57
0x704B21: push    4
0x704B23: lea     edx, [esp+50h+var_20]
0x704B27: push    edx
0x704B28: push    eax
0x704B29: mov     eax, [eax+4]
0x704B2C: mov     [esp+58h+arg_0], 4
0x704B34: call    eax
0x704B36: mov     cx, [edi+18h]
0x704B3A: mov     edx, [esp+58h+var_20]
0x704B3E: lea     eax, [edi+18h]
0x704B41: and     cx, 0FFF1h
0x704B46: add     edx, edx
0x704B48: add     esp, 14h
0x704B4B: or      cx, dx
0x704B4E: mov     [esp+44h+var_18], eax
0x704B52: mov     [eax], cx
0x704B55: jmp     short loc_704B77
0x704B57: mov     edx, [eax+4]
0x704B5A: lea     esi, [edi+18h]
0x704B5D: push    2
0x704B5F: push    esi
0x704B60: push    eax
0x704B61: mov     [esp+58h+arg_0], 2
0x704B69: mov     [esp+58h+var_18], esi
0x704B6D: call    edx
0x704B6F: add     esp, 14h
0x704B72: and     word ptr [esi], 0F00Fh
0x704B77: mov     eax, [ebp+21Ch]
0x704B7D: push    1
0x704B7F: lea     ecx, [esp+48h+arg_0]
0x704B83: push    ecx
0x704B84: push    4
0x704B86: lea     edx, [esp+50h+var_28]
0x704B8A: push    edx
0x704B8B: push    eax
0x704B8C: mov     eax, [eax+4]
0x704B8F: mov     [esp+58h+arg_0], 4
0x704B97: call    eax
0x704B99: mov     ecx, [esp+58h+var_28]
0x704B9D: add     esp, 14h
0x704BA0: lea     esi, [edi+1Ch]
0x704BA3: push    ecx
0x704BA4: mov     ecx, esi
0x704BA6: call    NiTArray_SetSize
0x704BAB: mov     eax, [ebp+0D8h]
0x704BB1: cmp     eax, 303000Dh
0x704BB6: mov     ecx, ebp
0x704BB8: jnb     short loc_704BC4
0x704BBA: mov     edx, [esp+44h+var_28]
0x704BBE: add     edx, 1
0x704BC1: push    edx
0x704BC2: jmp     short loc_704BC9
0x704BC4: mov     eax, [esp+44h+var_28]
0x704BC8: push    eax
0x704BC9: call    sub_712BC0
0x704BCE: xor     ebx, ebx
0x704BD0: cmp     [esp+44h+var_28], ebx
0x704BD4: mov     [esp+44h+var_20], ebx
0x704BD8: jbe     loc_704DCE
0x704BDE: cmp     dword ptr [ebp+0D8h], 4010000h
0x704BE8: mov     edi, [esp+44h+var_20]
0x704BEC: mov     eax, [ebp+21Ch]
0x704BF2: push    1
0x704BF4: lea     ecx, [esp+48h+var_14]
0x704BF8: mov     [esp+48h+var_24], ebx
0x704BFC: push    ecx
0x704BFD: jnb     short loc_704C22
0x704BFF: push    4
0x704C01: lea     edx, [esp+50h+var_24]
0x704C05: push    edx
0x704C06: push    eax
0x704C07: mov     eax, [eax+4]
0x704C0A: mov     [esp+58h+var_14], 4
0x704C12: call    eax
0x704C14: add     esp, 14h
0x704C17: cmp     [esp+44h+var_24], ebx
0x704C1B: setnz   byte ptr [esp+44h+arg_0]
0x704C20: jmp     short loc_704C3A
0x704C22: push    1
0x704C24: lea     edx, [esp+50h+arg_0]
0x704C28: push    edx
0x704C29: push    eax
0x704C2A: mov     eax, [eax+4]
0x704C2D: mov     [esp+58h+var_14], 1
0x704C35: call    eax
0x704C37: add     esp, 14h
0x704C3A: cmp     dword ptr [ebp+0D8h], 303000Dh
0x704C44: jnb     short loc_704CAC
0x704C46: cmp     [esp+44h+var_20], 5
0x704C4B: jb      short loc_704C5C
0x704C4D: push    ebx
0x704C4E: mov     ecx, ebp
0x704C50: call    sub_712BC0
0x704C55: mov     edi, [esp+44h+var_20]
0x704C59: add     edi, 1
0x704C5C: movzx   eax, byte ptr [esp+44h+arg_0]
0x704C61: push    eax
0x704C62: mov     ecx, ebp
0x704C64: call    sub_712BC0
0x704C69: cmp     byte ptr [esp+44h+arg_0], bl
0x704C6D: jz      loc_704D5A
0x704C73: push    10h; Size
0x704C75: call    FormHeapAlloc
0x704C7A: add     esp, 4
0x704C7D: cmp     eax, ebx
0x704C7F: jz      loc_704D4A
0x704C85: mov     [eax+4], bx
0x704C89: mov     dword ptr [eax], offset ??_7Map@NiTexturingProperty@@6B@; const NiTexturingProperty::Map::`vftable'
0x704C8F: mov     [eax+8], ebx
0x704C92: mov     cx, [eax+4]
0x704C96: and     cx, 0F100h
0x704C9B: or      cx, 3100h
0x704CA0: mov     [eax+0Ch], ebx
0x704CA3: mov     [eax+4], cx
0x704CA7: jmp     loc_704D4C
0x704CAC: cmp     [esp+44h+var_20], 5
0x704CB1: jnz     short loc_704C5C
0x704CB3: movzx   ecx, byte ptr [esp+44h+arg_0]
0x704CB8: push    ecx
0x704CB9: mov     ecx, ebp
0x704CBB: call    sub_712BC0
0x704CC0: cmp     byte ptr [esp+44h+arg_0], bl
0x704CC4: jz      short loc_704D24
0x704CC6: push    28h ; '('; Size
0x704CC8: call    FormHeapAlloc
0x704CCD: add     esp, 4
0x704CD0: cmp     eax, ebx
0x704CD2: jz      short loc_704D14
0x704CD4: fld1
0x704CD6: mov     [eax+4], bx
0x704CDA: mov     [eax+8], ebx
0x704CDD: fstp    dword ptr [eax+10h]
0x704CE0: fldz
0x704CE2: mov     dx, [eax+4]
0x704CE6: fst     dword ptr [eax+14h]
0x704CE9: and     dx, 0F100h
0x704CEE: fld     dword ptr ds:0A3D65Ch
0x704CF4: or      dx, 3100h
0x704CF9: fst     dword ptr [eax+18h]
0x704CFC: mov     [eax+0Ch], ebx
0x704CFF: fstp    dword ptr [eax+24h]
0x704D02: mov     [eax+4], dx
0x704D06: mov     dword ptr [eax], offset ??_7BumpMap@NiTexturingProperty@@6B@; const NiTexturingProperty::BumpMap::`vftable'
0x704D0C: fst     dword ptr [eax+1Ch]
0x704D0F: fstp    dword ptr [eax+20h]
0x704D12: jmp     short loc_704D16
0x704D14: xor     eax, eax
0x704D16: mov     [esp+44h+var_24], eax
0x704D1A: mov     edx, [eax]
0x704D1C: mov     ecx, eax
0x704D1E: mov     eax, [edx+4]
0x704D21: push    ebp
0x704D22: call    eax
0x704D24: cmp     word ptr [esi+8], 5
0x704D29: ja      short loc_704D3A
0x704D2B: movzx   ecx, word ptr [esi+0Eh]
0x704D2F: add     ecx, 5
0x704D32: push    ecx
0x704D33: mov     ecx, esi
0x704D35: call    NiTArray_SetSize
0x704D3A: lea     edx, [esp+44h+var_24]
0x704D3E: push    edx
0x704D3F: push    5
0x704D41: mov     ecx, esi
0x704D43: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x704D48: jmp     short loc_704DB5
0x704D4A: xor     eax, eax
0x704D4C: mov     [esp+44h+var_24], eax
0x704D50: mov     edx, [eax]
0x704D52: mov     ecx, eax
0x704D54: mov     eax, [edx+4]
0x704D57: push    ebp
0x704D58: call    eax
0x704D5A: movzx   ecx, word ptr [esi+8]
0x704D5E: cmp     edi, ecx
0x704D60: jb      short loc_704D70
0x704D62: movzx   edx, word ptr [esi+0Eh]
0x704D66: add     edx, edi
0x704D68: push    edx
0x704D69: mov     ecx, esi
0x704D6B: call    NiTArray_SetSize
0x704D70: movzx   eax, word ptr [esi+0Ah]
0x704D74: cmp     edi, eax
0x704D76: mov     eax, [esp+44h+var_24]
0x704D7A: jb      short loc_704D8E
0x704D7C: cmp     eax, ebx
0x704D7E: lea     ecx, [edi+1]
0x704D81: mov     [esi+0Ah], cx
0x704D85: jz      short loc_704DAF
0x704D87: add     word ptr [esi+0Ch], 1
0x704D8C: jmp     short loc_704DAF
0x704D8E: cmp     eax, ebx
0x704D90: jz      short loc_704DA1
0x704D92: mov     edx, [esi+4]
0x704D95: cmp     [edx+edi*4], ebx
0x704D98: jnz     short loc_704DAF
0x704D9A: add     word ptr [esi+0Ch], 1
0x704D9F: jmp     short loc_704DAF
0x704DA1: mov     ecx, [esi+4]
0x704DA4: cmp     [ecx+edi*4], ebx
0x704DA7: jz      short loc_704DAF
0x704DA9: add     word ptr [esi+0Ch], 0FFFFh
0x704DAF: mov     edx, [esi+4]
0x704DB2: mov     [edx+edi*4], eax
0x704DB5: mov     eax, [esp+44h+var_20]
0x704DB9: add     eax, 1
0x704DBC: cmp     eax, [esp+44h+var_28]
0x704DC0: mov     [esp+44h+var_20], eax
0x704DC4: jb      loc_704BDE
0x704DCA: mov     edi, [esp+44h+var_1C]
0x704DCE: cmp     dword ptr [ebp+0D8h], 5000011h
0x704DD8: jb      loc_704F51
0x704DDE: mov     eax, [ebp+21Ch]
0x704DE4: push    1
0x704DE6: lea     ecx, [esp+48h+arg_0]
0x704DEA: push    ecx
0x704DEB: push    4
0x704DED: lea     edx, [esp+50h+var_28]
0x704DF1: push    edx
0x704DF2: push    eax
0x704DF3: mov     eax, [eax+4]
0x704DF6: mov     [esp+58h+arg_0], 4
0x704DFE: call    eax
0x704E00: mov     ecx, [esp+58h+var_28]
0x704E04: add     esp, 14h
0x704E07: push    ecx
0x704E08: mov     ecx, ebp
0x704E0A: call    sub_712BC0
0x704E0F: cmp     [esp+44h+var_28], ebx
0x704E13: jz      loc_704F51
0x704E19: push    10h; Size
0x704E1B: call    FormHeapAlloc
0x704E20: add     esp, 4
0x704E23: cmp     eax, ebx
0x704E25: jz      short loc_704E44
0x704E27: mov     dword ptr [eax], offset ??_7?$NiTArray@PAVShaderMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::ShaderMap *>::`vftable'
0x704E2D: mov     [eax+8], bx
0x704E31: mov     word ptr [eax+0Eh], 1
0x704E37: mov     [eax+0Ah], bx
0x704E3B: mov     [eax+0Ch], bx
0x704E3F: mov     [eax+4], ebx
0x704E42: jmp     short loc_704E46
0x704E44: xor     eax, eax
0x704E46: mov     [edi+2Ch], eax
0x704E49: xor     edi, edi
0x704E4B: cmp     [esp+44h+var_28], ebx
0x704E4F: mov     [esp+44h+var_4], 0FFFFFFFFh
0x704E57: jbe     loc_704F4D
0x704E5D: lea     ecx, [ecx+0]
0x704E60: mov     eax, [ebp+21Ch]
0x704E66: push    1
0x704E68: lea     edx, [esp+48h+var_10]
0x704E6C: push    edx
0x704E6D: mov     edx, [eax+4]
0x704E70: push    1
0x704E72: lea     ecx, [esp+50h+var_2C+3]
0x704E76: push    ecx
0x704E77: push    eax
0x704E78: mov     [esp+58h+var_10], 1
0x704E80: call    edx
0x704E82: movzx   eax, byte ptr [esp+58h+var_2C+3]
0x704E87: add     esp, 14h
0x704E8A: push    eax
0x704E8B: mov     ecx, ebp
0x704E8D: call    sub_712BC0
0x704E92: cmp     byte ptr [esp+44h+var_2C+3], 0
0x704E97: jz      short loc_704EDE
0x704E99: push    14h; Size
0x704E9B: call    FormHeapAlloc
0x704EA0: xor     ecx, ecx
0x704EA2: add     esp, 4
0x704EA5: cmp     eax, ecx
0x704EA7: jz      short loc_704ED0
0x704EA9: mov     [eax+4], cx
0x704EAD: mov     [eax+8], ecx
0x704EB0: mov     dx, [eax+4]
0x704EB4: and     dx, 0F100h
0x704EB9: or      dx, 3100h
0x704EBE: mov     [eax+0Ch], ecx
0x704EC1: mov     [eax+4], dx
0x704EC5: mov     dword ptr [eax], offset ??_7ShaderMap@NiTexturingProperty@@6B@; const NiTexturingProperty::ShaderMap::`vftable'
0x704ECB: mov     [eax+10h], ecx
0x704ECE: jmp     short loc_704ED2
0x704ED0: xor     eax, eax
0x704ED2: mov     edx, [eax]
0x704ED4: mov     ebx, eax
0x704ED6: mov     ecx, eax
0x704ED8: mov     eax, [edx+4]
0x704EDB: push    ebp
0x704EDC: call    eax
0x704EDE: mov     ecx, [esp+44h+var_1C]
0x704EE2: mov     esi, [ecx+2Ch]
0x704EE5: movzx   edx, word ptr [esi+8]
0x704EE9: cmp     edi, edx
0x704EEB: jb      short loc_704EFB
0x704EED: movzx   eax, word ptr [esi+0Eh]
0x704EF1: add     eax, edi
0x704EF3: push    eax
0x704EF4: mov     ecx, esi
0x704EF6: call    NiTArray_SetSize
0x704EFB: movzx   ecx, word ptr [esi+0Ah]
0x704EFF: cmp     edi, ecx
0x704F01: jb      short loc_704F15
0x704F03: test    ebx, ebx
0x704F05: lea     edx, [edi+1]
0x704F08: mov     [esi+0Ah], dx
0x704F0C: jz      short loc_704F38
0x704F0E: add     word ptr [esi+0Ch], 1
0x704F13: jmp     short loc_704F38
0x704F15: test    ebx, ebx
0x704F17: jz      short loc_704F29
0x704F19: mov     eax, [esi+4]
0x704F1C: cmp     dword ptr [eax+edi*4], 0
0x704F20: jnz     short loc_704F38
0x704F22: add     word ptr [esi+0Ch], 1
0x704F27: jmp     short loc_704F38
0x704F29: mov     ecx, [esi+4]
0x704F2C: cmp     dword ptr [ecx+edi*4], 0
0x704F30: jz      short loc_704F38
0x704F32: add     word ptr [esi+0Ch], 0FFFFh
0x704F38: mov     edx, [esi+4]
0x704F3B: mov     [edx+edi*4], ebx
0x704F3E: add     edi, 1
0x704F41: xor     ebx, ebx
0x704F43: cmp     edi, [esp+44h+var_28]
0x704F47: jb      loc_704E60
0x704F4D: mov     edi, [esp+44h+var_1C]
0x704F51: movzx   edx, word ptr [edi+26h]
0x704F55: mov     ecx, 1
0x704F5A: cmp     edx, ecx
0x704F5C: jbe     short loc_704F72
0x704F5E: mov     eax, [edi+20h]
0x704F61: add     eax, 4
0x704F64: cmp     [eax], ebx
0x704F66: jnz     short loc_704F91
0x704F68: add     ecx, 1
0x704F6B: add     eax, 4
0x704F6E: cmp     ecx, edx
0x704F70: jb      short loc_704F64
0x704F72: mov     eax, [esp+44h+var_18]
0x704F76: and     word ptr [eax], 0FFFEh
0x704F7B: mov     ecx, dword ptr [esp+44h+var_C]
0x704F7F: mov     large fs:0, ecx
0x704F86: pop     ecx
0x704F87: pop     edi
0x704F88: pop     esi
0x704F89: pop     ebp
0x704F8A: pop     ebx
0x704F8B: add     esp, 30h
0x704F8E: retn    4
0x704F91: mov     eax, [esp+44h+var_18]
0x704F95: or      word ptr [eax], 1
0x704F99: jmp     short loc_704F7B
