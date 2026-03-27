0x6505D0: push    esi
0x6505D1: mov     esi, [esp+4+arg_0]
0x6505D5: test    esi, esi
0x6505D7: jz      loc_6506B1
0x6505DD: mov     eax, [esi+8]
0x6505E0: mov     ecx, eax
0x6505E2: shr     ecx, 5
0x6505E5: test    cl, 1
0x6505E8: jnz     loc_6506B1
0x6505EE: mov     edx, eax
0x6505F0: shr     edx, 0Eh
0x6505F3: test    dl, 1
0x6505F6: jnz     loc_6506B1
0x6505FC: shr     eax, 0Bh
0x6505FF: test    al, 1
0x650601: jnz     loc_6506B1
0x650607: push    edi
0x650608: mov     edi, [esp+8+arg_4]
0x65060C: test    edi, edi
0x65060E: jz      loc_6506AC
0x650614: push    esi
0x650615: mov     ecx, offset unk_B3BA9C
0x65061A: call    sub_446C30
0x65061F: test    al, al
0x650621: jnz     loc_6506AC
0x650627: mov     ecx, esi
0x650629: call    sub_4D74B0
0x65062E: test    al, al
0x650630: jz      short loc_6506AC
0x650632: mov     ecx, esi
0x650634: call    sub_4DB9A0
0x650639: test    al, al
0x65063B: jz      short loc_6506AC
0x65063D: mov     ecx, esi; this
0x65063F: call    TESObjectREFR_GetOwner
0x650644: test    eax, eax
0x650646: jz      short loc_650656
0x650648: push    1
0x65064A: push    edi
0x65064B: mov     ecx, esi
0x65064D: call    TESOBjectREFR_IsOwnedBy
0x650652: test    al, al
0x650654: jz      short loc_6506AC
0x650656: push    ebx
0x650657: mov     ecx, esi
0x650659: call    sub_4D8AF0
0x65065E: mov     ecx, edi
0x650660: mov     ebx, eax
0x650662: call    sub_4D8AF0
0x650667: cmp     ebx, eax
0x650669: pop     ebx
0x65066A: jnz     short loc_6506AC
0x65066C: mov     eax, [esi]
0x65066E: mov     edx, [eax+170h]
0x650674: mov     ecx, esi
0x650676: call    edx
0x650678: cmp     byte ptr ds:0B3BA80h, 0
0x65067F: mov     edi, eax
0x650681: jz      short loc_650696
0x650683: mov     ecx, edi
0x650685: call    sub_4AE590
0x65068A: test    al, al
0x65068C: jnz     short loc_6506A1
0x65068E: cmp     ds:0B3BA80h, al
0x650694: jnz     short loc_6506AC
0x650696: mov     ecx, edi
0x650698: call    sub_4AE5A0
0x65069D: test    al, al
0x65069F: jz      short loc_6506AC
0x6506A1: push    esi
0x6506A2: mov     ecx, offset unk_B3BA9C
0x6506A7: call    BSSimpleList_PushFront
0x6506AC: pop     edi
0x6506AD: xor     al, al
0x6506AF: pop     esi
0x6506B0: retn
0x6506B1: xor     al, al
0x6506B3: pop     esi
0x6506B4: retn
