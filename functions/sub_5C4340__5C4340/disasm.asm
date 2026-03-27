0x5C4340: push    0FFFFFFFFh
0x5C4342: push    offset SEH_5C4630
0x5C4347: mov     eax, large fs:0
0x5C434D: push    eax
0x5C434E: sub     esp, 10h
0x5C4351: push    ebx
0x5C4352: push    ebp
0x5C4353: push    esi; a3
0x5C4354: push    edi; a3
0x5C4355: mov     eax, ds:0B30AACh
0x5C435A: xor     eax, esp
0x5C435C: push    eax; a3
0x5C435D: lea     eax, [esp+30h+var_C]
0x5C4361: mov     large fs:0, eax
0x5C4367: mov     ebx, ecx
0x5C4369: mov     eax, [esp+30h+arg_0]
0x5C436D: xor     edi, edi
0x5C436F: push    edi
0x5C4370: push    offset aRace_template_; "race_template_pane"
0x5C4375: push    eax
0x5C4376: mov     [esp+3Ch+var_4], edi
0x5C437A: call    Menu_CreateTileFromTemplate
0x5C437F: mov     esi, eax
0x5C4381: mov     eax, [esp+30h+arg_C]
0x5C4385: cmp     eax, 0FFFFFFFFh
0x5C4388: jnz     short loc_5C4397
0x5C438A: mov     eax, ds:0B3B5D4h
0x5C438F: add     eax, 1
0x5C4392: mov     ds:0B3B5D4h, eax
0x5C4397: mov     [esp+30h+arg_C], eax
0x5C439B: mov     [esp+30h+var_1C], eax
0x5C439F: mov     [esp+30h+a2], edi
0x5C43A3: mov     [esp+30h+var_10], di
0x5C43A8: mov     [esp+30h+var_E], di
0x5C43AD: mov     ebp, [esp+30h+ArgList]
0x5C43B1: push    ebp; ArgList
0x5C43B2: lea     ecx, [esp+34h+a2]
0x5C43B6: push    offset aS; "%s"
0x5C43BB: push    ecx; int
0x5C43BC: mov     byte ptr [esp+3Ch+var_4], 1
0x5C43C1: call    BSStringT_Static_Format
0x5C43C6: add     esp, 4
0x5C43C9: mov     ecx, esp; this
0x5C43CB: mov     [esp+38h+var_18], esp
0x5C43CF: push    edi; a3
0x5C43D0: mov     [ecx], edi
0x5C43D2: mov     [ecx+4], di
0x5C43D6: mov     [ecx+6], di
0x5C43DA: mov     edi, [esp+3Ch+a2]
0x5C43DE: push    edi; a2
0x5C43DF: call    BSStringT_Set
0x5C43E4: mov     ecx, esi
0x5C43E6: call    sub_58A020
0x5C43EB: fild    [esp+30h+arg_C]
0x5C43EF: push    ecx
0x5C43F0: mov     ecx, esi; this
0x5C43F2: fstp    [esp+34h+var_34]; a3
0x5C43F5: push    0FA8h; a2
0x5C43FA: call    Tile_SetFloat
0x5C43FF: mov     ecx, [esp+30h+arg_0]
0x5C4403: push    0FD0h
0x5C4408: call    Tile_GetFloat
0x5C440D: fsub    qword ptr ds:0A2F928h
0x5C4413: push    ecx
0x5C4414: mov     ecx, esi; this
0x5C4416: fstp    [esp+34h+arg_0]
0x5C441A: fld     [esp+34h+arg_0]
0x5C441E: fstp    [esp+34h+var_34]; a3
0x5C4421: push    0FAAh; a2
0x5C4426: call    Tile_SetFloat
0x5C442B: fild    [esp+30h+var_1C]
0x5C442F: push    ecx
0x5C4430: mov     ecx, esi; this
0x5C4432: fstp    [esp+34h+var_34]; a3
0x5C4435: push    0FAEh; a2
0x5C443A: call    Tile_SetFloat
0x5C443F: mov     edx, [esp+30h+arg_C]
0x5C4443: push    edi
0x5C4444: mov     [ebx+edx*4+94h], esi
0x5C444B: call    FormHeapFree
0x5C4450: push    ebp
0x5C4451: call    FormHeapFree
0x5C4456: add     esp, 8
0x5C4459: mov     eax, esi
0x5C445B: mov     ecx, [esp+30h+var_C]
0x5C445F: mov     large fs:0, ecx
0x5C4466: pop     ecx
0x5C4467: pop     edi
0x5C4468: pop     esi
0x5C4469: pop     ebp
0x5C446A: pop     ebx
0x5C446B: add     esp, 1Ch
0x5C446E: retn    14h
