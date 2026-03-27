0x957980: sub     esp, 34h
0x957983: push    esi
0x957984: push    edi
0x957985: mov     edi, [esp+3Ch+arg_4]
0x957989: cmp     dword ptr [edi+4], 1
0x95798D: mov     esi, ecx
0x95798F: jnz     short loc_9579BF
0x957991: mov     eax, [esi+1Ch]
0x957994: test    eax, eax
0x957996: jnz     short loc_9579AA
0x957998: mov     ecx, [esi+24h]
0x95799B: mov     edx, [esi+2Ch]
0x95799E: mov     eax, [ecx]
0x9579A0: push    800h
0x9579A5: push    esi
0x9579A6: push    edx
0x9579A7: call    dword ptr [eax+10h]
0x9579AA: mov     eax, [esp+3Ch+arg_0]
0x9579AE: push    edi
0x9579AF: push    eax
0x9579B0: mov     ecx, esi
0x9579B2: call    sub_9573A0
0x9579B7: pop     edi
0x9579B8: pop     esi
0x9579B9: add     esp, 34h
0x9579BC: retn    10h
0x9579BF: mov     eax, [esi+14h]
0x9579C2: push    ebx
0x9579C3: xor     ebx, ebx
0x9579C5: cmp     eax, ebx
0x9579C7: push    ebp
0x9579C8: jnz     short loc_9579DC
0x9579CA: mov     ecx, [esi+24h]
0x9579CD: mov     eax, [esi+2Ch]
0x9579D0: mov     edx, [ecx]
0x9579D2: push    800h
0x9579D7: push    esi
0x9579D8: push    eax
0x9579D9: call    dword ptr [edx+10h]
0x9579DC: mov     ebp, [esi+10h]
0x9579DF: mov     ecx, [ebp+0]
0x9579E2: mov     edx, [esi+14h]
0x9579E5: mov     [esi+10h], ecx
0x9579E8: dec     edx
0x9579E9: mov     ecx, ebp
0x9579EB: mov     [esi+14h], edx
0x9579EE: call    sub_956980
0x9579F3: mov     eax, [esp+44h+arg_0]
0x9579F7: cmp     eax, ebx
0x9579F9: mov     byte ptr [ebp+4], 0
0x9579FD: mov     dword ptr [ebp+0C4h], 49742400h
0x957A07: mov     dword ptr [ebp+0BCh], 501502F9h
0x957A11: mov     [ebp+0ECh], ebx
0x957A17: mov     [ebp+0F0h], ebx
0x957A1D: mov     edx, [edi+4]
0x957A20: mov     [ebp+0F4h], edx
0x957A26: mov     [ebp+0], eax
0x957A29: jnz     short loc_957A30
0x957A2B: mov     [esi+2Ch], ebp
0x957A2E: jmp     short loc_957A6E
0x957A30: cmp     [esp+44h+arg_8], ebx
0x957A34: jnz     short loc_957A3E
0x957A36: mov     [eax+0ECh], ebp
0x957A3C: jmp     short loc_957A44
0x957A3E: mov     [eax+0F0h], ebp
0x957A44: lea     ecx, [eax+0Ch]
0x957A47: mov     ebx, [ecx]
0x957A49: lea     edx, [ebp+0Ch]
0x957A4C: mov     [edx], ebx
0x957A4E: mov     ebx, [ecx+4]
0x957A51: mov     [edx+4], ebx
0x957A54: mov     ebx, [ecx+8]
0x957A57: mov     [edx+8], ebx
0x957A5A: mov     ebx, [ecx+0Ch]
0x957A5D: mov     [edx+0Ch], ebx
0x957A60: mov     ebx, [ecx+10h]
0x957A63: mov     [edx+10h], ebx
0x957A66: mov     ecx, [ecx+14h]
0x957A69: mov     [edx+14h], ecx
0x957A6C: xor     ebx, ebx
0x957A6E: lea     edx, [esp+44h+var_24]
0x957A72: push    edx
0x957A73: lea     ecx, [esp+48h+var_30]
0x957A77: push    ecx
0x957A78: push    eax
0x957A79: mov     ecx, esi
0x957A7B: mov     [esp+50h+arg_4], ebx
0x957A7F: call    sub_956E90
0x957A84: xor     ecx, ecx
0x957A86: mov     [esp+44h+arg_0], ecx
0x957A8A: jmp     short loc_957A90
0x957A8C: mov     ecx, [esp+44h+arg_0]
0x957A90: mov     edx, [esp+ecx*4+44h+var_30]
0x957A94: fld     [esp+ecx*4+44h+var_24]
0x957A98: mov     eax, [esi+34h]
0x957A9B: mov     ebx, edx
0x957A9D: shl     ebx, 5
0x957AA0: fadd    dword ptr [ebx+eax+10h]
0x957AA4: add     ebx, eax
0x957AA6: fcomp   dword ptr [ebp+0C4h]
0x957AAC: fnstsw  ax
0x957AAE: test    ah, 41h
0x957AB1: jz      short loc_957B21
0x957AB3: mov     ecx, [esi+28h]
0x957AB6: lea     eax, [ebp+edx*8+0Ch]
0x957ABA: mov     edx, [ecx]
0x957ABC: mov     [esp+44h+arg_8], eax
0x957AC0: add     eax, 4
0x957AC3: push    eax
0x957AC4: mov     eax, [esp+48h+arg_8]
0x957AC8: push    eax
0x957AC9: mov     eax, [edi+4]
0x957ACC: push    eax
0x957ACD: mov     eax, [edi]
0x957ACF: push    eax
0x957AD0: push    ebx
0x957AD1: call    dword ptr [edx+10h]
0x957AD4: mov     eax, [edi+4]
0x957AD7: cmp     eax, 1
0x957ADA: mov     byte ptr [esp+44h+var_34], 0
0x957ADF: jle     short loc_957AF5
0x957AE1: mov     ecx, [esp+44h+var_34]
0x957AE5: mov     edx, [edi]
0x957AE7: push    ecx
0x957AE8: dec     eax
0x957AE9: push    eax
0x957AEA: push    0
0x957AEC: push    edx
0x957AED: call    sub_957460
0x957AF2: add     esp, 10h
0x957AF5: mov     eax, [esp+44h+arg_C]
0x957AF9: mov     ecx, [esp+44h+arg_8]
0x957AFD: push    eax
0x957AFE: push    ecx
0x957AFF: push    edi
0x957B00: push    ebx
0x957B01: push    ebp
0x957B02: mov     ecx, esi
0x957B04: mov     [esp+58h+arg_4], ebx
0x957B08: call    sub_957040
0x957B0D: mov     eax, [esp+44h+arg_0]
0x957B11: inc     eax
0x957B12: cmp     eax, 3
0x957B15: mov     [esp+44h+arg_0], eax
0x957B19: jl      loc_957A8C
0x957B1F: jmp     short loc_957B66
0x957B21: cmp     ecx, 3
0x957B24: jge     short loc_957B66
0x957B26: jmp     short loc_957B30
0x957B28: mov     ecx, [esp+44h+arg_0]
0x957B2C: lea     esp, [esp+0]
0x957B30: mov     eax, [esp+ecx*4+44h+var_30]
0x957B34: mov     ecx, [esi+28h]
0x957B37: mov     ebx, [ecx]
0x957B39: lea     edx, [ebp+eax*8+0Ch]
0x957B3D: lea     ecx, [edx+4]
0x957B40: push    ecx
0x957B41: mov     ecx, [edi]
0x957B43: push    edx
0x957B44: mov     edx, [edi+4]
0x957B47: push    edx
0x957B48: mov     edx, [esi+34h]
0x957B4B: shl     eax, 5
0x957B4E: push    ecx
0x957B4F: mov     ecx, [esi+28h]
0x957B52: add     eax, edx
0x957B54: push    eax
0x957B55: call    dword ptr [ebx+14h]
0x957B58: mov     eax, [esp+44h+arg_0]
0x957B5C: inc     eax
0x957B5D: cmp     eax, 3
0x957B60: mov     [esp+44h+arg_0], eax
0x957B64: jl      short loc_957B28
0x957B66: mov     ecx, [esi+30h]
0x957B69: mov     eax, 3
0x957B6E: cmp     ecx, eax
0x957B70: mov     [esp+44h+arg_8], eax
0x957B74: jle     loc_957C0E
0x957B7A: mov     [esp+44h+arg_0], 60h ; '`'
0x957B82: mov     eax, [esp+44h+arg_0]
0x957B86: mov     ebx, [esi+34h]
0x957B89: fld     dword ptr [ebx+eax+10h]
0x957B8D: add     ebx, eax
0x957B8F: fcomp   dword ptr [ebp+0C4h]
0x957B95: fnstsw  ax
0x957B97: test    ah, 41h
0x957B9A: jz      short loc_957C0E
0x957B9C: mov     ecx, [esi+28h]
0x957B9F: mov     edx, [ecx]
0x957BA1: lea     eax, [esp+44h+var_2C]
0x957BA5: push    eax
0x957BA6: lea     eax, [esp+48h+var_30]
0x957BAA: push    eax
0x957BAB: mov     eax, [edi+4]
0x957BAE: push    eax
0x957BAF: mov     eax, [edi]
0x957BB1: push    eax
0x957BB2: push    ebx
0x957BB3: call    dword ptr [edx+10h]
0x957BB6: mov     eax, [edi+4]
0x957BB9: cmp     eax, 1
0x957BBC: mov     byte ptr [esp+44h+var_34], 0
0x957BC1: jle     short loc_957BD7
0x957BC3: mov     ecx, [esp+44h+var_34]
0x957BC7: mov     edx, [edi]
0x957BC9: push    ecx
0x957BCA: dec     eax
0x957BCB: push    eax
0x957BCC: push    0
0x957BCE: push    edx
0x957BCF: call    sub_957460
0x957BD4: add     esp, 10h
0x957BD7: mov     eax, [esp+44h+arg_C]
0x957BDB: push    eax
0x957BDC: lea     ecx, [esp+48h+var_30]
0x957BE0: push    ecx
0x957BE1: push    edi
0x957BE2: push    ebx
0x957BE3: push    ebp
0x957BE4: mov     ecx, esi
0x957BE6: mov     [esp+58h+arg_4], ebx
0x957BEA: call    sub_957040
0x957BEF: mov     eax, [esp+44h+arg_8]
0x957BF3: mov     edx, [esp+44h+arg_0]
0x957BF7: mov     ecx, [esi+30h]
0x957BFA: inc     eax
0x957BFB: add     edx, 20h ; ' '
0x957BFE: cmp     eax, ecx
0x957C00: mov     [esp+44h+arg_8], eax
0x957C04: mov     [esp+44h+arg_0], edx
0x957C08: jl      loc_957B82
0x957C0E: push    ebp
0x957C0F: push    edi
0x957C10: mov     ecx, esi
0x957C12: call    sub_956DD0
0x957C17: mov     eax, [ebp+0B8h]
0x957C1D: cmp     [esp+44h+arg_4], eax
0x957C21: jz      short loc_957C3D
0x957C23: mov     ecx, [esi+28h]
0x957C26: mov     edx, [ecx]
0x957C28: lea     ebx, [esp+44h+arg_0]
0x957C2C: push    ebx
0x957C2D: lea     ebx, [esp+48h+arg_4]
0x957C31: push    ebx
0x957C32: mov     ebx, [edi+4]
0x957C35: push    ebx
0x957C36: mov     ebx, [edi]
0x957C38: push    ebx
0x957C39: push    eax
0x957C3A: call    dword ptr [edx+10h]
0x957C3D: mov     ebx, [esp+44h+arg_C]
0x957C41: lea     eax, [esp+44h+var_18]
0x957C45: push    eax
0x957C46: lea     ecx, [esp+48h+var_C]
0x957C4A: push    ecx
0x957C4B: push    ebx
0x957C4C: push    ebp
0x957C4D: push    edi
0x957C4E: mov     ecx, esi
0x957C50: call    sub_9577F0
0x957C55: lea     edi, [ebx+1]
0x957C58: push    edi
0x957C59: push    1
0x957C5B: lea     edx, [esp+4Ch+var_18]
0x957C5F: push    edx
0x957C60: push    ebp
0x957C61: mov     ecx, esi
0x957C63: call    sub_957980
0x957C68: push    edi
0x957C69: mov     [ebp+0F0h], eax
0x957C6F: push    0
0x957C71: lea     eax, [esp+4Ch+var_C]
0x957C75: push    eax
0x957C76: push    ebp
0x957C77: mov     ecx, esi
0x957C79: call    sub_957980
0x957C7E: mov     [ebp+0ECh], eax
0x957C84: mov     eax, ebp
0x957C86: pop     ebp
0x957C87: pop     ebx
0x957C88: pop     edi
0x957C89: pop     esi
0x957C8A: add     esp, 34h
0x957C8D: retn    10h
