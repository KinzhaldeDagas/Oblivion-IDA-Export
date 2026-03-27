0x4464F0: push    esi
0x4464F1: lea     esi, [ecx+0A0h]
0x4464F7: test    esi, esi
0x4464F9: jz      short loc_446546
0x4464FB: push    edi
0x4464FC: lea     esp, [esp+0]
0x446500: mov     ecx, esi
0x446502: call    BSSimpleList_IsEmpty
0x446507: test    al, al
0x446509: jnz     short loc_446545
0x44650B: mov     edi, [esi]
0x44650D: test    edi, edi
0x44650F: jz      short loc_446521
0x446511: mov     ecx, edi
0x446513: call    sub_4440E0
0x446518: push    edi
0x446519: call    FormHeapFree
0x44651E: add     esp, 4
0x446521: mov     eax, [esi+4]
0x446524: test    eax, eax
0x446526: jz      short loc_44653D
0x446528: mov     ecx, [eax+4]
0x44652B: mov     [esi+4], ecx
0x44652E: mov     edx, [eax]
0x446530: push    eax
0x446531: mov     [esi], edx
0x446533: call    FormHeapFree
0x446538: add     esp, 4
0x44653B: jmp     short loc_446500
0x44653D: mov     dword ptr [esi], 0
0x446543: jmp     short loc_446500
0x446545: pop     edi
0x446546: mov     eax, ds:0B37150h
0x44654B: cmp     byte ptr [eax], 0
0x44654E: pop     esi
0x44654F: jz      short loc_446561
0x446551: mov     ecx, ds:0B33A1Ch
0x446557: push    1
0x446559: push    1
0x44655B: push    eax
0x44655C: call    QueuedModelLoader_RemoveModel
0x446561: mov     eax, ds:0B37158h
0x446566: cmp     byte ptr [eax], 0
0x446569: jz      short loc_44657B
0x44656B: mov     ecx, ds:0B33A1Ch
0x446571: push    1
0x446573: push    1
0x446575: push    eax
0x446576: call    QueuedModelLoader_RemoveModel
0x44657B: mov     eax, ds:0B37160h
0x446580: cmp     byte ptr [eax], 0
0x446583: jz      short loc_446595
0x446585: mov     ecx, ds:0B33A1Ch
0x44658B: push    1
0x44658D: push    1
0x44658F: push    eax
0x446590: call    QueuedModelLoader_RemoveModel
0x446595: mov     eax, ds:0B37168h
0x44659A: cmp     byte ptr [eax], 0
0x44659D: jz      short loc_4465AF
0x44659F: mov     ecx, ds:0B33A1Ch
0x4465A5: push    1
0x4465A7: push    1
0x4465A9: push    eax
0x4465AA: call    QueuedModelLoader_RemoveModel
0x4465AF: mov     eax, ds:0B37170h
0x4465B4: cmp     byte ptr [eax], 0
0x4465B7: jz      short loc_4465C9
0x4465B9: mov     ecx, ds:0B33A1Ch
0x4465BF: push    1
0x4465C1: push    1
0x4465C3: push    eax
0x4465C4: call    QueuedModelLoader_RemoveModel
0x4465C9: mov     eax, ds:0B37178h
0x4465CE: cmp     byte ptr [eax], 0
0x4465D1: jz      short loc_4465E3
0x4465D3: mov     ecx, ds:0B33A1Ch
0x4465D9: push    1
0x4465DB: push    1
0x4465DD: push    eax
0x4465DE: call    QueuedModelLoader_RemoveModel
0x4465E3: mov     eax, ds:0B37180h
0x4465E8: cmp     byte ptr [eax], 0
0x4465EB: jz      short loc_4465FD
0x4465ED: mov     ecx, ds:0B33A1Ch
0x4465F3: push    1
0x4465F5: push    1
0x4465F7: push    eax
0x4465F8: call    QueuedModelLoader_RemoveModel
0x4465FD: mov     eax, ds:0B37188h
0x446602: cmp     byte ptr [eax], 0
0x446605: jz      short loc_446617
0x446607: mov     ecx, ds:0B33A1Ch
0x44660D: push    1
0x44660F: push    1
0x446611: push    eax
0x446612: call    QueuedModelLoader_RemoveModel
0x446617: mov     eax, ds:0B37190h
0x44661C: cmp     byte ptr [eax], 0
0x44661F: jz      short loc_446631
0x446621: mov     ecx, ds:0B33A1Ch
0x446627: push    1
0x446629: push    1
0x44662B: push    eax
0x44662C: call    QueuedModelLoader_RemoveModel
0x446631: mov     eax, ds:0B37198h
0x446636: cmp     byte ptr [eax], 0
0x446639: jz      short loc_44664B
0x44663B: mov     ecx, ds:0B33A1Ch
0x446641: push    1
0x446643: push    1
0x446645: push    eax
0x446646: call    QueuedModelLoader_RemoveModel
0x44664B: mov     eax, ds:0B371A0h
0x446650: cmp     byte ptr [eax], 0
0x446653: jz      short loc_446665
0x446655: mov     ecx, ds:0B33A1Ch
0x44665B: push    1
0x44665D: push    1
0x44665F: push    eax
0x446660: call    QueuedModelLoader_RemoveModel
0x446665: mov     eax, ds:0B371A8h
0x44666A: cmp     byte ptr [eax], 0
0x44666D: jz      short loc_44667F
0x44666F: mov     ecx, ds:0B33A1Ch
0x446675: push    1
0x446677: push    1
0x446679: push    eax
0x44667A: call    QueuedModelLoader_RemoveModel
0x44667F: mov     eax, ds:0B371B0h
0x446684: cmp     byte ptr [eax], 0
0x446687: jz      short loc_446699
0x446689: mov     ecx, ds:0B33A1Ch
0x44668F: push    1
0x446691: push    1
0x446693: push    eax
0x446694: call    QueuedModelLoader_RemoveModel
0x446699: mov     eax, ds:0B371B8h
0x44669E: cmp     byte ptr [eax], 0
0x4466A1: jz      short loc_4466B3
0x4466A3: mov     ecx, ds:0B33A1Ch
0x4466A9: push    1
0x4466AB: push    1
0x4466AD: push    eax
0x4466AE: call    QueuedModelLoader_RemoveModel
0x4466B3: mov     eax, ds:0B371C0h
0x4466B8: cmp     byte ptr [eax], 0
0x4466BB: jz      short loc_4466CD
0x4466BD: mov     ecx, ds:0B33A1Ch
0x4466C3: push    1
0x4466C5: push    1
0x4466C7: push    eax
0x4466C8: call    QueuedModelLoader_RemoveModel
0x4466CD: mov     eax, ds:0B37B38h
0x4466D2: cmp     byte ptr [eax], 0
0x4466D5: jz      short locret_4466E7
0x4466D7: mov     ecx, ds:0B33A1Ch
0x4466DD: push    1
0x4466DF: push    1
0x4466E1: push    eax
0x4466E2: call    QueuedModelLoader_RemoveModel
0x4466E7: retn
