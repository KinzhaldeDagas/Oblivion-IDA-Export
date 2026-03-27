0x7299A0: sub     esp, 10h
0x7299A3: push    ebx
0x7299A4: push    ebp
0x7299A5: push    esi
0x7299A6: mov     esi, [esp+1Ch+arg_0]
0x7299AA: push    edi
0x7299AB: push    esi
0x7299AC: mov     edi, ecx
0x7299AE: call    nullsub_returnvVoid_1arg
0x7299B3: mov     eax, ds:0B3FE00h
0x7299B8: push    eax
0x7299B9: mov     ecx, esi
0x7299BB: call    sub_712560
0x7299C0: mov     ebp, 1
0x7299C5: push    ebp
0x7299C6: lea     ecx, [esp+24h+var_C]
0x7299CA: push    ecx
0x7299CB: mov     [esp+28h+var_8], eax
0x7299CF: mov     eax, [esi+220h]
0x7299D5: push    4
0x7299D7: lea     edx, [esp+2Ch+var_8]
0x7299DB: push    edx
0x7299DC: push    eax
0x7299DD: mov     eax, [eax+8]
0x7299E0: mov     [esp+34h+var_C], 4
0x7299E8: call    eax
0x7299EA: mov     eax, [esi+220h]
0x7299F0: mov     edx, [eax+8]
0x7299F3: push    ebp
0x7299F4: lea     ecx, [esp+38h+var_C]
0x7299F8: push    ecx
0x7299F9: push    2
0x7299FB: lea     ebx, [edi+8]
0x7299FE: push    ebx
0x7299FF: push    eax
0x729A00: mov     [esp+48h+var_C], 2
0x729A08: call    edx
0x729A0A: mov     eax, [esi+220h]
0x729A10: push    ebp
0x729A11: lea     ecx, [esp+4Ch+var_C]
0x729A15: push    ecx
0x729A16: push    ebp
0x729A17: lea     edx, [edi+30h]
0x729A1A: push    edx
0x729A1B: push    eax
0x729A1C: mov     eax, [eax+8]
0x729A1F: mov     [esp+5Ch+var_C], ebp
0x729A23: call    eax
0x729A25: mov     eax, [esi+220h]
0x729A2B: push    ebp
0x729A2C: lea     ecx, [esp+60h+var_C]
0x729A30: push    ecx
0x729A31: push    ebp
0x729A32: lea     edx, [edi+31h]
0x729A35: push    edx
0x729A36: push    eax
0x729A37: mov     eax, [eax+8]
0x729A3A: mov     [esp+70h+var_C], ebp
0x729A3E: call    eax
0x729A40: mov     eax, [esi+220h]
0x729A46: add     esp, 50h
0x729A49: cmp     dword ptr [edi+1Ch], 0
0x729A4D: push    ebp
0x729A4E: setnz   cl
0x729A51: lea     edx, [esp+24h+var_C]
0x729A55: push    edx
0x729A56: mov     byte ptr [esp+28h+arg_0], cl
0x729A5A: mov     edx, [eax+8]
0x729A5D: push    ebp
0x729A5E: lea     ecx, [esp+2Ch+arg_0]
0x729A62: push    ecx
0x729A63: push    eax
0x729A64: mov     [esp+34h+var_C], ebp
0x729A68: call    edx
0x729A6A: add     esp, 14h
0x729A6D: cmp     byte ptr [esp+20h+arg_0], 0
0x729A72: jz      short loc_729AA0
0x729A74: mov     eax, [esi+220h]
0x729A7A: push    ebp
0x729A7B: lea     ecx, [esp+24h+var_C]
0x729A7F: push    ecx
0x729A80: movzx   ecx, word ptr [ebx]
0x729A83: lea     edx, [ecx+ecx*2]
0x729A86: mov     ecx, [edi+1Ch]
0x729A89: add     edx, edx
0x729A8B: add     edx, edx
0x729A8D: push    edx
0x729A8E: mov     edx, [eax+8]
0x729A91: push    ecx
0x729A92: push    eax
0x729A93: mov     [esp+34h+var_C], 4
0x729A9B: call    edx
0x729A9D: add     esp, 14h
0x729AA0: mov     eax, [esi+220h]
0x729AA6: push    ebp
0x729AA7: lea     edx, [esp+24h+var_C]
0x729AAB: push    edx
0x729AAC: lea     ecx, [edi+2Ch]
0x729AAF: push    2
0x729AB1: push    ecx
0x729AB2: push    eax
0x729AB3: mov     eax, [eax+8]
0x729AB6: mov     [esp+34h+var_C], 2
0x729ABE: call    eax
0x729AC0: movzx   ebp, word ptr [ebx]
0x729AC3: add     esp, 14h
0x729AC6: test    word ptr [edi+2Ch], 0F000h
0x729ACC: jz      short loc_729AD2
0x729ACE: lea     ebp, [ebp+ebp*2+0]
0x729AD2: cmp     dword ptr [edi+20h], 0
0x729AD6: mov     eax, [esi+220h]
0x729ADC: push    1
0x729ADE: setnz   cl
0x729AE1: lea     edx, [esp+24h+var_C]
0x729AE5: push    edx
0x729AE6: mov     [esp+28h+var_E], cl
0x729AEA: mov     edx, [eax+8]
0x729AED: push    1
0x729AEF: lea     ecx, [esp+2Ch+var_E]
0x729AF3: push    ecx
0x729AF4: push    eax
0x729AF5: mov     [esp+34h+var_C], 1
0x729AFD: call    edx
0x729AFF: add     esp, 14h
0x729B02: cmp     [esp+20h+var_E], 0
0x729B07: jz      short loc_729B34
0x729B09: mov     eax, [esi+220h]
0x729B0F: push    1
0x729B11: lea     edx, [ebp+ebp*2+0]
0x729B15: add     edx, edx
0x729B17: lea     ecx, [esp+24h+var_C]
0x729B1B: push    ecx
0x729B1C: mov     ecx, [edi+20h]
0x729B1F: add     edx, edx
0x729B21: push    edx
0x729B22: mov     edx, [eax+8]
0x729B25: push    ecx
0x729B26: push    eax
0x729B27: mov     [esp+34h+var_C], 4
0x729B2F: call    edx
0x729B31: add     esp, 14h
0x729B34: push    esi
0x729B35: lea     ecx, [edi+0Ch]
0x729B38: call    sub_716EE0
0x729B3D: cmp     dword ptr [edi+24h], 0
0x729B41: push    1
0x729B43: lea     ecx, [esp+24h+var_C]
0x729B47: push    ecx
0x729B48: setnz   al
0x729B4B: mov     [esp+28h+var_D], al
0x729B4F: mov     eax, [esi+220h]
0x729B55: push    1
0x729B57: lea     edx, [esp+2Ch+var_D]
0x729B5B: push    edx
0x729B5C: push    eax
0x729B5D: mov     eax, [eax+8]
0x729B60: mov     [esp+34h+var_C], 1
0x729B68: call    eax
0x729B6A: add     esp, 14h
0x729B6D: cmp     [esp+20h+var_D], 0
0x729B72: jz      short loc_729B9D
0x729B74: movzx   edx, word ptr [ebx]
0x729B77: mov     eax, [esi+220h]
0x729B7D: push    1
0x729B7F: lea     ecx, [esp+24h+var_C]
0x729B83: push    ecx
0x729B84: mov     ecx, [edi+24h]
0x729B87: shl     edx, 4
0x729B8A: push    edx
0x729B8B: mov     edx, [eax+8]
0x729B8E: push    ecx
0x729B8F: push    eax
0x729B90: mov     [esp+34h+var_C], 4
0x729B98: call    edx
0x729B9A: add     esp, 14h
0x729B9D: movzx   ecx, byte ptr [edi+2Ch]
0x729BA1: movzx   eax, word ptr [ebx]
0x729BA4: and     ecx, 3Fh
0x729BA7: imul    ecx, eax
0x729BAA: test    ecx, ecx
0x729BAC: jz      short loc_729BD7
0x729BAE: mov     eax, [esi+220h]
0x729BB4: add     ecx, ecx
0x729BB6: push    1
0x729BB8: lea     edx, [esp+24h+var_C]
0x729BBC: push    edx
0x729BBD: mov     edx, [edi+28h]
0x729BC0: add     ecx, ecx
0x729BC2: add     ecx, ecx
0x729BC4: push    ecx
0x729BC5: push    edx
0x729BC6: push    eax
0x729BC7: mov     eax, [eax+8]
0x729BCA: mov     [esp+34h+var_C], 4
0x729BD2: call    eax
0x729BD4: add     esp, 14h
0x729BD7: mov     cx, [edi+2Eh]
0x729BDB: mov     eax, [esi+220h]
0x729BE1: and     cx, 0F000h
0x729BE6: movzx   edx, cx
0x729BE9: push    1
0x729BEB: lea     ecx, [esp+24h+var_C]
0x729BEF: push    ecx
0x729BF0: mov     [esp+28h+var_4], edx
0x729BF4: push    2
0x729BF6: lea     edx, [esp+2Ch+var_4]
0x729BFA: push    edx
0x729BFB: push    eax
0x729BFC: mov     eax, [eax+8]
0x729BFF: mov     [esp+34h+var_C], 2
0x729C07: call    eax
0x729C09: mov     edx, [esi]
0x729C0B: mov     eax, [edi+34h]
0x729C0E: mov     edx, [edx+2Ch]
0x729C11: add     esp, 14h
0x729C14: push    eax
0x729C15: mov     ecx, esi
0x729C17: call    edx
0x729C19: pop     edi
0x729C1A: pop     esi
0x729C1B: pop     ebp
0x729C1C: pop     ebx
0x729C1D: add     esp, 10h
0x729C20: retn    4
