0x92AE80: push    esi
0x92AE81: mov     esi, [esp+4+arg_0]
0x92AE85: mov     eax, [esi]
0x92AE87: push    edi
0x92AE88: mov     edi, ecx
0x92AE8A: push    edi
0x92AE8B: push    1
0x92AE8D: push    offset aCvxpiecemesh; "CvxPieceMesh"
0x92AE92: mov     ecx, esi
0x92AE94: call    dword ptr [eax]
0x92AE96: mov     eax, [edi+10h]
0x92AE99: mov     ecx, [eax+1Ch]
0x92AE9C: add     eax, 14h
0x92AE9F: test    ecx, ecx
0x92AEA1: js      short loc_92AEC5
0x92AEA3: mov     edx, [esi]
0x92AEA5: and     ecx, 3FFFFFFFh
0x92AEAB: shl     ecx, 2
0x92AEAE: push    ecx
0x92AEAF: mov     ecx, [eax+4]
0x92AEB2: mov     eax, [eax]
0x92AEB4: shl     ecx, 2
0x92AEB7: push    ecx
0x92AEB8: push    eax
0x92AEB9: push    1
0x92AEBB: push    offset aStream; "Stream"
0x92AEC0: mov     ecx, esi
0x92AEC2: call    dword ptr [edx+4]
0x92AEC5: mov     ecx, [edi+10h]
0x92AEC8: mov     eax, [ecx+28h]
0x92AECB: add     ecx, 20h ; ' '
0x92AECE: test    eax, eax
0x92AED0: js      short loc_92AEF3
0x92AED2: mov     edx, [esi]
0x92AED4: and     eax, 3FFFFFFFh
0x92AED9: shl     eax, 2
0x92AEDC: push    eax
0x92AEDD: mov     eax, [ecx+4]
0x92AEE0: mov     ecx, [ecx]
0x92AEE2: shl     eax, 2
0x92AEE5: push    eax
0x92AEE6: push    ecx
0x92AEE7: push    1
0x92AEE9: push    offset aStream; "Stream"
0x92AEEE: mov     ecx, esi
0x92AEF0: call    dword ptr [edx+4]
0x92AEF3: mov     ecx, [edi+10h]
0x92AEF6: mov     eax, [ecx+10h]
0x92AEF9: add     ecx, 8
0x92AEFC: test    eax, eax
0x92AEFE: js      short loc_92AF21
0x92AF00: mov     edx, [esi]
0x92AF02: and     eax, 3FFFFFFFh
0x92AF07: shl     eax, 2
0x92AF0A: push    eax
0x92AF0B: mov     eax, [ecx+4]
0x92AF0E: mov     ecx, [ecx]
0x92AF10: shl     eax, 2
0x92AF13: push    eax
0x92AF14: push    ecx
0x92AF15: push    1
0x92AF17: push    offset aStream; "Stream"
0x92AF1C: mov     ecx, esi
0x92AF1E: call    dword ptr [edx+4]
0x92AF21: mov     eax, [edi+14h]
0x92AF24: mov     edx, [esi]
0x92AF26: push    eax
0x92AF27: push    1
0x92AF29: push    offset aDisplaymesh; "DisplayMesh"
0x92AF2E: mov     ecx, esi
0x92AF30: call    dword ptr [edx+8]
0x92AF33: mov     edx, [esi]
0x92AF35: mov     ecx, esi
0x92AF37: call    dword ptr [edx+14h]
0x92AF3A: pop     edi
0x92AF3B: pop     esi
0x92AF3C: retn    4
