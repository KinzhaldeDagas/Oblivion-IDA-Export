0x7204C0: push    esi
0x7204C1: mov     esi, ecx
0x7204C3: cmp     dword ptr [esi+3Ch], 0
0x7204C7: push    edi
0x7204C8: lea     edi, [esi+3Ch]
0x7204CB: jnz     short loc_7204EF
0x7204CD: cmp     dword ptr [esi+38h], 0
0x7204D1: jz      short loc_7204EF
0x7204D3: call    sub_71B280
0x7204D8: mov     ecx, [esi+38h]
0x7204DB: mov     edx, [eax]
0x7204DD: mov     edx, [edx+8]
0x7204E0: push    0
0x7204E2: push    ecx
0x7204E3: mov     ecx, eax
0x7204E5: call    edx
0x7204E7: push    eax; a2
0x7204E8: mov     ecx, edi; this
0x7204EA: call    NiSmartPointer_Set??
0x7204EF: pop     edi
0x7204F0: pop     esi
0x7204F1: retn
