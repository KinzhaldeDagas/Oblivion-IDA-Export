0x8C4950: push    ebp
0x8C4951: mov     ebp, esp
0x8C4953: and     esp, 0FFFFFFF0h
0x8C4956: push    ecx
0x8C4957: push    ebx
0x8C4958: mov     ebx, [ebp+arg_0]
0x8C495B: push    esi
0x8C495C: mov     esi, ecx
0x8C495E: fld     dword ptr [esi+30h]
0x8C4961: push    edi
0x8C4962: fstp    dword ptr [ebx+8]
0x8C4965: movaps  xmm0, xmmword ptr [esi+20h]
0x8C4969: movaps  xmmword ptr [ebx+10h], xmm0
0x8C496D: mov     edi, [ebx+4]
0x8C4970: cmp     edi, [esi+10h]
0x8C4973: jz      short loc_8C49A9
0x8C4975: test    edi, edi
0x8C4977: jz      short loc_8C4995
0x8C4979: lea     eax, [edi+4]
0x8C497C: push    eax; lpAddend
0x8C497D: call    dword ptr ds:0A2807Ch
0x8C4983: test    eax, eax
0x8C4985: jnz     short loc_8C4995
0x8C4987: test    edi, edi
0x8C4989: jz      short loc_8C4995
0x8C498B: mov     edx, [edi]
0x8C498D: mov     eax, [edx]
0x8C498F: push    1
0x8C4991: mov     ecx, edi
0x8C4993: call    eax
0x8C4995: mov     eax, [esi+10h]
0x8C4998: test    eax, eax
0x8C499A: mov     [ebx+4], eax
0x8C499D: jz      short loc_8C49A9
0x8C499F: add     eax, 4
0x8C49A2: push    eax; lpAddend
0x8C49A3: call    dword ptr ds:0A28078h
0x8C49A9: pop     edi
0x8C49AA: pop     esi
0x8C49AB: pop     ebx
0x8C49AC: mov     esp, ebp
0x8C49AE: pop     ebp
0x8C49AF: retn    4
