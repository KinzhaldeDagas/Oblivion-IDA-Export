0x5BB7D0: call    Tile_SetFloat
0x5BB7D5: fldz
0x5BB7D7: push    ecx
0x5BB7D8: mov     ecx, [ebx+40h]; this
0x5BB7DB: fstp    [esp-4+a3]; a3
0x5BB7DE: push    0FB3h; a2
0x5BB7E3: call    Tile_SetFloat
0x5BB7E8: push    0
0x5BB7EA: mov     ecx, ebx
0x5BB7EC: call    sub_5B8FC0
0x5BB7F1: push    1; char
0x5BB7F3: mov     ecx, esi; int
0x5BB7F5: call    EnableMenu
0x5BB7FA: push    0; float
0x5BB7FC: mov     ecx, edi
0x5BB7FE: call    sub_58FBA0
0x5BB803: push    1; arg1
0x5BB805: push    0; canCreate
0x5BB807: call    InterfaceManager_GetSingleton
0x5BB80C: mov     al, [eax+0Dh]
0x5BB80F: add     esp, 8
0x5BB812: cmp     al, 0FFh
0x5BB814: jnz     short loc_5BB828
0x5BB816: mov     ecx, [ebx+28h]
0x5BB819: push    0FAEh
0x5BB81E: call    Tile_GetFloat
0x5BB823: call    Double_To_SInt32
0x5BB828: cmp     al, 5
0x5BB82A: jg      short loc_5BB84A
0x5BB82C: movsx   eax, al
0x5BB82F: cmp     eax, 1
0x5BB832: jge     short loc_5BB84C
0x5BB834: mov     al, 1
0x5BB836: movsx   ecx, al
0x5BB839: push    0
0x5BB83B: push    ecx
0x5BB83C: mov     ecx, ebx
0x5BB83E: call    sub_5BB210
0x5BB843: pop     ebx
0x5BB844: mov     eax, edi
0x5BB846: pop     edi
0x5BB847: pop     esi
0x5BB848: pop     ecx
0x5BB849: retn
0x5BB84A: mov     al, 5
0x5BB84C: movsx   ecx, al
0x5BB84F: push    0
0x5BB851: push    ecx
0x5BB852: mov     ecx, ebx
0x5BB854: call    sub_5BB210
0x5BB859: pop     ebx
0x5BB85A: mov     eax, edi
0x5BB85C: pop     edi
0x5BB85D: pop     esi
0x5BB85E: pop     ecx
0x5BB85F: retn
