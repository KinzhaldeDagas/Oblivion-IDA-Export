0x936EC0: push    ebp
0x936EC1: mov     ebp, esp
0x936EC3: and     esp, 0FFFFFFF0h
0x936EC6: sub     esp, 54h
0x936EC9: push    ebx
0x936ECA: push    esi
0x936ECB: mov     esi, [ebp+arg_0]
0x936ECE: mov     eax, offset aP0; "P0`"
0x936ED3: push    edi
0x936ED4: mov     edi, ecx
0x936ED6: mov     [esp+60h+var_4C], eax
0x936EDA: lea     ebx, [ebx+0]
0x936EE0: movzx   eax, word ptr [eax]
0x936EE3: mov     ebx, [ebp+arg_8]
0x936EE6: mov     ecx, eax
0x936EE8: and     ecx, ebx
0x936EEA: test    cx, cx
0x936EED: jnz     loc_937170
0x936EF3: mov     ecx, [ebp+arg_4]
0x936EF6: mov     [esp+60h+var_54], ecx
0x936EFA: xor     al, ch
0x936EFC: mov     cl, ch
0x936EFE: and     cl, 0Fh
0x936F01: or      al, cl
0x936F03: mov     cl, al
0x936F05: movzx   eax, byte ptr [esi+21h]
0x936F09: dec     eax
0x936F0A: mov     byte ptr [esp+60h+var_54+1], cl
0x936F0E: js      short loc_936F26
0x936F10: mov     dl, byte ptr [esp+60h+var_54]
0x936F14: cmp     [esi+eax*4], dl
0x936F17: jnz     short loc_936F23
0x936F19: cmp     [esi+eax*4+1], cl
0x936F1D: jz      loc_937170
0x936F23: dec     eax
0x936F24: jns     short loc_936F14
0x936F26: lea     edx, [esp+60h+var_54]
0x936F2A: push    edx
0x936F2B: lea     eax, [esp+64h+var_40]
0x936F2F: push    eax
0x936F30: mov     ecx, edi
0x936F32: call    sub_936B70
0x936F37: movaps  xmm0, [esp+60h+var_40]
0x936F3C: movaps  xmm2, xmmword ptr ds:0A372D0h
0x936F43: movaps  xmm1, xmmword ptr [edi+90h]
0x936F4A: movaps  xmm3, xmm0
0x936F4D: andps   xmm3, xmm2
0x936F50: cmpltps xmm3, xmm1
0x936F54: movmskps ecx, xmm3
0x936F57: and     ecx, 7
0x936F5A: cmp     cl, 7
0x936F5D: jnz     loc_937170
0x936F63: mov     eax, [esp+60h+var_8]
0x936F67: fld     [esp+60h+var_10]
0x936F6B: fmul    dword ptr [esp+eax*4+60h+var_40]
0x936F6F: fsub    dword ptr [edi+eax*4+60h]
0x936F73: fst     [esp+60h+var_C]
0x936F77: fld     [ebp+arg_C]
0x936F7A: fsub    dword ptr ds:0AA1D50h
0x936F80: fxch    st(1)
0x936F82: fcompp
0x936F84: fnstsw  ax
0x936F86: test    ah, 1
0x936F89: jnz     loc_937170
0x936F8F: mov     al, byte ptr [esp+60h+var_54]
0x936F93: cmp     al, 6
0x936F95: ja      loc_937054
0x936F9B: cmp     al, 2
0x936F9D: ja      short loc_936FA9
0x936F9F: mov     eax, [edi+18h]
0x936FA2: movaps  xmm0, [esp+60h+var_30]
0x936FA7: jmp     short loc_936FAC
0x936FA9: mov     eax, [edi+14h]
0x936FAC: movaps  xmm3, xmmword ptr [eax+20h]
0x936FB0: movaps  xmm1, xmmword ptr [eax+30h]
0x936FB4: movaps  xmm2, xmm0
0x936FB7: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936FBB: mulps   xmm3, xmm2
0x936FBE: movaps  xmm2, xmmword ptr [eax+10h]
0x936FC2: addps   xmm3, xmm1
0x936FC5: movaps  xmm1, xmm0
0x936FC8: shufps  xmm1, xmm0, 55h ; 'U'
0x936FCC: mulps   xmm2, xmm1
0x936FCF: movaps  xmm1, xmm0
0x936FD2: shufps  xmm1, xmm0, 0
0x936FD6: movaps  xmm0, xmmword ptr [eax]
0x936FD9: mov     al, [esi+21h]
0x936FDC: mulps   xmm0, xmm1
0x936FDF: movaps  xmm1, xmm0
0x936FE2: xor     ecx, ecx
0x936FE4: test    al, al
0x936FE6: addps   xmm1, xmm2
0x936FE9: addps   xmm1, xmm3
0x936FEC: jbe     short loc_937054
0x936FEE: xor     edx, edx
0x936FF0: cmp     byte ptr [esi+ecx*4], 6
0x936FF4: ja      short loc_937048
0x936FF6: mov     eax, [edi+10h]
0x936FF9: fld     dword ptr [edi+0B0h]
0x936FFF: movaps  xmm2, xmmword ptr [eax+edx+30h]
0x937004: fld     st
0x937006: fmul    st, st(1)
0x937008: movaps  xmm0, xmm1
0x93700B: subps   xmm0, xmm2
0x93700E: mulps   xmm0, xmm0
0x937011: fadd    dword ptr ds:0AA1D50h
0x937017: movaps  xmm2, xmm0
0x93701A: shufps  xmm2, xmm0, 55h ; 'U'
0x93701E: movaps  xmm3, xmm0
0x937021: lea     eax, [esp+60h+var_48]
0x937025: addss   xmm2, xmm0
0x937029: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93702D: addss   xmm3, xmm2
0x937031: movss   dword ptr [eax], xmm3
0x937035: fld     [esp+60h+var_48]
0x937039: fcompp
0x93703B: fnstsw  ax
0x93703D: fstp    st
0x93703F: test    ah, 41h
0x937042: jnp     loc_937170
0x937048: movzx   eax, byte ptr [esi+21h]
0x93704C: inc     ecx
0x93704D: add     edx, 30h ; '0'
0x937050: cmp     ecx, eax
0x937052: jl      short loc_936FF0
0x937054: cmp     byte ptr [esi+21h], 8
0x937058: jnb     loc_937170
0x93705E: mov     edx, [edi+4]
0x937061: mov     eax, [edi]
0x937063: lea     ecx, [esp+60h+var_54]
0x937067: push    ecx
0x937068: push    edx
0x937069: push    eax
0x93706A: mov     ecx, esi
0x93706C: call    sub_936460
0x937071: test    eax, eax
0x937073: mov     [esp+60h+var_50], eax
0x937077: jl      loc_937170
0x93707D: mov     eax, [esp+60h+var_8]
0x937081: cmp     eax, 2
0x937084: mov     ecx, [edi+10h]
0x937087: mov     ebx, [ecx]
0x937089: jg      short loc_93709F
0x93708B: lea     edx, [esp+60h+var_40]
0x93708F: push    edx
0x937090: lea     eax, [esp+64h+var_54]
0x937094: push    eax
0x937095: push    ebx
0x937096: mov     ecx, edi
0x937098: call    sub_936C10
0x93709D: jmp     short loc_9370CA
0x93709F: cmp     eax, 6
0x9370A2: jg      short loc_9370B8
0x9370A4: lea     ecx, [esp+60h+var_40]
0x9370A8: push    ecx
0x9370A9: lea     edx, [esp+64h+var_54]
0x9370AD: push    edx
0x9370AE: push    ebx
0x9370AF: mov     ecx, edi
0x9370B1: call    sub_936D70
0x9370B6: jmp     short loc_9370CA
0x9370B8: lea     eax, [esp+60h+var_40]
0x9370BC: push    eax
0x9370BD: lea     ecx, [esp+64h+var_54]
0x9370C1: push    ecx
0x9370C2: push    ebx
0x9370C3: mov     ecx, edi
0x9370C5: call    sub_936E10
0x9370CA: cmp     byte ptr [esi+21h], 1
0x9370CE: jbe     short loc_937120
0x9370D0: mov     edx, [edi+10h]
0x9370D3: mov     eax, [edx]
0x9370D5: movaps  xmm1, xmmword ptr [ebx+10h]
0x9370D9: movaps  xmm0, xmmword ptr [eax-20h]
0x9370DD: sub     eax, 20h ; ' '
0x9370E0: mulps   xmm0, xmm1
0x9370E3: movaps  xmm1, xmm0
0x9370E6: shufps  xmm1, xmm0, 55h ; 'U'
0x9370EA: movaps  xmm2, xmm0
0x9370ED: addss   xmm1, xmm0
0x9370F1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9370F5: lea     ecx, [esp+60h+var_44]
0x9370F9: addss   xmm2, xmm1
0x9370FD: movss   dword ptr [ecx], xmm2
0x937101: fld     [esp+60h+var_44]
0x937105: fcomp   dword ptr ds:0A2FAA8h
0x93710B: fnstsw  ax
0x93710D: test    ah, 41h
0x937110: jp      short loc_937120
0x937112: mov     edx, [esp+60h+var_50]
0x937116: push    edx
0x937117: mov     ecx, esi
0x937119: call    sub_9363C0
0x93711E: jmp     short loc_937170
0x937120: mov     edx, [edi+8]
0x937123: mov     ecx, [edi+0Ch]
0x937126: mov     eax, [ecx]
0x937128: push    ebx
0x937129: push    edx
0x93712A: mov     edx, [edi+4]
0x93712D: push    edx
0x93712E: mov     edx, [edi]
0x937130: push    edx
0x937131: call    dword ptr [eax+8]
0x937134: cmp     ax, 0FFFFh
0x937138: mov     ecx, [esp+60h+var_50]
0x93713C: mov     [esi+ecx*4+2], ax
0x937141: jnz     short loc_93714D
0x937143: push    ecx
0x937144: mov     ecx, esi
0x937146: call    sub_9363C0
0x93714B: jmp     short loc_937170
0x93714D: mov     eax, [edi+10h]
0x937150: add     dword ptr [eax], 30h ; '0'
0x937153: mov     ax, [esi+ecx*4+2]
0x937158: mov     word ptr [esp+60h+var_54+2], ax
0x93715D: mov     cx, [esi+ecx*4+2]
0x937162: mov     [ebx+20h], cx
0x937166: cmp     byte ptr [esp+60h+var_54], 6
0x93716B: ja      short loc_937170
0x93716D: inc     byte ptr [esi+20h]
0x937170: mov     eax, [esp+60h+var_4C]
0x937174: add     eax, 2
0x937177: cmp     eax, offset unk_AA1D4E
0x93717C: mov     [esp+60h+var_4C], eax
0x937180: jl      loc_936EE0
0x937186: pop     edi
0x937187: pop     esi
0x937188: pop     ebx
0x937189: mov     esp, ebp
0x93718B: pop     ebp
0x93718C: retn    10h
