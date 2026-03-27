0x5E6D90: push    ebx
0x5E6D91: push    esi
0x5E6D92: mov     esi, ecx
0x5E6D94: push    edi
0x5E6D95: lea     edi, [esi+44h]
0x5E6D98: mov     ecx, edi; this
0x5E6D9A: call    ExtraDataList_GetContainerChanges
0x5E6D9F: mov     ebx, eax
0x5E6DA1: mov     eax, [esi]
0x5E6DA3: mov     edx, [eax+250h]
0x5E6DA9: push    0
0x5E6DAB: mov     ecx, esi
0x5E6DAD: call    edx
0x5E6DAF: call    Double_To_SInt32
0x5E6DB4: push    eax
0x5E6DB5: push    esi
0x5E6DB6: mov     ecx, ebx
0x5E6DB8: call    sub_491700
0x5E6DBD: push    0
0x5E6DBF: push    esi
0x5E6DC0: mov     ecx, offset ActorProcessManager_ptr
0x5E6DC5: call    sub_675D50
0x5E6DCA: push    esi
0x5E6DCB: mov     ecx, offset ActorProcessManager_ptr
0x5E6DD0: call    sub_675E90
0x5E6DD5: mov     eax, [esi]
0x5E6DD7: mov     edx, [eax+354h]
0x5E6DDD: mov     ecx, esi
0x5E6DDF: call    edx
0x5E6DE1: test    al, al
0x5E6DE3: jz      short loc_5E6DEF
0x5E6DE5: mov     ecx, edi
0x5E6DE7: pop     edi
0x5E6DE8: pop     esi
0x5E6DE9: pop     ebx
0x5E6DEA: jmp     sub_4246F0
0x5E6DEF: pop     edi
0x5E6DF0: pop     esi
0x5E6DF1: pop     ebx
0x5E6DF2: retn
