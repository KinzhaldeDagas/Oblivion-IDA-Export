0x470820: push    ebx
0x470821: mov     ebx, [esp+4+arg_0]
0x470825: push    ebp
0x470826: push    esi
0x470827: mov     esi, ecx
0x470829: mov     eax, [esi]
0x47082B: mov     edx, [eax+4]
0x47082E: push    edi
0x47082F: push    ebx
0x470830: call    edx
0x470832: mov     ebp, eax
0x470834: mov     eax, [esi+8]
0x470837: mov     edi, [eax+ebp*4]
0x47083A: test    edi, edi
0x47083C: jz      short loc_470859
0x47083E: mov     edi, edi
0x470840: movzx   eax, word ptr [edi+4]
0x470844: mov     edx, [esi]
0x470846: mov     edx, [edx+8]
0x470849: push    eax
0x47084A: push    ebx
0x47084B: mov     ecx, esi
0x47084D: call    edx
0x47084F: test    al, al
0x470851: jnz     short loc_47088D
0x470853: mov     edi, [edi]
0x470855: test    edi, edi
0x470857: jnz     short loc_470840
0x470859: mov     eax, [esi]
0x47085B: mov     edx, [eax+14h]
0x47085E: mov     ecx, esi
0x470860: call    edx
0x470862: mov     ecx, [esp+10h+arg_4]
0x470866: push    ecx
0x470867: mov     edi, eax
0x470869: mov     eax, [esi]
0x47086B: mov     edx, [eax+0Ch]
0x47086E: push    ebx
0x47086F: push    edi
0x470870: mov     ecx, esi
0x470872: call    edx
0x470874: mov     eax, [esi+8]
0x470877: mov     ecx, [eax+ebp*4]
0x47087A: mov     [edi], ecx
0x47087C: mov     edx, [esi+8]
0x47087F: mov     [edx+ebp*4], edi
0x470882: add     dword ptr [esi+0Ch], 1
0x470886: pop     edi
0x470887: pop     esi
0x470888: pop     ebp
0x470889: pop     ebx
0x47088A: retn    8
0x47088D: mov     eax, [esi]
0x47088F: mov     edx, [eax+10h]
0x470892: push    edi
0x470893: mov     ecx, esi
0x470895: call    edx
0x470897: mov     ecx, [esp+10h+arg_4]
0x47089B: mov     eax, [esi]
0x47089D: mov     edx, [eax+0Ch]
0x4708A0: push    ecx
0x4708A1: push    ebx
0x4708A2: push    edi
0x4708A3: mov     ecx, esi
0x4708A5: call    edx
0x4708A7: pop     edi
0x4708A8: pop     esi
0x4708A9: pop     ebp
0x4708AA: pop     ebx
0x4708AB: retn    8
