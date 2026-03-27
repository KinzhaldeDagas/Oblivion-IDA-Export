0x9119A0: push    ebp
0x9119A1: mov     ebp, esp
0x9119A3: and     esp, 0FFFFFFF0h
0x9119A6: sub     esp, 104h
0x9119AC: push    ebx
0x9119AD: push    esi
0x9119AE: mov     esi, [ebp+arg_0]
0x9119B1: mov     eax, [esi+28h]
0x9119B4: push    edi
0x9119B5: push    8
0x9119B7: mov     ebx, ecx
0x9119B9: mov     ecx, [ebp+arg_4]
0x9119BC: push    eax
0x9119BD: push    ecx
0x9119BE: push    esi
0x9119BF: call    sub_8F0F70
0x9119C4: mov     ecx, [esi+1Ch]
0x9119C7: movaps  xmm1, xmmword ptr [ecx]
0x9119CA: movaps  xmm2, xmmword ptr [ecx+10h]
0x9119CE: movaps  xmm3, xmmword ptr [ecx+20h]
0x9119D2: lea     eax, [ebx+10h]
0x9119D5: lea     edx, [esp+120h+var_50]
0x9119DC: add     esp, 10h
0x9119DF: sub     edx, eax
0x9119E1: mov     edi, 5
0x9119E6: movaps  xmm0, xmmword ptr [eax]
0x9119E9: movaps  xmm4, xmm0
0x9119EC: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x9119F0: movaps  xmm5, xmm3
0x9119F3: mulps   xmm5, xmm4
0x9119F6: movaps  xmm4, xmm0
0x9119F9: shufps  xmm4, xmm0, 55h ; 'U'
0x9119FD: movaps  xmm6, xmm2
0x911A00: mulps   xmm6, xmm4
0x911A03: movaps  xmm4, xmm0
0x911A06: shufps  xmm4, xmm0, 0
0x911A0A: movaps  xmm0, xmm1
0x911A0D: mulps   xmm0, xmm4
0x911A10: addps   xmm0, xmm6
0x911A13: addps   xmm0, xmm5
0x911A16: movaps  xmmword ptr [edx+eax], xmm0
0x911A1A: add     eax, 10h
0x911A1D: dec     edi
0x911A1E: jnz     short loc_9119E6
0x911A20: movaps  xmm0, xmmword ptr [ecx+30h]
0x911A24: movaps  xmm1, [esp+110h+var_50]
0x911A2C: mov     edi, [esi+20h]
0x911A2F: addps   xmm1, xmm0
0x911A32: movaps  [esp+110h+var_50], xmm1
0x911A3A: movaps  xmm1, xmmword ptr [edi]
0x911A3D: movaps  xmm2, xmmword ptr [edi+10h]
0x911A41: movaps  xmm3, xmmword ptr [edi+20h]
0x911A45: lea     eax, [ebx+60h]
0x911A48: lea     ecx, [esp+110h+var_80]
0x911A4F: sub     ecx, eax
0x911A51: mov     edx, 3
0x911A56: movaps  xmm0, xmmword ptr [eax]
0x911A59: movaps  xmm4, xmm0
0x911A5C: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x911A60: movaps  xmm5, xmm3
0x911A63: mulps   xmm5, xmm4
0x911A66: movaps  xmm4, xmm0
0x911A69: shufps  xmm4, xmm0, 55h ; 'U'
0x911A6D: movaps  xmm6, xmm2
0x911A70: mulps   xmm6, xmm4
0x911A73: movaps  xmm4, xmm0
0x911A76: shufps  xmm4, xmm0, 0
0x911A7A: movaps  xmm0, xmm1
0x911A7D: mulps   xmm0, xmm4
0x911A80: addps   xmm0, xmm6
0x911A83: addps   xmm0, xmm5
0x911A86: movaps  xmmword ptr [ecx+eax], xmm0
0x911A8A: add     eax, 10h
0x911A8D: dec     edx
0x911A8E: jnz     short loc_911A56
0x911A90: movaps  xmm0, xmmword ptr [edi+30h]
0x911A94: movaps  xmm1, [esp+110h+var_80]
0x911A9C: mov     edx, [ebp+arg_4]
0x911A9F: addps   xmm1, xmm0
0x911AA2: movaps  xmm0, [esp+110h+var_30]
0x911AAA: push    edx
0x911AAB: movaps  [esp+114h+var_B0], xmm0
0x911AB0: movaps  [esp+114h+var_80], xmm1
0x911AB8: movaps  xmm0, xmmword ptr [edi+10h]
0x911ABC: lea     eax, [esp+114h+var_B0]
0x911AC0: movaps  [esp+114h+var_90], xmm0
0x911AC8: movaps  xmm0, [esp+114h+var_10]
0x911AD0: push    esi
0x911AD1: push    eax
0x911AD2: movaps  [esp+11Ch+var_A0], xmm0
0x911AD7: call    sub_8F1310
0x911ADC: mov     ecx, [ebp+arg_4]
0x911ADF: movaps  xmm0, [esp+11Ch+var_20]
0x911AE7: push    ecx
0x911AE8: movaps  [esp+120h+var_F0], xmm0
0x911AED: movaps  xmm0, xmmword ptr [edi+20h]
0x911AF1: lea     edx, [esp+120h+var_F0]
0x911AF5: movaps  [esp+120h+var_D0], xmm0
0x911AFA: movaps  xmm0, [esp+120h+var_B0]
0x911AFF: push    esi
0x911B00: push    edx
0x911B01: movaps  [esp+128h+var_E0], xmm0
0x911B06: call    sub_8F1310
0x911B0B: movaps  xmm0, [esp+128h+var_F0]
0x911B10: movaps  [esp+128h+var_E0], xmm0
0x911B15: movaps  xmm0, [esp+128h+var_A0]
0x911B1D: movaps  [esp+128h+var_F0], xmm0
0x911B22: movaps  xmm0, xmmword ptr [edi]
0x911B25: mov     edi, [ebp+arg_4]
0x911B28: push    edi
0x911B29: lea     eax, [esp+12Ch+var_F0]
0x911B2D: push    esi
0x911B2E: push    eax
0x911B2F: movaps  [esp+134h+var_D0], xmm0
0x911B34: call    sub_8F1310
0x911B39: movaps  xmm3, [esp+134h+var_50]
0x911B41: movaps  xmm1, [esp+134h+var_80]
0x911B49: movaps  xmm2, [esp+134h+var_70]
0x911B51: movaps  xmm0, xmm3
0x911B54: subps   xmm0, xmm1
0x911B57: mulps   xmm0, xmm2
0x911B5A: movaps  xmm4, xmm0
0x911B5D: shufps  xmm4, xmm0, 55h ; 'U'
0x911B61: movaps  xmm5, xmm0
0x911B64: addss   xmm4, xmm0
0x911B68: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x911B6C: movaps  [esp+134h+var_F0], xmm3
0x911B71: movaps  xmm0, xmm5
0x911B74: addss   xmm0, xmm4
0x911B78: movaps  xmm3, xmm0
0x911B7B: push    edi
0x911B7C: lea     ecx, [esp+138h+var_F8]
0x911B80: shufps  xmm3, xmm0, 0
0x911B84: lea     edx, [esp+138h+var_F0]
0x911B88: movss   dword ptr [ecx], xmm0
0x911B8C: movaps  xmm0, [esp+138h+var_60]
0x911B94: mulps   xmm3, xmm2
0x911B97: push    esi
0x911B98: addps   xmm1, xmm3
0x911B9B: push    edx
0x911B9C: movaps  [esp+140h+var_E0], xmm1
0x911BA1: movaps  [esp+140h+var_D0], xmm0
0x911BA6: call    sub_8F1790
0x911BAB: movaps  xmm0, [esp+140h+var_D0]
0x911BB0: movaps  xmm1, xmm0
0x911BB3: shufps  xmm1, xmm0, 0C9h ; 'É'
0x911BB7: movaps  xmm2, xmm1
0x911BBA: movaps  xmm1, [esp+140h+var_70]
0x911BC2: movaps  xmm3, xmm1
0x911BC5: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x911BC9: mulps   xmm3, xmm2
0x911BCC: movaps  xmm2, xmm0
0x911BCF: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x911BD3: movaps  xmm0, xmm1
0x911BD6: shufps  xmm0, xmm1, 0C9h ; 'É'
0x911BDA: mulps   xmm0, xmm2
0x911BDD: push    edi
0x911BDE: lea     eax, [esp+144h+var_F0]
0x911BE2: push    esi
0x911BE3: subps   xmm0, xmm3
0x911BE6: push    eax
0x911BE7: movaps  [esp+14Ch+var_D0], xmm0
0x911BEC: call    sub_8F1790
0x911BF1: movaps  xmm0, [esp+14Ch+var_50]
0x911BF9: mov     ecx, [ebx+90h]
0x911BFF: mov     edx, [ebx+94h]
0x911C05: movaps  [esp+14Ch+var_F0], xmm0
0x911C0A: movaps  xmm0, [esp+14Ch+var_80]
0x911C12: push    edi
0x911C13: lea     eax, [esp+150h+var_F0]
0x911C17: movaps  [esp+150h+var_E0], xmm0
0x911C1C: movaps  xmm0, [esp+150h+var_70]
0x911C24: push    esi
0x911C25: push    eax
0x911C26: mov     [esp+158h+var_C0], ecx
0x911C2D: mov     [esp+158h+var_BC], edx
0x911C34: movaps  [esp+158h+var_D0], xmm0
0x911C3C: call    sub_8F1970
0x911C41: mov     eax, [ebx+0Ch]
0x911C44: mov     ecx, [esi+28h]
0x911C47: add     esp, 48h
0x911C4A: test    eax, eax
0x911C4C: mov     [esp+110h+var_F4], ecx
0x911C50: jz      loc_911CEE
0x911C56: mov     edx, [edi]
0x911C58: lea     ecx, [esp+110h+var_B0]
0x911C5C: push    ecx
0x911C5D: push    edx
0x911C5E: push    esi
0x911C5F: lea     eax, [esp+11Ch+var_50]
0x911C66: push    eax
0x911C67: lea     ecx, [esp+120h+var_70]
0x911C6E: push    ecx
0x911C6F: mov     dword ptr [esp+124h+var_A0], 0
0x911C7A: mov     dword ptr [esp+124h+var_A0+4], 0
0x911C85: call    sub_8F1190
0x911C8A: mov     eax, [esp+124h+var_F4]
0x911C8E: mov     edx, [eax+30h]
0x911C91: mov     ecx, [eax+34h]
0x911C94: mov     dword ptr [esp+124h+var_A0+4], ecx
0x911C9B: mov     ecx, [ebx+9Ch]
0x911CA1: mov     ebx, [ebx+0Ch]
0x911CA4: add     eax, 38h ; '8'
0x911CA7: mov     dword ptr [esp+124h+var_A0+8], eax
0x911CAE: add     esp, 14h
0x911CB1: mov     dword ptr [esp+110h+var_B0+8], ecx
0x911CB5: mov     dword ptr [esp+110h+var_A0], edx
0x911CB9: mov     edx, [esp+110h+var_F8]
0x911CBD: lea     eax, [esp+110h+var_F0]
0x911CC1: push    eax
0x911CC2: lea     ecx, [esp+114h+var_B0]
0x911CC6: mov     dword ptr [esp+114h+var_B0+0Ch], esi
0x911CCA: mov     dword ptr [esp+114h+var_B0+4], edx
0x911CCE: mov     edx, [ebx]
0x911CD0: push    ecx
0x911CD1: mov     ecx, ebx
0x911CD3: call    dword ptr [edx+8]
0x911CD6: push    edi
0x911CD7: lea     edx, [esp+114h+var_F0]
0x911CDB: push    esi
0x911CDC: push    edx
0x911CDD: call    sub_8F1010
0x911CE2: add     esp, 0Ch
0x911CE5: pop     edi
0x911CE6: pop     esi
0x911CE7: pop     ebx
0x911CE8: mov     esp, ebp
0x911CEA: pop     ebp
0x911CEB: retn    8
0x911CEE: fld     dword ptr [ebx+98h]
0x911CF4: fcomp   dword ptr ds:0A2FAA8h
0x911CFA: fnstsw  ax
0x911CFC: test    ah, 41h
0x911CFF: jnz     short loc_911D3B
0x911D01: movaps  xmm0, [esp+110h+var_50]
0x911D09: mov     eax, [ebx+98h]
0x911D0F: add     ecx, 30h ; '0'
0x911D12: push    edi
0x911D13: mov     dword ptr [esp+114h+var_D0+4], ecx
0x911D17: lea     ecx, [esp+114h+var_F0]
0x911D1B: movaps  [esp+114h+var_F0], xmm0
0x911D20: movaps  xmm0, [esp+114h+var_70]
0x911D28: push    esi
0x911D29: push    ecx
0x911D2A: movaps  [esp+11Ch+var_E0], xmm0
0x911D2F: mov     dword ptr [esp+11Ch+var_D0], eax
0x911D33: call    sub_8F15F0
0x911D38: add     esp, 0Ch
0x911D3B: pop     edi
0x911D3C: pop     esi
0x911D3D: pop     ebx
0x911D3E: mov     esp, ebp
0x911D40: pop     ebp
0x911D41: retn    8
