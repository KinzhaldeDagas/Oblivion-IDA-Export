0x9568A0: push    ebp
0x9568A1: mov     ebp, esp
0x9568A3: and     esp, 0FFFFFFF0h
0x9568A6: push    ecx
0x9568A7: push    ebx
0x9568A8: push    esi
0x9568A9: push    edi
0x9568AA: mov     ebx, ecx
0x9568AC: mov     ecx, ds:0BA7D98h
0x9568B2: mov     eax, [ebx+0Ch]
0x9568B5: mov     edx, [ecx]
0x9568B7: push    25h ; '%'
0x9568B9: push    30h ; '0'
0x9568BB: mov     [esp+18h+var_4], eax
0x9568BF: call    dword ptr [edx+10h]
0x9568C2: mov     edi, eax
0x9568C4: mov     eax, [esp+10h+var_4]
0x9568C8: lea     esi, [edi+20h]
0x9568CB: mov     word ptr [edi+4], 30h ; '0'
0x9568D1: mov     word ptr [edi+6], 1
0x9568D7: mov     dword ptr [edi], offset ??_7hkMoppCode@@6B@; const hkMoppCode::`vftable'
0x9568DD: mov     dword ptr [esi], 0
0x9568E3: mov     dword ptr [esi+4], 0
0x9568EA: mov     dword ptr [esi+8], 80000000h
0x9568F1: xorps   xmm0, xmm0
0x9568F4: movaps  xmmword ptr [edi+10h], xmm0
0x9568F8: mov     ecx, [esi+8]
0x9568FB: and     ecx, 3FFFFFFFh
0x956901: cmp     ecx, eax
0x956903: jge     short loc_956915
0x956905: push    1
0x956907: push    eax
0x956908: push    esi
0x956909: call    sub_8A6E40
0x95690E: mov     eax, [esp+1Ch+var_4]
0x956912: add     esp, 0Ch
0x956915: mov     ecx, [esi+8]
0x956918: and     ecx, 3FFFFFFFh
0x95691E: cmp     ecx, eax
0x956920: jge     short loc_95693A
0x956922: add     ecx, ecx
0x956924: cmp     eax, ecx
0x956926: jge     short loc_95692A
0x956928: mov     eax, ecx
0x95692A: push    1
0x95692C: push    eax
0x95692D: push    esi
0x95692E: call    sub_8A6E40
0x956933: mov     eax, [esp+1Ch+var_4]
0x956937: add     esp, 0Ch
0x95693A: mov     [esi+4], eax
0x95693D: mov     edx, [ebx+10h]
0x956940: mov     ecx, [ebx+8]
0x956943: push    eax
0x956944: sub     edx, [ebx+0Ch]
0x956947: mov     eax, [esi]
0x956949: add     edx, ecx
0x95694B: push    edx
0x95694C: push    eax
0x95694D: call    sub_8B1890
0x956952: mov     ecx, ds:0BA7D98h
0x956958: mov     eax, [ebx+10h]
0x95695B: mov     edx, [ecx]
0x95695D: add     esp, 0Ch
0x956960: push    eax
0x956961: call    dword ptr [edx+4]
0x956964: mov     ecx, [esp+10h+var_4]
0x956968: mov     eax, edi
0x95696A: pop     edi
0x95696B: pop     esi
0x95696C: mov     dword ptr [ebx+0Ch], 0
0x956973: mov     [ebx+8], ecx
0x956976: pop     ebx
0x956977: mov     esp, ebp
0x956979: pop     ebp
0x95697A: retn
