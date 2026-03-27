0x4E7950: push    0FFFFFFFFh
0x4E7952: push    offset SEH_4E7950
0x4E7957: mov     eax, large fs:0
0x4E795D: push    eax
0x4E795E: sub     esp, 18h
0x4E7961: push    ebx
0x4E7962: push    ebp
0x4E7963: push    esi
0x4E7964: push    edi
0x4E7965: mov     eax, ds:0B30AACh
0x4E796A: xor     eax, esp
0x4E796C: push    eax
0x4E796D: lea     eax, [esp+38h+var_C]
0x4E7971: mov     large fs:0, eax
0x4E7977: mov     ebp, ecx
0x4E7979: mov     [esp+38h+var_20], ebp
0x4E797D: mov     eax, [esp+38h+arg_0]
0x4E7981: xor     ebx, ebx
0x4E7983: push    ebx; int
0x4E7984: push    offset ??_R0?AVTESPathGrid@@@8; struct TypeDescriptor *
0x4E7989: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E798E: push    ebx; int
0x4E798F: push    eax; void *
0x4E7990: call    OblivionDynamicCast
0x4E7995: mov     edi, eax
0x4E7997: add     esp, 14h
0x4E799A: cmp     edi, ebx
0x4E799C: mov     [esp+38h+var_14], edi
0x4E79A0: jz      loc_4E7CF8
0x4E79A6: cmp     [edi+24h], ebx
0x4E79A9: setnz   al
0x4E79AC: cmp     al, bl
0x4E79AE: mov     byte ptr [esp+38h+arg_0], al
0x4E79B2: jnz     short loc_4E79BB
0x4E79B4: mov     ecx, edi
0x4E79B6: call    sub_4E7610
0x4E79BB: mov     esi, [edi+24h]
0x4E79BE: cmp     esi, ebx
0x4E79C0: mov     [esp+38h+var_10], esi
0x4E79C4: jz      loc_4E7C2D
0x4E79CA: mov     ecx, esi
0x4E79CC: call    sub_521BE0
0x4E79D1: movzx   eax, word ptr [edi+30h]
0x4E79D5: push    10h; Size
0x4E79D7: mov     [ebp+30h], ax
0x4E79DB: call    FormHeapAlloc
0x4E79E0: add     esp, 4
0x4E79E3: cmp     eax, ebx
0x4E79E5: jz      short loc_4E7A04
0x4E79E7: mov     dword ptr [eax], offset ??_7?$NiTArray@PAVTESPathGridPoint@@@@6B@; const NiTArray<TESPathGridPoint *>::`vftable'
0x4E79ED: mov     [eax+8], bx
0x4E79F1: mov     word ptr [eax+0Eh], 1
0x4E79F7: mov     [eax+0Ah], bx
0x4E79FB: mov     [eax+0Ch], bx
0x4E79FF: mov     [eax+4], ebx
0x4E7A02: jmp     short loc_4E7A06
0x4E7A04: xor     eax, eax
0x4E7A06: mov     [ebp+24h], eax
0x4E7A09: movzx   ecx, word ptr [esi+0Ah]
0x4E7A0D: push    ecx
0x4E7A0E: mov     ecx, eax
0x4E7A10: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x4E7A18: call    NiTArray_SetSize
0x4E7A1D: xor     edi, edi
0x4E7A1F: cmp     [esi+0Ah], bx
0x4E7A23: jbe     short loc_4E7A92
0x4E7A25: mov     edx, [esi+4]
0x4E7A28: mov     ebp, [edx+edi*4]
0x4E7A2B: cmp     ebp, ebx
0x4E7A2D: jz      short loc_4E7A87
0x4E7A2F: push    2Ch ; ','; Size
0x4E7A31: call    FormHeapAlloc
0x4E7A36: add     esp, 4
0x4E7A39: mov     [esp+38h+var_18], eax
0x4E7A3D: cmp     eax, ebx
0x4E7A3F: mov     [esp+38h+var_4], 1
0x4E7A47: jz      short loc_4E7A54
0x4E7A49: mov     ecx, eax
0x4E7A4B: call    sub_4E7DF0
0x4E7A50: mov     esi, eax
0x4E7A52: jmp     short loc_4E7A56
0x4E7A54: xor     esi, esi
0x4E7A56: mov     ecx, ebp
0x4E7A58: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4E7A60: mov     [esp+38h+var_18], esi
0x4E7A64: call    sub_4BEF40
0x4E7A69: push    eax
0x4E7A6A: mov     ecx, esi
0x4E7A6C: call    sub_4BEF50
0x4E7A71: mov     ecx, [esp+38h+var_20]
0x4E7A75: mov     ecx, [ecx+24h]
0x4E7A78: lea     eax, [esp+38h+var_18]
0x4E7A7C: push    eax
0x4E7A7D: push    edi
0x4E7A7E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4E7A83: mov     esi, [esp+38h+var_10]
0x4E7A87: movzx   edx, word ptr [esi+0Ah]
0x4E7A8B: add     edi, 1
0x4E7A8E: cmp     edi, edx
0x4E7A90: jb      short loc_4E7A25
0x4E7A92: xor     edi, edi
0x4E7A94: cmp     [esi+0Ah], bx
0x4E7A98: mov     [esp+38h+var_18], edi
0x4E7A9C: jbe     loc_4E7C25
0x4E7AA2: mov     eax, [esi+4]
0x4E7AA5: mov     ebp, [eax+edi*4]
0x4E7AA8: cmp     ebp, ebx
0x4E7AAA: jz      loc_4E7C12
0x4E7AB0: mov     ecx, [esp+38h+var_20]
0x4E7AB4: mov     edx, [ecx+24h]
0x4E7AB7: mov     eax, [edx+4]
0x4E7ABA: mov     ecx, [eax+edi*4]
0x4E7ABD: mov     [esp+38h+var_1C], ecx
0x4E7AC1: call    sub_4E7DE0
0x4E7AC6: mov     esi, eax
0x4E7AC8: cmp     [esi+4], ebx
0x4E7ACB: jz      short loc_4E7AEA
0x4E7ACD: lea     ecx, [ecx+0]
0x4E7AD0: mov     eax, [esi+4]
0x4E7AD3: mov     edi, [eax+4]
0x4E7AD6: push    eax
0x4E7AD7: call    FormHeapFree
0x4E7ADC: add     esp, 4
0x4E7ADF: cmp     edi, ebx
0x4E7AE1: mov     [esi+4], edi
0x4E7AE4: jnz     short loc_4E7AD0
0x4E7AE6: mov     edi, [esp+38h+var_18]
0x4E7AEA: mov     ecx, ebp
0x4E7AEC: mov     [esi], ebx
0x4E7AEE: call    sub_4E7DE0
0x4E7AF3: mov     ebp, eax
0x4E7AF5: cmp     ebp, ebx
0x4E7AF7: jz      loc_4E7BBE
0x4E7AFD: lea     ecx, [ecx+0]
0x4E7B00: cmp     [ebp+4], ebx
0x4E7B03: jnz     short loc_4E7B0E
0x4E7B05: cmp     [ebp+0], ebx
0x4E7B08: jz      loc_4E7BBE
0x4E7B0E: mov     edx, [esp+38h+var_14]
0x4E7B12: mov     ecx, [edx+24h]
0x4E7B15: cmp     ecx, ebx
0x4E7B17: mov     esi, [ebp+0]
0x4E7B1A: jz      loc_4E7BB3
0x4E7B20: cmp     esi, ebx
0x4E7B22: jz      loc_4E7BB3
0x4E7B28: movzx   edx, word ptr [edx+30h]
0x4E7B2C: xor     eax, eax
0x4E7B2E: cmp     edx, ebx
0x4E7B30: jle     loc_4E7BB3
0x4E7B36: mov     ecx, [ecx+4]
0x4E7B39: lea     esp, [esp+0]
0x4E7B40: cmp     [ecx], esi
0x4E7B42: jz      short loc_4E7B50
0x4E7B44: add     eax, 1
0x4E7B47: add     ecx, 4
0x4E7B4A: cmp     eax, edx
0x4E7B4C: jl      short loc_4E7B40
0x4E7B4E: jmp     short loc_4E7BB3
0x4E7B50: cmp     eax, ebx
0x4E7B52: jl      short loc_4E7BB3
0x4E7B54: mov     ecx, [esp+38h+var_20]
0x4E7B58: mov     edx, [ecx+24h]
0x4E7B5B: mov     ecx, [edx+4]
0x4E7B5E: mov     edi, [ecx+eax*4]
0x4E7B61: cmp     edi, ebx
0x4E7B63: jz      short loc_4E7BAF
0x4E7B65: cmp     edi, [esp+38h+var_1C]
0x4E7B69: jz      short loc_4E7BAF
0x4E7B6B: mov     ecx, [esp+38h+var_1C]
0x4E7B6F: call    sub_4E7DE0
0x4E7B74: mov     esi, eax
0x4E7B76: cmp     [esi+4], ebx
0x4E7B79: lea     eax, [esi+4]
0x4E7B7C: jz      short loc_4E7B8A
0x4E7B7E: mov     edi, edi
0x4E7B80: mov     esi, [eax]
0x4E7B82: cmp     [esi+4], ebx
0x4E7B85: lea     eax, [esi+4]
0x4E7B88: jnz     short loc_4E7B80
0x4E7B8A: cmp     [esi], ebx
0x4E7B8C: jz      short loc_4E7BAD
0x4E7B8E: push    8; Size
0x4E7B90: call    FormHeapAlloc
0x4E7B95: add     esp, 4
0x4E7B98: cmp     eax, ebx
0x4E7B9A: jz      short loc_4E7BA6
0x4E7B9C: mov     [eax], edi
0x4E7B9E: mov     [eax+4], ebx
0x4E7BA1: mov     [esi+4], eax
0x4E7BA4: jmp     short loc_4E7BAF
0x4E7BA6: xor     eax, eax
0x4E7BA8: mov     [esi+4], eax
0x4E7BAB: jmp     short loc_4E7BAF
0x4E7BAD: mov     [esi], edi
0x4E7BAF: mov     edi, [esp+38h+var_18]
0x4E7BB3: mov     ebp, [ebp+4]
0x4E7BB6: cmp     ebp, ebx
0x4E7BB8: jnz     loc_4E7B00
0x4E7BBE: mov     edx, [esp+38h+var_20]
0x4E7BC2: mov     eax, [edx+24h]
0x4E7BC5: movzx   ecx, word ptr [eax+0Ah]
0x4E7BC9: cmp     edi, ecx
0x4E7BCB: jb      short loc_4E7BE1
0x4E7BCD: cmp     [esp+38h+var_1C], ebx
0x4E7BD1: lea     edx, [edi+1]
0x4E7BD4: mov     [eax+0Ah], dx
0x4E7BD8: jz      short loc_4E7C04
0x4E7BDA: add     word ptr [eax+0Ch], 1
0x4E7BDF: jmp     short loc_4E7C04
0x4E7BE1: cmp     [esp+38h+var_1C], ebx
0x4E7BE5: jz      short loc_4E7BF6
0x4E7BE7: mov     ecx, [eax+4]
0x4E7BEA: cmp     [ecx+edi*4], ebx
0x4E7BED: jnz     short loc_4E7C04
0x4E7BEF: add     word ptr [eax+0Ch], 1
0x4E7BF4: jmp     short loc_4E7C04
0x4E7BF6: mov     edx, [eax+4]
0x4E7BF9: cmp     [edx+edi*4], ebx
0x4E7BFC: jz      short loc_4E7C04
0x4E7BFE: add     word ptr [eax+0Ch], 0FFFFh
0x4E7C04: mov     eax, [eax+4]
0x4E7C07: mov     ecx, [esp+38h+var_1C]
0x4E7C0B: mov     esi, [esp+38h+var_10]
0x4E7C0F: mov     [eax+edi*4], ecx
0x4E7C12: movzx   edx, word ptr [esi+0Ah]
0x4E7C16: add     edi, 1
0x4E7C19: cmp     edi, edx
0x4E7C1B: mov     [esp+38h+var_18], edi
0x4E7C1F: jb      loc_4E7AA2
0x4E7C25: mov     ebp, [esp+38h+var_20]
0x4E7C29: mov     edi, [esp+38h+var_14]
0x4E7C2D: mov     ecx, ebp
0x4E7C2F: call    sub_4E4ED0
0x4E7C34: lea     ebp, [edi+28h]
0x4E7C37: cmp     ebp, ebx
0x4E7C39: jz      short loc_4E7CB8
0x4E7C3B: jmp     short loc_4E7C40
0x4E7C3D: align 10h
0x4E7C40: cmp     [ebp+4], ebx
0x4E7C43: jnz     short loc_4E7C4A
0x4E7C45: cmp     [ebp+0], ebx
0x4E7C48: jz      short loc_4E7CB8
0x4E7C4A: mov     edi, [ebp+0]
0x4E7C4D: push    10h; Size
0x4E7C4F: call    FormHeapAlloc
0x4E7C54: mov     esi, eax
0x4E7C56: mov     eax, [edi]
0x4E7C58: mov     [esi], eax
0x4E7C5A: mov     ecx, [edi+4]
0x4E7C5D: mov     [esi+4], ecx
0x4E7C60: mov     edx, [edi+8]
0x4E7C63: mov     [esi+8], edx
0x4E7C66: mov     eax, [edi+0Ch]
0x4E7C69: mov     edi, [esp+3Ch+var_20]
0x4E7C6D: add     edi, 28h ; '('
0x4E7C70: add     esp, 4
0x4E7C73: mov     [esi+0Ch], eax
0x4E7C76: cmp     [edi+4], ebx
0x4E7C79: jz      short loc_4E7C88
0x4E7C7B: jmp     short loc_4E7C80
0x4E7C7D: align 10h
0x4E7C80: mov     edi, [edi+4]
0x4E7C83: cmp     [edi+4], ebx
0x4E7C86: jnz     short loc_4E7C80
0x4E7C88: cmp     [edi], ebx
0x4E7C8A: jz      short loc_4E7CAB
0x4E7C8C: push    8; Size
0x4E7C8E: call    FormHeapAlloc
0x4E7C93: add     esp, 4
0x4E7C96: cmp     eax, ebx
0x4E7C98: jz      short loc_4E7CA4
0x4E7C9A: mov     [eax], esi
0x4E7C9C: mov     [eax+4], ebx
0x4E7C9F: mov     [edi+4], eax
0x4E7CA2: jmp     short loc_4E7CAD
0x4E7CA4: xor     eax, eax
0x4E7CA6: mov     [edi+4], eax
0x4E7CA9: jmp     short loc_4E7CAD
0x4E7CAB: mov     [edi], esi
0x4E7CAD: mov     ebp, [ebp+4]
0x4E7CB0: cmp     ebp, ebx
0x4E7CB2: mov     edi, [esp+38h+var_14]
0x4E7CB6: jnz     short loc_4E7C40
0x4E7CB8: cmp     byte ptr [esp+38h+arg_0], bl
0x4E7CBC: jnz     short loc_4E7CF8
0x4E7CBE: cmp     [edi+24h], ebx
0x4E7CC1: jz      short loc_4E7CF8
0x4E7CC3: mov     ecx, edi
0x4E7CC5: call    sub_4E5400
0x4E7CCA: push    0FFFFFFFFh; a2
0x4E7CCC: mov     ecx, edi; this
0x4E7CCE: call    TESForm_GetOverrideFile
0x4E7CD3: test    eax, eax
0x4E7CD5: jz      short loc_4E7CEA
0x4E7CD7: push    ebx; a2
0x4E7CD8: mov     ecx, edi; this
0x4E7CDA: call    TESForm_GetOverrideFile
0x4E7CDF: mov     ecx, eax
0x4E7CE1: call    TESFile_IsActive
0x4E7CE6: test    al, al
0x4E7CE8: jnz     short loc_4E7CF8
0x4E7CEA: mov     ecx, edi
0x4E7CEC: call    sub_4E6CA0
0x4E7CF1: mov     ecx, edi
0x4E7CF3: call    sub_4E5280
0x4E7CF8: mov     ecx, dword ptr [esp+38h+var_C]
0x4E7CFC: mov     large fs:0, ecx
0x4E7D03: pop     ecx
0x4E7D04: pop     edi
0x4E7D05: pop     esi
0x4E7D06: pop     ebp
0x4E7D07: pop     ebx
0x4E7D08: add     esp, 24h
0x4E7D0B: retn    4
