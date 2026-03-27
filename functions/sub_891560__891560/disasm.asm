0x891560: push    ebp
0x891561: mov     ebp, esp
0x891563: and     esp, 0FFFFFFF0h
0x891566: sub     esp, 78h
0x891569: mov     eax, ds:0B30AACh
0x89156E: xor     eax, esp
0x891570: mov     [esp+78h+var_4], eax
0x891574: push    esi
0x891575: push    edi
0x891576: mov     edi, [ebp+a2]
0x891579: mov     esi, ecx
0x89157B: mov     ecx, [esi+364h]
0x891581: lea     eax, [esp+80h+var_50]
0x891585: push    eax
0x891586: call    sub_6848D0
0x89158B: lea     ecx, [esi+340h]
0x891591: push    ecx
0x891592: lea     edx, [esp+84h+var_50]
0x891596: push    edx
0x891597: lea     ecx, [esp+88h+var_60]
0x89159B: call    sub_88FE00
0x8915A0: movaps  xmm0, xmmword ptr [edi]
0x8915A3: mov     edi, [esi+8]
0x8915A6: test    edi, edi
0x8915A8: movaps  xmm1, [esp+80h+var_60]
0x8915AD: addps   xmm0, xmm1
0x8915B0: movaps  [esp+80h+var_70], xmm0
0x8915B5: jz      short loc_8915BE
0x8915B7: mov     ecx, esi
0x8915B9: call    sub_89F570
0x8915BE: lea     eax, [esp+80h+var_70]
0x8915C2: push    eax
0x8915C3: mov     ecx, edi
0x8915C5: call    sub_8AC080
0x8915CA: mov     ecx, esi
0x8915CC: call    sub_89F570
0x8915D1: mov     ecx, [esp+80h+var_4]
0x8915D5: pop     edi
0x8915D6: pop     esi
0x8915D7: xor     ecx, esp
0x8915D9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8915DE: mov     esp, ebp
0x8915E0: pop     ebp
0x8915E1: retn    4
