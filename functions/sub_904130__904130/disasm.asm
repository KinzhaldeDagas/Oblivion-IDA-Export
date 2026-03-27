0x904130: push    ebp
0x904131: mov     ebp, esp
0x904133: and     esp, 0FFFFFFF0h
0x904136: sub     esp, 0D4h
0x90413C: mov     edx, ds:0BA9DE4h
0x904142: push    ebx
0x904143: mov     [esp+0D8h+var_C4], ecx
0x904147: mov     ecx, large fs:2Ch
0x90414E: mov     eax, [ecx+edx*4]
0x904151: push    esi
0x904152: mov     esi, [eax+1A4h]
0x904158: push    edi
0x904159: cmp     esi, [eax+1A8h]
0x90415F: jnb     short loc_904185
0x904161: mov     esi, eax
0x904163: mov     ecx, [esi+1A4h]
0x904169: mov     dword ptr [ecx], offset aTttransform; "TtTransform"
0x90416F: rdtsc
0x904171: mov     [esp+0E0h+var_C8], eax
0x904175: mov     eax, [esp+0E0h+var_C8]
0x904179: mov     [ecx+4], eax
0x90417C: add     ecx, 0Ch
0x90417F: mov     [esi+1A4h], ecx
0x904185: mov     ebx, [ebp+arg_0]
0x904188: mov     edi, [ebx]
0x90418A: mov     ecx, [ebx+8]
0x90418D: mov     [esp+0E0h+var_C8], edi
0x904191: add     edi, 20h ; ' '
0x904194: push    edi
0x904195: push    ecx
0x904196: lea     ecx, [esp+0E8h+var_B0]
0x90419A: call    sub_8B1F70
0x90419F: mov     esi, [ebx+8]
0x9041A2: mov     eax, [esp+0E0h+var_C8]
0x9041A6: movaps  xmm0, xmmword ptr [esi+40h]
0x9041AA: add     eax, 10h
0x9041AD: push    eax
0x9041AE: lea     edx, [esi+60h]
0x9041B1: movaps  [esp+0E4h+var_70], xmm0
0x9041B6: movaps  xmm0, xmmword ptr [esi+50h]
0x9041BA: push    edx
0x9041BB: lea     ecx, [esp+0E8h+var_50]
0x9041C2: movaps  [esp+0E8h+var_60], xmm0
0x9041CA: call    sub_889470
0x9041CF: mov     eax, [esp+0E0h+var_C8]
0x9041D3: add     eax, 10h
0x9041D6: push    eax
0x9041D7: lea     eax, [esi+70h]
0x9041DA: push    eax
0x9041DB: lea     ecx, [esp+0E8h+var_40]
0x9041E2: call    sub_889470
0x9041E7: movaps  xmm3, xmmword ptr [edi+20h]
0x9041EB: movaps  xmm1, xmmword ptr [edi+30h]
0x9041EF: movaps  xmm0, xmmword ptr [esi+80h]
0x9041F6: movaps  xmm2, xmmword ptr [edi]
0x9041F9: movaps  xmm5, xmmword ptr [edi+10h]
0x9041FD: mov     eax, [esp+0E0h+var_C8]
0x904201: subps   xmm0, xmm1
0x904204: movaps  xmm4, xmm3
0x904207: shufps  xmm4, xmm3, 44h ; 'D'
0x90420B: movaps  xmm7, xmm3
0x90420E: movaps  xmm1, xmm2
0x904211: shufps  xmm1, xmm5, 44h ; 'D'
0x904215: shufps  xmm7, xmm3, 0EEh ; 'î'
0x904219: shufps  xmm2, xmm5, 0EEh ; 'î'
0x90421D: movaps  xmm5, xmm1
0x904220: movaps  xmm3, xmm0
0x904223: shufps  xmm3, xmm0, 55h ; 'U'
0x904227: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x90422B: mulps   xmm5, xmm3
0x90422E: movaps  xmm3, xmm0
0x904231: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x904235: movaps  xmm6, xmm0
0x904238: shufps  xmm3, xmm0, 0
0x90423C: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x904240: mulps   xmm1, xmm3
0x904243: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x904247: mulps   xmm2, xmm6
0x90424A: addps   xmm1, xmm5
0x90424D: addps   xmm1, xmm2
0x904250: movaps  [esp+0E0h+var_30], xmm1
0x904258: movaps  xmm0, xmmword ptr [esi+90h]
0x90425F: movaps  [esp+0E0h+var_20], xmm0
0x904267: mov     ecx, [esi+0A0h]
0x90426D: mov     [esp+0E0h+var_10], ecx
0x904274: mov     [esp+0E0h+var_B4], ebx
0x904278: lea     edx, [esp+0E0h+var_B0]
0x90427C: mov     [esp+0E0h+var_B8], edx
0x904280: mov     ecx, [ebx+4]
0x904283: mov     eax, [eax+0Ch]
0x904286: mov     edx, [esp+0E0h+var_C4]
0x90428A: mov     [esp+0E0h+var_BC], ecx
0x90428E: mov     ecx, [edx+0Ch]
0x904291: mov     edx, [ebp+arg_C]
0x904294: push    edx
0x904295: mov     edx, [ebp+arg_8]
0x904298: push    edx
0x904299: mov     edx, [ebp+arg_4]
0x90429C: push    edx
0x90429D: lea     edx, [esp+0ECh+var_C0]
0x9042A1: mov     [esp+0ECh+var_C0], eax
0x9042A5: mov     eax, [ecx]
0x9042A7: push    edx
0x9042A8: call    dword ptr [eax+14h]
0x9042AB: mov     ecx, large fs:2Ch
0x9042B2: mov     edx, ds:0BA9DE4h
0x9042B8: mov     eax, [ecx+edx*4]
0x9042BB: mov     esi, [eax+1A4h]
0x9042C1: cmp     esi, [eax+1A8h]
0x9042C7: jnb     short loc_9042ED
0x9042C9: mov     esi, eax
0x9042CB: mov     ecx, [esi+1A4h]
0x9042D1: mov     dword ptr [ecx], offset aEt; "Et"
0x9042D7: rdtsc
0x9042D9: mov     [esp+0E0h+var_C4], eax
0x9042DD: mov     eax, [esp+0E0h+var_C4]
0x9042E1: mov     [ecx+4], eax
0x9042E4: add     ecx, 0Ch
0x9042E7: mov     [esi+1A4h], ecx
0x9042ED: pop     edi
0x9042EE: pop     esi
0x9042EF: pop     ebx
0x9042F0: mov     esp, ebp
0x9042F2: pop     ebp
0x9042F3: retn    10h
