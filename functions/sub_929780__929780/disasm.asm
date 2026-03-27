0x929780: push    esi
0x929781: push    edi
0x929782: mov     edi, [esp+8+arg_0]
0x929786: mov     eax, [edi]
0x929788: mov     esi, ecx
0x92978A: push    esi
0x92978B: push    1
0x92978D: push    offset aStoragemesh; "StorageMesh"
0x929792: mov     ecx, edi
0x929794: call    dword ptr [eax]
0x929796: mov     eax, [esi+18h]
0x929799: test    eax, eax
0x92979B: js      short loc_9297BF
0x92979D: mov     ecx, [esi+10h]
0x9297A0: mov     edx, [edi]
0x9297A2: and     eax, 3FFFFFFFh
0x9297A7: shl     eax, 4
0x9297AA: push    eax
0x9297AB: mov     eax, [esi+14h]
0x9297AE: shl     eax, 4
0x9297B1: push    eax
0x9297B2: push    ecx
0x9297B3: push    1
0x9297B5: push    offset aVertices; "Vertices"
0x9297BA: mov     ecx, edi
0x9297BC: call    dword ptr [edx+4]
0x9297BF: mov     eax, [esi+24h]
0x9297C2: test    eax, eax
0x9297C4: js      short loc_9297EE
0x9297C6: mov     edx, [edi]
0x9297C8: and     eax, 3FFFFFFFh
0x9297CD: lea     eax, [eax+eax*2]
0x9297D0: shl     eax, 2
0x9297D3: push    eax
0x9297D4: mov     eax, [esi+20h]
0x9297D7: lea     ecx, [eax+eax*2]
0x9297DA: mov     eax, [esi+1Ch]
0x9297DD: shl     ecx, 2
0x9297E0: push    ecx
0x9297E1: push    eax
0x9297E2: push    1
0x9297E4: push    offset aTriangles; "Triangles"
0x9297E9: mov     ecx, edi
0x9297EB: call    dword ptr [edx+4]
0x9297EE: mov     eax, [esi+30h]
0x9297F1: test    eax, eax
0x9297F3: js      short loc_929811
0x9297F5: mov     ecx, [esi+28h]
0x9297F8: mov     edx, [edi]
0x9297FA: and     eax, 3FFFFFFFh
0x9297FF: push    eax
0x929800: mov     eax, [esi+2Ch]
0x929803: push    eax
0x929804: push    ecx
0x929805: push    1
0x929807: push    offset aMaterialids; "MaterialIds"
0x92980C: mov     ecx, edi
0x92980E: call    dword ptr [edx+4]
0x929811: mov     edx, [edi]
0x929813: mov     ecx, edi
0x929815: call    dword ptr [edx+14h]
0x929818: pop     edi
0x929819: pop     esi
0x92981A: retn    4
