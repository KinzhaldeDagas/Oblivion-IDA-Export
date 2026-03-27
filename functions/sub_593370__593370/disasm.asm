0x593370: sub     esp, 8
0x593373: push    esi; a3
0x593374: push    edi; a3
0x593375: mov     edi, [esp+10h+arg_4]
0x593379: test    edi, edi
0x59337B: mov     esi, ecx
0x59337D: jz      loc_5934BE
0x593383: mov     eax, [esp+10h+arg_0]
0x593387: cmp     eax, 8
0x59338A: jl      short loc_593391
0x59338C: cmp     eax, 0Bh
0x59338F: jle     short loc_59339A
0x593391: cmp     eax, 2
0x593394: jnz     loc_5934A7
0x59339A: cmp     dword ptr [esi+54h], 0
0x59339E: mov     dword ptr [esi+90h], 0
0x5933A8: jz      loc_5934BE
0x5933AE: push    0FE0h
0x5933B3: mov     ecx, edi
0x5933B5: call    Tile_GetFloat
0x5933BA: call    Double_To_SInt32
0x5933BF: mov     ecx, edi
0x5933C1: mov     [esp+10h+arg_0], eax; a3
0x5933C5: call    sub_588D90
0x5933CA: fstp    qword ptr [esp+10h+a3]; a3
0x5933CE: mov     ecx, [esi+54h]
0x5933D1: push    0FBDh
0x5933D6: call    Tile_GetFloat
0x5933DB: fsubr   qword ptr [esp+10h+a3]
0x5933DF: push    ecx
0x5933E0: mov     ecx, [esi+54h]; this
0x5933E3: fstp    [esp+14h+arg_4]
0x5933E7: fld     [esp+14h+arg_4]
0x5933EB: fstp    [esp+14h+a2]; a3
0x5933EE: push    0FABh; a2
0x5933F3: call    Tile_SetFloat
0x5933F8: push    0FCBh
0x5933FD: mov     ecx, edi
0x5933FF: call    Tile_GetFloat
0x593404: push    ecx
0x593405: mov     ecx, [esi+54h]; this
0x593408: fstp    [esp+14h+a2]; a3
0x59340B: push    0FCBh; a2
0x593410: call    Tile_SetFloat
0x593415: push    0FCAh
0x59341A: mov     ecx, edi
0x59341C: call    Tile_GetFloat
0x593421: push    ecx
0x593422: mov     ecx, [esi+54h]; this
0x593425: fstp    [esp+14h+a2]; a3
0x593428: push    0FCAh; a2
0x59342D: call    Tile_SetFloat
0x593432: fild    [esp+10h+arg_0]
0x593436: mov     ecx, edi
0x593438: fstp    [esp+10h+arg_4]
0x59343C: call    sub_588C50
0x593441: fadd    [esp+10h+arg_4]
0x593445: push    ecx
0x593446: mov     ecx, [esi+54h]; this
0x593449: fstp    [esp+14h+arg_0]
0x59344D: fld     [esp+14h+arg_0]
0x593451: fstp    [esp+14h+a2]; a3
0x593454: push    0FADh; a2
0x593459: call    Tile_SetFloat
0x59345E: mov     ecx, edi
0x593460: call    sub_588CF0
0x593465: fadd    [esp+10h+arg_4]
0x593469: push    ecx
0x59346A: mov     ecx, [esi+54h]; this
0x59346D: fstp    [esp+14h+arg_4]
0x593471: fld     [esp+14h+arg_4]
0x593475: fstp    [esp+14h+a2]; a3
0x593478: push    0FACh; a2
0x59347D: call    Tile_SetFloat
0x593482: fld     dword ptr ds:0A379B4h
0x593488: push    ecx
0x593489: mov     ecx, [esi+54h]; this
0x59348C: fstp    [esp+14h+a2]; a3
0x59348F: push    0FA1h; a2
0x593494: call    Tile_SetFloat
0x593499: mov     [esi+90h], edi
0x59349F: pop     edi
0x5934A0: pop     esi
0x5934A1: add     esp, 8
0x5934A4: retn    8
0x5934A7: mov     ecx, [esi+54h]; this
0x5934AA: test    ecx, ecx
0x5934AC: jz      short loc_5934BE
0x5934AE: fld1
0x5934B0: push    ecx
0x5934B1: fstp    [esp+14h+a2]; a3
0x5934B4: push    0FA1h; a2
0x5934B9: call    Tile_SetFloat
0x5934BE: pop     edi
0x5934BF: pop     esi
0x5934C0: add     esp, 8
0x5934C3: retn    8
