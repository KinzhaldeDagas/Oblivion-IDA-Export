0x6F3B50: push    ebp
0x6F3B51: mov     ebp, esp
0x6F3B53: push    0FFFFFFFFh
0x6F3B55: push    offset SEH_6F3B50
0x6F3B5A: mov     eax, large fs:0
0x6F3B60: push    eax
0x6F3B61: sub     esp, 44h
0x6F3B64: mov     eax, ds:0B30AACh
0x6F3B69: xor     eax, ebp
0x6F3B6B: mov     [ebp+var_14], eax
0x6F3B6E: push    ebx
0x6F3B6F: push    esi
0x6F3B70: push    edi
0x6F3B71: push    eax
0x6F3B72: lea     eax, [ebp+var_C]
0x6F3B75: mov     large fs:0, eax
0x6F3B7B: mov     [ebp+var_10], esp
0x6F3B7E: mov     eax, [ebp+arg_C]
0x6F3B81: mov     edx, [eax+4]
0x6F3B84: mov     esi, ecx
0x6F3B86: mov     ecx, [eax]
0x6F3B88: mov     [ebp+var_40], ecx
0x6F3B8B: mov     ecx, [eax+8]
0x6F3B8E: push    0FFFFFFFFh
0x6F3B90: mov     [ebp+var_3C], edx
0x6F3B93: mov     edx, [eax+0Ch]
0x6F3B96: xor     edi, edi
0x6F3B98: push    edi
0x6F3B99: add     eax, 10h
0x6F3B9C: mov     [ebp+var_38], ecx
0x6F3B9F: push    eax
0x6F3BA0: lea     ecx, [ebp+var_30]
0x6F3BA3: mov     [ebp+var_48], esi
0x6F3BA6: mov     [ebp+var_34], edx
0x6F3BA9: mov     [ebp+var_18], 0Fh
0x6F3BB0: mov     [ebp+var_1C], edi
0x6F3BB3: mov     byte ptr [ebp+var_2C], 0
0x6F3BB7: call    sub_414420
0x6F3BBC: mov     ecx, [esi+4]
0x6F3BBF: cmp     ecx, edi
0x6F3BC1: mov     [ebp+var_4], edi
0x6F3BC4: jz      short loc_6F3BDC
0x6F3BC6: mov     edx, [esi+0Ch]
0x6F3BC9: sub     edx, ecx
0x6F3BCB: mov     eax, 2E8BA2E9h
0x6F3BD0: imul    edx
0x6F3BD2: sar     edx, 3
0x6F3BD5: mov     edi, edx
0x6F3BD7: shr     edi, 1Fh
0x6F3BDA: add     edi, edx
0x6F3BDC: mov     ebx, [ebp+arg_8]
0x6F3BDF: test    ebx, ebx
0x6F3BE1: jz      loc_6F3E40
0x6F3BE7: test    ecx, ecx
0x6F3BE9: jnz     short loc_6F3BEF
0x6F3BEB: xor     eax, eax
0x6F3BED: jmp     short loc_6F3C05
0x6F3BEF: mov     edx, [esi+8]
0x6F3BF2: sub     edx, ecx
0x6F3BF4: mov     eax, 2E8BA2E9h
0x6F3BF9: imul    edx
0x6F3BFB: sar     edx, 3
0x6F3BFE: mov     eax, edx
0x6F3C00: shr     eax, 1Fh
0x6F3C03: add     eax, edx
0x6F3C05: mov     edx, 5D1745Dh
0x6F3C0A: sub     edx, eax
0x6F3C0C: cmp     edx, ebx
0x6F3C0E: jnb     short loc_6F3C15
0x6F3C10: call    sub_790B90
0x6F3C15: test    ecx, ecx
0x6F3C17: jnz     short loc_6F3C1D
0x6F3C19: xor     eax, eax
0x6F3C1B: jmp     short loc_6F3C33
0x6F3C1D: mov     edx, [esi+8]
0x6F3C20: sub     edx, ecx
0x6F3C22: mov     eax, 2E8BA2E9h
0x6F3C27: imul    edx
0x6F3C29: sar     edx, 3
0x6F3C2C: mov     eax, edx
0x6F3C2E: shr     eax, 1Fh
0x6F3C31: add     eax, edx
0x6F3C33: add     eax, ebx
0x6F3C35: cmp     edi, eax
0x6F3C37: jnb     loc_6F3D61
0x6F3C3D: mov     eax, edi
0x6F3C3F: shr     eax, 1
0x6F3C41: mov     edx, 5D1745Dh
0x6F3C46: sub     edx, eax
0x6F3C48: cmp     edx, edi
0x6F3C4A: jnb     short loc_6F3C50
0x6F3C4C: xor     edi, edi
0x6F3C4E: jmp     short loc_6F3C52
0x6F3C50: add     edi, eax
0x6F3C52: test    ecx, ecx
0x6F3C54: jnz     short loc_6F3C5A
0x6F3C56: xor     eax, eax
0x6F3C58: jmp     short loc_6F3C70
0x6F3C5A: mov     edx, [esi+8]
0x6F3C5D: sub     edx, ecx
0x6F3C5F: mov     eax, 2E8BA2E9h
0x6F3C64: imul    edx
0x6F3C66: sar     edx, 3
0x6F3C69: mov     eax, edx
0x6F3C6B: shr     eax, 1Fh
0x6F3C6E: add     eax, edx
0x6F3C70: add     eax, ebx
0x6F3C72: cmp     edi, eax
0x6F3C74: jnb     short loc_6F3C81
0x6F3C76: mov     ecx, esi
0x6F3C78: call    sub_6F1140
0x6F3C7D: mov     edi, eax
0x6F3C7F: add     edi, ebx
0x6F3C81: push    0
0x6F3C83: push    edi; char *
0x6F3C84: call    sub_556440
0x6F3C89: mov     ecx, [esi+4]
0x6F3C8C: mov     byte ptr [ebp+var_44], 0
0x6F3C90: mov     edx, [ebp+var_44]
0x6F3C93: push    edx
0x6F3C94: mov     edx, [ebp+var_44]
0x6F3C97: push    edx
0x6F3C98: push    esi
0x6F3C99: push    eax
0x6F3C9A: mov     [ebp+var_50], eax
0x6F3C9D: mov     [ebp+var_4C], eax
0x6F3CA0: mov     eax, [ebp+arg_4]
0x6F3CA3: push    eax
0x6F3CA4: push    ecx
0x6F3CA5: mov     byte ptr [ebp+var_4], 1
0x6F3CA9: call    sub_6F18A0
0x6F3CAE: add     esp, 20h
0x6F3CB1: lea     ecx, [ebp+var_40]
0x6F3CB4: push    ecx
0x6F3CB5: push    ebx
0x6F3CB6: push    eax
0x6F3CB7: mov     ecx, esi
0x6F3CB9: mov     [ebp+var_4C], eax
0x6F3CBC: call    sub_6F3080
0x6F3CC1: mov     ecx, [esi+8]
0x6F3CC4: mov     byte ptr [ebp+var_44], 0
0x6F3CC8: mov     edx, [ebp+var_44]
0x6F3CCB: push    edx
0x6F3CCC: mov     edx, [ebp+var_44]
0x6F3CCF: push    edx
0x6F3CD0: push    esi
0x6F3CD1: push    eax
0x6F3CD2: mov     [ebp+var_4C], eax
0x6F3CD5: mov     eax, [ebp+arg_4]
0x6F3CD8: push    ecx
0x6F3CD9: push    eax
0x6F3CDA: call    sub_6F18A0
0x6F3CDF: mov     ecx, [esi+4]
0x6F3CE2: add     esp, 18h
0x6F3CE5: test    ecx, ecx
0x6F3CE7: jnz     short loc_6F3CED
0x6F3CE9: xor     eax, eax
0x6F3CEB: jmp     short loc_6F3D03
0x6F3CED: mov     edx, [esi+8]
0x6F3CF0: sub     edx, ecx
0x6F3CF2: mov     eax, 2E8BA2E9h
0x6F3CF7: imul    edx
0x6F3CF9: sar     edx, 3
0x6F3CFC: mov     eax, edx
0x6F3CFE: shr     eax, 1Fh
0x6F3D01: add     eax, edx
0x6F3D03: add     ebx, eax
0x6F3D05: test    ecx, ecx
0x6F3D07: jz      short loc_6F3D24
0x6F3D09: mov     edx, [ebp+var_44]
0x6F3D0C: mov     eax, [esi+8]
0x6F3D0F: push    edx
0x6F3D10: push    esi
0x6F3D11: push    eax
0x6F3D12: push    ecx
0x6F3D13: call    sub_557080
0x6F3D18: mov     ecx, [esi+4]
0x6F3D1B: push    ecx
0x6F3D1C: call    FormHeapFree
0x6F3D21: add     esp, 14h
0x6F3D24: mov     eax, [ebp+var_50]
0x6F3D27: imul    edi, 2Ch ; ','
0x6F3D2A: imul    ebx, 2Ch ; ','
0x6F3D2D: add     edi, eax
0x6F3D2F: add     ebx, eax
0x6F3D31: mov     [esi+0Ch], edi
0x6F3D34: mov     [esi+8], ebx
0x6F3D37: mov     [esi+4], eax
0x6F3D3A: jmp     loc_6F3E40
0x6F3D3F: mov     edx, [ebp+var_4C]
0x6F3D42: mov     esi, [ebp+var_50]
0x6F3D45: mov     ecx, [ebp+var_48]
0x6F3D48: push    edx
0x6F3D49: push    esi
0x6F3D4A: call    sub_557700
0x6F3D4F: push    esi
0x6F3D50: call    FormHeapFree
0x6F3D55: add     esp, 4
0x6F3D58: push    0
0x6F3D5A: push    0
0x6F3D5C: call    ThrowException??
0x6F3D61: mov     ecx, [esi+8]
0x6F3D64: mov     edi, [ebp+arg_4]
0x6F3D67: mov     edx, ecx
0x6F3D69: sub     edx, edi
0x6F3D6B: mov     eax, 2E8BA2E9h
0x6F3D70: imul    edx
0x6F3D72: sar     edx, 3
0x6F3D75: mov     eax, edx
0x6F3D77: shr     eax, 1Fh
0x6F3D7A: add     eax, edx
0x6F3D7C: cmp     eax, ebx
0x6F3D7E: mov     [ebp+var_44], ecx
0x6F3D81: jnb     loc_6F3E0B
0x6F3D87: mov     eax, ebx
0x6F3D89: imul    eax, 2Ch ; ','
0x6F3D8C: mov     [ebp+var_44], eax
0x6F3D8F: add     eax, edi
0x6F3D91: push    eax
0x6F3D92: push    ecx
0x6F3D93: push    edi
0x6F3D94: mov     ecx, esi
0x6F3D96: call    sub_6F3610
0x6F3D9B: mov     ecx, [esi+8]
0x6F3D9E: lea     edx, [ebp+var_40]
0x6F3DA1: push    edx
0x6F3DA2: mov     edx, ecx
0x6F3DA4: sub     edx, edi
0x6F3DA6: mov     eax, 2E8BA2E9h
0x6F3DAB: imul    edx
0x6F3DAD: sar     edx, 3
0x6F3DB0: mov     eax, edx
0x6F3DB2: shr     eax, 1Fh
0x6F3DB5: add     eax, edx
0x6F3DB7: sub     ebx, eax
0x6F3DB9: push    ebx
0x6F3DBA: push    ecx
0x6F3DBB: mov     ecx, esi
0x6F3DBD: mov     byte ptr [ebp+var_4], 3
0x6F3DC1: call    sub_6F3080
0x6F3DC6: mov     eax, [ebp+var_44]
0x6F3DC9: add     [esi+8], eax
0x6F3DCC: mov     esi, [esi+8]
0x6F3DCF: lea     ecx, [ebp+var_40]
0x6F3DD2: push    ecx
0x6F3DD3: sub     esi, eax
0x6F3DD5: push    esi
0x6F3DD6: push    edi
0x6F3DD7: mov     [ebp+var_4], 0
0x6F3DDE: call    sub_6F24A0
0x6F3DE3: add     esp, 0Ch
0x6F3DE6: jmp     short loc_6F3E40
0x6F3DE8: mov     eax, [ebp+arg_8]
0x6F3DEB: mov     ecx, [ebp+var_48]
0x6F3DEE: imul    eax, 2Ch ; ','
0x6F3DF1: mov     edx, [ecx+8]
0x6F3DF4: add     edx, eax
0x6F3DF6: push    edx
0x6F3DF7: mov     edx, [ebp+arg_4]
0x6F3DFA: add     eax, edx
0x6F3DFC: push    eax
0x6F3DFD: call    sub_557700
0x6F3E02: push    0
0x6F3E04: push    0
0x6F3E06: call    ThrowException??
0x6F3E0B: imul    ebx, 2Ch ; ','
0x6F3E0E: push    ecx
0x6F3E0F: mov     eax, ecx
0x6F3E11: sub     eax, ebx
0x6F3E13: push    ecx
0x6F3E14: push    eax
0x6F3E15: mov     ecx, esi
0x6F3E17: mov     [ebp+var_48], eax
0x6F3E1A: call    sub_6F3610
0x6F3E1F: mov     ecx, [ebp+var_48]
0x6F3E22: mov     [esi+8], eax
0x6F3E25: mov     eax, [ebp+var_44]
0x6F3E28: push    eax
0x6F3E29: push    ecx
0x6F3E2A: push    edi
0x6F3E2B: call    sub_6F3640
0x6F3E30: lea     edx, [ebp+var_40]
0x6F3E33: push    edx
0x6F3E34: add     ebx, edi
0x6F3E36: push    ebx
0x6F3E37: push    edi
0x6F3E38: call    sub_6F24A0
0x6F3E3D: add     esp, 18h
0x6F3E40: cmp     [ebp+var_18], 10h
0x6F3E44: jb      short loc_6F3E52
0x6F3E46: mov     eax, [ebp+var_2C]
0x6F3E49: push    eax
0x6F3E4A: call    FormHeapFree
0x6F3E4F: add     esp, 4
0x6F3E52: mov     ecx, [ebp+var_C]
0x6F3E55: mov     large fs:0, ecx
0x6F3E5C: pop     ecx
0x6F3E5D: pop     edi
0x6F3E5E: pop     esi
0x6F3E5F: pop     ebx
0x6F3E60: mov     ecx, [ebp+var_14]
0x6F3E63: xor     ecx, ebp
0x6F3E65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F3E6A: mov     esp, ebp
0x6F3E6C: pop     ebp
0x6F3E6D: retn    10h
