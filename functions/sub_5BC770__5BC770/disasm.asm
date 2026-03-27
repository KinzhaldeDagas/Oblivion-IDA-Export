0x5BC770: sub     esp, 8
0x5BC773: push    esi; a3
0x5BC774: mov     esi, ecx
0x5BC776: cmp     dword ptr [esi+30h], 0
0x5BC77A: push    edi; a3
0x5BC77B: jz      loc_5BC86B
0x5BC781: mov     edi, [esp+10h+arg_4]
0x5BC785: test    edi, edi
0x5BC787: jz      loc_5BC86B
0x5BC78D: push    0FA8h
0x5BC792: mov     ecx, edi
0x5BC794: call    Tile_GetFloat
0x5BC799: fcomp   dword ptr ds:0A46B10h
0x5BC79F: fnstsw  ax
0x5BC7A1: test    ah, 1
0x5BC7A4: jnz     loc_5BC86B
0x5BC7AA: mov     ecx, edi
0x5BC7AC: call    sub_588D90
0x5BC7B1: fstp    qword ptr [esp+10h+a3]; a3
0x5BC7B5: push    0FABh
0x5BC7BA: mov     ecx, edi
0x5BC7BC: call    sub_589390
0x5BC7C1: mov     ecx, eax
0x5BC7C3: call    Tile_GetFloat
0x5BC7C8: fsubr   qword ptr [esp+10h+a3]
0x5BC7CC: push    ecx
0x5BC7CD: mov     ecx, [esi+30h]; this
0x5BC7D0: fsub    qword ptr ds:0A2F928h
0x5BC7D6: fstp    [esp+14h+arg_4]
0x5BC7DA: fld     [esp+14h+arg_4]
0x5BC7DE: fstp    [esp+14h+a2]; a3
0x5BC7E1: push    0FABh; a2
0x5BC7E6: call    Tile_SetFloat
0x5BC7EB: push    0FCBh
0x5BC7F0: mov     ecx, edi
0x5BC7F2: call    Tile_GetFloat
0x5BC7F7: push    ecx
0x5BC7F8: mov     ecx, [esi+30h]; this
0x5BC7FB: fstp    [esp+14h+a2]; a3
0x5BC7FE: push    0FCBh; a2
0x5BC803: call    Tile_SetFloat
0x5BC808: push    0FCAh
0x5BC80D: mov     ecx, edi
0x5BC80F: call    Tile_GetFloat
0x5BC814: push    ecx
0x5BC815: mov     ecx, [esi+30h]; this
0x5BC818: fstp    [esp+14h+a2]; a3
0x5BC81B: push    0FCAh; a2
0x5BC820: call    Tile_SetFloat
0x5BC825: push    0FADh
0x5BC82A: mov     ecx, edi
0x5BC82C: call    Tile_GetFloat
0x5BC831: push    ecx
0x5BC832: mov     ecx, [esi+30h]; this
0x5BC835: fstp    [esp+14h+a2]; a3
0x5BC838: push    0FADh; a2
0x5BC83D: call    Tile_SetFloat
0x5BC842: push    0FACh
0x5BC847: mov     ecx, edi
0x5BC849: call    Tile_GetFloat
0x5BC84E: push    ecx
0x5BC84F: mov     ecx, [esi+30h]; this
0x5BC852: fstp    [esp+14h+a2]; a3
0x5BC855: push    0FACh; a2
0x5BC85A: call    Tile_SetFloat
0x5BC85F: fld     dword ptr ds:0A379B4h
0x5BC865: push    ecx
0x5BC866: mov     ecx, [esi+30h]
0x5BC869: jmp     short loc_5BC875
0x5BC86B: mov     ecx, [esi+30h]; this
0x5BC86E: test    ecx, ecx
0x5BC870: jz      short loc_5BC882
0x5BC872: fld1
0x5BC874: push    ecx
0x5BC875: fstp    [esp+14h+a2]; a3
0x5BC878: push    0FA1h; a2
0x5BC87D: call    Tile_SetFloat
0x5BC882: pop     edi
0x5BC883: pop     esi
0x5BC884: add     esp, 8
0x5BC887: retn    8
