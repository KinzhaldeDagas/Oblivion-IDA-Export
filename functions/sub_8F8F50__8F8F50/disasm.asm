0x8F8F50: push    ebp
0x8F8F51: mov     ebp, esp
0x8F8F53: and     esp, 0FFFFFFF0h
0x8F8F56: sub     esp, 0C4h
0x8F8F5C: mov     ecx, large fs:2Ch
0x8F8F63: mov     edx, ds:0BA9DE4h
0x8F8F69: mov     eax, [ecx+edx*4]
0x8F8F6C: push    ebx
0x8F8F6D: push    esi
0x8F8F6E: mov     esi, [eax+1A4h]
0x8F8F74: push    edi
0x8F8F75: cmp     esi, [eax+1A8h]
0x8F8F7B: jnb     short loc_8F8FA1
0x8F8F7D: mov     esi, eax
0x8F8F7F: mov     ecx, [esi+1A4h]
0x8F8F85: mov     dword ptr [ecx], offset aTtcapstri3; "TtCapsTri3"
0x8F8F8B: rdtsc
0x8F8F8D: mov     [esp+0D0h+var_BC], eax
0x8F8F91: mov     eax, [esp+0D0h+var_BC]
0x8F8F95: mov     [ecx+4], eax
0x8F8F98: add     ecx, 0Ch
0x8F8F9B: mov     [esi+1A4h], ecx
0x8F8FA1: mov     ecx, [ebp+arg_0]
0x8F8FA4: mov     eax, [ecx]
0x8F8FA6: mov     edi, [eax]
0x8F8FA8: mov     eax, [eax+8]
0x8F8FAB: mov     edx, [ecx+4]
0x8F8FAE: movaps  xmm1, xmmword ptr [eax]
0x8F8FB1: movaps  xmm2, xmmword ptr [eax+10h]
0x8F8FB5: movaps  xmm3, xmmword ptr [eax+20h]
0x8F8FB9: movaps  xmm4, xmmword ptr [eax+30h]
0x8F8FBD: mov     ebx, [edx]
0x8F8FBF: lea     ecx, [edi+10h]
0x8F8FC2: lea     eax, [esp+0D0h+var_B0]
0x8F8FC6: mov     [esp+0D0h+var_B4], 0
0x8F8FCE: sub     eax, ecx
0x8F8FD0: mov     esi, 2
0x8F8FD5: movaps  xmm0, xmmword ptr [ecx]
0x8F8FD8: movaps  xmm5, xmm0
0x8F8FDB: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F8FDF: movaps  xmm6, xmm3
0x8F8FE2: mulps   xmm6, xmm5
0x8F8FE5: movaps  xmm5, xmm0
0x8F8FE8: shufps  xmm5, xmm0, 55h ; 'U'
0x8F8FEC: movaps  xmm7, xmm2
0x8F8FEF: mulps   xmm7, xmm5
0x8F8FF2: movaps  xmm5, xmm0
0x8F8FF5: shufps  xmm5, xmm0, 0
0x8F8FF9: movaps  xmm0, xmm1
0x8F8FFC: mulps   xmm0, xmm5
0x8F8FFF: addps   xmm6, xmm4
0x8F9002: addps   xmm0, xmm7
0x8F9005: addps   xmm0, xmm6
0x8F9008: movaps  xmmword ptr [eax+ecx], xmm0
0x8F900C: add     ecx, 10h
0x8F900F: dec     esi
0x8F9010: jnz     short loc_8F8FD5
0x8F9012: mov     ecx, [edx+8]
0x8F9015: movaps  xmm1, xmmword ptr [ecx]
0x8F9018: movaps  xmm2, xmmword ptr [ecx+10h]
0x8F901C: movaps  xmm3, xmmword ptr [ecx+20h]
0x8F9020: movaps  xmm4, xmmword ptr [ecx+30h]
0x8F9024: lea     eax, [ebx+10h]
0x8F9027: lea     ecx, [esp+0D0h+var_90]
0x8F902B: sub     ecx, eax
0x8F902D: mov     edx, 3
0x8F9032: movaps  xmm0, xmmword ptr [eax]
0x8F9035: movaps  xmm5, xmm0
0x8F9038: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F903C: movaps  xmm6, xmm3
0x8F903F: mulps   xmm6, xmm5
0x8F9042: movaps  xmm5, xmm0
0x8F9045: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9049: movaps  xmm7, xmm2
0x8F904C: mulps   xmm7, xmm5
0x8F904F: movaps  xmm5, xmm0
0x8F9052: shufps  xmm5, xmm0, 0
0x8F9056: movaps  xmm0, xmm1
0x8F9059: mulps   xmm0, xmm5
0x8F905C: addps   xmm6, xmm4
0x8F905F: addps   xmm0, xmm7
0x8F9062: addps   xmm0, xmm6
0x8F9065: movaps  xmmword ptr [ecx+eax], xmm0
0x8F9069: add     eax, 10h
0x8F906C: dec     edx
0x8F906D: jnz     short loc_8F9032
0x8F906F: mov     edx, [ebp+arg_8]
0x8F9072: mov     eax, [ebx+0Ch]
0x8F9075: lea     ecx, [esp+0D0h+var_60]
0x8F9079: push    ecx; int
0x8F907A: push    1; int
0x8F907C: push    7F7FFFFFh; float
0x8F9081: add     edx, 8
0x8F9084: push    edx; int
0x8F9085: mov     edx, [edi+0Ch]
0x8F9088: push    eax; float
0x8F9089: lea     ecx, [esp+0E4h+var_90]
0x8F908D: push    ecx; int
0x8F908E: push    edx; float
0x8F908F: lea     eax, [esp+0ECh+var_B0]
0x8F9093: push    eax; int
0x8F9094: call    sub_8D0CA0
0x8F9099: fld     dword ptr [esp+0F0h+anonymous_0+0Ch]
0x8F90A0: fcomp   dword ptr [esp+0F0h+anonymous_1+0Ch]
0x8F90A7: add     esp, 20h
0x8F90AA: fnstsw  ax
0x8F90AC: test    ah, 5
0x8F90AF: jp      short loc_8F90C9
0x8F90B1: mov     ecx, [ebp+arg_C]
0x8F90B4: movaps  xmm0, [esp+0D0h+anonymous_0]
0x8F90BC: mov     [esp+0D0h+var_BC], 0
0x8F90C4: movaps  xmmword ptr [ecx], xmm0
0x8F90C7: jmp     short loc_8F90DF
0x8F90C9: mov     edx, [ebp+arg_C]
0x8F90CC: movaps  xmm0, [esp+0D0h+anonymous_1]
0x8F90D4: mov     [esp+0D0h+var_BC], 1
0x8F90DC: movaps  xmmword ptr [edx], xmm0
0x8F90DF: mov     edi, [ebp+arg_10]
0x8F90E2: mov     [esp+0D0h+var_B8], 0
0x8F90EA: lea     ebx, [esp+0D0h+var_60]
0x8F90EE: mov     edi, edi
0x8F90F0: mov     eax, [ebp+arg_8]
0x8F90F3: fld     dword ptr [ebx+1Ch]
0x8F90F6: mov     ecx, [esp+0D0h+var_B8]
0x8F90FA: mov     si, [eax+ecx*2]
0x8F90FE: mov     edx, [ebp+arg_0]
0x8F9101: mov     ecx, [edx+8]
0x8F9104: fcomp   dword ptr [ecx+8]
0x8F9107: fnstsw  ax
0x8F9109: test    ah, 5
0x8F910C: jp      loc_8F91B9
0x8F9112: cmp     si, 0FFFFh
0x8F9117: jnz     short loc_8F9170
0x8F9119: mov     eax, [edi+3040h]
0x8F911F: test    eax, eax
0x8F9121: jz      short loc_8F9154
0x8F9123: mov     ecx, [edx+0Ch]
0x8F9126: mov     edx, [ecx]
0x8F9128: push    1
0x8F912A: call    dword ptr [edx+0Ch]
0x8F912D: test    eax, eax
0x8F912F: jnz     loc_8F91D0
0x8F9135: mov     ecx, [edi+3040h]
0x8F913B: mov     eax, [ecx]
0x8F913D: lea     edx, [eax+0Ch]
0x8F9140: mov     [ecx], edx
0x8F9142: mov     ecx, [edi]
0x8F9144: mov     edx, [ebp+arg_8]
0x8F9147: mov     [eax], ecx
0x8F9149: mov     ecx, [ebp+arg_4]
0x8F914C: mov     [eax+8], edx
0x8F914F: mov     [eax+4], ecx
0x8F9152: jmp     short loc_8F9170
0x8F9154: mov     eax, [edx+0Ch]
0x8F9157: mov     esi, [eax]
0x8F9159: push    ebx
0x8F915A: push    ecx
0x8F915B: mov     ecx, [edx+4]
0x8F915E: mov     edx, [edx]
0x8F9160: push    ecx
0x8F9161: push    edx
0x8F9162: mov     ecx, eax
0x8F9164: call    dword ptr [esi+8]
0x8F9167: mov     esi, eax
0x8F9169: cmp     si, 0FFFFh
0x8F916E: jz      short loc_8F91D0
0x8F9170: mov     eax, [edi]
0x8F9172: mov     edx, [esp+0D0h+var_B4]
0x8F9176: movaps  xmm0, xmmword ptr [ebx]
0x8F9179: inc     edx
0x8F917A: lea     ecx, [eax+30h]
0x8F917D: mov     [edi], ecx
0x8F917F: mov     ecx, [esp+0D0h+var_BC]
0x8F9183: mov     [esp+0D0h+var_B4], edx
0x8F9187: mov     edx, [esp+0D0h+var_B8]
0x8F918B: cmp     edx, ecx
0x8F918D: movaps  xmmword ptr [eax], xmm0
0x8F9190: movaps  xmm0, xmmword ptr [ebx+10h]
0x8F9194: movaps  xmmword ptr [eax+10h], xmm0
0x8F9198: mov     [eax+20h], si
0x8F919C: jnz     short loc_8F91D0
0x8F919E: mov     ecx, [edi+3040h]
0x8F91A4: test    ecx, ecx
0x8F91A6: jz      short loc_8F91D0
0x8F91A8: mov     ecx, [ecx+4]
0x8F91AB: mov     [ecx], eax
0x8F91AD: mov     eax, [edi+3040h]
0x8F91B3: add     dword ptr [eax+4], 4
0x8F91B7: jmp     short loc_8F91D0
0x8F91B9: cmp     si, 0FFFFh
0x8F91BE: jz      short loc_8F91D0
0x8F91C0: mov     edx, [edx+0Ch]
0x8F91C3: mov     eax, [edx]
0x8F91C5: push    esi
0x8F91C6: mov     ecx, edx
0x8F91C8: call    dword ptr [eax+10h]
0x8F91CB: mov     esi, 0FFFFh
0x8F91D0: mov     eax, [esp+0D0h+var_B8]
0x8F91D4: mov     ecx, [ebp+arg_8]
0x8F91D7: mov     [ecx+eax*2], si
0x8F91DB: inc     eax
0x8F91DC: add     ebx, 20h ; ' '
0x8F91DF: cmp     eax, 3
0x8F91E2: mov     [esp+0D0h+var_B8], eax
0x8F91E6: jl      loc_8F90F0
0x8F91EC: mov     dl, byte ptr [esp+0D0h+var_B4]
0x8F91F0: mov     eax, [ebp+arg_4]
0x8F91F3: mov     ecx, large fs:2Ch
0x8F91FA: mov     [eax+2], dl
0x8F91FD: mov     edx, ds:0BA9DE4h
0x8F9203: mov     eax, [ecx+edx*4]
0x8F9206: mov     esi, [eax+1A4h]
0x8F920C: cmp     esi, [eax+1A8h]
0x8F9212: jnb     short loc_8F9238
0x8F9214: mov     esi, eax
0x8F9216: mov     ecx, [esi+1A4h]
0x8F921C: mov     dword ptr [ecx], offset aEt; "Et"
0x8F9222: rdtsc
0x8F9224: mov     [esp+0D0h+var_BC], eax
0x8F9228: mov     edx, [esp+0D0h+var_BC]
0x8F922C: mov     [ecx+4], edx
0x8F922F: add     ecx, 0Ch
0x8F9232: mov     [esi+1A4h], ecx
0x8F9238: mov     eax, [ebp+arg_8]
0x8F923B: pop     edi
0x8F923C: pop     esi
0x8F923D: add     eax, 20h ; ' '
0x8F9240: pop     ebx
0x8F9241: mov     esp, ebp
0x8F9243: pop     ebp
0x8F9244: retn
