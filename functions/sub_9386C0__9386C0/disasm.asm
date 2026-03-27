0x9386C0: push    ebp
0x9386C1: mov     ebp, esp
0x9386C3: and     esp, 0FFFFFFF0h
0x9386C6: sub     esp, 134h
0x9386CC: push    ebx
0x9386CD: push    esi
0x9386CE: push    edi
0x9386CF: mov     esi, ecx
0x9386D1: call    sub_8FDAF0
0x9386D6: mov     eax, [esi+10h]
0x9386D9: mov     ecx, [eax]
0x9386DB: mov     ebx, [ebp+arg_0]
0x9386DE: mov     al, [ebx+21h]
0x9386E1: test    al, al
0x9386E3: mov     [esp+140h+var_118], ecx
0x9386E7: mov     [esp+140h+var_128], 0
0x9386EF: jbe     loc_93889F
0x9386F5: mov     edi, ebx
0x9386F7: jmp     short loc_938700
0x9386F9: align 10h
0x938700: movzx   eax, byte ptr [edi]
0x938703: cmp     eax, 2
0x938706: jg      loc_938790
0x93870C: push    edi
0x93870D: lea     edx, [esp+84h]
0x938714: push    edx
0x938715: mov     ecx, esi
0x938717: call    sub_936B70
0x93871C: movaps  xmm1, xmmword ptr ds:0A372D0h
0x938723: movaps  xmm2, xmmword ptr [esp+80h]
0x93872B: movaps  xmm0, xmmword ptr [esi+90h]
0x938732: andps   xmm2, xmm1
0x938735: cmpltps xmm2, xmm0
0x938739: movmskps eax, xmm2
0x93873C: and     eax, 7
0x93873F: cmp     al, 7
0x938741: jnz     loc_93886E
0x938747: mov     eax, [esp+140h+var_88]
0x93874E: fld     [esp+140h+var_90]
0x938755: fmul    dword ptr [esp+eax*4+80h]
0x93875C: fsub    dword ptr [esi+eax*4+60h]
0x938760: mov     eax, [esi+10h]
0x938763: mov     ecx, [eax]
0x938765: mov     edx, ecx
0x938767: add     edx, 30h ; '0'
0x93876A: fstp    [esp+140h+var_8C]
0x938771: mov     [eax], edx
0x938773: lea     edx, [esp+80h]
0x93877A: push    edx
0x93877B: push    edi
0x93877C: push    ecx
0x93877D: mov     ecx, esi
0x93877F: call    sub_936C10
0x938784: inc     [esp+140h+var_128]
0x938788: add     edi, 4
0x93878B: jmp     loc_938891
0x938790: cmp     eax, 6
0x938793: jg      loc_93881D
0x938799: push    edi
0x93879A: lea     eax, [esp+144h+var_80]
0x9387A1: push    eax
0x9387A2: mov     ecx, esi
0x9387A4: call    sub_936CB0
0x9387A9: movaps  xmm1, xmmword ptr ds:0A372D0h
0x9387B0: movaps  xmm2, [esp+140h+var_70]
0x9387B8: movaps  xmm0, xmmword ptr [esi+0A0h]
0x9387BF: andps   xmm2, xmm1
0x9387C2: cmpltps xmm2, xmm0
0x9387C6: movmskps ecx, xmm2
0x9387C9: and     ecx, 7
0x9387CC: cmp     cl, 7
0x9387CF: jnz     loc_93886E
0x9387D5: mov     eax, [esp+140h+var_48]
0x9387DC: fld     [esp+140h+var_50]
0x9387E3: fmul    [esp+eax*4+140h+var_80]
0x9387EA: fchs
0x9387EC: fsub    dword ptr [esi+eax*4+60h]
0x9387F0: mov     eax, [esi+10h]
0x9387F3: mov     ecx, [eax]
0x9387F5: mov     edx, ecx
0x9387F7: add     edx, 30h ; '0'
0x9387FA: fstp    [esp+140h+var_4C]
0x938801: mov     [eax], edx
0x938803: lea     edx, [esp+140h+var_80]
0x93880A: push    edx
0x93880B: push    edi
0x93880C: push    ecx
0x93880D: mov     ecx, esi
0x93880F: call    sub_936D70
0x938814: inc     [esp+140h+var_128]
0x938818: add     edi, 4
0x93881B: jmp     short loc_938891
0x93881D: mov     [esp+140h+var_8], eax
0x938824: movzx   eax, byte ptr [edi+1]
0x938828: lea     ecx, [esp+140h+var_40]
0x93882F: push    ecx
0x938830: lea     edx, [esp+144h+var_104+3]
0x938834: push    edx
0x938835: mov     ecx, esi
0x938837: mov     [esp+148h+var_4], eax
0x93883E: call    sub_936810
0x938843: cmp     byte ptr [eax], 0
0x938846: jz      short loc_93886E
0x938848: mov     eax, [esi+10h]
0x93884B: mov     ecx, [eax]
0x93884D: mov     edx, ecx
0x93884F: add     edx, 30h ; '0'
0x938852: mov     [eax], edx
0x938854: lea     eax, [esp+140h+var_40]
0x93885B: push    eax
0x93885C: push    edi
0x93885D: push    ecx
0x93885E: mov     ecx, esi
0x938860: call    sub_936E10
0x938865: inc     [esp+140h+var_128]
0x938869: add     edi, 4
0x93886C: jmp     short loc_938891
0x93886E: cmp     byte ptr [edi], 6
0x938871: ja      short loc_938876
0x938873: dec     byte ptr [ebx+20h]
0x938876: mov     ecx, [esi+0Ch]
0x938879: mov     edx, [ecx]
0x93887B: xor     eax, eax
0x93887D: mov     ax, [edi+2]
0x938881: push    eax
0x938882: call    dword ptr [edx+10h]
0x938885: mov     ecx, [esp+140h+var_128]
0x938889: push    ecx
0x93888A: mov     ecx, ebx
0x93888C: call    sub_9363C0
0x938891: movzx   edx, byte ptr [ebx+21h]
0x938895: cmp     [esp+140h+var_128], edx
0x938899: jl      loc_938700
0x93889F: cmp     byte ptr [ebx+21h], 2
0x9388A3: jnb     short loc_9388B3
0x9388A5: mov     byte ptr [ebx+23h], 0
0x9388A9: mov     byte ptr [esp+140h+var_114], 1
0x9388AE: jmp     loc_9389A4
0x9388B3: mov     al, [ebx+23h]
0x9388B6: test    al, al
0x9388B8: jnz     short loc_93891E
0x9388BA: movaps  xmm3, xmmword ptr [esi+40h]
0x9388BE: movaps  xmm1, xmmword ptr [ebx+30h]
0x9388C2: movaps  xmm2, xmmword ptr [esi+20h]
0x9388C6: movaps  xmm5, xmmword ptr [esi+30h]
0x9388CA: movaps  xmm4, xmm3
0x9388CD: shufps  xmm4, xmm3, 44h ; 'D'
0x9388D1: movaps  xmm7, xmm3
0x9388D4: movaps  xmm0, xmm2
0x9388D7: shufps  xmm0, xmm5, 44h ; 'D'
0x9388DB: shufps  xmm7, xmm3, 0EEh ; 'î'
0x9388DF: shufps  xmm2, xmm5, 0EEh ; 'î'
0x9388E3: movaps  xmm5, xmm0
0x9388E6: movaps  xmm3, xmm1
0x9388E9: shufps  xmm3, xmm1, 55h ; 'U'
0x9388ED: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x9388F1: mulps   xmm5, xmm3
0x9388F4: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x9388F8: movaps  xmm3, xmm1
0x9388FB: movaps  xmm6, xmm1
0x9388FE: shufps  xmm3, xmm1, 0
0x938902: mulps   xmm0, xmm3
0x938905: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x938909: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x93890D: mulps   xmm2, xmm6
0x938910: addps   xmm0, xmm5
0x938913: addps   xmm0, xmm2
0x938916: movaps  xmmword ptr [ebx+40h], xmm0
0x93891A: mov     byte ptr [ebx+23h], 1
0x93891E: movaps  xmm0, xmmword ptr [ebx+40h]
0x938922: movaps  xmm2, xmmword ptr [esi+40h]
0x938926: movaps  xmm3, xmmword ptr [esi+30h]
0x93892A: movaps  xmm1, xmm0
0x93892D: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x938931: mulps   xmm2, xmm1
0x938934: movaps  xmm1, xmm0
0x938937: shufps  xmm1, xmm0, 55h ; 'U'
0x93893B: mulps   xmm3, xmm1
0x93893E: movaps  xmm1, xmm0
0x938941: shufps  xmm1, xmm0, 0
0x938945: movaps  xmm0, xmmword ptr [esi+20h]
0x938949: mulps   xmm0, xmm1
0x93894C: addps   xmm0, xmm3
0x93894F: addps   xmm0, xmm2
0x938952: movaps  xmm1, xmm0
0x938955: movaps  xmm0, xmmword ptr [ebx+30h]
0x938959: mulps   xmm0, xmm1
0x93895C: movaps  xmm1, xmm0
0x93895F: shufps  xmm1, xmm0, 55h ; 'U'
0x938963: movaps  xmm2, xmm0
0x938966: lea     eax, [esp+140h+var_11C]
0x93896A: addss   xmm1, xmm0
0x93896E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x938972: addss   xmm2, xmm1
0x938976: movss   dword ptr [eax], xmm2
0x93897A: fld     [esp+140h+var_11C]
0x93897E: fcomp   dword ptr ds:0AA1C80h
0x938984: fnstsw  ax
0x938986: test    ah, 5
0x938989: jp      short loc_93898F
0x93898B: mov     al, 1
0x93898D: jmp     short loc_938991
0x93898F: xor     al, al
0x938991: test    al, al
0x938993: mov     byte ptr [esp+140h+var_114], al
0x938997: jnz     short loc_9389A4
0x938999: mov     al, [ebx+22h]
0x93899C: test    al, al
0x93899E: jnz     loc_9392D7
0x9389A4: mov     cl, [ebx+21h]
0x9389A7: test    cl, cl
0x9389A9: jz      loc_938AA7
0x9389AF: mov     eax, [esp+140h+var_118]
0x9389B3: fld     dword ptr [eax+1Ch]
0x9389B6: movzx   ecx, cl
0x9389B9: dec     ecx
0x9389BA: cmp     ecx, 4
0x9389BD: jl      loc_938A4C
0x9389C3: lea     edx, [ecx+ecx*2]
0x9389C6: shl     edx, 4
0x9389C9: lea     edi, [edx+eax-14h]
0x9389CD: lea     edx, [ecx-4]
0x9389D0: shr     edx, 2
0x9389D3: inc     edx
0x9389D4: mov     eax, edx
0x9389D6: neg     eax
0x9389D8: lea     ecx, [ecx+eax*4]
0x9389DB: jmp     short loc_9389E0
0x9389DD: align 10h
0x9389E0: mov     eax, [edi+30h]
0x9389E3: mov     [esp+140h+var_128], eax
0x9389E7: fcom    [esp+140h+var_128]
0x9389EB: fnstsw  ax
0x9389ED: test    ah, 5
0x9389F0: jnp     short loc_9389F8
0x9389F2: fstp    st
0x9389F4: fld     [esp+140h+var_128]
0x9389F8: mov     eax, [edi]
0x9389FA: mov     [esp+140h+var_128], eax
0x9389FE: fcom    [esp+140h+var_128]
0x938A02: fnstsw  ax
0x938A04: test    ah, 5
0x938A07: jnp     short loc_938A0F
0x938A09: fstp    st
0x938A0B: fld     [esp+140h+var_128]
0x938A0F: mov     eax, [edi-30h]
0x938A12: mov     [esp+140h+var_128], eax
0x938A16: fcom    [esp+140h+var_128]
0x938A1A: fnstsw  ax
0x938A1C: test    ah, 5
0x938A1F: jnp     short loc_938A27
0x938A21: fstp    st
0x938A23: fld     [esp+140h+var_128]
0x938A27: mov     eax, [edi-60h]
0x938A2A: mov     [esp+140h+var_128], eax
0x938A2E: fcom    [esp+140h+var_128]
0x938A32: fnstsw  ax
0x938A34: test    ah, 5
0x938A37: jnp     short loc_938A3F
0x938A39: fstp    st
0x938A3B: fld     [esp+140h+var_128]
0x938A3F: sub     edi, 0C0h ; 'À'
0x938A45: dec     edx
0x938A46: jnz     short loc_9389E0
0x938A48: mov     eax, [esp+140h+var_118]
0x938A4C: test    ecx, ecx
0x938A4E: jle     short loc_938A7D
0x938A50: lea     edx, [ecx+ecx*2]
0x938A53: shl     edx, 4
0x938A56: lea     edx, [edx+eax+1Ch]
0x938A5A: lea     ebx, [ebx+0]
0x938A60: mov     eax, [edx]
0x938A62: mov     [esp+140h+var_128], eax
0x938A66: fcom    [esp+140h+var_128]
0x938A6A: fnstsw  ax
0x938A6C: test    ah, 5
0x938A6F: jnp     short loc_938A77
0x938A71: fstp    st
0x938A73: fld     [esp+140h+var_128]
0x938A77: sub     edx, 30h ; '0'
0x938A7A: dec     ecx
0x938A7B: jnz     short loc_938A60
0x938A7D: fld     dword ptr [esi+80h]
0x938A83: lea     ecx, [esp+140h+var_104+4]
0x938A87: fmul    dword ptr ds:0A43328h
0x938A8D: push    ecx
0x938A8E: fsubr   st, st(1)
0x938A90: fstp    [esp+144h+var_11C]
0x938A94: movss   xmm0, [esp+144h+var_11C]
0x938A9A: shufps  xmm0, xmm0, 0
0x938A9E: fstp    st
0x938AA0: movaps  [esp+144h+var_104+4], xmm0
0x938AA5: jmp     short loc_938AAE
0x938AA7: lea     edx, [esi+80h]
0x938AAD: push    edx
0x938AAE: mov     ecx, esi
0x938AB0: call    sub_9377C0
0x938AB5: test    eax, eax
0x938AB7: jnz     loc_9392D7
0x938ABD: mov     word ptr [esp+140h+var_128+2], ax
0x938AC2: lea     eax, [esp+80h]
0x938AC9: push    eax
0x938ACA: lea     ecx, [esp+144h+var_128]
0x938ACE: push    ecx
0x938ACF: push    ebx
0x938AD0: mov     ecx, esi
0x938AD2: call    sub_938190
0x938AD7: mov     cl, byte ptr [esp+140h+var_114]
0x938ADB: test    cl, cl
0x938ADD: mov     ecx, [esp+140h+var_88]
0x938AE4: mov     [esp+140h+var_118], eax
0x938AE8: jz      loc_938CEC
0x938AEE: test    eax, eax
0x938AF0: jz      loc_938CEC
0x938AF6: cmp     ecx, 2
0x938AF9: lea     eax, [ebx+30h]
0x938AFC: jg      short loc_938B17
0x938AFE: fld     [esp+140h+var_90]
0x938B05: movzx   edx, byte ptr [esp+140h+var_128]
0x938B0A: xorps   xmm0, xmm0
0x938B0D: fchs
0x938B0F: movaps  xmmword ptr [eax], xmm0
0x938B12: fstp    dword ptr [eax+edx*4]
0x938B15: jmp     short loc_938B58
0x938B17: cmp     ecx, 6
0x938B1A: jg      short loc_938B4D
0x938B1C: movzx   ecx, byte ptr [esp+140h+var_128]
0x938B21: fld     [esp+140h+var_90]
0x938B28: fchs
0x938B2A: sub     ecx, 2
0x938B2D: fstp    [esp+140h+var_11C]
0x938B31: movss   xmm0, [esp+140h+var_11C]
0x938B37: shl     ecx, 4
0x938B3A: movaps  xmm1, xmmword ptr [ecx+esi]
0x938B3E: movaps  xmm2, xmm0
0x938B41: shufps  xmm2, xmm0, 0
0x938B45: mulps   xmm2, xmm1
0x938B48: movaps  xmmword ptr [eax], xmm2
0x938B4B: jmp     short loc_938B58
0x938B4D: movaps  xmm0, [esp+140h+anonymous_1]
0x938B55: movaps  xmmword ptr [eax], xmm0
0x938B58: mov     cl, [ebx+23h]
0x938B5B: test    cl, cl
0x938B5D: jz      loc_938CEC
0x938B63: mov     edx, [esi+14h]
0x938B66: push    eax
0x938B67: push    edx
0x938B68: lea     ecx, [esp+148h+var_104+4]
0x938B6C: call    sub_88FE00
0x938B71: mov     eax, [esi+10h]
0x938B74: mov     ecx, [eax]
0x938B76: movzx   edi, byte ptr [ebx+21h]
0x938B7A: sub     ecx, eax
0x938B7C: sub     ecx, 30h ; '0'
0x938B7F: mov     eax, 2AAAAAABh
0x938B84: imul    ecx
0x938B86: sar     edx, 3
0x938B89: mov     eax, edx
0x938B8B: shr     eax, 1Fh
0x938B8E: add     eax, edx
0x938B90: sub     eax, edi
0x938B92: test    edi, edi
0x938B94: mov     [esp+140h+var_124], 0
0x938B9C: jle     loc_938C7C
0x938BA2: lea     eax, [eax+eax*2]
0x938BA5: shl     eax, 4
0x938BA8: mov     [esp+140h+var_120], eax
0x938BAC: lea     esp, [esp+0]
0x938BB0: mov     ecx, [esi+10h]
0x938BB3: mov     edx, [esp+140h+var_120]
0x938BB7: movaps  xmm0, xmmword ptr [edx+ecx+40h]
0x938BBC: mulps   xmm0, [esp+140h+var_104+4]
0x938BC1: movaps  xmm1, xmm0
0x938BC4: shufps  xmm1, xmm0, 55h ; 'U'
0x938BC8: movaps  xmm2, xmm0
0x938BCB: lea     eax, [esp+140h+var_11C]
0x938BCF: addss   xmm1, xmm0
0x938BD3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x938BD7: addss   xmm2, xmm1
0x938BDB: movss   dword ptr [eax], xmm2
0x938BDF: fld     [esp+140h+var_11C]
0x938BE3: fcomp   dword ptr ds:0AA1C80h
0x938BE9: fnstsw  ax
0x938BEB: test    ah, 5
0x938BEE: jp      short loc_938C5A
0x938BF0: mov     eax, [ecx]
0x938BF2: movaps  xmm0, xmmword ptr [eax-30h]
0x938BF6: sub     eax, 30h ; '0'
0x938BF9: lea     ecx, [edx+ecx+30h]
0x938BFD: movaps  xmmword ptr [ecx], xmm0
0x938C00: movaps  xmm0, xmmword ptr [eax+10h]
0x938C04: movaps  xmmword ptr [ecx+10h], xmm0
0x938C08: mov     dx, [eax+20h]
0x938C0C: mov     edi, eax
0x938C0E: mov     [ecx+20h], dx
0x938C12: lea     edx, [ecx+22h]
0x938C15: sub     edi, ecx
0x938C17: mov     eax, 0Eh
0x938C1C: lea     esp, [esp+0]
0x938C20: mov     cl, [edi+edx]
0x938C23: mov     [edx], cl
0x938C25: inc     edx
0x938C26: dec     eax
0x938C27: jnz     short loc_938C20
0x938C29: mov     edx, [esp+140h+var_124]
0x938C2D: cmp     byte ptr [ebx+edx*4], 6
0x938C31: ja      short loc_938C36
0x938C33: dec     byte ptr [ebx+20h]
0x938C36: mov     edi, [esp+140h+var_124]
0x938C3A: mov     ecx, [esi+0Ch]
0x938C3D: mov     eax, [ecx]
0x938C3F: xor     edx, edx
0x938C41: mov     dx, [ebx+edi*4+2]
0x938C46: push    edx
0x938C47: call    dword ptr [eax+10h]
0x938C4A: push    edi
0x938C4B: mov     ecx, ebx
0x938C4D: call    sub_9363C0
0x938C52: mov     eax, [esi+10h]
0x938C55: add     dword ptr [eax], 0FFFFFFD0h
0x938C58: jmp     short loc_938C70
0x938C5A: mov     ecx, [esp+140h+var_124]
0x938C5E: mov     eax, [esp+140h+var_120]
0x938C62: inc     ecx
0x938C63: add     eax, 30h ; '0'
0x938C66: mov     [esp+140h+var_124], ecx
0x938C6A: mov     [esp+140h+var_120], eax
0x938C6E: mov     edi, ecx
0x938C70: movzx   eax, byte ptr [ebx+21h]
0x938C74: cmp     edi, eax
0x938C76: jl      loc_938BB0
0x938C7C: cmp     byte ptr [ebx+21h], 2
0x938C80: jnb     short loc_938C88
0x938C82: mov     byte ptr [ebx+23h], 0
0x938C86: jmp     short loc_938CEC
0x938C88: movaps  xmm3, xmmword ptr [esi+40h]
0x938C8C: movaps  xmm1, xmmword ptr [ebx+30h]
0x938C90: movaps  xmm2, xmmword ptr [esi+20h]
0x938C94: movaps  xmm5, xmmword ptr [esi+30h]
0x938C98: movaps  xmm4, xmm3
0x938C9B: shufps  xmm4, xmm3, 44h ; 'D'
0x938C9F: movaps  xmm7, xmm3
0x938CA2: movaps  xmm0, xmm2
0x938CA5: shufps  xmm0, xmm5, 44h ; 'D'
0x938CA9: shufps  xmm7, xmm3, 0EEh ; 'î'
0x938CAD: shufps  xmm2, xmm5, 0EEh ; 'î'
0x938CB1: movaps  xmm5, xmm0
0x938CB4: movaps  xmm3, xmm1
0x938CB7: shufps  xmm3, xmm1, 55h ; 'U'
0x938CBB: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x938CBF: mulps   xmm5, xmm3
0x938CC2: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x938CC6: movaps  xmm3, xmm1
0x938CC9: movaps  xmm6, xmm1
0x938CCC: shufps  xmm3, xmm1, 0
0x938CD0: mulps   xmm0, xmm3
0x938CD3: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x938CD7: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x938CDB: mulps   xmm2, xmm6
0x938CDE: addps   xmm0, xmm5
0x938CE1: addps   xmm0, xmm2
0x938CE4: movaps  xmmword ptr [ebx+40h], xmm0
0x938CE8: mov     byte ptr [ebx+23h], 1
0x938CEC: cmp     [esp+140h+var_118], 2
0x938CF1: jnz     loc_9392D7
0x938CF7: mov     al, byte ptr [esp+140h+var_128]
0x938CFB: cmp     al, 6
0x938CFD: ja      loc_938DC7
0x938D03: cmp     al, 2
0x938D05: ja      short loc_938D14
0x938D07: mov     eax, [esi+18h]
0x938D0A: movaps  xmm0, [esp+140h+anonymous_0]
0x938D12: jmp     short loc_938D1F
0x938D14: mov     eax, [esi+14h]
0x938D17: movaps  xmm0, xmmword ptr [esp+80h]
0x938D1F: movaps  xmm3, xmmword ptr [eax+20h]
0x938D23: movaps  xmm1, xmmword ptr [eax+30h]
0x938D27: movaps  xmm2, xmm0
0x938D2A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x938D2E: mulps   xmm3, xmm2
0x938D31: movaps  xmm2, xmmword ptr [eax+10h]
0x938D35: addps   xmm3, xmm1
0x938D38: movaps  xmm1, xmm0
0x938D3B: shufps  xmm1, xmm0, 55h ; 'U'
0x938D3F: mulps   xmm2, xmm1
0x938D42: movaps  xmm1, xmm0
0x938D45: shufps  xmm1, xmm0, 0
0x938D49: movaps  xmm0, xmmword ptr [eax]
0x938D4C: mov     al, [ebx+21h]
0x938D4F: mulps   xmm0, xmm1
0x938D52: movaps  xmm1, xmm0
0x938D55: xor     ecx, ecx
0x938D57: test    al, al
0x938D59: addps   xmm1, xmm2
0x938D5C: addps   xmm1, xmm3
0x938D5F: jbe     short loc_938DC7
0x938D61: xor     edx, edx
0x938D63: cmp     byte ptr [ebx+ecx*4], 6
0x938D67: ja      short loc_938DBB
0x938D69: mov     eax, [esi+10h]
0x938D6C: fld     dword ptr [esi+0B0h]
0x938D72: movaps  xmm2, xmmword ptr [edx+eax+30h]
0x938D77: fld     st
0x938D79: fmul    st, st(1)
0x938D7B: movaps  xmm0, xmm1
0x938D7E: subps   xmm0, xmm2
0x938D81: mulps   xmm0, xmm0
0x938D84: fadd    dword ptr ds:0AA1D50h
0x938D8A: movaps  xmm2, xmm0
0x938D8D: shufps  xmm2, xmm0, 55h ; 'U'
0x938D91: movaps  xmm3, xmm0
0x938D94: lea     eax, [esp+140h+var_11C]
0x938D98: addss   xmm2, xmm0
0x938D9C: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x938DA0: addss   xmm3, xmm2
0x938DA4: movss   dword ptr [eax], xmm3
0x938DA8: fld     [esp+140h+var_11C]
0x938DAC: fcompp
0x938DAE: fnstsw  ax
0x938DB0: fstp    st
0x938DB2: test    ah, 41h
0x938DB5: jnp     loc_9392D7
0x938DBB: movzx   eax, byte ptr [ebx+21h]
0x938DBF: inc     ecx
0x938DC0: add     edx, 30h ; '0'
0x938DC3: cmp     ecx, eax
0x938DC5: jl      short loc_938D63
0x938DC7: cmp     byte ptr [ebx+21h], 8
0x938DCB: jnb     loc_9392D7
0x938DD1: mov     edx, [esi+4]
0x938DD4: mov     eax, [esi]
0x938DD6: lea     ecx, [esp+140h+var_128]
0x938DDA: push    ecx
0x938DDB: push    edx
0x938DDC: push    eax
0x938DDD: mov     ecx, ebx
0x938DDF: call    sub_936460
0x938DE4: mov     edi, eax
0x938DE6: test    edi, edi
0x938DE8: jl      loc_938EE8
0x938DEE: mov     ecx, [esi+10h]
0x938DF1: mov     edx, [ecx]
0x938DF3: mov     eax, [esp+140h+var_88]
0x938DFA: cmp     eax, 2
0x938DFD: mov     [esp+140h+var_124], edx
0x938E01: lea     ecx, [esp+140h+var_128]
0x938E05: jg      short loc_938E1A
0x938E07: lea     eax, [esp+80h]
0x938E0E: push    eax
0x938E0F: push    ecx
0x938E10: push    edx
0x938E11: mov     ecx, esi
0x938E13: call    sub_936C10
0x938E18: jmp     short loc_938E37
0x938E1A: cmp     eax, 6
0x938E1D: lea     eax, [esp+80h]
0x938E24: push    eax
0x938E25: push    ecx
0x938E26: mov     ecx, esi
0x938E28: push    edx
0x938E29: jg      short loc_938E32
0x938E2B: call    sub_936D70
0x938E30: jmp     short loc_938E37
0x938E32: call    sub_936E10
0x938E37: cmp     byte ptr [ebx+21h], 1
0x938E3B: jbe     short loc_938E94
0x938E3D: mov     ecx, [esi+10h]
0x938E40: mov     edx, [ecx]
0x938E42: mov     eax, [esp+140h+var_124]
0x938E46: movaps  xmm1, xmmword ptr [eax+10h]
0x938E4A: movaps  xmm0, xmmword ptr [edx-20h]
0x938E4E: sub     edx, 20h ; ' '
0x938E51: mulps   xmm0, xmm1
0x938E54: movaps  xmm1, xmm0
0x938E57: shufps  xmm1, xmm0, 55h ; 'U'
0x938E5B: movaps  xmm2, xmm0
0x938E5E: lea     eax, [esp+140h+var_11C]
0x938E62: addss   xmm1, xmm0
0x938E66: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x938E6A: addss   xmm2, xmm1
0x938E6E: movss   dword ptr [eax], xmm2
0x938E72: fld     [esp+140h+var_11C]
0x938E76: fcomp   dword ptr ds:0A2FAA8h
0x938E7C: fnstsw  ax
0x938E7E: test    ah, 41h
0x938E81: jp      short loc_938E94
0x938E83: push    edi
0x938E84: mov     ecx, ebx
0x938E86: call    sub_9363C0
0x938E8B: pop     edi
0x938E8C: pop     esi
0x938E8D: pop     ebx
0x938E8E: mov     esp, ebp
0x938E90: pop     ebp
0x938E91: retn    4
0x938E94: mov     eax, [esp+140h+var_124]
0x938E98: mov     ecx, [esi+0Ch]
0x938E9B: mov     edx, [ecx]
0x938E9D: push    eax
0x938E9E: mov     eax, [esi+8]
0x938EA1: push    eax
0x938EA2: mov     eax, [esi+4]
0x938EA5: push    eax
0x938EA6: mov     eax, [esi]
0x938EA8: push    eax
0x938EA9: call    dword ptr [edx+8]
0x938EAC: cmp     ax, 0FFFFh
0x938EB0: mov     [ebx+edi*4+2], ax
0x938EB5: jnz     short loc_938EC1
0x938EB7: push    edi
0x938EB8: mov     ecx, ebx
0x938EBA: call    sub_9363C0
0x938EBF: jmp     short loc_938EE8
0x938EC1: mov     eax, [esi+10h]
0x938EC4: add     dword ptr [eax], 30h ; '0'
0x938EC7: mov     cx, [ebx+edi*4+2]
0x938ECC: mov     eax, [esp+140h+var_124]
0x938ED0: mov     word ptr [esp+140h+var_128+2], cx
0x938ED5: mov     dx, [ebx+edi*4+2]
0x938EDA: mov     [eax+20h], dx
0x938EDE: cmp     byte ptr [esp+140h+var_128], 6
0x938EE3: ja      short loc_938EE8
0x938EE5: inc     byte ptr [ebx+20h]
0x938EE8: mov     al, [ebx+21h]
0x938EEB: cmp     al, 1
0x938EED: mov     ecx, [esp+140h+var_128]
0x938EF1: mov     [esp+140h+var_114], ecx
0x938EF5: jb      loc_9392D7
0x938EFB: mov     edi, [esi+10h]
0x938EFE: mov     ecx, [edi]
0x938F00: movzx   edx, al
0x938F03: sub     ecx, edi
0x938F05: mov     [esp+140h+var_11C], edx
0x938F09: sub     ecx, 30h ; '0'
0x938F0C: mov     eax, 2AAAAAABh
0x938F11: imul    ecx
0x938F13: mov     ecx, [esp+140h+var_11C]
0x938F17: sar     edx, 3
0x938F1A: mov     eax, edx
0x938F1C: shr     eax, 1Fh
0x938F1F: add     eax, edx
0x938F21: sub     eax, ecx
0x938F23: mov     ecx, [esi+14h]
0x938F26: movaps  xmm3, xmmword ptr [ecx]
0x938F29: movaps  xmm1, xmmword ptr [ecx+10h]
0x938F2D: movaps  xmm4, xmmword ptr [ecx+20h]
0x938F31: movaps  xmm0, xmm3
0x938F34: shufps  xmm0, xmm1, 44h ; 'D'
0x938F38: lea     edx, [eax+eax*2]
0x938F3B: mov     eax, [esi+18h]
0x938F3E: movaps  xmm6, xmmword ptr [eax]
0x938F41: movaps  xmm2, xmmword ptr [eax+20h]
0x938F45: movaps  xmm7, xmmword ptr [eax+10h]
0x938F49: shufps  xmm2, xmm2, 44h ; 'D'
0x938F4D: movaps  [esp+140h+var_104+4], xmm2
0x938F52: movaps  xmm1, xmm6
0x938F55: shufps  xmm1, xmm7, 44h ; 'D'
0x938F59: shl     edx, 4
0x938F5C: movaps  xmm2, xmmword ptr [edx+edi+40h]
0x938F61: movaps  xmm7, xmm2
0x938F64: shufps  xmm7, xmm2, 0AAh ; 'ª'
0x938F68: movaps  [esp+140h+anonymous_2], xmm7
0x938F6D: movaps  xmm7, xmm2
0x938F70: shufps  xmm7, xmm2, 55h ; 'U'
0x938F74: movaps  [esp+140h+var_D0], xmm7
0x938F79: movaps  xmm7, xmm2
0x938F7C: shufps  xmm7, xmm2, 0
0x938F80: movaps  xmm2, xmmword ptr [eax+20h]
0x938F84: movaps  xmmword ptr [esp+140h+var_F4+4], xmm7
0x938F89: movaps  xmm7, xmm2
0x938F8C: shufps  xmm7, xmm2, 0EEh ; 'î'
0x938F90: movaps  xmm2, xmmword ptr [eax+10h]
0x938F94: shufps  xmm6, xmm2, 0EEh ; 'î'
0x938F98: shufps  xmm6, xmm7, 88h ; 'ˆ'
0x938F9C: mulps   xmm6, [esp+140h+anonymous_2]
0x938FA1: movaps  xmm2, xmm6
0x938FA4: movaps  xmm6, xmm1
0x938FA7: shufps  xmm6, [esp+140h+var_104+4], 0DDh
0x938FAD: mulps   xmm6, [esp+140h+var_D0]
0x938FB2: shufps  xmm1, [esp+140h+var_104+4], var_80+8
0x938FB8: movaps  xmm7, xmm6
0x938FBB: movaps  xmm6, xmmword ptr [esp+140h+var_F4+4]
0x938FC0: mulps   xmm1, xmm6
0x938FC3: addps   xmm1, xmm7
0x938FC6: movaps  xmm7, xmmword ptr ds:0A965C0h
0x938FCD: addps   xmm1, xmm2
0x938FD0: movaps  xmm5, xmm4
0x938FD3: shufps  xmm5, xmm4, 44h ; 'D'
0x938FD7: movaps  xmm2, xmm4
0x938FDA: shufps  xmm2, xmm4, 0EEh ; 'î'
0x938FDE: movaps  xmm4, xmm2
0x938FE1: movaps  xmm2, xmmword ptr [ecx+10h]
0x938FE5: shufps  xmm3, xmm2, 0EEh ; 'î'
0x938FE9: movaps  xmm2, xmm0
0x938FEC: shufps  xmm0, xmm5, 88h ; 'ˆ'
0x938FF0: shufps  xmm3, xmm4, 88h ; 'ˆ'
0x938FF4: mulps   xmm3, [esp+140h+anonymous_2]
0x938FF9: shufps  xmm2, xmm5, 0DDh ; 'Ý'
0x938FFD: mulps   xmm2, [esp+140h+var_D0]
0x939002: mulps   xmm0, xmm6
0x939005: addps   xmm0, xmm2
0x939008: movaps  xmm2, xmmword ptr ds:0A372D0h
0x93900F: addps   xmm0, xmm3
0x939012: xorps   xmm0, xmm7
0x939015: movaps  xmm3, xmm0
0x939018: andps   xmm3, xmm2
0x93901B: movaps  xmmword ptr [esp+140h+var_F4+4], xmm1
0x939020: movaps  [esp+140h+var_104+4], xmm0
0x939025: movaps  [esp+140h+var_D0], xmm3
0x93902A: fld     dword ptr [esp+140h+var_D0]
0x93902E: movaps  xmm3, xmm1
0x939031: fcomp   dword ptr [esp+140h+var_D0+4]
0x939035: andps   xmm3, xmm2
0x939038: movaps  [esp+140h+anonymous_2], xmm3
0x93903D: fnstsw  ax
0x93903F: test    ah, 41h
0x939042: jnz     short loc_939054
0x939044: xor     edi, edi
0x939046: mov     [esp+140h+var_120], edi
0x93904A: mov     [esp+140h+var_114+8], 10h
0x939052: jmp     short loc_939068
0x939054: mov     [esp+140h+var_120], 1
0x93905C: mov     edi, [esp+140h+var_120]
0x939060: mov     [esp+140h+var_114+8], 20h ; ' '
0x939068: fld     dword ptr [esp+140h+var_D0+8]
0x93906C: fcomp   dword ptr [esp+edi*4+140h+var_D0]
0x939070: fnstsw  ax
0x939072: test    ah, 41h
0x939075: jnz     short loc_939088
0x939077: mov     edi, 2
0x93907C: mov     [esp+140h+var_120], edi
0x939080: mov     [esp+140h+var_114+8], 40h ; '@'
0x939088: fld     dword ptr [esp+140h+anonymous_2]
0x93908C: fcomp   dword ptr [esp+140h+anonymous_2+4]
0x939090: fnstsw  ax
0x939092: test    ah, 41h
0x939095: jnz     short loc_9390A3
0x939097: xor     ecx, ecx
0x939099: mov     [esp+140h+var_114+0Ch], 10h
0x9390A1: jmp     short loc_9390B0
0x9390A3: mov     ecx, 1
0x9390A8: mov     [esp+140h+var_114+0Ch], 20h ; ' '
0x9390B0: fld     dword ptr [esp+140h+anonymous_2+8]
0x9390B4: mov     [esp+140h+var_124], ecx
0x9390B8: fcomp   dword ptr [esp+ecx*4+140h+anonymous_2]
0x9390BC: fnstsw  ax
0x9390BE: test    ah, 41h
0x9390C1: jnz     short loc_9390D4
0x9390C3: mov     ecx, 2
0x9390C8: mov     [esp+140h+var_124], ecx
0x9390CC: mov     [esp+140h+var_114+0Ch], 40h ; '@'
0x9390D4: fld     dword ptr [esp+edi*4+140h+var_D0]
0x9390D8: fcomp   dword ptr ds:0AA1C84h
0x9390DE: fnstsw  ax
0x9390E0: test    ah, 5
0x9390E3: jnp     loc_9392D7
0x9390E9: fld     dword ptr [esp+ecx*4+140h+anonymous_2]
0x9390ED: fcomp   dword ptr ds:0AA1C84h
0x9390F3: fnstsw  ax
0x9390F5: test    ah, 5
0x9390F8: jnp     loc_9392D7
0x9390FE: fld     dword ptr [esi+edi*4+0C0h]
0x939105: movmskps ecx, xmm1
0x939108: and     cl, 7
0x93910B: fstp    [esp+140h+var_114+4]
0x93910F: mov     eax, [esp+140h+var_114+4]
0x939113: shr     eax, 1Ch
0x939116: shl     cl, 4
0x939119: and     al, 8
0x93911B: or      cl, al
0x93911D: mov     byte ptr [esp+140h+var_114+1], cl
0x939121: mov     ecx, [esp+140h+var_124]
0x939125: fld     dword ptr [esi+ecx*4+0D0h]
0x93912C: movmskps eax, xmm0
0x93912F: fstp    [esp+140h+var_114+4]
0x939133: mov     ecx, [esp+140h+var_114+4]
0x939137: and     al, 7
0x939139: shr     ecx, 1Ch
0x93913C: shl     al, 4
0x93913F: and     cl, 8
0x939142: or      al, cl
0x939144: mov     cl, byte ptr [esp+140h+var_124]
0x939148: mov     byte ptr [esp+140h+var_118+1], al
0x93914C: mov     al, byte ptr [esp+140h+var_120]
0x939150: mov     byte ptr [esp+140h+var_114], al
0x939154: mov     eax, [esp+140h+var_11C]
0x939158: add     cl, 4
0x93915B: test    eax, eax
0x93915D: mov     word ptr [esp+140h+var_118+2], 0
0x939164: mov     byte ptr [esp+140h+var_118], cl
0x939168: mov     [esp+140h+var_114+4], 3F800000h
0x939170: jle     short loc_93919B
0x939172: mov     eax, [esi+10h]
0x939175: lea     ecx, [edx+eax+4Ch]
0x939179: movzx   edx, byte ptr [ebx+21h]
0x93917D: lea     ecx, [ecx+0]
0x939180: fld     dword ptr [ecx]
0x939182: fcom    [esp+140h+var_114+4]
0x939186: fnstsw  ax
0x939188: test    ah, 5
0x93918B: jp      short loc_939193
0x93918D: fstp    [esp+140h+var_114+4]
0x939191: jmp     short loc_939195
0x939193: fstp    st
0x939195: add     ecx, 30h ; '0'
0x939198: dec     edx
0x939199: jnz     short loc_939180
0x93919B: mov     edi, [esp+140h+var_114+4]
0x93919F: mov     ecx, [esp+140h+var_114+0Ch]
0x9391A3: mov     edx, [esp+140h+var_114]
0x9391A7: push    edi; float
0x9391A8: push    ecx; int
0x9391A9: push    edx; int
0x9391AA: push    ebx; int
0x9391AB: mov     ecx, esi
0x9391AD: call    sub_936EC0
0x9391B2: mov     eax, [esp+140h+var_114+8]
0x9391B6: mov     ecx, [esp+140h+var_118]
0x9391BA: push    edi; float
0x9391BB: push    eax; int
0x9391BC: push    ecx; int
0x9391BD: push    ebx; int
0x9391BE: mov     ecx, esi
0x9391C0: call    sub_937190
0x9391C5: cmp     byte ptr [ebx+20h], 4
0x9391C9: jb      short loc_9391D8
0x9391CB: mov     byte ptr [ebx+22h], 1
0x9391CF: pop     edi
0x9391D0: pop     esi
0x9391D1: pop     ebx
0x9391D2: mov     esp, ebp
0x9391D4: pop     ebp
0x9391D5: retn    4
0x9391D8: mov     al, ds:0BA81CCh
0x9391DD: test    al, al
0x9391DF: jz      loc_9392C5
0x9391E5: mov     edx, [esp+140h+var_124]
0x9391E9: mov     edx, ds:0AA1C94h[edx*4]
0x9391F0: mov     ecx, [esp+140h+var_120]
0x9391F4: mov     eax, ds:0AA1C94h[ecx*4]
0x9391FB: mov     ecx, ds:0AA1C98h[ecx*4]
0x939202: movaps  xmm1, xmmword ptr ds:0A965C0h
0x939209: movaps  xmm0, xmmword ptr [esp+140h+var_F4+4]
0x93920E: mov     [esp+140h+var_120], edx
0x939212: mov     edx, [esp+140h+var_124]
0x939216: mov     edx, ds:0AA1C98h[edx*4]
0x93921D: push    edi; float
0x93921E: mov     [esp+144h+var_124], edx
0x939222: lea     edx, [esp+144h+var_F4+4]
0x939226: push    edx; int
0x939227: lea     edx, [esp+148h+var_104+4]
0x93922B: push    edx; int
0x93922C: mov     edx, [esp+14Ch+var_124]
0x939230: push    edx; int
0x939231: push    ecx; int
0x939232: mov     [esp+154h+var_114], ecx
0x939236: mov     ecx, [esp+154h+var_120]
0x93923A: push    ecx; int
0x93923B: push    eax; int
0x93923C: xorps   xmm0, xmm1
0x93923F: push    ebx; int
0x939240: mov     ecx, esi
0x939242: mov     [esp+160h+var_118], eax
0x939246: movaps  xmmword ptr [esp+160h+var_F4+4], xmm0
0x93924B: call    sub_9376E0
0x939250: mov     ecx, [esp+140h+var_120]
0x939254: push    edi; float
0x939255: lea     edx, [esp+144h+var_F4+4]
0x939259: push    edx; int
0x93925A: mov     edx, [esp+148h+var_114]
0x93925E: lea     eax, [esp+148h+var_104+4]
0x939262: push    eax; int
0x939263: mov     eax, [esp+14Ch+var_124]
0x939267: push    ecx; int
0x939268: mov     ecx, [esp+150h+var_118]
0x93926C: push    edx; int
0x93926D: push    eax; int
0x93926E: push    ecx; int
0x93926F: push    ebx; int
0x939270: mov     ecx, esi
0x939272: call    sub_9376E0
0x939277: mov     ecx, [esp+140h+var_124]
0x93927B: push    edi; float
0x93927C: lea     edx, [esp+144h+var_F4+4]
0x939280: push    edx; int
0x939281: mov     edx, [esp+148h+var_118]
0x939285: lea     eax, [esp+148h+var_104+4]
0x939289: push    eax; int
0x93928A: mov     eax, [esp+14Ch+var_120]
0x93928E: push    ecx; int
0x93928F: mov     ecx, [esp+150h+var_114]
0x939293: push    edx; int
0x939294: push    eax; int
0x939295: push    ecx; int
0x939296: push    ebx; int
0x939297: mov     ecx, esi
0x939299: call    sub_9376E0
0x93929E: mov     ecx, [esp+140h+var_120]
0x9392A2: push    edi; float
0x9392A3: lea     edx, [esp+144h+var_F4+4]
0x9392A7: push    edx; int
0x9392A8: mov     edx, [esp+148h+var_118]
0x9392AC: lea     eax, [esp+148h+var_104+4]
0x9392B0: push    eax; int
0x9392B1: mov     eax, [esp+14Ch+var_124]
0x9392B5: push    ecx; int
0x9392B6: mov     ecx, [esp+150h+var_114]
0x9392BA: push    edx; int
0x9392BB: push    eax; int
0x9392BC: push    ecx; int
0x9392BD: push    ebx; int
0x9392BE: mov     ecx, esi
0x9392C0: call    sub_9376E0
0x9392C5: mov     edx, [esp+140h+var_114+0Ch]
0x9392C9: mov     eax, [esp+140h+var_114+8]
0x9392CD: push    edx
0x9392CE: push    eax
0x9392CF: push    ebx
0x9392D0: mov     ecx, esi
0x9392D2: call    sub_9365A0
0x9392D7: pop     edi
0x9392D8: pop     esi
0x9392D9: pop     ebx
0x9392DA: mov     esp, ebp
0x9392DC: pop     ebp
0x9392DD: retn    4
