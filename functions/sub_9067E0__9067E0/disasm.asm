0x9067E0: push    ebp
0x9067E1: mov     ebp, esp
0x9067E3: and     esp, 0FFFFFFF0h
0x9067E6: sub     esp, 54h
0x9067E9: push    ebx
0x9067EA: push    esi
0x9067EB: mov     esi, [ebp+arg_0]
0x9067EE: mov     eax, [esi+8]
0x9067F1: push    edi
0x9067F2: mov     edi, [ebp+arg_4]
0x9067F5: mov     ecx, [edi+8]
0x9067F8: push    eax
0x9067F9: push    ecx
0x9067FA: lea     ecx, [esp+68h+var_40]
0x9067FE: call    sub_8B1FF0
0x906803: mov     ecx, [esi]
0x906805: mov     esi, [ebp+arg_C]
0x906808: mov     ebx, [ebp+arg_8]
0x90680B: mov     eax, [ebx+8]
0x90680E: mov     edx, [ecx]
0x906810: push    esi
0x906811: push    eax
0x906812: lea     eax, [esp+68h+var_40]
0x906816: push    eax
0x906817: call    dword ptr [edx+0Ch]
0x90681A: mov     ecx, [edi+8]
0x90681D: add     ebx, 10h
0x906820: push    ebx
0x906821: push    ecx
0x906822: lea     ecx, [esp+68h+var_5C+0Ch]
0x906826: call    sub_88FD90
0x90682B: movaps  xmm1, [esp+60h+var_5C+0Ch]
0x906830: movaps  xmm3, xmmword ptr [esi]
0x906833: xorps   xmm0, xmm0
0x906836: movaps  xmm2, xmm0
0x906839: minps   xmm2, xmm1
0x90683C: addps   xmm3, xmm2
0x90683F: movaps  xmmword ptr [esi], xmm3
0x906842: maxps   xmm0, xmm1
0x906845: movaps  xmm1, xmmword ptr [esi+10h]
0x906849: pop     edi
0x90684A: addps   xmm1, xmm0
0x90684D: movaps  xmmword ptr [esi+10h], xmm1
0x906851: pop     esi
0x906852: pop     ebx
0x906853: mov     esp, ebp
0x906855: pop     ebp
0x906856: retn
