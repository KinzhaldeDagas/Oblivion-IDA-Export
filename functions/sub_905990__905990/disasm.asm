0x905990: push    ebp
0x905991: mov     ebp, esp
0x905993: and     esp, 0FFFFFFF0h
0x905996: sub     esp, 244h
0x90599C: mov     eax, ds:0B30AACh
0x9059A1: push    ebx
0x9059A2: push    esi
0x9059A3: mov     [esp+24Ch+var_4], eax
0x9059AA: mov     eax, [ebp+arg_C]
0x9059AD: push    edi
0x9059AE: mov     edi, ecx
0x9059B0: mov     [edi+8], eax
0x9059B3: mov     eax, [ebp+arg_0]
0x9059B6: mov     word ptr [edi+6], 1
0x9059BC: mov     dword ptr [edi], offset off_A9BDD8
0x9059C2: lea     ebx, [edi+0Ch]
0x9059C5: lea     ecx, [ebx+0Ch]
0x9059C8: mov     [ebx], ecx
0x9059CA: mov     dword ptr [ebx+4], 0
0x9059D1: mov     dword ptr [ebx+8], 80000004h
0x9059D8: mov     edx, [eax+8]
0x9059DB: mov     esi, [eax]
0x9059DD: mov     [esp+250h+var_214], eax
0x9059E1: mov     [esp+250h+var_218], edx
0x9059E5: mov     eax, [esi]
0x9059E7: mov     ecx, esi
0x9059E9: mov     [esp+250h+var_228], edi
0x9059ED: mov     [esp+250h+var_224], esi
0x9059F1: call    dword ptr [eax+1Ch]
0x9059F4: mov     ecx, eax
0x9059F6: mov     eax, [ebx+8]
0x9059F9: and     eax, 3FFFFFFFh
0x9059FE: cmp     eax, ecx
0x905A00: mov     [esp+250h+var_23C], ecx
0x905A04: jge     short loc_905A1A
0x905A06: add     eax, eax
0x905A08: cmp     ecx, eax
0x905A0A: jl      short loc_905A0E
0x905A0C: mov     eax, ecx
0x905A0E: push    8
0x905A10: push    eax
0x905A11: push    ebx
0x905A12: call    sub_8A6E40
0x905A17: add     esp, 0Ch
0x905A1A: mov     edx, [esi]
0x905A1C: mov     ecx, esi
0x905A1E: call    dword ptr [edx+20h]
0x905A21: mov     [esp+250h+var_238], eax
0x905A25: mov     eax, [esp+250h+var_23C]
0x905A29: test    eax, eax
0x905A2B: jle     loc_905B31
0x905A31: mov     edi, [ebp+arg_8]
0x905A34: mov     [esp+250h+var_230], eax
0x905A38: jmp     short loc_905A40
0x905A3A: align 10h
0x905A40: mov     ecx, [esp+250h+var_238]
0x905A44: mov     edx, [esi]
0x905A46: lea     eax, [esp+250h+var_210]
0x905A4A: push    eax
0x905A4B: push    ecx
0x905A4C: mov     ecx, esi
0x905A4E: call    dword ptr [edx+28h]
0x905A51: mov     ecx, [edi+4]
0x905A54: mov     [esp+250h+var_220], eax
0x905A58: mov     eax, [esp+250h+var_238]
0x905A5C: push    eax
0x905A5D: mov     [esp+254h+var_21C], eax
0x905A61: mov     eax, [ebp+arg_0]
0x905A64: mov     edx, [ecx]
0x905A66: push    esi
0x905A67: push    eax
0x905A68: mov     eax, [ebp+arg_4]
0x905A6B: push    eax
0x905A6C: push    edi
0x905A6D: lea     eax, [esp+264h+var_231]
0x905A71: push    eax
0x905A72: call    dword ptr [edx]
0x905A74: cmp     byte ptr [eax], 0
0x905A77: jz      loc_905AFE
0x905A7D: mov     eax, [ebx+4]
0x905A80: mov     edx, [ebx]
0x905A82: lea     ecx, [eax+1]
0x905A85: mov     [ebx+4], ecx
0x905A88: mov     ecx, [edi]
0x905A8A: mov     [esp+250h+var_23C], ecx
0x905A8E: mov     ecx, [esp+250h+var_220]
0x905A92: lea     eax, [edx+eax*8]
0x905A95: mov     edx, [ecx]
0x905A97: mov     [esp+250h+var_22C], eax
0x905A9B: call    dword ptr [edx+8]
0x905A9E: mov     esi, eax
0x905AA0: mov     eax, [ebp+arg_4]
0x905AA3: mov     ecx, [eax]
0x905AA5: mov     edx, [ecx]
0x905AA7: call    dword ptr [edx+8]
0x905AAA: mov     cl, [edi+0Ch]
0x905AAD: test    cl, cl
0x905AAF: mov     ecx, [esp+250h+var_23C]
0x905AB3: jz      short loc_905ABD
0x905AB5: add     ecx, 590h
0x905ABB: jmp     short loc_905AC3
0x905ABD: add     ecx, 190h
0x905AC3: mov     edx, [ebp+arg_C]
0x905AC6: shl     esi, 5
0x905AC9: add     esi, ecx
0x905ACB: movzx   eax, byte ptr [esi+eax]
0x905ACF: mov     ecx, [esp+250h+var_23C]
0x905AD3: push    edx
0x905AD4: lea     eax, [eax+eax*4]
0x905AD7: mov     eax, [ecx+eax*4+990h]
0x905ADE: mov     ecx, [ebp+arg_4]
0x905AE1: push    edi
0x905AE2: push    ecx
0x905AE3: lea     edx, [esp+25Ch+var_220]
0x905AE7: push    edx
0x905AE8: call    eax
0x905AEA: mov     ecx, [esp+260h+var_22C]
0x905AEE: mov     esi, [esp+260h+var_224]
0x905AF2: mov     [ecx+4], eax
0x905AF5: mov     eax, [esp+260h+var_238]
0x905AF9: add     esp, 10h
0x905AFC: mov     [ecx], eax
0x905AFE: mov     eax, [esp+250h+var_238]
0x905B02: mov     edx, [esi]
0x905B04: push    eax
0x905B05: mov     ecx, esi
0x905B07: call    dword ptr [edx+24h]
0x905B0A: mov     [esp+250h+var_238], eax
0x905B0E: dec     [esp+250h+var_230]
0x905B12: jnz     loc_905A40
0x905B18: mov     eax, [esp+250h+var_228]
0x905B1C: mov     ecx, [esp+250h+var_4]
0x905B23: call    @__security_check_cookie@4; __security_check_cookie(x)
0x905B28: pop     edi
0x905B29: pop     esi
0x905B2A: pop     ebx
0x905B2B: mov     esp, ebp
0x905B2D: pop     ebp
0x905B2E: retn    10h
0x905B31: mov     ecx, [esp+250h+var_4]
0x905B38: mov     eax, edi
0x905B3A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x905B3F: pop     edi
0x905B40: pop     esi
0x905B41: pop     ebx
0x905B42: mov     esp, ebp
0x905B44: pop     ebp
0x905B45: retn    10h
