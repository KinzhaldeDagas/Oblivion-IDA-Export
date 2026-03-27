0x8A4A60: push    ebp
0x8A4A61: mov     ebp, esp
0x8A4A63: and     esp, 0FFFFFFF0h
0x8A4A66: sub     esp, 14h
0x8A4A69: push    ebx
0x8A4A6A: mov     ebx, [ebp+arg_0]
0x8A4A6D: push    esi
0x8A4A6E: push    edi
0x8A4A6F: push    ebx
0x8A4A70: mov     esi, ecx
0x8A4A72: call    sub_89F470
0x8A4A77: test    al, al
0x8A4A79: mov     [esp+20h+var_9], al
0x8A4A7D: jz      loc_8A4B40
0x8A4A83: cmp     byte ptr ds:0B2EB00h, 0
0x8A4A8A: jz      loc_8A4B34
0x8A4A90: cmp     dword ptr [ebx+1Ch], 0
0x8A4A94: ja      loc_8A4B34
0x8A4A9A: test    esi, esi
0x8A4A9C: jz      short loc_8A4AAF
0x8A4A9E: mov     eax, [esi+8]
0x8A4AA1: test    eax, eax
0x8A4AA3: jz      short loc_8A4AAF
0x8A4AA5: mov     eax, [eax+50h]
0x8A4AA8: add     eax, 0D0h ; 'Ð'
0x8A4AAD: jmp     short loc_8A4AB4
0x8A4AAF: mov     eax, offset stru_BA7A40
0x8A4AB4: movaps  xmm3, xmmword ptr [eax]
0x8A4AB7: movss   xmm0, dword ptr ds:0A37080h
0x8A4ABF: movaps  xmm1, xmmword ptr ds:0BA7A40h
0x8A4AC6: movaps  xmm2, xmmword ptr ds:0A372D0h
0x8A4ACD: shufps  xmm0, xmm0, 0
0x8A4AD1: subps   xmm3, xmm1
0x8A4AD4: andps   xmm3, xmm2
0x8A4AD7: movaps  xmm4, xmm0
0x8A4ADA: cmpltps xmm4, xmm3
0x8A4ADE: movmskps eax, xmm4
0x8A4AE1: test    al, 7
0x8A4AE3: jnz     short loc_8A4B34
0x8A4AE5: test    esi, esi
0x8A4AE7: jz      short loc_8A4AFA
0x8A4AE9: mov     eax, [esi+8]
0x8A4AEC: test    eax, eax
0x8A4AEE: jz      short loc_8A4AFA
0x8A4AF0: mov     eax, [eax+50h]
0x8A4AF3: add     eax, 0E0h ; 'à'
0x8A4AF8: jmp     short loc_8A4AFF
0x8A4AFA: mov     eax, offset stru_BA7A40
0x8A4AFF: movaps  xmm3, xmmword ptr [eax]
0x8A4B02: subps   xmm3, xmm1
0x8A4B05: andps   xmm3, xmm2
0x8A4B08: cmpltps xmm0, xmm3
0x8A4B0C: movmskps ecx, xmm0
0x8A4B0F: test    cl, 7
0x8A4B12: jnz     short loc_8A4B34
0x8A4B14: test    esi, esi
0x8A4B16: jz      short loc_8A4B34
0x8A4B18: mov     edi, [esi+8]
0x8A4B1B: test    edi, edi
0x8A4B1D: jz      short loc_8A4B34
0x8A4B1F: mov     ecx, esi
0x8A4B21: call    sub_89F570
0x8A4B26: mov     ecx, edi
0x8A4B28: call    sub_8A6440
0x8A4B2D: mov     ecx, esi
0x8A4B2F: call    sub_89F570
0x8A4B34: push    ebx
0x8A4B35: mov     ecx, esi
0x8A4B37: call    sub_8A47C0
0x8A4B3C: mov     al, [esp+20h+var_9]
0x8A4B40: test    esi, esi
0x8A4B42: jz      short loc_8A4B8F
0x8A4B44: mov     ecx, [esi+8]
0x8A4B47: test    ecx, ecx
0x8A4B49: jz      short loc_8A4B8F
0x8A4B4B: push    offset dword_BA7B80
0x8A4B50: lea     edx, [esp+24h+var_8]
0x8A4B54: push    edx
0x8A4B55: call    sub_47F990
0x8A4B5A: mov     esi, [eax]
0x8A4B5C: test    esi, esi
0x8A4B5E: jz      short loc_8A4B8B
0x8A4B60: mov     eax, [esi]
0x8A4B62: mov     edx, [eax+4]
0x8A4B65: mov     ecx, esi
0x8A4B67: call    edx
0x8A4B69: test    eax, eax
0x8A4B6B: jz      short loc_8A4B7E
0x8A4B6D: lea     ecx, [ecx+0]
0x8A4B70: cmp     eax, offset dword_BA7A20
0x8A4B75: jz      short loc_8A4B98
0x8A4B77: mov     eax, [eax+4]
0x8A4B7A: test    eax, eax
0x8A4B7C: jnz     short loc_8A4B70
0x8A4B7E: xor     al, al
0x8A4B80: neg     al
0x8A4B82: sbb     eax, eax
0x8A4B84: and     eax, esi
0x8A4B86: jz      short loc_8A4B8B
0x8A4B88: mov     [eax+20h], ebx
0x8A4B8B: mov     al, [esp+20h+var_9]
0x8A4B8F: pop     edi
0x8A4B90: pop     esi
0x8A4B91: pop     ebx
0x8A4B92: mov     esp, ebp
0x8A4B94: pop     ebp
0x8A4B95: retn    4
0x8A4B98: mov     al, 1
0x8A4B9A: jmp     short loc_8A4B80
