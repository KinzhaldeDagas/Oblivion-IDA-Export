0x5C4480: push    0FFFFFFFFh
0x5C4482: push    offset SEH_5C4480
0x5C4487: mov     eax, large fs:0
0x5C448D: push    eax
0x5C448E: sub     esp, 0Ch
0x5C4491: push    ebx; a3
0x5C4492: push    ebp; a3
0x5C4493: push    esi; a3
0x5C4494: push    edi; a3
0x5C4495: mov     eax, ds:0B30AACh
0x5C449A: xor     eax, esp
0x5C449C: push    eax; a3
0x5C449D: lea     eax, [esp+2Ch+var_C]
0x5C44A1: mov     large fs:0, eax
0x5C44A7: mov     edi, ecx
0x5C44A9: mov     eax, ds:0B3B5D4h
0x5C44AE: mov     ebp, [esp+2Ch+arg_0]
0x5C44B2: xor     ebx, ebx
0x5C44B4: push    ebx
0x5C44B5: add     eax, 1
0x5C44B8: push    offset aRace_templat_0; "race_template_button"
0x5C44BD: push    ebp
0x5C44BE: mov     [esp+38h+var_4], 1
0x5C44C6: mov     ds:0B3B5D4h, eax
0x5C44CB: mov     [esp+38h+a3], eax; a3
0x5C44CF: call    Menu_CreateTileFromTemplate
0x5C44D4: mov     esi, eax
0x5C44D6: mov     [esp+2Ch+a2], ebx
0x5C44DA: mov     [esp+2Ch+var_10], bx
0x5C44DF: mov     [esp+2Ch+var_E], bx
0x5C44E4: mov     eax, [esp+2Ch+ArgList]
0x5C44E8: push    eax; ArgList
0x5C44E9: lea     ecx, [esp+30h+a2]
0x5C44ED: push    offset aS; "%s"
0x5C44F2: push    ecx; int
0x5C44F3: mov     byte ptr [esp+38h+var_4], 2
0x5C44F8: call    BSStringT_Static_Format
0x5C44FD: mov     edx, [esp+38h+a2]
0x5C4501: add     esp, 4
0x5C4504: mov     ecx, esp; this
0x5C4506: mov     [esp+34h+arg_0], esp
0x5C450A: push    ebx; a3
0x5C450B: push    edx; a2
0x5C450C: mov     [ecx], ebx
0x5C450E: mov     [ecx+4], bx
0x5C4512: mov     [ecx+6], bx
0x5C4516: call    BSStringT_Set
0x5C451B: mov     ecx, esi
0x5C451D: call    sub_58A020
0x5C4522: fild    [esp+2Ch+a3]
0x5C4526: push    ecx
0x5C4527: mov     ecx, esi; this
0x5C4529: fstp    [esp+30h+var_30]; a3
0x5C452C: push    0FA8h; a2
0x5C4531: call    Tile_SetFloat
0x5C4536: push    0FD0h
0x5C453B: mov     ecx, ebp
0x5C453D: call    Tile_GetFloat
0x5C4542: fsub    qword ptr ds:0A2F928h
0x5C4548: push    ecx
0x5C4549: mov     ecx, esi; this
0x5C454B: fstp    [esp+30h+arg_0]
0x5C454F: fld     [esp+30h+arg_0]
0x5C4553: fstp    [esp+30h+var_30]; a3
0x5C4556: push    0FAAh; a2
0x5C455B: call    Tile_SetFloat
0x5C4560: fldz
0x5C4562: push    ecx
0x5C4563: fstp    [esp+30h+var_30]; a3
0x5C4566: push    0FAFh; a2
0x5C456B: mov     ecx, esi; this
0x5C456D: call    Tile_SetFloat
0x5C4572: cmp     [esp+2Ch+arg_14], bl
0x5C4576: mov     ecx, esi
0x5C4578: jz      short loc_5C4581
0x5C457A: mov     eax, [esp+2Ch+ArgList]
0x5C457E: push    eax
0x5C457F: jmp     short loc_5C4586
0x5C4581: push    offset asc_A6D2F0; "   "
0x5C4586: push    0FB0h
0x5C458B: call    Tile_SetString
0x5C4590: fld     dword ptr ds:0A6D2D8h
0x5C4596: push    ecx
0x5C4597: fstp    [esp+30h+var_30]; a3
0x5C459A: push    0FB1h; a2
0x5C459F: mov     ecx, esi; this
0x5C45A1: call    Tile_SetFloat
0x5C45A6: fldz
0x5C45A8: push    ecx
0x5C45A9: fstp    [esp+30h+var_30]; a3
0x5C45AC: push    0FB1h; a2
0x5C45B1: mov     ecx, esi; this
0x5C45B3: call    Tile_SetFloat
0x5C45B8: mov     ebp, [esp+2Ch+arg_C]
0x5C45BC: push    ebp
0x5C45BD: push    0FB4h
0x5C45C2: mov     ecx, esi
0x5C45C4: call    Tile_SetString
0x5C45C9: cmp     [esp+2Ch+arg_18], bl
0x5C45CD: jz      short loc_5C45E5
0x5C45CF: fld     dword ptr ds:0A379B4h
0x5C45D5: push    ecx
0x5C45D6: fstp    [esp+30h+var_30]; a3
0x5C45D9: push    0FF0h; a2
0x5C45DE: mov     ecx, esi; this
0x5C45E0: call    Tile_SetFloat
0x5C45E5: mov     edx, [esp+2Ch+a2]
0x5C45E9: mov     ecx, [esp+2Ch+a3]
0x5C45ED: push    edx
0x5C45EE: mov     [edi+ecx*4+94h], esi
0x5C45F5: call    FormHeapFree
0x5C45FA: mov     eax, [esp+30h+ArgList]
0x5C45FE: push    eax
0x5C45FF: call    FormHeapFree
0x5C4604: push    ebp
0x5C4605: call    FormHeapFree
0x5C460A: add     esp, 0Ch
0x5C460D: mov     eax, esi
0x5C460F: mov     ecx, [esp+2Ch+var_C]
0x5C4613: mov     large fs:0, ecx
0x5C461A: pop     ecx
0x5C461B: pop     edi
0x5C461C: pop     esi
0x5C461D: pop     ebp
0x5C461E: pop     ebx
0x5C461F: add     esp, 18h
0x5C4622: retn    1Ch
