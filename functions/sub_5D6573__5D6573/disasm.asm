0x5D6573: fld1
0x5D6575: push    ecx
0x5D6576: fstp    [esp+4+a2]; a3
0x5D6579: mov     ecx, ebx; this
0x5D657B: push    0FB2h; a2
0x5D6580: call    Tile_SetFloat
0x5D6585: mov     [esp+arg_14], ebp
0x5D6589: mov     [esp+arg_18], ebp
0x5D658D: xor     edi, edi
0x5D658F: nop
0x5D6590: push    offset sub_5D56C0
0x5D6595: push    edi
0x5D6596: push    2
0x5D6598: call    ActorValue_GetAVFromGroupOffset
0x5D659D: add     esp, 8
0x5D65A0: push    eax
0x5D65A1: lea     ecx, [esp+8+arg_14]
0x5D65A5: call    BSSimpleList_InsertSorted
0x5D65AA: add     edi, 1
0x5D65AD: cmp     edi, 15h
0x5D65B0: jl      short loc_5D6590
0x5D65B2: lea     ebx, [esp-14h+arg_28]
0x5D65B6: mov     edi, [ebx]
0x5D65B8: push    edi
0x5D65B9: push    edi
0x5D65BA: call    ActorValue_GetName
0x5D65BF: add     esp, 4
0x5D65C2: push    eax
0x5D65C3: mov     ecx, esi
0x5D65C5: call    sub_5D6270
0x5D65CA: test    ebp, ebp
0x5D65CC: jz      short loc_5D65D3
0x5D65CE: cmp     edi, [esi+40h]
0x5D65D1: jnz     short loc_5D65D5
0x5D65D3: mov     ebp, eax
0x5D65D5: mov     ebx, [ebx+4]
0x5D65D8: test    ebx, ebx
0x5D65DA: jnz     short loc_5D65B6
0x5D65DC: cmp     [esi+4Ch], ebx
0x5D65DF: jz      short loc_5D65EA
0x5D65E1: mov     ecx, esi
0x5D65E3: call    sub_5D5D40
0x5D65E8: jmp     short loc_5D6622
0x5D65EA: test    ebp, ebp
0x5D65EC: jz      short loc_5D6622
0x5D65EE: mov     edi, [esi]
0x5D65F0: push    ebp
0x5D65F1: push    0FA8h
0x5D65F6: mov     ecx, ebp
0x5D65F8: add     edi, 0Ch
0x5D65FB: call    Tile_GetFloat
0x5D6600: call    Double_To_SInt32
0x5D6605: mov     edx, [edi]
0x5D6607: push    eax; a3
0x5D6608: mov     ecx, esi
0x5D660A: call    edx
0x5D660C: fld     dword ptr ds:0A379B4h
0x5D6612: push    ecx
0x5D6613: fstp    [esp-8+a3]; a3
0x5D6616: push    0FF0h; a2
0x5D661B: mov     ecx, ebp; this
0x5D661D: call    Tile_SetFloat
0x5D6622: mov     ebx, [esp-14h+arg_20]
0x5D6626: mov     edi, [esp-14h+arg_24]
0x5D662A: push    0FFFFFFFFh
0x5D662C: mov     ecx, esi
0x5D662E: call    sub_5D5B40
0x5D6633: push    0; char
0x5D6635: mov     ecx, edi; int
0x5D6637: call    EnableMenu
0x5D663C: pop     edi
0x5D663D: pop     esi
0x5D663E: pop     ebp
0x5D663F: mov     eax, ebx
0x5D6641: pop     ebx
0x5D6642: add     esp, 10h
0x5D6645: retn
