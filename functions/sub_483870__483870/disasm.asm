0x483870: push    ebx
0x483871: mov     ebx, [esp+4+arg_8]
0x483875: test    ebx, ebx
0x483877: push    esi
0x483878: mov     esi, ecx
0x48387A: jz      short loc_4838CA
0x48387C: mov     eax, [esi+0Ch]
0x48387F: imul    eax, [esp+8+arg_0]
0x483884: add     eax, [esp+8+arg_4]
0x483888: mov     cl, [ebx]
0x48388A: shl     eax, 4
0x48388D: push    edi
0x48388E: mov     edi, eax
0x483890: mov     eax, [esi+10h]
0x483893: mov     [edi+eax], cl
0x483896: mov     edx, [esi+10h]
0x483899: mov     eax, [ebx+8]
0x48389C: mov     [edx+edi+8], eax
0x4838A0: mov     ecx, [esi+10h]
0x4838A3: mov     edx, [ebx+0Ch]
0x4838A6: mov     [ecx+edi+0Ch], edx
0x4838AA: mov     ecx, [esi+10h]
0x4838AD: lea     eax, [ebx+4]
0x4838B0: push    eax
0x4838B1: lea     ecx, [ecx+edi+4]
0x4838B5: call    sub_55E2A0
0x4838BA: mov     edx, [esi+10h]
0x4838BD: mov     al, [ebx+1]
0x4838C0: mov     [edx+edi+1], al
0x4838C4: pop     edi
0x4838C5: pop     esi
0x4838C6: pop     ebx
0x4838C7: retn    0Ch
0x4838CA: mov     eax, [esp+8+arg_4]
0x4838CE: mov     ecx, [esp+8+arg_0]
0x4838D2: mov     edx, [esi]
0x4838D4: mov     edx, [edx+1Ch]
0x4838D7: push    eax
0x4838D8: push    ecx
0x4838D9: mov     ecx, esi
0x4838DB: call    edx
0x4838DD: pop     esi
0x4838DE: pop     ebx
0x4838DF: retn    0Ch
