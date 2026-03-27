0x467611: push    8; Size
0x467613: call    FormHeapAlloc
0x467618: mov     cl, [esp+4+arg_C]
0x46761C: add     esp, 4
0x46761F: mov     [eax+4], cl
0x467622: push    eax
0x467623: mov     ecx, esi
0x467625: mov     [eax], edi
0x467627: call    BSSimpleList_PushFront
