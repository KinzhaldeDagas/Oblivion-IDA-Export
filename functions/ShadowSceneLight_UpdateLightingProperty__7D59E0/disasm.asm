0x7D59E0: push    ecx
0x7D59E1: cmp     dword ptr ds:0B42F48h, 0
0x7D59E8: push    ebp
0x7D59E9: mov     ebp, ecx
0x7D59EB: jnz     short loc_7D59F4
0x7D59ED: xor     al, al
0x7D59EF: pop     ebp
0x7D59F0: pop     ecx
0x7D59F1: retn    4
0x7D59F4: mov     eax, [ebp+1B0h]
0x7D59FA: push    edi
0x7D59FB: mov     edi, [esp+0Ch+arg_0]
0x7D59FF: mov     [esp+0Ch+var_4], eax
0x7D5A03: mov     eax, [ebp+100h]
0x7D5A09: push    eax
0x7D5A0A: push    edi
0x7D5A0B: call    sub_7D2EA0
0x7D5A10: test    al, al
0x7D5A12: jz      loc_7D5B02
0x7D5A18: mov     edx, [edi]
0x7D5A1A: mov     eax, [edx+8]
0x7D5A1D: push    esi
0x7D5A1E: mov     ecx, edi
0x7D5A20: call    eax
0x7D5A22: mov     esi, eax
0x7D5A24: test    esi, esi
0x7D5A26: jz      loc_7D5AE3
0x7D5A2C: mov     edx, [esi]
0x7D5A2E: mov     eax, [edx+4]
0x7D5A31: mov     ecx, esi
0x7D5A33: xor     edi, edi
0x7D5A35: call    eax
0x7D5A37: cmp     eax, offset dword_B3FD70
0x7D5A3C: setz    al
0x7D5A3F: neg     al
0x7D5A41: sbb     eax, eax
0x7D5A43: and     eax, esi
0x7D5A45: jz      short loc_7D5A8C
0x7D5A47: mov     ecx, eax
0x7D5A49: call    sub_7C59E0
0x7D5A4E: mov     esi, eax
0x7D5A50: test    esi, esi
0x7D5A52: jz      loc_7D5B01
0x7D5A58: mov     ecx, esi
0x7D5A5A: call    sub_49FFC0
0x7D5A5F: test    al, al
0x7D5A61: jz      loc_7D5B01
0x7D5A67: test    byte ptr [esi+18h], 1
0x7D5A6B: jnz     loc_7D5B01
0x7D5A71: push    esi
0x7D5A72: mov     ecx, ebp
0x7D5A74: call    ShadowSceneLight_UpdateLightingProperty
0x7D5A79: mov     ecx, [esp+10h+var_4]
0x7D5A7D: pop     esi
0x7D5A7E: pop     edi
0x7D5A7F: mov     [ebp+1B0h], ecx
0x7D5A85: mov     al, 1
0x7D5A87: pop     ebp
0x7D5A88: pop     ecx
0x7D5A89: retn    4
0x7D5A8C: movzx   eax, word ptr [esi+0B6h]
0x7D5A93: test    eax, eax
0x7D5A95: jbe     short loc_7D5B01
0x7D5A97: cmp     eax, edi
0x7D5A99: jbe     short loc_7D5AC2
0x7D5A9B: mov     ecx, [esi+0B0h]
0x7D5AA1: mov     ecx, [ecx+edi*4]
0x7D5AA4: test    ecx, ecx
0x7D5AA6: jz      short loc_7D5AC2
0x7D5AA8: fldz
0x7D5AAA: fcomp   dword ptr [ecx+2Ch]
0x7D5AAD: fnstsw  ax
0x7D5AAF: test    ah, 44h
0x7D5AB2: jnp     short loc_7D5AC2
0x7D5AB4: test    byte ptr [ecx+18h], 1
0x7D5AB8: jnz     short loc_7D5AC2
0x7D5ABA: push    ecx
0x7D5ABB: mov     ecx, ebp
0x7D5ABD: call    ShadowSceneLight_UpdateLightingProperty
0x7D5AC2: movzx   eax, word ptr [esi+0B6h]
0x7D5AC9: add     edi, 1
0x7D5ACC: cmp     eax, edi
0x7D5ACE: ja      short loc_7D5A9B
0x7D5AD0: mov     ecx, [esp+10h+var_4]
0x7D5AD4: pop     esi
0x7D5AD5: pop     edi
0x7D5AD6: mov     [ebp+1B0h], ecx
0x7D5ADC: mov     al, 1
0x7D5ADE: pop     ebp
0x7D5ADF: pop     ecx
0x7D5AE0: retn    4
0x7D5AE3: mov     edx, [edi]
0x7D5AE5: mov     eax, [edx+10h]
0x7D5AE8: mov     ecx, edi
0x7D5AEA: call    eax
0x7D5AEC: test    eax, eax
0x7D5AEE: jz      short loc_7D5B01
0x7D5AF0: mov     edx, [edi]
0x7D5AF2: mov     eax, [edx+10h]
0x7D5AF5: mov     ecx, edi
0x7D5AF7: call    eax
0x7D5AF9: push    eax
0x7D5AFA: mov     ecx, ebp
0x7D5AFC: call    sub_7D5790
0x7D5B01: pop     esi
0x7D5B02: mov     ecx, [esp+0Ch+var_4]
0x7D5B06: pop     edi
0x7D5B07: mov     [ebp+1B0h], ecx
0x7D5B0D: mov     al, 1
0x7D5B0F: pop     ebp
0x7D5B10: pop     ecx
0x7D5B11: retn    4
