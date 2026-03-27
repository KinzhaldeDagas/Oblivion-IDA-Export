0x8F7970: push    ebp
0x8F7971: mov     ebp, esp
0x8F7973: and     esp, 0FFFFFFF0h
0x8F7976: sub     esp, 0C4h
0x8F797C: mov     edx, ds:0BA9DE4h
0x8F7982: push    ebx
0x8F7983: push    esi
0x8F7984: push    edi
0x8F7985: mov     edi, ecx
0x8F7987: mov     ecx, large fs:2Ch
0x8F798E: mov     eax, [ecx+edx*4]
0x8F7991: mov     esi, [eax+1A4h]
0x8F7997: cmp     esi, [eax+1A8h]
0x8F799D: jnb     short loc_8F79C3
0x8F799F: mov     esi, eax
0x8F79A1: mov     ecx, [esi+1A4h]
0x8F79A7: mov     dword ptr [ecx], offset aTtmultirayCvx; "TtmultiRay-cvx"
0x8F79AD: rdtsc
0x8F79AF: mov     [esp+0D0h+var_BC], eax
0x8F79B3: mov     eax, [esp+0D0h+var_BC]
0x8F79B7: mov     [ecx+4], eax
0x8F79BA: add     ecx, 0Ch
0x8F79BD: mov     [esi+1A4h], ecx
0x8F79C3: mov     eax, [ebp+arg_0]
0x8F79C6: mov     esi, [eax]
0x8F79C8: mov     ecx, [ebp+arg_4]
0x8F79CB: mov     edx, [ecx]
0x8F79CD: mov     eax, [eax+8]
0x8F79D0: mov     ecx, [ecx+8]
0x8F79D3: push    eax
0x8F79D4: push    ecx
0x8F79D5: lea     ecx, [esp+0D8h+var_50]
0x8F79DC: mov     [esp+0D8h+var_A8], esi
0x8F79E0: mov     [esp+0D8h+var_A4], edx
0x8F79E4: call    sub_8B1FF0
0x8F79E9: mov     eax, [esi+10h]
0x8F79EC: xor     ebx, ebx
0x8F79EE: cmp     eax, ebx
0x8F79F0: mov     [esp+0D0h+var_80], ebx
0x8F79F4: mov     [esp+0D0h+var_7C], ebx
0x8F79F8: mov     esi, [esi+0Ch]
0x8F79FB: mov     [esp+0D0h+var_B8], eax
0x8F79FF: mov     [esp+0D0h+var_BC], esi
0x8F7A03: jle     loc_8F7BDF
0x8F7A09: lea     esp, [esp+0]
0x8F7A10: movaps  xmm0, xmmword ptr [esi]
0x8F7A13: movaps  xmm4, [esp+0D0h+var_20]
0x8F7A1B: movaps  xmm1, xmm0
0x8F7A1E: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F7A22: movaps  xmm2, xmm1
0x8F7A25: movaps  xmm1, [esp+0D0h+var_30]
0x8F7A2D: mov     ecx, [esp+0D0h+var_A4]
0x8F7A31: movaps  xmm3, xmm1
0x8F7A34: mulps   xmm3, xmm2
0x8F7A37: addps   xmm3, xmm4
0x8F7A3A: movaps  xmm5, xmm3
0x8F7A3D: movaps  xmm2, xmm0
0x8F7A40: shufps  xmm2, xmm0, 55h ; 'U'
0x8F7A44: movaps  xmm3, xmm2
0x8F7A47: movaps  xmm2, [esp+0D0h+var_40]
0x8F7A4F: movaps  xmm6, xmm2
0x8F7A52: mulps   xmm6, xmm3
0x8F7A55: movaps  xmm3, xmm0
0x8F7A58: shufps  xmm3, xmm0, 0
0x8F7A5C: movaps  xmm0, xmm3
0x8F7A5F: movaps  xmm3, [esp+0D0h+var_50]
0x8F7A67: movaps  xmm7, xmm3
0x8F7A6A: mulps   xmm7, xmm0
0x8F7A6D: addps   xmm7, xmm6
0x8F7A70: addps   xmm7, xmm5
0x8F7A73: movaps  [esp+0D0h+var_A0], xmm7
0x8F7A78: movaps  xmm0, xmmword ptr [esi+10h]
0x8F7A7C: movaps  xmm5, xmm0
0x8F7A7F: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F7A83: mulps   xmm1, xmm5
0x8F7A86: addps   xmm1, xmm4
0x8F7A89: movaps  xmm4, xmm0
0x8F7A8C: shufps  xmm4, xmm0, 55h ; 'U'
0x8F7A90: mulps   xmm2, xmm4
0x8F7A93: lea     eax, [esp+0D0h+var_70]
0x8F7A97: push    eax
0x8F7A98: movaps  xmm4, xmm0
0x8F7A9B: shufps  xmm4, xmm0, 0
0x8F7A9F: mulps   xmm3, xmm4
0x8F7AA2: lea     eax, [esp+0D4h+var_A0]
0x8F7AA6: push    eax
0x8F7AA7: addps   xmm3, xmm2
0x8F7AAA: addps   xmm3, xmm1
0x8F7AAD: lea     eax, [esp+0D8h+var_B0]
0x8F7AB1: movaps  [esp+0D8h+var_90], xmm3
0x8F7AB6: mov     edx, [ecx]
0x8F7AB8: push    eax
0x8F7AB9: mov     [esp+0DCh+var_5C], 3F800000h
0x8F7AC4: call    dword ptr [edx+14h]
0x8F7AC7: mov     al, [esp+0D0h+var_B0]
0x8F7ACB: test    al, al
0x8F7ACD: jnz     short loc_8F7AF9
0x8F7ACF: mov     ecx, [edi+0Ch]
0x8F7AD2: xor     eax, eax
0x8F7AD4: mov     ax, [ecx+ebx*2]
0x8F7AD8: cmp     ax, 0FFFFh
0x8F7ADC: jz      loc_8F7BC7
0x8F7AE2: mov     ecx, [edi+8]
0x8F7AE5: mov     edx, [ecx]
0x8F7AE7: push    eax
0x8F7AE8: call    dword ptr [edx+10h]
0x8F7AEB: mov     eax, [edi+0Ch]
0x8F7AEE: mov     word ptr [eax+ebx*2], 0FFFFh
0x8F7AF4: jmp     loc_8F7BC7
0x8F7AF9: mov     edx, [esp+0D0h+var_5C]
0x8F7AFD: mov     ecx, [ebp+arg_C]
0x8F7B00: mov     esi, [ecx]
0x8F7B02: movaps  xmm1, [esp+0D0h+var_90]
0x8F7B07: mov     ecx, [ebp+arg_4]
0x8F7B0A: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8F7B11: mov     [esp+0D0h+var_AC], edx
0x8F7B15: movss   xmm0, [esp+0D0h+var_AC]
0x8F7B1B: mov     edx, [ecx+8]
0x8F7B1E: shufps  xmm0, xmm0, 0
0x8F7B22: movaps  xmm2, xmm0
0x8F7B25: mulps   xmm2, xmm1
0x8F7B28: movaps  xmm1, [esp+0D0h+var_A0]
0x8F7B2D: lea     eax, [esp+0D0h+var_10]
0x8F7B34: subps   xmm3, xmm0
0x8F7B37: push    eax
0x8F7B38: mulps   xmm3, xmm1
0x8F7B3B: addps   xmm3, xmm2
0x8F7B3E: push    edx
0x8F7B3F: mov     ecx, esi
0x8F7B41: movaps  [esp+0D8h+var_10], xmm3
0x8F7B49: call    sub_88FCC0
0x8F7B4E: mov     ecx, [ebp+arg_4]
0x8F7B51: mov     edx, [ecx+8]
0x8F7B54: lea     eax, [esp+0D0h+var_70]
0x8F7B58: push    eax
0x8F7B59: push    edx
0x8F7B5A: lea     ecx, [esi+10h]
0x8F7B5D: call    sub_88FE00
0x8F7B62: fld     [esp+0D0h+var_5C]
0x8F7B66: fsub    dword ptr ds:0A2F948h
0x8F7B6C: mov     eax, [esp+0D0h+var_BC]
0x8F7B70: mov     ecx, [esp+0D0h+var_A8]
0x8F7B74: fmul    dword ptr [eax+0Ch]
0x8F7B77: fadd    dword ptr [ecx+18h]
0x8F7B7A: fstp    dword ptr [esi+1Ch]
0x8F7B7D: mov     edx, [edi+0Ch]
0x8F7B80: cmp     word ptr [edx+ebx*2], 0FFFFh
0x8F7B86: lea     eax, [edx+ebx*2]
0x8F7B89: mov     [esp+0D0h+var_B4], eax
0x8F7B8D: jnz     short loc_8F7BAB
0x8F7B8F: mov     edx, [ebp+arg_8]
0x8F7B92: mov     ecx, [edi+8]
0x8F7B95: mov     eax, [ecx]
0x8F7B97: push    esi
0x8F7B98: push    edx
0x8F7B99: mov     edx, [ebp+arg_4]
0x8F7B9C: push    edx
0x8F7B9D: mov     edx, [ebp+arg_0]
0x8F7BA0: push    edx
0x8F7BA1: call    dword ptr [eax+8]
0x8F7BA4: mov     ecx, [esp+0D0h+var_B4]
0x8F7BA8: mov     [ecx], ax
0x8F7BAB: mov     edx, [edi+0Ch]
0x8F7BAE: cmp     word ptr [edx+ebx*2], 0FFFFh
0x8F7BB4: jz      short loc_8F7BC7
0x8F7BB6: mov     eax, [ebp+arg_C]
0x8F7BB9: add     dword ptr [eax], 30h ; '0'
0x8F7BBC: mov     eax, [edi+0Ch]
0x8F7BBF: mov     cx, [eax+ebx*2]
0x8F7BC3: mov     [esi+20h], cx
0x8F7BC7: mov     esi, [esp+0D0h+var_BC]
0x8F7BCB: mov     eax, [esp+0D0h+var_B8]
0x8F7BCF: add     esi, 20h ; ' '
0x8F7BD2: inc     ebx
0x8F7BD3: cmp     ebx, eax
0x8F7BD5: mov     [esp+0D0h+var_BC], esi
0x8F7BD9: jl      loc_8F7A10
0x8F7BDF: mov     ecx, large fs:2Ch
0x8F7BE6: mov     edx, ds:0BA9DE4h
0x8F7BEC: mov     eax, [ecx+edx*4]
0x8F7BEF: mov     esi, [eax+1A4h]
0x8F7BF5: cmp     esi, [eax+1A8h]
0x8F7BFB: jnb     short loc_8F7C21
0x8F7BFD: mov     esi, eax
0x8F7BFF: mov     ecx, [esi+1A4h]
0x8F7C05: mov     dword ptr [ecx], offset aEt; "Et"
0x8F7C0B: rdtsc
0x8F7C0D: mov     [esp+0D0h+var_B8], eax
0x8F7C11: mov     edx, [esp+0D0h+var_B8]
0x8F7C15: mov     [ecx+4], edx
0x8F7C18: add     ecx, 0Ch
0x8F7C1B: mov     [esi+1A4h], ecx
0x8F7C21: pop     edi
0x8F7C22: pop     esi
0x8F7C23: pop     ebx
0x8F7C24: mov     esp, ebp
0x8F7C26: pop     ebp
0x8F7C27: retn    10h
