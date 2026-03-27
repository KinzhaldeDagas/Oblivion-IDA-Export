0x906090: push    ebp
0x906091: mov     ebp, esp
0x906093: and     esp, 0FFFFFFF0h
0x906096: sub     esp, 0E4h
0x90609C: mov     ecx, large fs:2Ch
0x9060A3: mov     edx, ds:0BA9DE4h
0x9060A9: mov     eax, [ecx+edx*4]
0x9060AC: push    ebx
0x9060AD: push    esi
0x9060AE: mov     esi, [eax+1A4h]
0x9060B4: push    edi
0x9060B5: cmp     esi, [eax+1A8h]
0x9060BB: jnb     short loc_9060E1
0x9060BD: mov     esi, eax
0x9060BF: mov     ecx, [esi+1A4h]
0x9060C5: mov     dword ptr [ecx], offset aTtmopp; "TtMopp"
0x9060CB: rdtsc
0x9060CD: mov     dword ptr [esp+0F0h+var_EC+8], eax
0x9060D1: mov     eax, dword ptr [esp+0F0h+var_EC+8]
0x9060D5: mov     [ecx+4], eax
0x9060D8: add     ecx, 0Ch
0x9060DB: mov     [esi+1A4h], ecx
0x9060E1: mov     ebx, [ebp+arg_0]
0x9060E4: mov     ecx, [ebx+8]
0x9060E7: mov     edi, [ebp+arg_4]
0x9060EA: mov     edx, [edi+8]
0x9060ED: push    ecx
0x9060EE: push    edx
0x9060EF: lea     ecx, [esp+0F8h+var_40]
0x9060F6: call    sub_8B1FF0
0x9060FB: mov     esi, [ebp+arg_8]
0x9060FE: mov     ecx, [ebx]
0x906100: mov     eax, [ecx]
0x906102: lea     edx, [esp+0F0h+var_D0]
0x906106: push    edx
0x906107: mov     edx, [esi+8]
0x90610A: push    edx
0x90610B: lea     edx, [esp+0F8h+var_40]
0x906112: push    edx
0x906113: call    dword ptr [eax+0Ch]
0x906116: mov     ecx, [edi+8]
0x906119: lea     eax, [esi+10h]
0x90611C: push    eax
0x90611D: push    ecx
0x90611E: lea     ecx, [esp+0F8h+var_EC+0Ch]
0x906122: call    sub_88FD90
0x906127: movaps  xmm2, [esp+0F0h+anonymous_0]
0x90612C: movaps  xmm5, xmmword ptr ds:0A6DFE0h
0x906133: mov     edx, [esi+8]
0x906136: mov     eax, [ebp+arg_10]
0x906139: mov     ecx, [ebp+arg_C]
0x90613C: mov     dword ptr [esp+0F0h+var_EC+8], 3F000000h
0x906144: movss   xmm1, dword ptr [esp+0F0h+var_EC+8]
0x90614A: movaps  xmm0, xmm1
0x90614D: shufps  xmm0, xmm1, 0
0x906151: movaps  xmm3, xmm0
0x906154: mulps   xmm3, xmm2
0x906157: movaps  xmm4, xmm3
0x90615A: movaps  xmm3, [esp+0F0h+var_D0]
0x90615F: subps   xmm5, xmm0
0x906162: movaps  xmm0, xmm5
0x906165: mulps   xmm0, xmm3
0x906168: addps   xmm0, xmm4
0x90616B: movaps  xmm4, [esp+0F0h+var_EC+0Ch]
0x906170: movaps  [esp+0F0h+anonymous_1], xmm0
0x906175: subps   xmm2, xmm3
0x906178: addps   xmm0, xmm4
0x90617B: push    eax
0x90617C: movaps  [esp+0F4h+anonymous_2], xmm0
0x906181: mov     dword ptr [esp+0F4h+var_EC+8], edx
0x906185: movss   xmm0, dword ptr [esp+0F4h+var_EC+8]
0x90618B: movaps  xmm3, xmm1
0x90618E: shufps  xmm3, xmm1, 0
0x906192: push    ecx
0x906193: lea     edx, [esp+0F8h+anonymous_1]
0x906197: shufps  xmm0, xmm0, 0
0x90619B: mulps   xmm3, xmm2
0x90619E: addps   xmm3, xmm0
0x9061A1: push    edx
0x9061A2: lea     ecx, [esp+0FCh+var_70]
0x9061A9: mov     [esp+0FCh+var_7C], ebx
0x9061B0: mov     [esp+0FCh+var_78], edi
0x9061B7: movaps  [esp+0FCh+anonymous_3], xmm3
0x9061BC: mov     [esp+0FCh+var_80], esi
0x9061C0: call    sub_940A30
0x9061C5: mov     ecx, large fs:2Ch
0x9061CC: mov     edx, ds:0BA9DE4h
0x9061D2: mov     eax, [ecx+edx*4]
0x9061D5: mov     esi, [eax+1A4h]
0x9061DB: cmp     esi, [eax+1A8h]
0x9061E1: jnb     short loc_906207
0x9061E3: mov     esi, eax
0x9061E5: mov     ecx, [esi+1A4h]
0x9061EB: mov     dword ptr [ecx], offset aEt; "Et"
0x9061F1: rdtsc
0x9061F3: mov     dword ptr [esp+0F0h+var_EC+8], eax
0x9061F7: mov     eax, dword ptr [esp+0F0h+var_EC+8]
0x9061FB: mov     [ecx+4], eax
0x9061FE: add     ecx, 0Ch
0x906201: mov     [esi+1A4h], ecx
0x906207: pop     edi
0x906208: pop     esi
0x906209: pop     ebx
0x90620A: mov     esp, ebp
0x90620C: pop     ebp
0x90620D: retn
