0x924A60: push    ebp
0x924A61: mov     ebp, esp
0x924A63: and     esp, 0FFFFFFF0h
0x924A66: sub     esp, 0E4h
0x924A6C: push    ebx
0x924A6D: push    esi
0x924A6E: mov     esi, [ebp+arg_0]
0x924A71: mov     eax, [esi+28h]
0x924A74: push    edi
0x924A75: push    8
0x924A77: mov     edi, ecx
0x924A79: mov     ecx, [ebp+arg_4]
0x924A7C: push    eax
0x924A7D: push    ecx
0x924A7E: push    esi
0x924A7F: call    sub_8F0F70
0x924A84: mov     ecx, [esi+1Ch]
0x924A87: movaps  xmm1, xmmword ptr [ecx]
0x924A8A: movaps  xmm2, xmmword ptr [ecx+10h]
0x924A8E: movaps  xmm3, xmmword ptr [ecx+20h]
0x924A92: lea     eax, [edi+20h]
0x924A95: lea     edx, [esp+100h+var_70]
0x924A9C: add     esp, 10h
0x924A9F: sub     edx, eax
0x924AA1: mov     ebx, 4
0x924AA6: movaps  xmm0, xmmword ptr [eax]
0x924AA9: movaps  xmm4, xmm0
0x924AAC: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x924AB0: movaps  xmm5, xmm3
0x924AB3: mulps   xmm5, xmm4
0x924AB6: movaps  xmm4, xmm0
0x924AB9: shufps  xmm4, xmm0, 55h ; 'U'
0x924ABD: movaps  xmm6, xmm2
0x924AC0: mulps   xmm6, xmm4
0x924AC3: movaps  xmm4, xmm0
0x924AC6: shufps  xmm4, xmm0, 0
0x924ACA: movaps  xmm0, xmm1
0x924ACD: mulps   xmm0, xmm4
0x924AD0: addps   xmm0, xmm6
0x924AD3: addps   xmm0, xmm5
0x924AD6: movaps  xmmword ptr [edx+eax], xmm0
0x924ADA: add     eax, 10h
0x924ADD: dec     ebx
0x924ADE: jnz     short loc_924AA6
0x924AE0: movaps  xmm0, xmmword ptr [ecx+30h]
0x924AE4: movaps  xmm1, [esp+0F0h+var_70]
0x924AEC: mov     ecx, [esi+20h]
0x924AEF: addps   xmm1, xmm0
0x924AF2: movaps  [esp+0F0h+var_70], xmm1
0x924AFA: movaps  xmm1, xmmword ptr [ecx]
0x924AFD: movaps  xmm2, xmmword ptr [ecx+10h]
0x924B01: movaps  xmm3, xmmword ptr [ecx+20h]
0x924B05: lea     eax, [edi+60h]
0x924B08: lea     edx, [esp+0F0h+var_30]
0x924B0F: sub     edx, eax
0x924B11: mov     ebx, 3
0x924B16: movaps  xmm0, xmmword ptr [eax]
0x924B19: movaps  xmm4, xmm0
0x924B1C: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x924B20: movaps  xmm5, xmm3
0x924B23: mulps   xmm5, xmm4
0x924B26: movaps  xmm4, xmm0
0x924B29: shufps  xmm4, xmm0, 55h ; 'U'
0x924B2D: movaps  xmm6, xmm2
0x924B30: mulps   xmm6, xmm4
0x924B33: movaps  xmm4, xmm0
0x924B36: shufps  xmm4, xmm0, 0
0x924B3A: movaps  xmm0, xmm1
0x924B3D: mulps   xmm0, xmm4
0x924B40: addps   xmm0, xmm6
0x924B43: addps   xmm0, xmm5
0x924B46: movaps  xmmword ptr [edx+eax], xmm0
0x924B4A: add     eax, 10h
0x924B4D: dec     ebx
0x924B4E: jnz     short loc_924B16
0x924B50: movaps  xmm0, xmmword ptr [ecx+30h]
0x924B54: movaps  xmm1, [esp+0F0h+var_30]
0x924B5C: mov     ebx, [ebp+arg_4]
0x924B5F: addps   xmm1, xmm0
0x924B62: movaps  xmm0, [esp+0F0h+var_50]
0x924B6A: movaps  [esp+0F0h+var_90], xmm0
0x924B6F: movaps  xmm0, [esp+0F0h+var_40]
0x924B77: push    ebx
0x924B78: lea     edx, [esp+0F4h+var_A0]
0x924B7C: movaps  [esp+0F4h+var_A0], xmm0
0x924B81: movaps  xmm0, [esp+0F4h+var_20]
0x924B89: push    esi
0x924B8A: push    edx
0x924B8B: movaps  [esp+0FCh+var_30], xmm1
0x924B93: movaps  [esp+0FCh+var_80], xmm0
0x924B98: call    sub_8F1310
0x924B9D: movaps  xmm0, [esp+0FCh+var_40]
0x924BA5: movaps  xmm1, [esp+0FCh+var_20]
0x924BAD: movaps  [esp+0FCh+var_90], xmm0
0x924BB2: movaps  xmm0, [esp+0FCh+var_50]
0x924BBA: push    ebx
0x924BBB: movaps  [esp+100h+var_A0], xmm0
0x924BC0: movaps  xmm0, xmmword ptr ds:0A965C0h
0x924BC7: lea     eax, [esp+100h+var_A0]
0x924BCB: push    esi
0x924BCC: xorps   xmm1, xmm0
0x924BCF: push    eax
0x924BD0: movaps  [esp+108h+var_80], xmm1
0x924BD8: call    sub_8F1310
0x924BDD: push    ebx
0x924BDE: push    esi
0x924BDF: lea     ecx, [esp+110h+var_30]
0x924BE6: push    ecx
0x924BE7: lea     edx, [esp+114h+var_70]
0x924BEE: push    edx
0x924BEF: call    sub_8F1CC0
0x924BF4: movaps  xmm1, [esp+118h+var_10]
0x924BFC: movaps  xmm0, [esp+118h+var_60]
0x924C04: movaps  xmm2, [esp+118h+var_50]
0x924C0C: mov     eax, [edi+0Ch]
0x924C0F: movaps  [esp+118h+var_C0], xmm0
0x924C14: mov     ecx, [edi+10h]
0x924C17: mov     ebx, [esi+28h]
0x924C1A: movaps  xmm0, xmm1
0x924C1D: mulps   xmm0, xmm2
0x924C20: movaps  xmm3, xmm0
0x924C23: shufps  xmm3, xmm0, 55h ; 'U'
0x924C27: addss   xmm3, xmm0
0x924C2B: movaps  xmm4, xmm0
0x924C2E: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x924C32: movaps  xmm0, [esp+118h+var_20]
0x924C3A: addss   xmm4, xmm3
0x924C3E: movaps  xmm3, xmm0
0x924C41: shufps  xmm3, xmm0, 0C9h ; 'É'
0x924C45: lea     edx, [esp+118h+var_C8]
0x924C49: movss   dword ptr [edx], xmm4
0x924C4D: movaps  xmm4, xmm1
0x924C50: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x924C54: mulps   xmm4, xmm3
0x924C57: movaps  xmm3, xmm0
0x924C5A: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x924C5E: movaps  xmm0, xmm1
0x924C61: shufps  xmm0, xmm1, 0C9h ; 'É'
0x924C65: mulps   xmm0, xmm3
0x924C68: subps   xmm0, xmm4
0x924C6B: mulps   xmm0, xmm2
0x924C6E: movaps  xmm1, xmm0
0x924C71: mov     [esp+118h+var_B0], eax
0x924C75: shufps  xmm1, xmm0, 55h ; 'U'
0x924C79: movaps  xmm2, xmm0
0x924C7C: addss   xmm1, xmm0
0x924C80: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x924C84: lea     eax, [esp+118h+var_C4]
0x924C88: addss   xmm2, xmm1
0x924C8C: movss   dword ptr [eax], xmm2
0x924C90: fld     [esp+118h+var_C4]
0x924C94: fchs
0x924C96: add     esp, 20h
0x924C99: fstp    [esp+0F8h+var_F4]; float
0x924C9D: mov     [esp+0F8h+var_AC], ecx
0x924CA1: fld     [esp+0F8h+var_C8]
0x924CA5: fchs
0x924CA7: fstp    [esp+0F8h+var_F8]; float
0x924CAA: call    sub_8ECBB0
0x924CAF: fadd    dword ptr ds:0A9DF9Ch
0x924CB5: add     esp, 8
0x924CB8: fst     [esp+0F0h+var_A8]
0x924CBC: fsub    dword ptr [ebx+38h]
0x924CBF: fcom    dword ptr ds:0A9CD68h
0x924CC5: fnstsw  ax
0x924CC7: test    ah, 5
0x924CCA: jp      short loc_924CD9
0x924CCC: fstp    st
0x924CCE: fld     dword ptr [ebx+3Ch]
0x924CD1: fadd    dword ptr ds:0A2F948h
0x924CD7: jmp     short loc_924CEF
0x924CD9: fcomp   dword ptr ds:0A9DF9Ch
0x924CDF: fnstsw  ax
0x924CE1: test    ah, 41h
0x924CE4: jnz     short loc_924CF2
0x924CE6: fld     dword ptr [ebx+3Ch]
0x924CE9: fsub    dword ptr ds:0A2F948h
0x924CEF: fstp    dword ptr [ebx+3Ch]
0x924CF2: fld     dword ptr [ebx+3Ch]
0x924CF5: mov     ecx, [esp+0F0h+var_A8]
0x924CF9: fmul    dword ptr ds:0A46B14h
0x924CFF: mov     [ebx+38h], ecx
0x924D02: mov     eax, [edi+98h]
0x924D08: test    eax, eax
0x924D0A: fadd    [esp+0F0h+var_A8]
0x924D0E: fstp    [esp+0F0h+var_A8]
0x924D12: jz      loc_924D9F
0x924D18: mov     al, [edi+90h]
0x924D1E: test    al, al
0x924D20: jz      short loc_924D9F
0x924D22: mov     eax, [ebp+arg_4]
0x924D25: mov     ecx, [eax]
0x924D27: lea     edx, [esp+0F0h+var_E4]
0x924D2B: push    edx
0x924D2C: push    ecx
0x924D2D: lea     edx, [esp+0F8h+var_60]
0x924D34: push    esi
0x924D35: push    edx
0x924D36: mov     [esp+100h+var_D4], 0
0x924D3E: mov     [esp+100h+var_D0], 0
0x924D46: call    sub_8F1070
0x924D4B: mov     eax, [ebx+28h]
0x924D4E: mov     ecx, [ebx+2Ch]
0x924D51: mov     edx, [esp+100h+var_A8]
0x924D55: mov     [esp+100h+var_D4], eax
0x924D59: mov     eax, [edi+94h]
0x924D5F: mov     [esp+100h+var_DC], eax
0x924D63: add     esp, 10h
0x924D66: lea     eax, [esp+0F0h+var_A0]
0x924D6A: mov     [esp+0F0h+var_D0], ecx
0x924D6E: mov     ecx, [edi+98h]
0x924D74: push    eax
0x924D75: add     ebx, 40h ; '@'
0x924D78: lea     eax, [esp+0F4h+var_E4]
0x924D7C: mov     [esp+0F4h+var_D8], esi
0x924D80: mov     [esp+0F4h+var_E0], edx
0x924D84: mov     [esp+0F4h+var_CC], ebx
0x924D88: mov     edx, [ecx]
0x924D8A: push    eax
0x924D8B: call    dword ptr [edx+8]
0x924D8E: mov     ecx, [ebp+arg_4]
0x924D91: push    ecx
0x924D92: lea     edx, [esp+0F4h+var_A0]
0x924D96: push    esi
0x924D97: push    edx
0x924D98: call    sub_8F0FB0
0x924D9D: jmp     short loc_924DE1
0x924D9F: fld     dword ptr ds:0A2FAA8h
0x924DA5: fld     dword ptr [edi+14h]
0x924DA8: fucompp
0x924DAA: fnstsw  ax
0x924DAC: test    ah, 44h
0x924DAF: jnp     short loc_924DE4
0x924DB1: mov     edx, [ebp+arg_4]
0x924DB4: mov     ecx, [edi+14h]
0x924DB7: lea     eax, [esp+0F0h+var_60]
0x924DBE: push    edx
0x924DBF: mov     [esp+0F4h+var_E4], eax
0x924DC3: lea     eax, [esp+0F4h+var_E4]
0x924DC7: add     ebx, 28h ; '('
0x924DCA: push    esi
0x924DCB: push    eax
0x924DCC: mov     [esp+0FCh+var_DC], ecx
0x924DD0: mov     [esp+0FCh+var_D8], 1
0x924DD8: mov     [esp+0FCh+var_E0], ebx
0x924DDC: call    sub_8F1460
0x924DE1: add     esp, 0Ch
0x924DE4: mov     al, [edi+91h]
0x924DEA: test    al, al
0x924DEC: jnz     short loc_924E00
0x924DEE: mov     ecx, [ebp+arg_4]
0x924DF1: push    ecx
0x924DF2: lea     edx, [esp+0F4h+var_C0]
0x924DF6: push    esi
0x924DF7: push    edx
0x924DF8: call    sub_8F1B60
0x924DFD: add     esp, 0Ch
0x924E00: pop     edi
0x924E01: pop     esi
0x924E02: pop     ebx
0x924E03: mov     esp, ebp
0x924E05: pop     ebp
0x924E06: retn    8
