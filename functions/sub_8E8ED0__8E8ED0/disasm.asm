0x8E8ED0: push    ebp
0x8E8ED1: mov     ebp, esp
0x8E8ED3: and     esp, 0FFFFFFF0h
0x8E8ED6: sub     esp, 84h
0x8E8EDC: mov     edx, ds:0BA9DE4h
0x8E8EE2: push    ebx
0x8E8EE3: mov     ebx, ecx
0x8E8EE5: mov     ecx, large fs:2Ch
0x8E8EEC: mov     eax, [ecx+edx*4]
0x8E8EEF: push    esi
0x8E8EF0: mov     esi, [eax+1A4h]
0x8E8EF6: push    edi
0x8E8EF7: cmp     esi, [eax+1A8h]
0x8E8EFD: jnb     short loc_8E8F23
0x8E8EFF: mov     esi, eax
0x8E8F01: mov     ecx, [esi+1A4h]
0x8E8F07: mov     dword ptr [ecx], offset aTtrctransform; "TtrcTransform"
0x8E8F0D: rdtsc
0x8E8F0F: mov     [esp+90h+var_84], eax
0x8E8F13: mov     eax, [esp+90h+var_84]
0x8E8F17: mov     [ecx+4], eax
0x8E8F1A: add     ecx, 0Ch
0x8E8F1D: mov     [esi+1A4h], ecx
0x8E8F23: mov     edx, [ebp+arg_0]
0x8E8F26: movaps  xmm3, xmmword ptr [ebx+40h]
0x8E8F2A: movaps  xmm1, xmmword ptr [ebx+50h]
0x8E8F2E: movaps  xmm0, xmmword ptr [edx]
0x8E8F31: movaps  xmm2, xmmword ptr [ebx+20h]
0x8E8F35: movaps  xmm5, xmmword ptr [ebx+30h]
0x8E8F39: subps   xmm0, xmm1
0x8E8F3C: lea     eax, [ebx+20h]
0x8E8F3F: movaps  xmm4, xmm3
0x8E8F42: shufps  xmm4, xmm3, 44h ; 'D'
0x8E8F46: movaps  xmm7, xmm3
0x8E8F49: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8E8F4D: movaps  xmm1, xmm2
0x8E8F50: shufps  xmm1, xmm5, 44h ; 'D'
0x8E8F54: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8E8F58: movaps  xmm5, xmm1
0x8E8F5B: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8E8F5F: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8E8F63: movaps  xmm3, xmm0
0x8E8F66: shufps  xmm3, xmm0, 55h ; 'U'
0x8E8F6A: mulps   xmm5, xmm3
0x8E8F6D: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8E8F71: movaps  xmm3, xmm0
0x8E8F74: shufps  xmm3, xmm0, 0
0x8E8F78: mulps   xmm1, xmm3
0x8E8F7B: movaps  xmm3, xmmword ptr [eax+20h]
0x8E8F7F: addps   xmm1, xmm5
0x8E8F82: movaps  xmm5, xmmword ptr [eax+10h]
0x8E8F86: movaps  xmm6, xmm0
0x8E8F89: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8E8F8D: movaps  xmm0, xmmword ptr [edx+10h]
0x8E8F91: mulps   xmm2, xmm6
0x8E8F94: addps   xmm1, xmm2
0x8E8F97: movaps  xmm2, xmmword ptr [eax]
0x8E8F9A: mov     esi, edx
0x8E8F9C: mov     ecx, 0Ch
0x8E8FA1: lea     edi, [esp+90h+var_70]
0x8E8FA5: rep movsd
0x8E8FA7: mov     esi, [ebp+arg_4]
0x8E8FAA: mov     ecx, [esi+8]
0x8E8FAD: movaps  [esp+90h+var_70], xmm1
0x8E8FB2: movaps  xmm1, xmmword ptr [eax+30h]
0x8E8FB6: subps   xmm0, xmm1
0x8E8FB9: movaps  xmm4, xmm3
0x8E8FBC: shufps  xmm4, xmm3, 44h ; 'D'
0x8E8FC0: movaps  xmm7, xmm3
0x8E8FC3: movaps  xmm1, xmm2
0x8E8FC6: shufps  xmm1, xmm5, 44h ; 'D'
0x8E8FCA: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8E8FCE: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8E8FD2: movaps  xmm5, xmm1
0x8E8FD5: movaps  xmm3, xmm0
0x8E8FD8: shufps  xmm3, xmm0, 55h ; 'U'
0x8E8FDC: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8E8FE0: mulps   xmm5, xmm3
0x8E8FE3: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8E8FE7: movaps  xmm3, xmm0
0x8E8FEA: movaps  xmm6, xmm0
0x8E8FED: shufps  xmm3, xmm0, 0
0x8E8FF1: mulps   xmm1, xmm3
0x8E8FF4: push    eax
0x8E8FF5: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8E8FF9: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8E8FFD: mulps   xmm2, xmm6
0x8E9000: addps   xmm1, xmm5
0x8E9003: push    ecx
0x8E9004: addps   xmm1, xmm2
0x8E9007: lea     ecx, [esp+98h+var_40]
0x8E900B: movaps  [esp+98h+var_60], xmm1
0x8E9010: call    sub_8B1F70
0x8E9015: mov     ecx, [ebx+0Ch]
0x8E9018: lea     edx, [esp+90h+var_40]
0x8E901C: mov     [esp+90h+var_74], esi
0x8E9020: mov     [esp+90h+var_78], edx
0x8E9024: mov     eax, [esi+4]
0x8E9027: mov     [esp+90h+var_7C], eax
0x8E902B: mov     eax, [ebp+arg_8]
0x8E902E: mov     ebx, ecx
0x8E9030: mov     [esp+90h+var_80], ecx
0x8E9034: mov     edx, [ebx]
0x8E9036: push    eax
0x8E9037: lea     ecx, [esp+94h+var_80]
0x8E903B: push    ecx
0x8E903C: lea     eax, [esp+98h+var_70]
0x8E9040: push    eax
0x8E9041: mov     ecx, ebx
0x8E9043: call    dword ptr [edx+18h]
0x8E9046: mov     ecx, large fs:2Ch
0x8E904D: mov     edx, ds:0BA9DE4h
0x8E9053: mov     eax, [ecx+edx*4]
0x8E9056: mov     esi, [eax+1A4h]
0x8E905C: cmp     esi, [eax+1A8h]
0x8E9062: jnb     short loc_8E9088
0x8E9064: mov     esi, eax
0x8E9066: mov     ecx, [esi+1A4h]
0x8E906C: mov     dword ptr [ecx], offset aEt; "Et"
0x8E9072: rdtsc
0x8E9074: mov     [esp+90h+var_84], eax
0x8E9078: mov     edx, [esp+90h+var_84]
0x8E907C: mov     [ecx+4], edx
0x8E907F: add     ecx, 0Ch
0x8E9082: mov     [esi+1A4h], ecx
0x8E9088: pop     edi
0x8E9089: pop     esi
0x8E908A: pop     ebx
0x8E908B: mov     esp, ebp
0x8E908D: pop     ebp
0x8E908E: retn    0Ch
