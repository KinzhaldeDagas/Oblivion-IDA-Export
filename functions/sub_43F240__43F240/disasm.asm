0x43F240: push    esi
0x43F241: mov     esi, [esp+4+arg_0]
0x43F245: mov     eax, [esi]
0x43F247: mov     edx, [eax+190h]
0x43F24D: mov     ecx, esi
0x43F24F: call    edx
0x43F251: test    al, al
0x43F253: jz      short loc_43F26C
0x43F255: mov     eax, [esi]
0x43F257: mov     edx, [eax+1C4h]
0x43F25D: mov     ecx, esi
0x43F25F: call    edx
0x43F261: push    esi
0x43F262: mov     ecx, offset ActorProcessManager_ptr
0x43F267: call    sub_674E10
0x43F26C: pop     esi
0x43F26D: retn    4
