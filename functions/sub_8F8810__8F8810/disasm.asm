0x8F8810: push    ebp
0x8F8811: mov     ebp, esp
0x8F8813: and     esp, 0FFFFFFF0h
0x8F8816: sub     esp, 0E4h
0x8F881C: mov     eax, [ebp+arg_4]
0x8F881F: mov     edx, [eax]
0x8F8821: mov     eax, [eax+8]
0x8F8824: movaps  xmm1, xmmword ptr [eax]
0x8F8827: movaps  xmm2, xmmword ptr [eax+10h]
0x8F882B: movaps  xmm3, xmmword ptr [eax+20h]
0x8F882F: movaps  xmm4, xmmword ptr [eax+30h]
0x8F8833: push    ebx
0x8F8834: push    esi
0x8F8835: push    edi
0x8F8836: mov     edi, [ebp+arg_0]
0x8F8839: mov     esi, [edi]
0x8F883B: mov     [esp+0F0h+var_D4], edx
0x8F883F: add     edx, 10h
0x8F8842: lea     eax, [esp+0F0h+var_B0]
0x8F8846: mov     [esp+0F0h+var_E0], ecx
0x8F884A: sub     eax, edx
0x8F884C: mov     ecx, 3
0x8F8851: movaps  xmm0, xmmword ptr [edx]
0x8F8854: movaps  xmm5, xmm0
0x8F8857: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F885B: movaps  xmm6, xmm3
0x8F885E: mulps   xmm6, xmm5
0x8F8861: movaps  xmm5, xmm0
0x8F8864: shufps  xmm5, xmm0, 55h ; 'U'
0x8F8868: movaps  xmm7, xmm2
0x8F886B: mulps   xmm7, xmm5
0x8F886E: movaps  xmm5, xmm0
0x8F8871: shufps  xmm5, xmm0, 0
0x8F8875: movaps  xmm0, xmm1
0x8F8878: mulps   xmm0, xmm5
0x8F887B: addps   xmm6, xmm4
0x8F887E: addps   xmm0, xmm7
0x8F8881: addps   xmm0, xmm6
0x8F8884: movaps  xmmword ptr [eax+edx], xmm0
0x8F8888: add     edx, 10h
0x8F888B: dec     ecx
0x8F888C: jnz     short loc_8F8851
0x8F888E: mov     eax, [edi+8]
0x8F8891: movaps  xmm1, xmmword ptr [eax]
0x8F8894: movaps  xmm2, xmmword ptr [eax+10h]
0x8F8898: movaps  xmm3, xmmword ptr [eax+20h]
0x8F889C: movaps  xmm4, xmmword ptr [eax+30h]
0x8F88A0: mov     ebx, [esi+0Ch]
0x8F88A3: lea     ecx, [esi+10h]
0x8F88A6: lea     eax, [esp+0F0h+var_80]
0x8F88AA: mov     esi, ebx
0x8F88AC: mov     edx, ecx
0x8F88AE: sub     eax, ecx
0x8F88B0: movaps  xmm0, xmmword ptr [edx]
0x8F88B3: movaps  xmm5, xmm0
0x8F88B6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F88BA: movaps  xmm6, xmm3
0x8F88BD: mulps   xmm6, xmm5
0x8F88C0: movaps  xmm5, xmm0
0x8F88C3: shufps  xmm5, xmm0, 55h ; 'U'
0x8F88C7: movaps  xmm7, xmm2
0x8F88CA: mulps   xmm7, xmm5
0x8F88CD: movaps  xmm5, xmm0
0x8F88D0: shufps  xmm5, xmm0, 0
0x8F88D4: movaps  xmm0, xmm1
0x8F88D7: mulps   xmm0, xmm5
0x8F88DA: addps   xmm6, xmm4
0x8F88DD: addps   xmm0, xmm7
0x8F88E0: addps   xmm0, xmm6
0x8F88E3: movaps  xmmword ptr [eax+edx], xmm0
0x8F88E7: add     edx, 10h
0x8F88EA: dec     esi
0x8F88EB: test    esi, esi
0x8F88ED: jg      short loc_8F88B0
0x8F88EF: test    ebx, ebx
0x8F88F1: mov     [esp+0F0h+var_DC], 0
0x8F88F9: jle     short loc_8F8970
0x8F88FB: mov     eax, [esp+0F0h+var_E0]
0x8F88FF: add     eax, 0Ch
0x8F8902: mov     [esp+0F0h+var_E0], eax
0x8F8906: lea     edi, [esp+0F0h+var_80]
0x8F890A: lea     esi, [ecx+0Ch]
0x8F890D: lea     ecx, [ecx+0]
0x8F8910: fld     dword ptr [esi]
0x8F8912: mov     ecx, [esp+0F0h+var_D4]
0x8F8916: fadd    dword ptr [ecx+0Ch]
0x8F8919: mov     eax, [esp+0F0h+var_E0]
0x8F891D: lea     edx, [esp+0F0h+var_D0]
0x8F8921: push    edx
0x8F8922: push    eax
0x8F8923: fstp    [esp+0F8h+var_D8]
0x8F8927: lea     ecx, [esp+0F8h+var_B0]
0x8F892B: push    ecx
0x8F892C: push    edi
0x8F892D: call    sub_8D20C0
0x8F8932: fld     [esp+100h+var_C0]
0x8F8936: fcomp   [esp+100h+var_D8]
0x8F893A: add     esp, 10h
0x8F893D: fnstsw  ax
0x8F893F: test    ah, 5
0x8F8942: jnp     short loc_8F8960
0x8F8944: mov     eax, [esp+0F0h+var_DC]
0x8F8948: inc     eax
0x8F8949: add     esi, 10h
0x8F894C: add     edi, 10h
0x8F894F: cmp     eax, ebx
0x8F8951: mov     [esp+0F0h+var_DC], eax
0x8F8955: jl      short loc_8F8910
0x8F8957: pop     edi
0x8F8958: pop     esi
0x8F8959: pop     ebx
0x8F895A: mov     esp, ebp
0x8F895C: pop     ebp
0x8F895D: retn    10h
0x8F8960: mov     eax, [ebp+arg_4]
0x8F8963: mov     ecx, [ebp+arg_C]
0x8F8966: mov     edx, [ecx]
0x8F8968: push    eax
0x8F8969: mov     eax, [ebp+arg_0]
0x8F896C: push    eax
0x8F896D: call    dword ptr [edx+4]
0x8F8970: pop     edi
0x8F8971: pop     esi
0x8F8972: pop     ebx
0x8F8973: mov     esp, ebp
0x8F8975: pop     ebp
0x8F8976: retn    10h
