0x471930: push    esi
0x471931: push    edi
0x471932: mov     edi, [esp+8+arg_0]
0x471936: lea     eax, [edi+4]
0x471939: push    eax; lpAddend
0x47193A: mov     esi, ecx
0x47193C: call    dword ptr ds:0A28078h
0x471942: mov     esi, [esi+4]
0x471945: mov     edx, [esi]
0x471947: mov     eax, [edx+4]
0x47194A: mov     ecx, esi
0x47194C: call    eax
0x47194E: mov     [eax+8], edi
0x471951: mov     dword ptr [eax], 0
0x471957: mov     ecx, [esi+8]
0x47195A: mov     [eax+4], ecx
0x47195D: mov     ecx, [esi+8]
0x471960: test    ecx, ecx
0x471962: jz      short loc_471972
0x471964: mov     [ecx], eax
0x471966: add     dword ptr [esi+0Ch], 1
0x47196A: pop     edi
0x47196B: mov     [esi+8], eax
0x47196E: pop     esi
0x47196F: retn    4
0x471972: add     dword ptr [esi+0Ch], 1
0x471976: pop     edi
0x471977: mov     [esi+4], eax
0x47197A: mov     [esi+8], eax
0x47197D: pop     esi
0x47197E: retn    4
