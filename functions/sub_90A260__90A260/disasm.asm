0x90A260: push    ebp
0x90A261: mov     ebp, esp
0x90A263: and     esp, 0FFFFFFF0h
0x90A266: sub     esp, 0E4h
0x90A26C: mov     eax, [ebp+arg_C]
0x90A26F: mov     [ecx+8], eax
0x90A272: mov     word ptr [ecx+6], 1
0x90A278: mov     dword ptr [ecx], offset off_A9BF10
0x90A27E: push    ebx
0x90A27F: lea     ebx, [ecx+0Ch]
0x90A282: mov     [esp+0E8h+var_DC], ecx
0x90A286: push    esi
0x90A287: mov     esi, [ebp+arg_0]
0x90A28A: lea     ecx, [ebx+0Ch]
0x90A28D: mov     [ebx], ecx
0x90A28F: mov     dword ptr [ebx+4], 0
0x90A296: mov     dword ptr [ebx+8], 80000004h
0x90A29D: mov     eax, [ebx+8]
0x90A2A0: push    edi
0x90A2A1: mov     edi, [esi]
0x90A2A3: mov     ecx, [edi+0Ch]
0x90A2A6: and     eax, 3FFFFFFFh
0x90A2AB: cmp     eax, ecx
0x90A2AD: mov     [esp+0F0h+var_D8], ecx
0x90A2B1: jge     short loc_90A2C7
0x90A2B3: add     eax, eax
0x90A2B5: cmp     ecx, eax
0x90A2B7: jl      short loc_90A2BB
0x90A2B9: mov     eax, ecx
0x90A2BB: push    8
0x90A2BD: push    eax
0x90A2BE: push    ebx
0x90A2BF: call    sub_8A6E40
0x90A2C4: add     esp, 0Ch
0x90A2C7: push    0
0x90A2C9: lea     ecx, [esp+0F4h+var_D0]
0x90A2CD: call    sub_8ED410
0x90A2D2: mov     edx, [esi+8]
0x90A2D5: push    edx
0x90A2D6: lea     ecx, [esp+0F4h+var_B0]
0x90A2DA: call    sub_903FA0
0x90A2DF: lea     eax, [esp+0F0h+var_B0]
0x90A2E3: mov     [esp+0F0h+var_B8], eax
0x90A2E7: mov     eax, [esp+0F0h+var_D8]
0x90A2EB: lea     ecx, [edi+10h]
0x90A2EE: xor     edi, edi
0x90A2F0: test    eax, eax
0x90A2F2: mov     [esp+0F0h+var_B4], esi
0x90A2F6: mov     [esp+0F0h+var_E0], ecx
0x90A2FA: jle     loc_90A41F
0x90A300: jmp     short loc_90A310
0x90A302: mov     esi, [ebp+arg_0]
0x90A305: mov     ecx, [esp+0F0h+var_E0]
0x90A309: lea     esp, [esp+0]
0x90A310: movaps  xmm0, xmmword ptr [ecx]
0x90A313: movaps  xmm2, [esp+0F0h+var_90]
0x90A318: movaps  xmm3, [esp+0F0h+var_A0]
0x90A31D: mov     eax, [esi+8]
0x90A320: movaps  xmm1, xmm0
0x90A323: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x90A327: mulps   xmm2, xmm1
0x90A32A: movaps  xmm1, xmm0
0x90A32D: shufps  xmm1, xmm0, 55h ; 'U'
0x90A331: mulps   xmm3, xmm1
0x90A334: movaps  xmm1, xmm0
0x90A337: shufps  xmm1, xmm0, 0
0x90A33B: movaps  xmm0, [esp+0F0h+var_B0]
0x90A340: mulps   xmm0, xmm1
0x90A343: movaps  xmm1, xmmword ptr [eax+30h]
0x90A347: addps   xmm0, xmm3
0x90A34A: addps   xmm0, xmm2
0x90A34D: addps   xmm1, xmm0
0x90A350: movaps  [esp+0F0h+var_80], xmm1
0x90A355: movaps  xmm1, xmmword ptr [eax+40h]
0x90A359: addps   xmm1, xmm0
0x90A35C: movaps  [esp+0F0h+var_70], xmm1
0x90A364: movaps  xmm1, xmmword ptr [eax+50h]
0x90A368: mov     eax, [ebx+4]
0x90A36B: addps   xmm1, xmm0
0x90A36E: movaps  [esp+0F0h+var_60], xmm1
0x90A376: mov     ecx, [ecx+0Ch]
0x90A379: mov     [esp+0F0h+var_C4], ecx
0x90A37D: lea     ecx, [eax+1]
0x90A380: lea     edx, [esp+0F0h+var_D0]
0x90A384: mov     [esp+0F0h+var_C0], edx
0x90A388: mov     edx, [ebx]
0x90A38A: mov     [ebx+4], ecx
0x90A38D: mov     ecx, [ebp+arg_8]
0x90A390: lea     eax, [edx+eax*8]
0x90A393: mov     edx, [ecx]
0x90A395: mov     [esp+0F0h+var_D4], eax
0x90A399: mov     eax, [esp+0F0h+var_D0]
0x90A39D: lea     ecx, [esp+0F0h+var_D0]
0x90A3A1: mov     [esp+0F0h+var_BC], edi
0x90A3A5: mov     [esp+0F0h+var_E4], edx
0x90A3A9: call    dword ptr [eax+8]
0x90A3AC: mov     ecx, [ebp+arg_4]
0x90A3AF: mov     ecx, [ecx]
0x90A3B1: mov     edx, [ecx]
0x90A3B3: mov     esi, eax
0x90A3B5: call    dword ptr [edx+8]
0x90A3B8: mov     edx, [ebp+arg_8]
0x90A3BB: mov     cl, [edx+0Ch]
0x90A3BE: test    cl, cl
0x90A3C0: mov     ecx, [esp+0F0h+var_E4]
0x90A3C4: jz      short loc_90A3CE
0x90A3C6: add     ecx, 590h
0x90A3CC: jmp     short loc_90A3D4
0x90A3CE: add     ecx, 190h
0x90A3D4: shl     esi, 5
0x90A3D7: add     esi, ecx
0x90A3D9: movzx   eax, byte ptr [esi+eax]
0x90A3DD: mov     ecx, [esp+0F0h+var_E4]
0x90A3E1: lea     eax, [eax+eax*4]
0x90A3E4: mov     eax, [ecx+eax*4+990h]
0x90A3EB: mov     ecx, [ebp+arg_C]
0x90A3EE: push    ecx
0x90A3EF: push    edx
0x90A3F0: mov     edx, [ebp+arg_4]
0x90A3F3: push    edx
0x90A3F4: lea     ecx, [esp+0FCh+var_C0]
0x90A3F8: push    ecx
0x90A3F9: call    eax
0x90A3FB: mov     ecx, [esp+100h+var_D4]
0x90A3FF: mov     edx, [esp+100h+var_E0]
0x90A403: add     edx, 10h
0x90A406: add     esp, 10h
0x90A409: mov     [ecx+4], eax
0x90A40C: mov     eax, [esp+0F0h+var_D8]
0x90A410: mov     [ecx], edi
0x90A412: inc     edi
0x90A413: cmp     edi, eax
0x90A415: mov     [esp+0F0h+var_E0], edx
0x90A419: jl      loc_90A302
0x90A41F: mov     eax, [esp+0F0h+var_DC]
0x90A423: pop     edi
0x90A424: pop     esi
0x90A425: pop     ebx
0x90A426: mov     esp, ebp
0x90A428: pop     ebp
0x90A429: retn    10h
