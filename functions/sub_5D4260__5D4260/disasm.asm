0x5D4260: sub     esp, 0Ch
0x5D4263: push    ebp; a3
0x5D4264: mov     ebp, [esp+10h+arg_0]
0x5D4268: cmp     ebp, 18h
0x5D426B: push    esi; a3
0x5D426C: mov     esi, ecx
0x5D426E: jz      short loc_5D4279
0x5D4270: cmp     ebp, 14h
0x5D4273: jnz     loc_5D43D7
0x5D4279: push    edi; a3
0x5D427A: mov     edi, [esp+18h+arg_4]
0x5D427E: test    edi, edi
0x5D4280: jz      loc_5D43BF
0x5D4286: cmp     dword ptr [esi+40h], 0
0x5D428A: jz      loc_5D43BF
0x5D4290: push    ebx; a3
0x5D4291: push    0FE0h
0x5D4296: mov     ecx, edi
0x5D4298: call    Tile_GetFloat
0x5D429D: call    Double_To_SInt32
0x5D42A2: mov     ebx, eax
0x5D42A4: mov     ecx, edi
0x5D42A6: mov     [esp+1Ch+a3], ebx; a3
0x5D42AA: call    sub_588D90
0x5D42AF: fstp    qword ptr [esp+1Ch+var_8]; a3
0x5D42B3: mov     ecx, [esi+40h]
0x5D42B6: push    0FBDh
0x5D42BB: call    Tile_GetFloat
0x5D42C0: fsubr   qword ptr [esp+1Ch+var_8]
0x5D42C4: push    ecx
0x5D42C5: mov     ecx, [esi+40h]; this
0x5D42C8: fstp    [esp+20h+arg_0]
0x5D42CC: fld     [esp+20h+arg_0]
0x5D42D0: fstp    [esp+20h+a2]; a3
0x5D42D3: push    0FABh; a2
0x5D42D8: call    Tile_SetFloat
0x5D42DD: lea     eax, [ebx+ebx]
0x5D42E0: mov     [esp+1Ch+arg_0], eax
0x5D42E4: fild    [esp+1Ch+arg_0]
0x5D42E8: push    0FCBh
0x5D42ED: mov     ecx, edi
0x5D42EF: fstp    [esp+20h+arg_0]
0x5D42F3: call    Tile_GetFloat
0x5D42F8: fsub    [esp+1Ch+arg_0]
0x5D42FC: push    ecx
0x5D42FD: mov     ecx, [esi+40h]; this
0x5D4300: fstp    [esp+20h+arg_4]
0x5D4304: fld     [esp+20h+arg_4]
0x5D4308: fstp    [esp+20h+a2]; a3
0x5D430B: push    0FCBh; a2
0x5D4310: call    Tile_SetFloat
0x5D4315: push    0FCAh
0x5D431A: mov     ecx, edi
0x5D431C: call    Tile_GetFloat
0x5D4321: fsub    [esp+1Ch+arg_0]
0x5D4325: push    ecx
0x5D4326: mov     ecx, [esi+40h]; this
0x5D4329: fstp    [esp+20h+arg_0]
0x5D432D: fld     [esp+20h+arg_0]
0x5D4331: fstp    [esp+20h+a2]; a3
0x5D4334: push    0FCAh; a2
0x5D4339: call    Tile_SetFloat
0x5D433E: fild    [esp+1Ch+a3]
0x5D4342: mov     ecx, edi
0x5D4344: fstp    [esp+1Ch+arg_0]
0x5D4348: call    sub_588C50
0x5D434D: fadd    [esp+1Ch+arg_0]
0x5D4351: push    ecx
0x5D4352: mov     ecx, [esi+40h]; this
0x5D4355: fstp    [esp+20h+arg_4]
0x5D4359: fld     [esp+20h+arg_4]
0x5D435D: fstp    [esp+20h+a2]; a3
0x5D4360: push    0FADh; a2
0x5D4365: call    Tile_SetFloat
0x5D436A: mov     ecx, edi
0x5D436C: call    sub_588CF0
0x5D4371: fadd    [esp+1Ch+arg_0]
0x5D4375: push    ecx
0x5D4376: mov     ecx, [esi+40h]; this
0x5D4379: fstp    [esp+20h+arg_0]
0x5D437D: fld     [esp+20h+arg_0]
0x5D4381: fstp    [esp+20h+a2]; a3
0x5D4384: push    0FACh; a2
0x5D4389: call    Tile_SetFloat
0x5D438E: fld     dword ptr ds:0A379B4h
0x5D4394: push    ecx
0x5D4395: mov     ecx, [esi+40h]; this
0x5D4398: fstp    [esp+20h+a2]; a3
0x5D439B: push    0FA1h; a2
0x5D43A0: call    Tile_SetFloat
0x5D43A5: fld     dword ptr ds:0A379B4h
0x5D43AB: push    ecx
0x5D43AC: mov     ecx, [esi+40h]; this
0x5D43AF: fstp    [esp+20h+a2]; a3
0x5D43B2: push    0FC8h; a2
0x5D43B7: call    Tile_SetFloat
0x5D43BC: pop     ebx
0x5D43BD: jmp     short loc_5D43D6
0x5D43BF: mov     ecx, [esi+40h]; this
0x5D43C2: test    ecx, ecx
0x5D43C4: jz      short loc_5D43D6
0x5D43C6: fld1
0x5D43C8: push    ecx
0x5D43C9: fstp    [esp+1Ch+var_1C]; a3
0x5D43CC: push    0FA1h; a2
0x5D43D1: call    Tile_SetFloat
0x5D43D6: pop     edi
0x5D43D7: cmp     ebp, 18h
0x5D43DA: jz      short loc_5D43EB
0x5D43DC: cmp     ebp, 14h
0x5D43DF: jz      short loc_5D43EB
0x5D43E1: cmp     ebp, 0Fh
0x5D43E4: jz      short loc_5D43EB
0x5D43E6: cmp     ebp, 0Eh
0x5D43E9: jnz     short loc_5D43F5
0x5D43EB: push    4; int
0x5D43ED: call    sub_57DE50
0x5D43F2: add     esp, 4
0x5D43F5: pop     esi
0x5D43F6: pop     ebp
0x5D43F7: add     esp, 0Ch
0x5D43FA: retn    8
