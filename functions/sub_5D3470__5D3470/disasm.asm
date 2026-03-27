0x5D3470: sub     esp, 8
0x5D3473: push    ebx; a3
0x5D3474: push    esi; a3
0x5D3475: push    edi; a3
0x5D3476: mov     edi, [esp+14h+arg_4]
0x5D347A: test    edi, edi
0x5D347C: mov     esi, ecx
0x5D347E: jz      loc_5D3624
0x5D3484: mov     ebx, [esp+14h+arg_0]
0x5D3488: cmp     ebx, 65h ; 'e'
0x5D348B: jl      loc_5D360D
0x5D3491: cmp     dword ptr [esi+2Ch], 0
0x5D3495: mov     dword ptr [esi+30h], 0
0x5D349C: jz      loc_5D3624
0x5D34A2: push    4; int
0x5D34A4: call    sub_57DE50
0x5D34A9: add     esp, 4
0x5D34AC: push    0FE0h
0x5D34B1: mov     ecx, edi
0x5D34B3: call    Tile_GetFloat
0x5D34B8: call    Double_To_SInt32
0x5D34BD: mov     ecx, edi
0x5D34BF: mov     [esp+14h+arg_0], eax
0x5D34C3: call    sub_588D90
0x5D34C8: fstp    qword ptr [esp+14h+a3]; a3
0x5D34CC: mov     ecx, [esi+2Ch]
0x5D34CF: push    0FBDh
0x5D34D4: call    Tile_GetFloat
0x5D34D9: fsubr   qword ptr [esp+14h+a3]
0x5D34DD: push    ecx
0x5D34DE: mov     ecx, [esi+2Ch]; this
0x5D34E1: fstp    [esp+18h+arg_4]
0x5D34E5: fld     [esp+18h+arg_4]
0x5D34E9: fstp    [esp+18h+a2]; a3
0x5D34EC: push    0FABh; a2
0x5D34F1: call    Tile_SetFloat
0x5D34F6: fild    [esp+14h+arg_0]
0x5D34FA: push    0FCBh
0x5D34FF: mov     ecx, edi
0x5D3501: fstp    [esp+18h+arg_4]
0x5D3505: call    Tile_GetFloat
0x5D350A: fsub    [esp+14h+arg_4]
0x5D350E: push    ecx
0x5D350F: mov     ecx, [esi+2Ch]; this
0x5D3512: fstp    [esp+18h+arg_0]
0x5D3516: fld     [esp+18h+arg_0]
0x5D351A: fstp    [esp+18h+a2]; a3
0x5D351D: push    0FCBh; a2
0x5D3522: call    Tile_SetFloat
0x5D3527: push    0FCAh
0x5D352C: mov     ecx, edi
0x5D352E: call    Tile_GetFloat
0x5D3533: fsub    [esp+14h+arg_4]
0x5D3537: push    ecx
0x5D3538: mov     ecx, [esi+2Ch]; this
0x5D353B: fstp    [esp+18h+arg_4]
0x5D353F: fld     [esp+18h+arg_4]
0x5D3543: fstp    [esp+18h+a2]; a3
0x5D3546: push    0FCAh; a2
0x5D354B: call    Tile_SetFloat
0x5D3550: mov     ecx, edi
0x5D3552: call    sub_588C50
0x5D3557: push    ecx
0x5D3558: mov     ecx, [esi+2Ch]; this
0x5D355B: fstp    [esp+18h+a2]; a3
0x5D355E: push    0FADh; a2
0x5D3563: call    Tile_SetFloat
0x5D3568: mov     ecx, edi
0x5D356A: call    sub_588CF0
0x5D356F: push    ecx
0x5D3570: mov     ecx, [esi+2Ch]; this
0x5D3573: fstp    [esp+18h+a2]; a3
0x5D3576: push    0FACh; a2
0x5D357B: call    Tile_SetFloat
0x5D3580: fld     dword ptr ds:0A379B4h
0x5D3586: push    ecx
0x5D3587: mov     ecx, [esi+2Ch]; this
0x5D358A: fstp    [esp+18h+a2]; a3
0x5D358D: push    0FA1h; a2
0x5D3592: call    Tile_SetFloat
0x5D3597: cmp     ebx, 65h ; 'e'
0x5D359A: mov     [esi+30h], edi
0x5D359D: jnz     short loc_5D35EB
0x5D359F: mov     eax, ds:0B387C8h
0x5D35A4: mov     ecx, [esi+44h]
0x5D35A7: push    eax
0x5D35A8: push    0FDEh
0x5D35AD: call    Tile_SetString
0x5D35B2: mov     ecx, [esi+40h]
0x5D35B5: push    0; int
0x5D35B7: push    offset ??_R0?AVTileImage@@@8; struct TypeDescriptor *
0x5D35BC: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D35C1: push    0; int
0x5D35C3: push    ecx; void *
0x5D35C4: call    OblivionDynamicCast
0x5D35C9: mov     esi, eax
0x5D35CB: add     esp, 14h
0x5D35CE: test    esi, esi
0x5D35D0: jz      short loc_5D3624
0x5D35D2: push    ecx
0x5D35D3: mov     eax, esp
0x5D35D5: mov     ecx, esi
0x5D35D7: mov     [esp+18h+arg_4], esp
0x5D35DB: mov     dword ptr [eax], 0
0x5D35E1: call    sub_591A80
0x5D35E6: push    ecx
0x5D35E7: mov     ecx, esi
0x5D35E9: jmp     short loc_5D3615
0x5D35EB: push    0FAEh
0x5D35F0: mov     ecx, edi
0x5D35F2: call    Tile_GetFloat
0x5D35F7: call    Double_To_SInt32
0x5D35FC: push    eax
0x5D35FD: mov     ecx, esi
0x5D35FF: call    sub_5D3060
0x5D3604: pop     edi
0x5D3605: pop     esi
0x5D3606: pop     ebx
0x5D3607: add     esp, 8
0x5D360A: retn    8
0x5D360D: mov     ecx, [esi+2Ch]; this
0x5D3610: test    ecx, ecx
0x5D3612: jz      short loc_5D3624
0x5D3614: push    ecx
0x5D3615: fld1
0x5D3617: fstp    [esp+18h+a2]; a3
0x5D361A: push    0FA1h; a2
0x5D361F: call    Tile_SetFloat
0x5D3624: pop     edi
0x5D3625: pop     esi
0x5D3626: pop     ebx
0x5D3627: add     esp, 8
0x5D362A: retn    8
