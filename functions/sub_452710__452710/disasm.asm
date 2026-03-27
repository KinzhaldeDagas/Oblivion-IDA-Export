0x452710: push    ebx
0x452711: mov     ebx, [esp+4+arg_0]
0x452715: push    ebp
0x452716: push    esi
0x452717: mov     esi, ecx
0x452719: mov     eax, [esi]
0x45271B: mov     edx, [eax+4]
0x45271E: push    edi
0x45271F: push    ebx
0x452720: call    edx
0x452722: mov     ebp, eax
0x452724: mov     eax, [esi+8]
0x452727: mov     edi, [eax+ebp*4]
0x45272A: test    edi, edi
0x45272C: jz      short loc_452749
0x45272E: mov     edi, edi
0x452730: movzx   eax, byte ptr [edi+4]
0x452734: mov     edx, [esi]
0x452736: mov     edx, [edx+8]
0x452739: push    eax
0x45273A: push    ebx
0x45273B: mov     ecx, esi
0x45273D: call    edx
0x45273F: test    al, al
0x452741: jnz     short loc_45277D
0x452743: mov     edi, [edi]
0x452745: test    edi, edi
0x452747: jnz     short loc_452730
0x452749: mov     eax, [esi]
0x45274B: mov     edx, [eax+14h]
0x45274E: mov     ecx, esi
0x452750: call    edx
0x452752: mov     ecx, [esp+10h+arg_4]
0x452756: push    ecx
0x452757: mov     edi, eax
0x452759: mov     eax, [esi]
0x45275B: mov     edx, [eax+0Ch]
0x45275E: push    ebx
0x45275F: push    edi
0x452760: mov     ecx, esi
0x452762: call    edx
0x452764: mov     eax, [esi+8]
0x452767: mov     ecx, [eax+ebp*4]
0x45276A: mov     [edi], ecx
0x45276C: mov     edx, [esi+8]
0x45276F: mov     [edx+ebp*4], edi
0x452772: add     dword ptr [esi+0Ch], 1
0x452776: pop     edi
0x452777: pop     esi
0x452778: pop     ebp
0x452779: pop     ebx
0x45277A: retn    8
0x45277D: mov     eax, [esi]
0x45277F: mov     edx, [eax+10h]
0x452782: push    edi
0x452783: mov     ecx, esi
0x452785: call    edx
0x452787: mov     ecx, [esp+10h+arg_4]
0x45278B: mov     eax, [esi]
0x45278D: mov     edx, [eax+0Ch]
0x452790: push    ecx
0x452791: push    ebx
0x452792: push    edi
0x452793: mov     ecx, esi
0x452795: call    edx
0x452797: pop     edi
0x452798: pop     esi
0x452799: pop     ebp
0x45279A: pop     ebx
0x45279B: retn    8
