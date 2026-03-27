0x590810: sub     esp, 8
0x590813: push    ebx
0x590814: mov     ebx, [esp+0Ch+arg_0]
0x590818: push    ebp
0x590819: push    esi
0x59081A: push    2
0x59081C: lea     eax, [esp+18h+arg_0]
0x590820: mov     [esp+18h+var_4], ecx
0x590824: push    eax
0x590825: mov     ecx, ebx
0x590827: call    sub_708560
0x59082C: mov     eax, [esp+14h+arg_0]
0x590830: test    eax, eax
0x590832: jz      short loc_590852
0x590834: mov     esi, eax
0x590836: add     eax, 4
0x590839: push    eax; lpAddend
0x59083A: call    dword ptr ds:0A2807Ch
0x590840: test    eax, eax
0x590842: jnz     short loc_590852
0x590844: test    esi, esi
0x590846: jz      short loc_590852
0x590848: mov     edx, [esi]
0x59084A: mov     eax, [edx]
0x59084C: push    1
0x59084E: mov     ecx, esi
0x590850: call    eax
0x590852: push    0
0x590854: lea     ecx, [esp+18h+arg_0]
0x590858: push    ecx
0x590859: mov     ecx, ebx
0x59085B: call    sub_708560
0x590860: mov     esi, [esp+14h+arg_0]
0x590864: test    esi, esi
0x590866: jz      short loc_590884
0x590868: lea     edx, [esi+4]
0x59086B: push    edx; lpAddend
0x59086C: call    dword ptr ds:0A2807Ch
0x590872: test    eax, eax
0x590874: jnz     short loc_590884
0x590876: test    esi, esi
0x590878: jz      short loc_590884
0x59087A: mov     eax, [esi]
0x59087C: mov     edx, [eax]
0x59087E: push    1
0x590880: mov     ecx, esi
0x590882: call    edx
0x590884: lea     esi, [ebx+0ACh]
0x59088A: mov     ecx, esi
0x59088C: call    sub_4784A0
0x590891: mov     ecx, esi
0x590893: call    sub_477F90
0x590898: xor     ebp, ebp
0x59089A: cmp     [ebx+0B8h], bp
0x5908A1: jbe     loc_59095C
0x5908A7: push    edi
0x5908A8: jmp     short loc_5908B0
0x5908AA: align 10h
0x5908B0: movzx   eax, word ptr [ebx+0B6h]
0x5908B7: cmp     eax, ebp
0x5908B9: jbe     loc_590949
0x5908BF: mov     ecx, [ebx+0B0h]
0x5908C5: mov     esi, [ecx+ebp*4]
0x5908C8: test    esi, esi
0x5908CA: jz      short loc_590949
0x5908CC: push    2
0x5908CE: lea     edx, [esp+1Ch+arg_0]
0x5908D2: push    edx
0x5908D3: mov     ecx, esi
0x5908D5: call    sub_708560
0x5908DA: mov     eax, [esp+18h+arg_0]
0x5908DE: test    eax, eax
0x5908E0: jz      short loc_590900
0x5908E2: mov     edi, eax
0x5908E4: add     eax, 4
0x5908E7: push    eax; lpAddend
0x5908E8: call    dword ptr ds:0A2807Ch
0x5908EE: test    eax, eax
0x5908F0: jnz     short loc_590900
0x5908F2: test    edi, edi
0x5908F4: jz      short loc_590900
0x5908F6: mov     eax, [edi]
0x5908F8: mov     edx, [eax]
0x5908FA: push    1
0x5908FC: mov     ecx, edi
0x5908FE: call    edx
0x590900: push    0
0x590902: lea     eax, [esp+1Ch+var_8]
0x590906: push    eax
0x590907: mov     ecx, esi
0x590909: call    sub_708560
0x59090E: mov     edi, [esp+18h+var_8]
0x590912: test    edi, edi
0x590914: jz      short loc_590932
0x590916: lea     ecx, [edi+4]
0x590919: push    ecx; lpAddend
0x59091A: call    dword ptr ds:0A2807Ch
0x590920: test    eax, eax
0x590922: jnz     short loc_590932
0x590924: test    edi, edi
0x590926: jz      short loc_590932
0x590928: mov     edx, [edi]
0x59092A: mov     eax, [edx]
0x59092C: push    1
0x59092E: mov     ecx, edi
0x590930: call    eax
0x590932: mov     edx, [esi]
0x590934: mov     eax, [edx+8]
0x590937: mov     ecx, esi
0x590939: call    eax
0x59093B: test    eax, eax
0x59093D: jz      short loc_590949
0x59093F: mov     ecx, [esp+18h+var_4]
0x590943: push    eax
0x590944: call    sub_590810
0x590949: movzx   ecx, word ptr [ebx+0B8h]
0x590950: add     ebp, 1
0x590953: cmp     ebp, ecx
0x590955: jb      loc_5908B0
0x59095B: pop     edi
0x59095C: pop     esi
0x59095D: pop     ebp
0x59095E: pop     ebx
0x59095F: add     esp, 8
0x590962: retn    4
