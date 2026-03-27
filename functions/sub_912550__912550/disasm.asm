0x912550: push    ebp
0x912551: mov     ebp, esp
0x912553: and     esp, 0FFFFFFF0h
0x912556: sub     esp, 64h
0x912559: mov     eax, [ebp+arg_0]
0x91255C: mov     ecx, [ebp+arg_4]
0x91255F: push    ebx
0x912560: mov     ebx, [ebp+arg_10]
0x912563: push    esi
0x912564: push    edi
0x912565: mov     edi, [eax]
0x912567: add     edi, 4
0x91256A: mov     [eax], edi
0x91256C: mov     edx, [ebx+28h]
0x91256F: mov     eax, edi
0x912571: mov     esi, [eax]
0x912573: mov     eax, [ecx]
0x912575: mov     [esp+70h+var_58], edx
0x912579: lea     edx, [eax+10h]
0x91257C: mov     [ecx], edx
0x91257E: fld     dword ptr [eax]
0x912580: call    __ftol2
0x912585: mov     ecx, [ebp+arg_8]
0x912588: mov     edx, [ecx+34h]
0x91258B: mov     edi, [edx+eax*4]
0x91258E: lea     eax, [esi+2]
0x912591: mov     esi, [ebp+arg_C]
0x912594: movaps  xmm0, xmmword ptr [esi+10h]
0x912598: movaps  xmm2, xmmword ptr [esi]
0x91259B: shl     eax, 4
0x91259E: add     eax, esi
0x9125A0: test    edi, edi
0x9125A2: mov     ecx, [eax]
0x9125A4: mov     dword ptr [esp+70h+var_50], ecx
0x9125A8: mov     edx, [eax+4]
0x9125AB: mov     dword ptr [esp+70h+var_50+4], edx
0x9125AF: mov     ecx, [eax+8]
0x9125B2: mov     dword ptr [esp+70h+var_50+8], ecx
0x9125B6: mov     edx, [eax+0Ch]
0x9125B9: subps   xmm2, xmm0
0x9125BC: lea     eax, [esi+10h]
0x9125BF: movaps  xmm0, xmm2
0x9125C2: mov     dword ptr [esp+70h+var_50+0Ch], edx
0x9125C6: movaps  xmm1, [esp+70h+var_50]
0x9125CB: mulps   xmm0, xmm1
0x9125CE: movaps  xmm1, xmm0
0x9125D1: shufps  xmm1, xmm0, 55h ; 'U'
0x9125D5: movaps  xmm2, xmm0
0x9125D8: addss   xmm1, xmm0
0x9125DC: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9125E0: lea     ecx, [esp+70h+var_54]
0x9125E4: addss   xmm2, xmm1
0x9125E8: movss   dword ptr [ecx], xmm2
0x9125EC: jz      loc_912674
0x9125F2: mov     ecx, [ebp+arg_14]
0x9125F5: lea     edx, [esp+70h+var_38]
0x9125F9: push    edx
0x9125FA: mov     edx, [ecx]
0x9125FC: push    edx
0x9125FD: push    ebx
0x9125FE: push    eax
0x9125FF: lea     eax, [esp+80h+var_50]
0x912603: push    eax
0x912604: mov     [esp+84h+var_28], 0
0x91260C: mov     [esp+84h+var_24], 0
0x912614: call    sub_8F1190
0x912619: mov     ecx, [esi+0B8h]
0x91261F: mov     eax, [esp+84h+var_58]
0x912623: mov     edx, [eax+ecx*8]
0x912626: mov     [esp+84h+var_28], edx
0x91262A: mov     eax, [eax+ecx*8+4]
0x91262E: mov     ecx, [esp+84h+var_54]
0x912632: mov     edx, [edi]
0x912634: add     esp, 14h
0x912637: mov     [esp+70h+var_24], eax
0x91263B: mov     [esp+70h+var_34], ecx
0x91263F: lea     eax, [esp+70h+var_1C]
0x912643: push    eax
0x912644: lea     ecx, [esp+74h+var_38]
0x912648: push    ecx
0x912649: mov     ecx, edi
0x91264B: mov     [esp+78h+var_20], 0
0x912653: mov     [esp+78h+var_30], 0
0x91265B: mov     [esp+78h+var_2C], ebx
0x91265F: call    dword ptr [edx+8]
0x912662: mov     edx, [ebp+arg_14]
0x912665: push    edx
0x912666: lea     eax, [esp+74h+var_1C]
0x91266A: push    ebx
0x91266B: push    eax
0x91266C: call    sub_8F1010
0x912671: add     esp, 0Ch
0x912674: mov     eax, [esi+0B8h]
0x91267A: inc     eax
0x91267B: pop     edi
0x91267C: mov     [esi+0B8h], eax
0x912682: pop     esi
0x912683: pop     ebx
0x912684: mov     esp, ebp
0x912686: pop     ebp
0x912687: retn    18h
