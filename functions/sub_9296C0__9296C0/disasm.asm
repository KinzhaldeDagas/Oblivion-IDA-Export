0x9296C0: push    ebp
0x9296C1: mov     ebp, esp
0x9296C3: and     esp, 0FFFFFFF0h
0x9296C6: sub     esp, 14h
0x9296C9: push    ebx
0x9296CA: mov     eax, 7F7FFFFFh
0x9296CF: push    esi
0x9296D0: mov     esi, [ebp+arg_8]
0x9296D3: mov     [esi], eax
0x9296D5: mov     [esi+4], eax
0x9296D8: mov     [esi+8], eax
0x9296DB: xor     ebx, ebx
0x9296DD: mov     [esi+0Ch], ebx
0x9296E0: mov     eax, 0FF7FFFFFh
0x9296E5: mov     [esi+10h], eax
0x9296E8: mov     [esi+14h], eax
0x9296EB: push    edi
0x9296EC: mov     [esi+18h], eax
0x9296EF: mov     edi, ecx
0x9296F1: mov     [esi+1Ch], ebx
0x9296F4: cmp     [edi+14h], ebx
0x9296F7: jle     short loc_929743
0x9296F9: mov     [esp+20h+var_14], ebx
0x9296FD: lea     ecx, [ecx+0]
0x929700: mov     eax, [edi+10h]
0x929703: mov     edx, [esp+20h+var_14]
0x929707: mov     ecx, [ebp+arg_0]
0x92970A: add     eax, edx
0x92970C: push    eax
0x92970D: push    ecx
0x92970E: lea     ecx, [esp+28h+var_10]
0x929712: call    sub_88FCC0
0x929717: movaps  xmm0, [esp+20h+var_10]
0x92971C: movaps  xmm1, xmmword ptr [esi]
0x92971F: mov     ecx, [esp+20h+var_14]
0x929723: minps   xmm1, xmm0
0x929726: movaps  xmmword ptr [esi], xmm1
0x929729: movaps  xmm1, xmmword ptr [esi+10h]
0x92972D: maxps   xmm1, xmm0
0x929730: movaps  xmmword ptr [esi+10h], xmm1
0x929734: mov     eax, [edi+14h]
0x929737: inc     ebx
0x929738: add     ecx, 10h
0x92973B: cmp     ebx, eax
0x92973D: mov     [esp+20h+var_14], ecx
0x929741: jl      short loc_929700
0x929743: fld     [ebp+arg_4]
0x929746: movaps  xmm1, xmmword ptr [esi]
0x929749: fadd    dword ptr [edi+34h]
0x92974C: pop     edi
0x92974D: fstp    [esp+1Ch+var_14]
0x929751: movss   xmm0, [esp+1Ch+var_14]
0x929757: shufps  xmm0, xmm0, 0
0x92975B: subps   xmm1, xmm0
0x92975E: movaps  xmmword ptr [esi], xmm1
0x929761: movaps  xmm1, xmmword ptr [esi+10h]
0x929765: addps   xmm1, xmm0
0x929768: movaps  xmmword ptr [esi+10h], xmm1
0x92976C: pop     esi
0x92976D: pop     ebx
0x92976E: mov     esp, ebp
0x929770: pop     ebp
0x929771: retn    0Ch
