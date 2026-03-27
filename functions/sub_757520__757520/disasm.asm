0x757520: push    esi
0x757521: push    edi
0x757522: push    48h ; 'H'; Size
0x757524: mov     edi, ecx
0x757526: call    FormHeapAlloc
0x75752B: add     esp, 4
0x75752E: test    eax, eax
0x757530: jz      short loc_75753D
0x757532: mov     ecx, eax
0x757534: call    sub_7572B0
0x757539: mov     esi, eax
0x75753B: jmp     short loc_75753F
0x75753D: xor     esi, esi
0x75753F: mov     eax, [esp+8+arg_0]
0x757543: push    eax
0x757544: push    esi
0x757545: mov     ecx, edi
0x757547: call    sub_75E830
0x75754C: mov     ecx, [edi+30h]
0x75754F: mov     [esi+30h], ecx
0x757552: mov     edx, [edi+34h]
0x757555: mov     [esi+34h], edx
0x757558: mov     eax, [edi+38h]
0x75755B: mov     [esi+38h], eax
0x75755E: mov     edx, [edi+30h]
0x757561: lea     ecx, [esi+3Ch]
0x757564: mov     [ecx], edx
0x757566: mov     eax, [edi+34h]
0x757569: mov     [ecx+4], eax
0x75756C: mov     edx, [edi+38h]
0x75756F: mov     [ecx+8], edx
0x757572: call    sub_43F350
0x757577: fstp    st
0x757579: pop     edi
0x75757A: mov     eax, esi
0x75757C: pop     esi
0x75757D: retn    4
