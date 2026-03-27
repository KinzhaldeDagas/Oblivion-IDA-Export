0x92A940: push    ebp
0x92A941: mov     ebp, esp
0x92A943: and     esp, 0FFFFFFF0h
0x92A946: sub     esp, 14h
0x92A949: push    ebx
0x92A94A: mov     ebx, [ebp+arg_0]
0x92A94D: push    esi
0x92A94E: mov     esi, ecx
0x92A950: mov     ecx, [esi+10h]
0x92A953: mov     eax, [ecx]
0x92A955: push    edi
0x92A956: push    ebx
0x92A957: call    dword ptr [eax+20h]
0x92A95A: mov     ecx, [esi+10h]
0x92A95D: mov     edx, [ecx]
0x92A95F: mov     edi, eax
0x92A961: lea     eax, [esp+20h+var_8]
0x92A965: push    eax
0x92A966: call    dword ptr [edx+1Ch]
0x92A969: mov     eax, [esp+20h+var_8]
0x92A96D: test    eax, eax
0x92A96F: jle     short loc_92A987
0x92A971: movaps  xmm1, xmmword ptr [edi]
0x92A974: movaps  xmm0, xmmword ptr [esi+20h]
0x92A978: addps   xmm1, xmm0
0x92A97B: movaps  xmmword ptr [ebx], xmm1
0x92A97E: add     edi, 10h
0x92A981: add     ebx, 10h
0x92A984: dec     eax
0x92A985: jnz     short loc_92A971
0x92A987: mov     eax, [ebp+arg_0]
0x92A98A: pop     edi
0x92A98B: pop     esi
0x92A98C: pop     ebx
0x92A98D: mov     esp, ebp
0x92A98F: pop     ebp
0x92A990: retn    4
