0x8F1B60: push    ebp
0x8F1B61: mov     ebp, esp
0x8F1B63: and     esp, 0FFFFFFF0h
0x8F1B66: push    ecx
0x8F1B67: mov     edx, [ebp+arg_4]
0x8F1B6A: push    ebx
0x8F1B6B: mov     ebx, [edx+18h]
0x8F1B6E: push    esi
0x8F1B6F: mov     esi, [edx+14h]
0x8F1B72: mov     dl, [esi+0Ch]
0x8F1B75: push    edi
0x8F1B76: mov     edi, [ebp+arg_8]
0x8F1B79: mov     eax, [edi]
0x8F1B7B: mov     ecx, [edi+4]
0x8F1B7E: test    dl, dl
0x8F1B80: mov     edx, [ebp+arg_0]
0x8F1B83: movaps  xmm0, xmmword ptr [edx]
0x8F1B86: jnz     short loc_8F1BB8
0x8F1B88: movaps  xmm2, xmmword ptr [esi+70h]
0x8F1B8C: movaps  xmm3, xmmword ptr [esi+60h]
0x8F1B90: movaps  xmm1, xmm0
0x8F1B93: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F1B97: mulps   xmm2, xmm1
0x8F1B9A: movaps  xmm1, xmm0
0x8F1B9D: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1BA1: mulps   xmm3, xmm1
0x8F1BA4: movaps  xmm1, xmm0
0x8F1BA7: shufps  xmm1, xmm0, 0
0x8F1BAB: movaps  xmm0, xmmword ptr [esi+50h]
0x8F1BAF: mulps   xmm0, xmm1
0x8F1BB2: addps   xmm0, xmm3
0x8F1BB5: addps   xmm0, xmm2
0x8F1BB8: movaps  xmmword ptr [eax], xmm0
0x8F1BBB: cmp     byte ptr [ebx+0Ch], 0
0x8F1BBF: jz      short loc_8F1BD4
0x8F1BC1: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F1BC8: movaps  xmm1, xmmword ptr [edx]
0x8F1BCB: xorps   xmm1, xmm0
0x8F1BCE: movaps  xmmword ptr [eax+10h], xmm1
0x8F1BD2: jmp     short loc_8F1C15
0x8F1BD4: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8F1BDB: movaps  xmm0, xmmword ptr [edx]
0x8F1BDE: movaps  xmm2, xmmword ptr [ebx+70h]
0x8F1BE2: movaps  xmm3, xmmword ptr [ebx+60h]
0x8F1BE6: xorps   xmm0, xmm1
0x8F1BE9: movaps  xmm1, xmm0
0x8F1BEC: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F1BF0: mulps   xmm2, xmm1
0x8F1BF3: movaps  xmm1, xmm0
0x8F1BF6: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1BFA: mulps   xmm3, xmm1
0x8F1BFD: movaps  xmm1, xmm0
0x8F1C00: shufps  xmm1, xmm0, 0
0x8F1C04: movaps  xmm0, xmmword ptr [ebx+50h]
0x8F1C08: mulps   xmm0, xmm1
0x8F1C0B: addps   xmm0, xmm3
0x8F1C0E: addps   xmm0, xmm2
0x8F1C11: movaps  xmmword ptr [eax+10h], xmm0
0x8F1C15: movaps  xmm0, xmmword ptr [eax+10h]
0x8F1C19: movaps  xmm2, xmmword ptr [ebx+30h]
0x8F1C1D: movaps  xmm1, xmmword ptr [eax]
0x8F1C20: movaps  xmm3, xmm0
0x8F1C23: mulps   xmm3, xmm0
0x8F1C26: movaps  xmm0, xmmword ptr [esi+30h]
0x8F1C2A: mulps   xmm3, xmm2
0x8F1C2D: movaps  xmm2, xmm1
0x8F1C30: mulps   xmm2, xmm1
0x8F1C33: movaps  xmm1, xmm2
0x8F1C36: mulps   xmm1, xmm0
0x8F1C39: movaps  xmm0, xmm1
0x8F1C3C: addps   xmm0, xmm3
0x8F1C3F: movaps  xmm1, xmm0
0x8F1C42: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1C46: movaps  xmm2, xmm0
0x8F1C49: lea     esi, [esp+10h+var_4]
0x8F1C4D: addss   xmm1, xmm0
0x8F1C51: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1C55: addss   xmm2, xmm1
0x8F1C59: movss   dword ptr [esi], xmm2
0x8F1C5D: fld     [esp+10h+var_4]
0x8F1C61: fadd    dword ptr ds:0A9B1ECh
0x8F1C67: mov     esi, [ebp+arg_4]
0x8F1C6A: add     ecx, 10h
0x8F1C6D: fdivr   dword ptr ds:0A2F948h
0x8F1C73: fstp    dword ptr [eax+0Ch]
0x8F1C76: fld     dword ptr [esi+4]
0x8F1C79: fchs
0x8F1C7B: fld     st
0x8F1C7D: fmul    dword ptr [edx+10h]
0x8F1C80: fld     st(1)
0x8F1C82: fmul    dword ptr [edx+14h]
0x8F1C85: fxch    st(1)
0x8F1C87: fstp    dword ptr [ecx-0Ch]
0x8F1C8A: mov     dword ptr [ecx-10h], 4100Ah
0x8F1C91: mov     dword ptr [ecx-4], 3F000000h
0x8F1C98: fstp    dword ptr [ecx-8]
0x8F1C9B: mov     [edi+4], ecx
0x8F1C9E: lea     ecx, [eax+20h]
0x8F1CA1: mov     [edi], ecx
0x8F1CA3: fmul    dword ptr [edx+18h]
0x8F1CA6: pop     edi
0x8F1CA7: pop     esi
0x8F1CA8: fstp    dword ptr [eax+1Ch]
0x8F1CAB: pop     ebx
0x8F1CAC: fld     dword ptr [eax+0Ch]
0x8F1CAF: fmul    dword ptr ds:0A3D65Ch
0x8F1CB5: fstp    dword ptr [eax+0Ch]
0x8F1CB8: mov     esp, ebp
0x8F1CBA: pop     ebp
0x8F1CBB: retn
