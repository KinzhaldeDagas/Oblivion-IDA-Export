0x92B540: push    esi
0x92B541: mov     esi, [esp+4+arg_0]
0x92B545: mov     eax, [esi]
0x92B547: push    edi
0x92B548: mov     edi, ecx
0x92B54A: push    edi
0x92B54B: push    1
0x92B54D: push    offset aBvtreeshape; "BvTreeShape"
0x92B552: mov     ecx, esi
0x92B554: call    dword ptr [eax]
0x92B556: mov     eax, [edi+0Ch]
0x92B559: mov     edx, [esi]
0x92B55B: push    eax
0x92B55C: push    1
0x92B55E: push    offset aCollection; "Collection"
0x92B563: mov     ecx, esi
0x92B565: call    dword ptr [edx+8]
0x92B568: mov     edx, [esi]
0x92B56A: mov     ecx, esi
0x92B56C: call    dword ptr [edx+14h]
0x92B56F: pop     edi
0x92B570: pop     esi
0x92B571: retn    4
