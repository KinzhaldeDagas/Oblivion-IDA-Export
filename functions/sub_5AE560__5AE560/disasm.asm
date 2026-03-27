0x5AE560: sub     esp, 8
0x5AE563: push    esi; a3
0x5AE564: push    edi; a3
0x5AE565: mov     edi, [esp+10h+arg_4]
0x5AE569: test    edi, edi
0x5AE56B: mov     esi, ecx
0x5AE56D: jz      loc_5AE6A6
0x5AE573: cmp     [esp+10h+arg_0], 65h ; 'e'
0x5AE578: jl      loc_5AE68F
0x5AE57E: push    4; int
0x5AE580: call    sub_57DE50
0x5AE585: add     esp, 4
0x5AE588: cmp     dword ptr [esi+2Ch], 0
0x5AE58C: mov     dword ptr [esi+30h], 0
0x5AE593: jz      loc_5AE6A6
0x5AE599: mov     ecx, edi
0x5AE59B: call    sub_588D90
0x5AE5A0: fstp    qword ptr [esp+10h+a3]; a3
0x5AE5A4: mov     ecx, [esi+2Ch]
0x5AE5A7: push    0FBDh
0x5AE5AC: call    Tile_GetFloat
0x5AE5B1: fsubr   qword ptr [esp+10h+a3]
0x5AE5B5: push    ecx
0x5AE5B6: mov     ecx, [esi+2Ch]; this
0x5AE5B9: fstp    [esp+14h+arg_4]
0x5AE5BD: fld     [esp+14h+arg_4]
0x5AE5C1: fstp    [esp+14h+a2]; a3
0x5AE5C4: push    0FABh; a2
0x5AE5C9: call    Tile_SetFloat
0x5AE5CE: push    0FCBh
0x5AE5D3: mov     ecx, edi
0x5AE5D5: call    Tile_GetFloat
0x5AE5DA: fsub    qword ptr ds:0A3D0C0h
0x5AE5E0: push    ecx
0x5AE5E1: mov     ecx, [esi+2Ch]; this
0x5AE5E4: fstp    [esp+14h+arg_4]
0x5AE5E8: fld     [esp+14h+arg_4]
0x5AE5EC: fstp    [esp+14h+a2]; a3
0x5AE5EF: push    0FCBh; a2
0x5AE5F4: call    Tile_SetFloat
0x5AE5F9: push    0FCAh
0x5AE5FE: mov     ecx, edi
0x5AE600: call    Tile_GetFloat
0x5AE605: fsub    qword ptr ds:0A3D0C0h
0x5AE60B: push    ecx
0x5AE60C: mov     ecx, [esi+2Ch]; this
0x5AE60F: fstp    [esp+14h+arg_4]
0x5AE613: fld     [esp+14h+arg_4]
0x5AE617: fstp    [esp+14h+a2]; a3
0x5AE61A: push    0FCAh; a2
0x5AE61F: call    Tile_SetFloat
0x5AE624: mov     ecx, edi
0x5AE626: call    sub_588C50
0x5AE62B: push    ecx
0x5AE62C: mov     ecx, [esi+2Ch]; this
0x5AE62F: fstp    [esp+14h+a2]; a3
0x5AE632: push    0FADh; a2
0x5AE637: call    Tile_SetFloat
0x5AE63C: mov     ecx, edi
0x5AE63E: call    sub_588CF0
0x5AE643: push    ecx
0x5AE644: mov     ecx, [esi+2Ch]; this
0x5AE647: fstp    [esp+14h+a2]; a3
0x5AE64A: push    0FACh; a2
0x5AE64F: call    Tile_SetFloat
0x5AE654: fld     dword ptr ds:0A379B4h
0x5AE65A: push    ecx
0x5AE65B: mov     ecx, [esi+2Ch]; this
0x5AE65E: fstp    [esp+14h+a2]; a3
0x5AE661: push    0FA1h; a2
0x5AE666: call    Tile_SetFloat
0x5AE66B: push    0FAEh
0x5AE670: mov     ecx, edi
0x5AE672: mov     [esi+30h], edi
0x5AE675: call    Tile_GetFloat
0x5AE67A: call    Double_To_SInt32
0x5AE67F: push    eax
0x5AE680: mov     ecx, esi
0x5AE682: call    sub_5AE240
0x5AE687: pop     edi
0x5AE688: pop     esi
0x5AE689: add     esp, 8
0x5AE68C: retn    8
0x5AE68F: mov     ecx, [esi+2Ch]; this
0x5AE692: test    ecx, ecx
0x5AE694: jz      short loc_5AE6A6
0x5AE696: fld1
0x5AE698: push    ecx
0x5AE699: fstp    [esp+14h+a2]; a3
0x5AE69C: push    0FA1h; a2
0x5AE6A1: call    Tile_SetFloat
0x5AE6A6: pop     edi
0x5AE6A7: pop     esi
0x5AE6A8: add     esp, 8
0x5AE6AB: retn    8
