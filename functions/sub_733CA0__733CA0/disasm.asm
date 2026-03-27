0x733CA0: sub     esp, 10h
0x733CA3: mov     eax, ds:0B30AACh
0x733CA8: xor     eax, esp
0x733CAA: mov     [esp+10h+var_4], eax
0x733CAE: push    ebx
0x733CAF: push    ebp
0x733CB0: push    esi
0x733CB1: mov     esi, ecx
0x733CB3: mov     eax, [esi+8]
0x733CB6: mov     dl, [eax]
0x733CB8: mov     ecx, [esp+1Ch+arg_0]
0x733CBC: add     eax, 1
0x733CBF: push    edi
0x733CC0: movzx   edi, dl
0x733CC3: mov     [esi+8], eax
0x733CC6: mov     [esp+20h+var_C], dl
0x733CCA: mov     dl, [eax]
0x733CCC: movzx   ebx, dl
0x733CCF: cmp     edi, ebx
0x733CD1: lea     ebp, [eax+1]
0x733CD4: mov     [esp+20h+var_B], dl
0x733CD8: mov     [esp+20h+var_10], ebp
0x733CDC: mov     [esi+8], ebp
0x733CDF: jbe     loc_733D93
0x733CE5: lea     eax, [edi+edi*2]
0x733CE8: lea     ebp, [ebx+eax*2]
0x733CEB: mov     eax, 24924925h
0x733CF0: mul     ebp
0x733CF2: mov     eax, ebp
0x733CF4: sub     eax, edx
0x733CF6: shr     eax, 1
0x733CF8: add     eax, edx
0x733CFA: shr     eax, 2
0x733CFD: mov     [esp+20h+var_A], al
0x733D01: lea     edx, [edi+edi*4]
0x733D04: lea     ebp, [edx+ebx*2]
0x733D07: mov     eax, 24924925h
0x733D0C: mul     ebp
0x733D0E: mov     eax, ebp
0x733D10: sub     eax, edx
0x733D12: shr     eax, 1
0x733D14: add     eax, edx
0x733D16: shr     eax, 2
0x733D19: mov     [esp+20h+var_9], al
0x733D1D: lea     edx, [ebx+ebx*2]
0x733D20: lea     ebp, [edx+edi*4]
0x733D23: mov     eax, 24924925h
0x733D28: mul     ebp
0x733D2A: mov     eax, ebp
0x733D2C: sub     eax, edx
0x733D2E: shr     eax, 1
0x733D30: add     eax, edx
0x733D32: shr     eax, 2
0x733D35: mov     [esp+20h+var_8], al
0x733D39: lea     edx, [edi+edi*2]
0x733D3C: lea     ebp, [edx+ebx*4]
0x733D3F: mov     eax, 24924925h
0x733D44: mul     ebp
0x733D46: mov     eax, ebp
0x733D48: sub     eax, edx
0x733D4A: shr     eax, 1
0x733D4C: add     eax, edx
0x733D4E: shr     eax, 2
0x733D51: mov     [esp+20h+var_7], al
0x733D55: lea     edx, [ebx+ebx*4]
0x733D58: lea     ebp, [edx+edi*2]
0x733D5B: mov     eax, 24924925h
0x733D60: mul     ebp
0x733D62: mov     eax, ebp
0x733D64: sub     eax, edx
0x733D66: shr     eax, 1
0x733D68: add     eax, edx
0x733D6A: shr     eax, 2
0x733D6D: mov     ebp, [esp+20h+var_10]
0x733D71: mov     [esp+20h+var_6], al
0x733D75: lea     edx, [ebx+ebx*2]
0x733D78: lea     edi, [edi+edx*2]
0x733D7B: mov     eax, 24924925h
0x733D80: mul     edi
0x733D82: mov     eax, edi
0x733D84: sub     eax, edx
0x733D86: shr     eax, 1
0x733D88: add     eax, edx
0x733D8A: shr     eax, 2
0x733D8D: mov     [esp+20h+var_5], al
0x733D91: jmp     short loc_733DE7
0x733D93: lea     edx, [ebx+edi*4]
0x733D96: mov     eax, 0CCCCCCCDh
0x733D9B: mul     edx
0x733D9D: shr     edx, 2
0x733DA0: mov     [esp+20h+var_A], dl
0x733DA4: lea     eax, [edi+edi*2]
0x733DA7: lea     edx, [eax+ebx*2]
0x733DAA: mov     eax, 0CCCCCCCDh
0x733DAF: mul     edx
0x733DB1: shr     edx, 2
0x733DB4: mov     [esp+20h+var_9], dl
0x733DB8: lea     eax, [ebx+ebx*2]
0x733DBB: lea     edx, [eax+edi*2]
0x733DBE: mov     eax, 0CCCCCCCDh
0x733DC3: mul     edx
0x733DC5: shr     edx, 2
0x733DC8: mov     [esp+20h+var_8], dl
0x733DCC: lea     edx, [edi+ebx*4]
0x733DCF: mov     eax, 0CCCCCCCDh
0x733DD4: mul     edx
0x733DD6: shr     edx, 2
0x733DD9: mov     [esp+20h+var_7], dl
0x733DDD: mov     [esp+20h+var_6], 0
0x733DE2: mov     [esp+20h+var_5], 0FFh
0x733DE7: movzx   eax, byte ptr [ebp+0]
0x733DEB: and     eax, 7
0x733DEE: movzx   edx, [esp+eax+20h+var_C]
0x733DF3: mov     [ecx], dl
0x733DF5: mov     eax, [esi+8]
0x733DF8: movzx   edx, byte ptr [eax]
0x733DFB: shr     edx, 3
0x733DFE: and     edx, 7
0x733E01: movzx   eax, [esp+edx+20h+var_C]
0x733E06: mov     [ecx+4], al
0x733E09: mov     eax, [esi+8]
0x733E0C: movzx   edx, byte ptr [eax+1]
0x733E10: movzx   eax, byte ptr [eax]
0x733E13: shr     eax, 6
0x733E16: add     ecx, 4
0x733E19: lea     eax, [esp+eax+20h+var_C]
0x733E1D: and     edx, 1
0x733E20: movzx   edx, byte ptr [eax+edx*4]
0x733E24: mov     [ecx+4], dl
0x733E27: mov     eax, [esi+8]
0x733E2A: movzx   edx, byte ptr [eax+1]
0x733E2E: add     ecx, 4
0x733E31: shr     edx, 1
0x733E33: and     edx, 7
0x733E36: movzx   eax, [esp+edx+20h+var_C]
0x733E3B: mov     [ecx+4], al
0x733E3E: mov     edx, [esi+8]
0x733E41: movzx   eax, byte ptr [edx+1]
0x733E45: shr     eax, 4
0x733E48: add     ecx, 4
0x733E4B: and     eax, 7
0x733E4E: movzx   edx, [esp+eax+20h+var_C]
0x733E53: mov     [ecx+4], dl
0x733E56: mov     eax, [esi+8]
0x733E59: movzx   edx, byte ptr [eax+2]
0x733E5D: movzx   eax, byte ptr [eax+1]
0x733E61: add     ecx, 4
0x733E64: shr     eax, 7
0x733E67: lea     eax, [esp+eax+20h+var_C]
0x733E6B: mov     edi, 3
0x733E70: and     edx, edi
0x733E72: movzx   edx, byte ptr [eax+edx*2]
0x733E76: mov     [ecx+4], dl
0x733E79: mov     eax, [esi+8]
0x733E7C: movzx   edx, byte ptr [eax+2]
0x733E80: add     ecx, 4
0x733E83: shr     edx, 2
0x733E86: and     edx, 7
0x733E89: movzx   eax, [esp+edx+20h+var_C]
0x733E8E: mov     [ecx+4], al
0x733E91: mov     edx, [esi+8]
0x733E94: movzx   eax, byte ptr [edx+2]
0x733E98: add     ecx, 4
0x733E9B: shr     eax, 5
0x733E9E: movzx   edx, [esp+eax+20h+var_C]
0x733EA3: mov     [ecx+4], dl
0x733EA6: add     [esi+8], edi
0x733EA9: mov     eax, [esi+8]
0x733EAC: movzx   eax, byte ptr [eax]
0x733EAF: add     ecx, 4
0x733EB2: and     eax, 7
0x733EB5: movzx   edx, [esp+eax+20h+var_C]
0x733EBA: mov     [ecx+4], dl
0x733EBD: mov     eax, [esi+8]
0x733EC0: movzx   edx, byte ptr [eax]
0x733EC3: add     ecx, 4
0x733EC6: shr     edx, 3
0x733EC9: and     edx, 7
0x733ECC: movzx   eax, [esp+edx+20h+var_C]
0x733ED1: mov     [ecx+4], al
0x733ED4: mov     eax, [esi+8]
0x733ED7: movzx   edx, byte ptr [eax+1]
0x733EDB: movzx   eax, byte ptr [eax]
0x733EDE: add     ecx, 4
0x733EE1: shr     eax, 6
0x733EE4: and     edx, 1
0x733EE7: lea     eax, [esp+eax+20h+var_C]
0x733EEB: movzx   edx, byte ptr [eax+edx*4]
0x733EEF: add     ecx, 4
0x733EF2: mov     [ecx], dl
0x733EF4: add     ecx, 4
0x733EF7: mov     eax, [esi+8]
0x733EFA: movzx   edx, byte ptr [eax+1]
0x733EFE: shr     edx, 1
0x733F00: and     edx, 7
0x733F03: movzx   eax, [esp+edx+20h+var_C]
0x733F08: mov     [ecx], al
0x733F0A: mov     edx, [esi+8]
0x733F0D: movzx   eax, byte ptr [edx+1]
0x733F11: shr     eax, 4
0x733F14: and     eax, 7
0x733F17: movzx   edx, [esp+eax+20h+var_C]
0x733F1C: mov     [ecx+4], dl
0x733F1F: mov     eax, [esi+8]
0x733F22: movzx   edx, byte ptr [eax+2]
0x733F26: movzx   eax, byte ptr [eax+1]
0x733F2A: add     ecx, 4
0x733F2D: and     edx, edi
0x733F2F: shr     eax, 7
0x733F32: lea     eax, [esp+eax+20h+var_C]
0x733F36: movzx   edx, byte ptr [eax+edx*2]
0x733F3A: mov     [ecx+4], dl
0x733F3D: mov     eax, [esi+8]
0x733F40: movzx   edx, byte ptr [eax+2]
0x733F44: add     ecx, 4
0x733F47: shr     edx, 2
0x733F4A: and     edx, 7
0x733F4D: movzx   eax, [esp+edx+20h+var_C]
0x733F52: add     ecx, 4
0x733F55: mov     [ecx], al
0x733F57: mov     edx, [esi+8]
0x733F5A: movzx   eax, byte ptr [edx+2]
0x733F5E: shr     eax, 5
0x733F61: movzx   edx, [esp+eax+20h+var_C]
0x733F66: mov     [ecx+4], dl
0x733F69: add     [esi+8], edi
0x733F6C: mov     ecx, [esp+20h+var_4]
0x733F70: pop     edi
0x733F71: pop     esi
0x733F72: pop     ebp
0x733F73: pop     ebx
0x733F74: xor     ecx, esp
0x733F76: call    @__security_check_cookie@4; __security_check_cookie(x)
0x733F7B: add     esp, 10h
0x733F7E: retn    4
