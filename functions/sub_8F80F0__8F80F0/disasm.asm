0x8F80F0: push    ebp
0x8F80F1: mov     ebp, esp
0x8F80F3: and     esp, 0FFFFFFF0h
0x8F80F6: sub     esp, 0F4h
0x8F80FC: mov     edx, ds:0BA9DE4h
0x8F8102: push    ebx
0x8F8103: mov     [esp+0F8h+var_E4], ecx
0x8F8107: mov     ecx, large fs:2Ch
0x8F810E: mov     eax, [ecx+edx*4]
0x8F8111: push    esi
0x8F8112: mov     esi, [eax+1A4h]
0x8F8118: push    edi
0x8F8119: cmp     esi, [eax+1A8h]
0x8F811F: jnb     short loc_8F8145
0x8F8121: mov     esi, eax
0x8F8123: mov     ecx, [esi+1A4h]
0x8F8129: mov     dword ptr [ecx], offset aTtmultispheret; "TtMultiSphereTri"
0x8F812F: rdtsc
0x8F8131: mov     [esp+100h+var_E8], eax
0x8F8135: mov     eax, [esp+100h+var_E8]
0x8F8139: mov     [ecx+4], eax
0x8F813C: add     ecx, 0Ch
0x8F813F: mov     [esi+1A4h], ecx
0x8F8145: mov     eax, [ebp+arg_4]
0x8F8148: mov     ecx, [eax]
0x8F814A: mov     eax, [eax+8]
0x8F814D: movaps  xmm1, xmmword ptr [eax]
0x8F8150: movaps  xmm2, xmmword ptr [eax+10h]
0x8F8154: movaps  xmm3, xmmword ptr [eax+20h]
0x8F8158: movaps  xmm4, xmmword ptr [eax+30h]
0x8F815C: mov     ebx, [ebp+arg_0]
0x8F815F: mov     edx, [ebx]
0x8F8161: mov     [esp+100h+var_D8], ecx
0x8F8165: add     ecx, 10h
0x8F8168: lea     eax, [esp+100h+var_B0]
0x8F816C: sub     eax, ecx
0x8F816E: mov     esi, 3
0x8F8173: movaps  xmm0, xmmword ptr [ecx]
0x8F8176: movaps  xmm5, xmm0
0x8F8179: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F817D: movaps  xmm6, xmm3
0x8F8180: mulps   xmm6, xmm5
0x8F8183: movaps  xmm5, xmm0
0x8F8186: shufps  xmm5, xmm0, 55h ; 'U'
0x8F818A: movaps  xmm7, xmm2
0x8F818D: mulps   xmm7, xmm5
0x8F8190: movaps  xmm5, xmm0
0x8F8193: shufps  xmm5, xmm0, 0
0x8F8197: movaps  xmm0, xmm1
0x8F819A: mulps   xmm0, xmm5
0x8F819D: addps   xmm6, xmm4
0x8F81A0: addps   xmm0, xmm7
0x8F81A3: addps   xmm0, xmm6
0x8F81A6: movaps  xmmword ptr [eax+ecx], xmm0
0x8F81AA: add     ecx, 10h
0x8F81AD: dec     esi
0x8F81AE: jnz     short loc_8F8173
0x8F81B0: mov     eax, [ebx+8]
0x8F81B3: movaps  xmm1, xmmword ptr [eax]
0x8F81B6: movaps  xmm2, xmmword ptr [eax+10h]
0x8F81BA: movaps  xmm3, xmmword ptr [eax+20h]
0x8F81BE: movaps  xmm4, xmmword ptr [eax+30h]
0x8F81C2: mov     edi, [edx+0Ch]
0x8F81C5: lea     esi, [edx+10h]
0x8F81C8: lea     eax, [esp+100h+var_80]
0x8F81CF: mov     edx, edi
0x8F81D1: mov     ecx, esi
0x8F81D3: sub     eax, esi
0x8F81D5: movaps  xmm0, xmmword ptr [ecx]
0x8F81D8: movaps  xmm5, xmm0
0x8F81DB: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F81DF: movaps  xmm6, xmm3
0x8F81E2: mulps   xmm6, xmm5
0x8F81E5: movaps  xmm5, xmm0
0x8F81E8: shufps  xmm5, xmm0, 55h ; 'U'
0x8F81EC: movaps  xmm7, xmm2
0x8F81EF: mulps   xmm7, xmm5
0x8F81F2: movaps  xmm5, xmm0
0x8F81F5: shufps  xmm5, xmm0, 0
0x8F81F9: movaps  xmm0, xmm1
0x8F81FC: mulps   xmm0, xmm5
0x8F81FF: addps   xmm6, xmm4
0x8F8202: addps   xmm0, xmm7
0x8F8205: addps   xmm0, xmm6
0x8F8208: movaps  xmmword ptr [eax+ecx], xmm0
0x8F820C: add     ecx, 10h
0x8F820F: dec     edx
0x8F8210: test    edx, edx
0x8F8212: jg      short loc_8F81D5
0x8F8214: lea     eax, [edi-1]
0x8F8217: test    eax, eax
0x8F8219: lea     ebx, [esp+100h+var_80]
0x8F8220: jl      loc_8F8335
0x8F8226: mov     ecx, [esp+100h+var_E4]
0x8F822A: add     esi, 0Ch
0x8F822D: lea     edi, [ecx+eax*2+1Ch]
0x8F8231: inc     eax
0x8F8232: mov     [esp+100h+var_D4], esi
0x8F8236: mov     [esp+100h+var_E8], eax
0x8F823A: lea     ebx, [ebx+0]
0x8F8240: mov     edx, [esp+100h+var_D8]
0x8F8244: fld     dword ptr [edx+0Ch]
0x8F8247: lea     eax, [esp+100h+var_D0]
0x8F824B: fadd    dword ptr [esi]
0x8F824D: push    eax
0x8F824E: mov     eax, [esp+104h+var_E4]
0x8F8252: add     eax, 0Ch
0x8F8255: push    eax
0x8F8256: fstp    [esp+108h+var_DC]
0x8F825A: lea     ecx, [esp+108h+var_B0]
0x8F825E: push    ecx
0x8F825F: push    ebx
0x8F8260: call    sub_8D20C0
0x8F8265: fld     [esp+110h+var_DC]
0x8F8269: mov     edx, [ebp+arg_8]
0x8F826C: fadd    dword ptr [edx+8]
0x8F826F: add     esp, 10h
0x8F8272: fcomp   [esp+100h+var_C0]
0x8F8276: fnstsw  ax
0x8F8278: test    ah, 41h
0x8F827B: jnz     short loc_8F82F8
0x8F827D: mov     ecx, [esp+100h+var_D8]
0x8F8281: fld     dword ptr [ecx+0Ch]
0x8F8284: movaps  xmm1, [esp+100h+var_D0]
0x8F8289: fsub    [esp+100h+var_C0]
0x8F828D: mov     eax, [ebp+arg_C]
0x8F8290: mov     esi, [eax]
0x8F8292: fstp    [esp+100h+var_E0]
0x8F8296: movss   xmm0, [esp+100h+var_E0]
0x8F829C: movaps  xmm2, xmm0
0x8F829F: shufps  xmm2, xmm0, 0
0x8F82A3: movaps  xmm0, xmmword ptr [ebx]
0x8F82A6: mulps   xmm2, xmm1
0x8F82A9: addps   xmm0, xmm2
0x8F82AC: movaps  xmmword ptr [esi], xmm0
0x8F82AF: movaps  xmm0, [esp+100h+var_D0]
0x8F82B4: movaps  xmmword ptr [esi+10h], xmm0
0x8F82B8: fld     [esp+100h+var_C0]
0x8F82BC: fsub    [esp+100h+var_DC]
0x8F82C0: fstp    dword ptr [esi+1Ch]
0x8F82C3: cmp     word ptr [edi], 0FFFFh
0x8F82C8: jnz     short loc_8F82EC
0x8F82CA: mov     eax, [esp+100h+var_E4]
0x8F82CE: mov     ecx, [eax+8]
0x8F82D1: mov     eax, [ecx]
0x8F82D3: push    esi
0x8F82D4: push    edx
0x8F82D5: mov     edx, [ebp+arg_4]
0x8F82D8: push    edx
0x8F82D9: mov     edx, [ebp+arg_0]
0x8F82DC: push    edx
0x8F82DD: call    dword ptr [eax+8]
0x8F82E0: cmp     ax, 0FFFFh
0x8F82E4: mov     [edi], ax
0x8F82E7: jz      short loc_8F8315
0x8F82E9: mov     eax, [ebp+arg_C]
0x8F82EC: add     dword ptr [eax], 30h ; '0'
0x8F82EF: mov     ax, [edi]
0x8F82F2: mov     [esi+20h], ax
0x8F82F6: jmp     short loc_8F8315
0x8F82F8: xor     eax, eax
0x8F82FA: mov     ax, [edi]
0x8F82FD: cmp     ax, 0FFFFh
0x8F8301: jz      short loc_8F8315
0x8F8303: mov     ecx, [esp+100h+var_E4]
0x8F8307: mov     ecx, [ecx+8]
0x8F830A: mov     edx, [ecx]
0x8F830C: push    eax
0x8F830D: call    dword ptr [edx+10h]
0x8F8310: mov     word ptr [edi], 0FFFFh
0x8F8315: mov     esi, [esp+100h+var_D4]
0x8F8319: mov     eax, [esp+100h+var_E8]
0x8F831D: add     esi, 10h
0x8F8320: add     ebx, 10h
0x8F8323: sub     edi, 2
0x8F8326: dec     eax
0x8F8327: mov     [esp+100h+var_D4], esi
0x8F832B: mov     [esp+100h+var_E8], eax
0x8F832F: jnz     loc_8F8240
0x8F8335: mov     ecx, large fs:2Ch
0x8F833C: mov     edx, ds:0BA9DE4h
0x8F8342: mov     eax, [ecx+edx*4]
0x8F8345: mov     esi, [eax+1A4h]
0x8F834B: cmp     esi, [eax+1A8h]
0x8F8351: jnb     short loc_8F8377
0x8F8353: mov     esi, eax
0x8F8355: mov     ecx, [esi+1A4h]
0x8F835B: mov     dword ptr [ecx], offset aEt; "Et"
0x8F8361: rdtsc
0x8F8363: mov     [esp+100h+var_E0], eax
0x8F8367: mov     eax, [esp+100h+var_E0]
0x8F836B: mov     [ecx+4], eax
0x8F836E: add     ecx, 0Ch
0x8F8371: mov     [esi+1A4h], ecx
0x8F8377: pop     edi
0x8F8378: pop     esi
0x8F8379: pop     ebx
0x8F837A: mov     esp, ebp
0x8F837C: pop     ebp
0x8F837D: retn    10h
