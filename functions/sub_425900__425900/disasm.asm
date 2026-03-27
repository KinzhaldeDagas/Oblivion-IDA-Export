0x425900: push    ebx
0x425901: mov     ebx, [esp+4+arg_4]
0x425905: test    ebx, ebx
0x425907: push    esi
0x425908: mov     esi, ecx
0x42590A: jz      short loc_42595C
0x42590C: mov     eax, [ebx]
0x42590E: mov     edx, [eax+190h]
0x425914: mov     ecx, ebx
0x425916: call    edx
0x425918: test    al, al
0x42591A: jz      short loc_42595C
0x42591C: push    11h; a2
0x42591E: mov     ecx, esi; this
0x425920: call    BaseExtraList_GetExtraData
0x425925: test    eax, eax
0x425927: jz      short loc_42595C
0x425929: push    edi
0x42592A: mov     edi, [eax+0Ch]
0x42592D: test    edi, edi
0x42592F: jz      short loc_42595B
0x425931: mov     ecx, ebx; this
0x425933: call    TESObjectREFR_GetParentCell
0x425938: test    eax, eax
0x42593A: jz      short loc_42595B
0x42593C: push    11h; a2
0x42593E: mov     ecx, esi; this
0x425940: call    BaseExtraList_GetExtraData
0x425945: test    eax, eax
0x425947: jz      short loc_425953
0x425949: push    1
0x42594B: push    eax
0x42594C: mov     ecx, esi
0x42594E: call    BaseExtraList_RemoveExtraByPtr
0x425953: push    ebx
0x425954: mov     ecx, edi
0x425956: call    sub_4CECD0
0x42595B: pop     edi
0x42595C: pop     esi
0x42595D: pop     ebx
0x42595E: retn    8
