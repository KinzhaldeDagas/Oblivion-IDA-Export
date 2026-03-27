0x5EE660: push    ebx
0x5EE661: push    esi
0x5EE662: push    edi
0x5EE663: mov     edi, ecx
0x5EE665: mov     eax, [edi]
0x5EE667: mov     edx, [eax+168h]
0x5EE66D: call    edx
0x5EE66F: test    eax, eax
0x5EE671: mov     esi, [esp+0Ch+arg_0]
0x5EE675: mov     ecx, ds:0B3F9A8h
0x5EE67B: mov     edx, ds:0B3F9ACh
0x5EE681: mov     [esi], ecx
0x5EE683: mov     ecx, ds:0B3F9B0h
0x5EE689: mov     [esi+4], edx
0x5EE68C: mov     [esi+8], ecx
0x5EE68F: jz      short loc_5EE69E
0x5EE691: push    0
0x5EE693: mov     ecx, eax
0x5EE695: call    sub_477EC0
0x5EE69A: test    eax, eax
0x5EE69C: jnz     short loc_5EE6E9
0x5EE69E: mov     edx, [edi]
0x5EE6A0: mov     eax, [edx+154h]
0x5EE6A6: mov     ecx, edi
0x5EE6A8: call    eax
0x5EE6AA: test    eax, eax
0x5EE6AC: jz      short loc_5EE713
0x5EE6AE: push    offset stru_B3CAC0
0x5EE6B3: mov     ecx, eax
0x5EE6B5: call    sub_700010
0x5EE6BA: test    eax, eax
0x5EE6BC: jz      short loc_5EE713
0x5EE6BE: mov     ebx, [eax+7Ch]
0x5EE6C1: test    ebx, ebx
0x5EE6C3: jz      short loc_5EE713
0x5EE6C5: mov     edx, [ebx]
0x5EE6C7: mov     eax, [edx+4Ch]
0x5EE6CA: push    offset aBip01Head; "Bip01 Head"
0x5EE6CF: mov     ecx, ebx
0x5EE6D1: call    eax
0x5EE6D3: test    eax, eax
0x5EE6D5: jnz     short loc_5EE6E9
0x5EE6D7: mov     edx, [ebx]
0x5EE6D9: mov     eax, [edx+4Ch]
0x5EE6DC: push    offset aBip02Head; "Bip02 Head"
0x5EE6E1: mov     ecx, ebx
0x5EE6E3: call    eax
0x5EE6E5: test    eax, eax
0x5EE6E7: jz      short loc_5EE713
0x5EE6E9: fld     dword ptr [eax+88h]
0x5EE6EF: pop     edi
0x5EE6F0: fadd    dword ptr [esi]
0x5EE6F2: fstp    dword ptr [esi]
0x5EE6F4: fld     dword ptr [eax+8Ch]
0x5EE6FA: fadd    dword ptr [esi+4]
0x5EE6FD: fstp    dword ptr [esi+4]
0x5EE700: fld     dword ptr [eax+90h]
0x5EE706: mov     eax, esi
0x5EE708: fadd    dword ptr [esi+8]
0x5EE70B: fstp    dword ptr [esi+8]
0x5EE70E: pop     esi
0x5EE70F: pop     ebx
0x5EE710: retn    4
0x5EE713: mov     ecx, edi
0x5EE715: call    sub_5E0660
0x5EE71A: fmul    qword ptr ds:0A6E700h
0x5EE720: mov     edx, [edi]
0x5EE722: mov     eax, [edx+174h]
0x5EE728: fadd    dword ptr [esi+8]
0x5EE72B: mov     ecx, edi
0x5EE72D: fstp    dword ptr [esi+8]
0x5EE730: call    eax
0x5EE732: fld     dword ptr [eax]
0x5EE734: pop     edi
0x5EE735: fadd    dword ptr [esi]
0x5EE737: fstp    dword ptr [esi]
0x5EE739: fld     dword ptr [eax+4]
0x5EE73C: fadd    dword ptr [esi+4]
0x5EE73F: fstp    dword ptr [esi+4]
0x5EE742: fld     dword ptr [eax+8]
0x5EE745: mov     eax, esi
0x5EE747: fadd    dword ptr [esi+8]
0x5EE74A: fstp    dword ptr [esi+8]
0x5EE74D: pop     esi
0x5EE74E: pop     ebx
0x5EE74F: retn    4
