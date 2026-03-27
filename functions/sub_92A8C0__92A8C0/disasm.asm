0x92A8C0: push    ebp
0x92A8C1: mov     ebp, esp
0x92A8C3: and     esp, 0FFFFFFF0h
0x92A8C6: push    ecx
0x92A8C7: mov     edx, [ebp+arg_0]
0x92A8CA: push    ebx
0x92A8CB: mov     ebx, [ebp+arg_8]
0x92A8CE: push    esi
0x92A8CF: push    edi
0x92A8D0: mov     edi, [ebp+arg_4]
0x92A8D3: push    ebx
0x92A8D4: mov     esi, ecx
0x92A8D6: mov     ecx, [esi+10h]
0x92A8D9: mov     eax, [ecx]
0x92A8DB: push    edi
0x92A8DC: push    edx
0x92A8DD: call    dword ptr [eax+28h]
0x92A8E0: test    edi, edi
0x92A8E2: jle     short loc_92A8F9
0x92A8E4: mov     eax, ebx
0x92A8E6: movaps  xmm1, xmmword ptr [eax]
0x92A8E9: movaps  xmm0, xmmword ptr [esi+20h]
0x92A8ED: addps   xmm1, xmm0
0x92A8F0: movaps  xmmword ptr [eax], xmm1
0x92A8F3: add     eax, 10h
0x92A8F6: dec     edi
0x92A8F7: jnz     short loc_92A8E6
0x92A8F9: pop     edi
0x92A8FA: pop     esi
0x92A8FB: pop     ebx
0x92A8FC: mov     esp, ebp
0x92A8FE: pop     ebp
0x92A8FF: retn    0Ch
