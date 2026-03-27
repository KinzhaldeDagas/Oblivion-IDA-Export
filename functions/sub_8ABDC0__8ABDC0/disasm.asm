0x8ABDC0: push    ebp
0x8ABDC1: mov     ebp, esp
0x8ABDC3: and     esp, 0FFFFFFF0h
0x8ABDC6: sub     esp, 14h
0x8ABDC9: mov     edx, [ebp+arg_0]
0x8ABDCC: movaps  xmm0, xmmword ptr [edx+10h]
0x8ABDD0: push    ebx
0x8ABDD1: push    esi
0x8ABDD2: mov     esi, [ebp+arg_4]
0x8ABDD5: movaps  xmmword ptr [esi], xmm0
0x8ABDD8: fld     dword ptr [esi+0Ch]
0x8ABDDB: mov     ebx, ecx
0x8ABDDD: fsub    dword ptr [ebx+58h]
0x8ABDE0: push    edi
0x8ABDE1: lea     edi, [esi+10h]
0x8ABDE4: xorps   xmm0, xmm0
0x8ABDE7: fstp    dword ptr [esi+0Ch]
0x8ABDEA: mov     eax, [ebx+38h]
0x8ABDED: mov     [esi+20h], eax
0x8ABDF0: mov     ecx, [ebx+34h]
0x8ABDF3: mov     [esi+2Ch], ecx
0x8ABDF6: mov     eax, [ebx+50h]
0x8ABDF9: mov     [esi+24h], eax
0x8ABDFC: mov     ecx, [ebx+54h]
0x8ABDFF: mov     [esi+28h], ecx
0x8ABE02: movaps  xmmword ptr [edi], xmm0
0x8ABE05: mov     dword ptr [esi+30h], 0
0x8ABE0C: mov     eax, [edx+28h]
0x8ABE0F: cmp     byte ptr [eax+18h], 1
0x8ABE13: jnz     loc_8ABF1C
0x8ABE19: mov     ecx, [eax+10h]
0x8ABE1C: add     ecx, eax
0x8ABE1E: mov     [esp+20h+var_8], ecx
0x8ABE22: jz      loc_8ABF1C
0x8ABE28: mov     al, [ecx+92h]
0x8ABE2E: test    al, al
0x8ABE30: jz      short loc_8ABE3F
0x8ABE32: push    edi
0x8ABE33: push    edx
0x8ABE34: call    sub_8ABCE0
0x8ABE39: mov     ecx, [esp+20h+var_8]
0x8ABE3D: jmp     short loc_8ABEB9
0x8ABE3F: mov     eax, [ecx+50h]
0x8ABE42: mov     edx, [eax+6Ch]
0x8ABE45: movaps  xmm1, xmmword ptr [eax+50h]
0x8ABE49: movaps  xmm2, xmmword ptr [eax+60h]
0x8ABE4D: subps   xmm2, xmm1
0x8ABE50: movaps  xmm1, xmm2
0x8ABE53: mov     [esp+20h+var_4], edx
0x8ABE57: movss   xmm0, [esp+20h+var_4]
0x8ABE5D: movaps  xmm2, xmm0
0x8ABE60: movaps  xmm3, xmm0
0x8ABE63: shufps  xmm3, xmm0, 0
0x8ABE67: shufps  xmm2, xmm0, 0
0x8ABE6B: mulps   xmm2, xmm1
0x8ABE6E: movaps  xmm1, xmmword ptr [eax+0A0h]
0x8ABE75: movaps  xmm0, xmm3
0x8ABE78: movaps  xmm3, xmmword ptr [eax+60h]
0x8ABE7C: mov     eax, [ebp+arg_0]
0x8ABE7F: mulps   xmm0, xmm1
0x8ABE82: movaps  xmm1, xmmword ptr [eax]
0x8ABE85: subps   xmm1, xmm3
0x8ABE88: movaps  xmm3, xmm1
0x8ABE8B: shufps  xmm3, xmm1, 0C9h ; 'É'
0x8ABE8F: movaps  xmm4, xmm0
0x8ABE92: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8ABE96: mulps   xmm4, xmm3
0x8ABE99: movaps  xmm3, xmm1
0x8ABE9C: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8ABEA0: movaps  xmm1, xmm0
0x8ABEA3: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8ABEA7: mulps   xmm1, xmm3
0x8ABEAA: subps   xmm1, xmm4
0x8ABEAD: movaps  xmmword ptr [edi], xmm1
0x8ABEB0: movaps  xmm0, xmmword ptr [edi]
0x8ABEB3: addps   xmm0, xmm2
0x8ABEB6: movaps  xmmword ptr [edi], xmm0
0x8ABEB9: movaps  xmm1, xmmword ptr [esi]
0x8ABEBC: movaps  xmm0, xmmword ptr [edi]
0x8ABEBF: mulps   xmm0, xmm1
0x8ABEC2: movaps  xmm1, xmm0
0x8ABEC5: shufps  xmm1, xmm0, 55h ; 'U'
0x8ABEC9: movaps  xmm2, xmm0
0x8ABECC: addss   xmm1, xmm0
0x8ABED0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8ABED4: lea     edx, [esp+20h+var_4]
0x8ABED8: addss   xmm2, xmm1
0x8ABEDC: movss   dword ptr [edx], xmm2
0x8ABEE0: fld     [esp+20h+var_4]
0x8ABEE4: fmul    [ebp+arg_8]
0x8ABEE7: fsubr   dword ptr [esi+0Ch]
0x8ABEEA: fstp    dword ptr [esi+0Ch]
0x8ABEED: mov     ecx, [ecx+50h]
0x8ABEF0: mov     eax, [ecx]
0x8ABEF2: call    dword ptr [eax+8]
0x8ABEF5: cmp     eax, 7
0x8ABEF8: jnz     short loc_8ABF01
0x8ABEFA: mov     dword ptr [esi+30h], 2
0x8ABF01: mov     ecx, [esp+20h+var_8]
0x8ABF05: mov     ecx, [ecx+50h]
0x8ABF08: mov     edx, [ecx]
0x8ABF0A: call    dword ptr [edx+8]
0x8ABF0D: cmp     eax, 6
0x8ABF10: mov     edx, [ebp+arg_0]
0x8ABF13: jnz     short loc_8ABF1C
0x8ABF15: mov     dword ptr [esi+30h], 1
0x8ABF1C: fld     dword ptr [esi+0Ch]
0x8ABF1F: fcomp   dword ptr ds:0A97BD8h
0x8ABF25: fnstsw  ax
0x8ABF27: test    ah, 5
0x8ABF2A: jp      short loc_8ABF5F
0x8ABF2C: fld     dword ptr [ebx+0A8h]
0x8ABF32: movaps  xmm1, xmmword ptr [edx+10h]
0x8ABF36: fmul    dword ptr [esi+0Ch]
0x8ABF39: fchs
0x8ABF3B: fstp    [esp+20h+var_4]
0x8ABF3F: movss   xmm0, [esp+20h+var_4]
0x8ABF45: movaps  xmm2, xmm0
0x8ABF48: shufps  xmm2, xmm0, 0
0x8ABF4C: movaps  xmm0, xmmword ptr [edi]
0x8ABF4F: mulps   xmm2, xmm1
0x8ABF52: addps   xmm0, xmm2
0x8ABF55: movaps  xmmword ptr [edi], xmm0
0x8ABF58: mov     dword ptr [esi+0Ch], 0
0x8ABF5F: pop     edi
0x8ABF60: pop     esi
0x8ABF61: pop     ebx
0x8ABF62: mov     esp, ebp
0x8ABF64: pop     ebp
0x8ABF65: retn    0Ch
