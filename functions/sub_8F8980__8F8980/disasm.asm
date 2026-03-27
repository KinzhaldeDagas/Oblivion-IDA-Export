0x8F8980: push    ebp
0x8F8981: mov     ebp, esp
0x8F8983: and     esp, 0FFFFFFF0h
0x8F8986: sub     esp, 0F4h
0x8F898C: mov     eax, [ebp+arg_0]
0x8F898F: mov     edx, [eax]
0x8F8991: mov     eax, [ebp+arg_4]
0x8F8994: mov     ecx, [eax]
0x8F8996: mov     eax, [eax+8]
0x8F8999: movaps  xmm1, xmmword ptr [eax]
0x8F899C: movaps  xmm2, xmmword ptr [eax+10h]
0x8F89A0: movaps  xmm3, xmmword ptr [eax+20h]
0x8F89A4: movaps  xmm4, xmmword ptr [eax+30h]
0x8F89A8: push    ebx
0x8F89A9: push    esi
0x8F89AA: push    edi
0x8F89AB: lea     edi, [ecx+10h]
0x8F89AE: lea     eax, [esp+100h+var_B0]
0x8F89B2: mov     [esp+100h+var_E8], ecx
0x8F89B6: mov     ecx, edi
0x8F89B8: sub     eax, edi
0x8F89BA: mov     esi, 3
0x8F89BF: nop
0x8F89C0: movaps  xmm0, xmmword ptr [ecx]
0x8F89C3: movaps  xmm5, xmm0
0x8F89C6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F89CA: movaps  xmm6, xmm3
0x8F89CD: mulps   xmm6, xmm5
0x8F89D0: movaps  xmm5, xmm0
0x8F89D3: shufps  xmm5, xmm0, 55h ; 'U'
0x8F89D7: movaps  xmm7, xmm2
0x8F89DA: mulps   xmm7, xmm5
0x8F89DD: movaps  xmm5, xmm0
0x8F89E0: shufps  xmm5, xmm0, 0
0x8F89E4: movaps  xmm0, xmm1
0x8F89E7: mulps   xmm0, xmm5
0x8F89EA: addps   xmm6, xmm4
0x8F89ED: addps   xmm0, xmm7
0x8F89F0: addps   xmm0, xmm6
0x8F89F3: movaps  xmmword ptr [eax+ecx], xmm0
0x8F89F7: add     ecx, 10h
0x8F89FA: dec     esi
0x8F89FB: jnz     short loc_8F89C0
0x8F89FD: mov     ecx, [ebp+arg_0]
0x8F8A00: mov     eax, [ecx+8]
0x8F8A03: movaps  xmm1, xmmword ptr [eax]
0x8F8A06: movaps  xmm2, xmmword ptr [eax+10h]
0x8F8A0A: movaps  xmm3, xmmword ptr [eax+20h]
0x8F8A0E: movaps  xmm4, xmmword ptr [eax+30h]
0x8F8A12: mov     esi, [edx+0Ch]
0x8F8A15: lea     ebx, [edx+10h]
0x8F8A18: lea     eax, [esp+100h+var_80]
0x8F8A1F: mov     edx, esi
0x8F8A21: mov     ecx, ebx
0x8F8A23: sub     eax, ebx
0x8F8A25: movaps  xmm0, xmmword ptr [ecx]
0x8F8A28: movaps  xmm5, xmm0
0x8F8A2B: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F8A2F: movaps  xmm6, xmm3
0x8F8A32: mulps   xmm6, xmm5
0x8F8A35: movaps  xmm5, xmm0
0x8F8A38: shufps  xmm5, xmm0, 55h ; 'U'
0x8F8A3C: movaps  xmm7, xmm2
0x8F8A3F: mulps   xmm7, xmm5
0x8F8A42: movaps  xmm5, xmm0
0x8F8A45: shufps  xmm5, xmm0, 0
0x8F8A49: movaps  xmm0, xmm1
0x8F8A4C: mulps   xmm0, xmm5
0x8F8A4F: addps   xmm6, xmm4
0x8F8A52: addps   xmm0, xmm7
0x8F8A55: addps   xmm0, xmm6
0x8F8A58: movaps  xmmword ptr [eax+ecx], xmm0
0x8F8A5C: add     ecx, 10h
0x8F8A5F: dec     edx
0x8F8A60: test    edx, edx
0x8F8A62: jg      short loc_8F8A25
0x8F8A64: lea     edx, [esp+100h+var_E0]
0x8F8A68: push    edx
0x8F8A69: push    edi
0x8F8A6A: call    sub_8D1DB0
0x8F8A6F: add     esp, 8
0x8F8A72: xor     edi, edi
0x8F8A74: test    esi, esi
0x8F8A76: jle     short loc_8F8AE8
0x8F8A78: lea     eax, [esp+100h+var_80]
0x8F8A7F: mov     [esp+100h+var_EC], eax
0x8F8A83: add     ebx, 0Ch
0x8F8A86: fld     dword ptr [ebx]
0x8F8A88: mov     ecx, [esp+100h+var_E8]
0x8F8A8C: fadd    dword ptr [ecx+0Ch]
0x8F8A8F: lea     edx, [esp+100h+var_D0]
0x8F8A93: push    edx
0x8F8A94: mov     edx, [esp+104h+var_EC]
0x8F8A98: lea     eax, [esp+104h+var_E0]
0x8F8A9C: fstp    [esp+104h+var_E4]
0x8F8AA0: push    eax
0x8F8AA1: lea     ecx, [esp+108h+var_B0]
0x8F8AA5: push    ecx
0x8F8AA6: push    edx
0x8F8AA7: call    sub_8D20C0
0x8F8AAC: fld     [esp+110h+var_C0]
0x8F8AB0: fcomp   [esp+110h+var_E4]
0x8F8AB4: add     esp, 10h
0x8F8AB7: fnstsw  ax
0x8F8AB9: test    ah, 5
0x8F8ABC: jnp     short loc_8F8AD8
0x8F8ABE: mov     ecx, [esp+100h+var_EC]
0x8F8AC2: inc     edi
0x8F8AC3: add     ecx, 10h
0x8F8AC6: add     ebx, 10h
0x8F8AC9: cmp     edi, esi
0x8F8ACB: mov     [esp+100h+var_EC], ecx
0x8F8ACF: jl      short loc_8F8A86
0x8F8AD1: pop     edi
0x8F8AD2: pop     esi
0x8F8AD3: pop     ebx
0x8F8AD4: mov     esp, ebp
0x8F8AD6: pop     ebp
0x8F8AD7: retn
0x8F8AD8: mov     edx, [ebp+arg_4]
0x8F8ADB: mov     ecx, [ebp+arg_C]
0x8F8ADE: mov     eax, [ecx]
0x8F8AE0: push    edx
0x8F8AE1: mov     edx, [ebp+arg_0]
0x8F8AE4: push    edx
0x8F8AE5: call    dword ptr [eax+4]
0x8F8AE8: pop     edi
0x8F8AE9: pop     esi
0x8F8AEA: pop     ebx
0x8F8AEB: mov     esp, ebp
0x8F8AED: pop     ebp
0x8F8AEE: retn
