0x5DE2E0: push    ecx; a3
0x5DE2E1: push    esi; a3
0x5DE2E2: mov     esi, ecx
0x5DE2E4: mov     eax, [esi+0ECh]
0x5DE2EA: mov     eax, ds:0B147D8h[eax*4]
0x5DE2F1: test    eax, eax
0x5DE2F3: jz      short loc_5DE2F9
0x5DE2F5: mov     eax, [eax]
0x5DE2F7: jmp     short loc_5DE2FB
0x5DE2F9: xor     eax, eax
0x5DE2FB: mov     ecx, [esi+74h]
0x5DE2FE: push    eax
0x5DE2FF: push    0FDEh
0x5DE304: call    Tile_SetString
0x5DE309: mov     ecx, [esi+0F0h]
0x5DE30F: mov     eax, ds:0B147E4h[ecx*4]
0x5DE316: test    eax, eax
0x5DE318: jz      short loc_5DE31E
0x5DE31A: mov     eax, [eax]
0x5DE31C: jmp     short loc_5DE320
0x5DE31E: xor     eax, eax
0x5DE320: mov     ecx, [esi+0D0h]
0x5DE326: push    eax
0x5DE327: push    0FDEh
0x5DE32C: call    Tile_SetString
0x5DE331: mov     edx, [esi+0F8h]
0x5DE337: mov     eax, ds:0B147F0h[edx*4]
0x5DE33E: test    eax, eax
0x5DE340: jz      short loc_5DE346
0x5DE342: mov     eax, [eax]
0x5DE344: jmp     short loc_5DE348
0x5DE346: xor     eax, eax
0x5DE348: mov     ecx, [esi+0C0h]
0x5DE34E: push    eax
0x5DE34F: push    0FDEh
0x5DE354: call    Tile_SetString
0x5DE359: mov     eax, [esi+0F4h]
0x5DE35F: mov     eax, ds:0B147E4h[eax*4]
0x5DE366: test    eax, eax
0x5DE368: jz      short loc_5DE36E
0x5DE36A: mov     eax, [eax]
0x5DE36C: jmp     short loc_5DE370
0x5DE36E: xor     eax, eax
0x5DE370: mov     ecx, [esi+0E4h]
0x5DE376: push    eax
0x5DE377: push    0FDEh
0x5DE37C: call    Tile_SetString
0x5DE381: fld     dword ptr ds:0A6B328h
0x5DE387: push    ecx
0x5DE388: mov     ecx, [esi+54h]; this
0x5DE38B: fstp    [esp+0Ch+a2]; a3
0x5DE38E: push    0FB3h; a2
0x5DE393: call    Tile_SetFloat
0x5DE398: fld     dword ptr ds:0B14804h
0x5DE39E: fld     dword ptr ds:0B0760Ch
0x5DE3A4: fcom    st(1)
0x5DE3A6: fnstsw  ax
0x5DE3A8: test    ah, 5
0x5DE3AB: jp      short loc_5DE3B5
0x5DE3AD: fxch    st(1)
0x5DE3AF: fst     [esp+8+var_4]
0x5DE3B3: jmp     short loc_5DE3BB
0x5DE3B5: fst     [esp+8+var_4]
0x5DE3B9: fxch    st(1)
0x5DE3BB: fld     dword ptr ds:0B1480Ch
0x5DE3C1: fld     [esp+8+var_4]
0x5DE3C5: fcomp   st(1)
0x5DE3C7: fnstsw  ax
0x5DE3C9: test    ah, 41h
0x5DE3CC: jnz     short loc_5DE3D8
0x5DE3CE: fstp    st(2)
0x5DE3D0: fxch    st(1)
0x5DE3D2: fst     [esp+8+var_4]
0x5DE3D6: jmp     short loc_5DE3ED
0x5DE3D8: fxch    st(1)
0x5DE3DA: fcom    st(2)
0x5DE3DC: fnstsw  ax
0x5DE3DE: test    ah, 41h
0x5DE3E1: jnz     short loc_5DE45F
0x5DE3E3: fstp    st(2)
0x5DE3E5: fxch    st(1)
0x5DE3E7: fst     [esp+8+var_4]
0x5DE3EB: fxch    st(1)
0x5DE3ED: fld     [esp+8+var_4]
0x5DE3F1: push    ecx
0x5DE3F2: fsub    st, st(2)
0x5DE3F4: mov     ecx, [esi+54h]; this
0x5DE3F7: fxch    st(1)
0x5DE3F9: fsubrp  st(2), st
0x5DE3FB: fdivrp  st(1), st
0x5DE3FD: fmul    qword ptr ds:0A309F0h
0x5DE403: fstp    [esp+0Ch+var_4]; a3
0x5DE407: fld     [esp+0Ch+var_4]
0x5DE40B: fstp    [esp+0Ch+a2]; a3
0x5DE40E: push    0FB3h; a2
0x5DE413: call    Tile_SetFloat
0x5DE418: fldz
0x5DE41A: push    ecx
0x5DE41B: fstp    [esp+0Ch+a2]; a3
0x5DE41E: mov     ecx, [esi+54h]; this
0x5DE421: push    0FB3h; a2
0x5DE426: call    Tile_SetFloat
0x5DE42B: fld     dword ptr ds:0A6B328h
0x5DE431: push    ecx
0x5DE432: mov     ecx, [esi+5Ch]; this
0x5DE435: fstp    [esp+0Ch+a2]; a3
0x5DE438: push    0FB3h; a2
0x5DE43D: call    Tile_SetFloat
0x5DE442: fld     dword ptr ds:0B1481Ch
0x5DE448: fld     dword ptr ds:0B0762Ch
0x5DE44E: fcom    st(1)
0x5DE450: fnstsw  ax
0x5DE452: test    ah, 5
0x5DE455: jp      short loc_5DE467
0x5DE457: fxch    st(1)
0x5DE459: fst     [esp+8+var_4]
0x5DE45D: jmp     short loc_5DE46D
0x5DE45F: fxch    st(2)
0x5DE461: fstp    [esp+8+var_4]
0x5DE465: jmp     short loc_5DE3ED
0x5DE467: fst     [esp+8+var_4]
0x5DE46B: fxch    st(1)
0x5DE46D: fld     dword ptr ds:0B14824h
0x5DE473: fld     [esp+8+var_4]
0x5DE477: fcomp   st(1)
0x5DE479: fnstsw  ax
0x5DE47B: test    ah, 41h
0x5DE47E: jnz     short loc_5DE48A
0x5DE480: fstp    st(2)
0x5DE482: fxch    st(1)
0x5DE484: fst     [esp+8+var_4]
0x5DE488: jmp     short loc_5DE49F
0x5DE48A: fxch    st(1)
0x5DE48C: fcom    st(2)
0x5DE48E: fnstsw  ax
0x5DE490: test    ah, 41h
0x5DE493: jnz     short loc_5DE511
0x5DE495: fstp    st(2)
0x5DE497: fxch    st(1)
0x5DE499: fst     [esp+8+var_4]
0x5DE49D: fxch    st(1)
0x5DE49F: fld     [esp+8+var_4]
0x5DE4A3: push    ecx
0x5DE4A4: fsub    st, st(2)
0x5DE4A6: mov     ecx, [esi+5Ch]; this
0x5DE4A9: fxch    st(1)
0x5DE4AB: fsubrp  st(2), st
0x5DE4AD: fdivrp  st(1), st
0x5DE4AF: fmul    qword ptr ds:0A309F0h
0x5DE4B5: fstp    [esp+0Ch+var_4]; a3
0x5DE4B9: fld     [esp+0Ch+var_4]
0x5DE4BD: fstp    [esp+0Ch+a2]; a3
0x5DE4C0: push    0FB3h; a2
0x5DE4C5: call    Tile_SetFloat
0x5DE4CA: fldz
0x5DE4CC: push    ecx
0x5DE4CD: fstp    [esp+0Ch+a2]; a3
0x5DE4D0: mov     ecx, [esi+5Ch]; this
0x5DE4D3: push    0FB3h; a2
0x5DE4D8: call    Tile_SetFloat
0x5DE4DD: fld     dword ptr ds:0A6B328h
0x5DE4E3: push    ecx
0x5DE4E4: mov     ecx, [esi+64h]; this
0x5DE4E7: fstp    [esp+0Ch+a2]; a3
0x5DE4EA: push    0FB3h; a2
0x5DE4EF: call    Tile_SetFloat
0x5DE4F4: fld     dword ptr ds:0B14834h
0x5DE4FA: fld     dword ptr ds:0B07624h
0x5DE500: fcom    st(1)
0x5DE502: fnstsw  ax
0x5DE504: test    ah, 5
0x5DE507: jp      short loc_5DE519
0x5DE509: fxch    st(1)
0x5DE50B: fst     [esp+8+var_4]
0x5DE50F: jmp     short loc_5DE51F
0x5DE511: fxch    st(2)
0x5DE513: fstp    [esp+8+var_4]
0x5DE517: jmp     short loc_5DE49F
0x5DE519: fst     [esp+8+var_4]
0x5DE51D: fxch    st(1)
0x5DE51F: fld     dword ptr ds:0B1483Ch
0x5DE525: fld     [esp+8+var_4]
0x5DE529: fcomp   st(1)
0x5DE52B: fnstsw  ax
0x5DE52D: test    ah, 41h
0x5DE530: jnz     short loc_5DE53C
0x5DE532: fstp    st(2)
0x5DE534: fxch    st(1)
0x5DE536: fst     [esp+8+var_4]
0x5DE53A: jmp     short loc_5DE551
0x5DE53C: fxch    st(1)
0x5DE53E: fcom    st(2)
0x5DE540: fnstsw  ax
0x5DE542: test    ah, 41h
0x5DE545: jnz     short loc_5DE5C3
0x5DE547: fstp    st(2)
0x5DE549: fxch    st(1)
0x5DE54B: fst     [esp+8+var_4]
0x5DE54F: fxch    st(1)
0x5DE551: fld     [esp+8+var_4]
0x5DE555: push    ecx
0x5DE556: fsub    st, st(2)
0x5DE558: mov     ecx, [esi+64h]; this
0x5DE55B: fxch    st(1)
0x5DE55D: fsubrp  st(2), st
0x5DE55F: fdivrp  st(1), st
0x5DE561: fmul    qword ptr ds:0A309F0h
0x5DE567: fstp    [esp+0Ch+var_4]; a3
0x5DE56B: fld     [esp+0Ch+var_4]
0x5DE56F: fstp    [esp+0Ch+a2]; a3
0x5DE572: push    0FB3h; a2
0x5DE577: call    Tile_SetFloat
0x5DE57C: fldz
0x5DE57E: push    ecx
0x5DE57F: fstp    [esp+0Ch+a2]; a3
0x5DE582: mov     ecx, [esi+64h]; this
0x5DE585: push    0FB3h; a2
0x5DE58A: call    Tile_SetFloat
0x5DE58F: fld     dword ptr ds:0A6B328h
0x5DE595: push    ecx
0x5DE596: mov     ecx, [esi+6Ch]; this
0x5DE599: fstp    [esp+0Ch+a2]; a3
0x5DE59C: push    0FB3h; a2
0x5DE5A1: call    Tile_SetFloat
0x5DE5A6: fld     dword ptr ds:0B1484Ch
0x5DE5AC: fld     dword ptr ds:0B0761Ch
0x5DE5B2: fcom    st(1)
0x5DE5B4: fnstsw  ax
0x5DE5B6: test    ah, 5
0x5DE5B9: jp      short loc_5DE5CB
0x5DE5BB: fxch    st(1)
0x5DE5BD: fst     [esp+8+var_4]
0x5DE5C1: jmp     short loc_5DE5D1
0x5DE5C3: fxch    st(2)
0x5DE5C5: fstp    [esp+8+var_4]
0x5DE5C9: jmp     short loc_5DE551
0x5DE5CB: fst     [esp+8+var_4]
0x5DE5CF: fxch    st(1)
0x5DE5D1: fld     dword ptr ds:0B14854h
0x5DE5D7: fld     [esp+8+var_4]
0x5DE5DB: fcomp   st(1)
0x5DE5DD: fnstsw  ax
0x5DE5DF: test    ah, 41h
0x5DE5E2: jnz     short loc_5DE5EE
0x5DE5E4: fstp    st(2)
0x5DE5E6: fxch    st(1)
0x5DE5E8: fst     [esp+8+var_4]
0x5DE5EC: jmp     short loc_5DE607
0x5DE5EE: fxch    st(1)
0x5DE5F0: fcom    st(2)
0x5DE5F2: fnstsw  ax
0x5DE5F4: test    ah, 41h
0x5DE5F7: jnz     loc_5DE67D
0x5DE5FD: fstp    st(2)
0x5DE5FF: fxch    st(1)
0x5DE601: fst     [esp+8+var_4]
0x5DE605: fxch    st(1)
0x5DE607: fld     [esp+8+var_4]
0x5DE60B: push    ecx
0x5DE60C: fsub    st, st(2)
0x5DE60E: mov     ecx, [esi+6Ch]; this
0x5DE611: fxch    st(1)
0x5DE613: fsubrp  st(2), st
0x5DE615: fdivrp  st(1), st
0x5DE617: fmul    qword ptr ds:0A309F0h
0x5DE61D: fstp    [esp+0Ch+var_4]; a3
0x5DE621: fld     [esp+0Ch+var_4]
0x5DE625: fstp    [esp+0Ch+a2]; a3
0x5DE628: push    0FB3h; a2
0x5DE62D: call    Tile_SetFloat
0x5DE632: fldz
0x5DE634: push    ecx
0x5DE635: fstp    [esp+0Ch+a2]; a3
0x5DE638: mov     ecx, [esi+6Ch]; this
0x5DE63B: push    0FB3h; a2
0x5DE640: call    Tile_SetFloat
0x5DE645: fld     dword ptr ds:0A6B328h
0x5DE64B: push    ecx
0x5DE64C: mov     ecx, [esi+7Ch]; this
0x5DE64F: fstp    [esp+0Ch+a2]; a3
0x5DE652: push    0FB3h; a2
0x5DE657: call    Tile_SetFloat
0x5DE65C: fld     dword ptr ds:0B09B18h
0x5DE662: fld     qword ptr ds:0A6BEA0h
0x5DE668: fcom    st(1)
0x5DE66A: fnstsw  ax
0x5DE66C: fld     dword ptr ds:0A57A64h
0x5DE672: test    ah, 41h
0x5DE675: jnz     short loc_5DE685
0x5DE677: fst     [esp+8+var_4]
0x5DE67B: jmp     short loc_5DE68D
0x5DE67D: fxch    st(2)
0x5DE67F: fstp    [esp+8+var_4]
0x5DE683: jmp     short loc_5DE607
0x5DE685: fxch    st(2)
0x5DE687: fst     [esp+8+var_4]
0x5DE68B: fxch    st(2)
0x5DE68D: fld     [esp+8+var_4]
0x5DE691: fcomp   qword ptr ds:0A6DD18h
0x5DE697: fnstsw  ax
0x5DE699: test    ah, 41h
0x5DE69C: jnz     short loc_5DE6AA
0x5DE69E: fstp    st(2)
0x5DE6A0: fstp    st(1)
0x5DE6A2: fld     dword ptr ds:0A6DD10h
0x5DE6A8: jmp     short loc_5DE6BD
0x5DE6AA: fxch    st(1)
0x5DE6AC: fcom    st(2)
0x5DE6AE: fnstsw  ax
0x5DE6B0: test    ah, 41h
0x5DE6B3: jnz     short loc_5DE6B9
0x5DE6B5: fstp    st(2)
0x5DE6B7: jmp     short loc_5DE6BD
0x5DE6B9: fstp    st(1)
0x5DE6BB: fxch    st(1)
0x5DE6BD: fstp    [esp+8+var_4]
0x5DE6C1: push    ecx
0x5DE6C2: fsubr   [esp+0Ch+var_4]
0x5DE6C6: mov     ecx, [esi+7Ch]; this
0x5DE6C9: fdiv    qword ptr ds:0A6DD08h
0x5DE6CF: fmul    qword ptr ds:0A309F0h
0x5DE6D5: fstp    [esp+0Ch+var_4]; a3
0x5DE6D9: fld     [esp+0Ch+var_4]
0x5DE6DD: fstp    [esp+0Ch+a2]; a3
0x5DE6E0: push    0FB3h; a2
0x5DE6E5: call    Tile_SetFloat
0x5DE6EA: fldz
0x5DE6EC: push    ecx
0x5DE6ED: fstp    [esp+0Ch+a2]; a3
0x5DE6F0: mov     ecx, [esi+7Ch]; this
0x5DE6F3: push    0FB3h; a2
0x5DE6F8: call    Tile_SetFloat
0x5DE6FD: fld     dword ptr ds:0A6B328h
0x5DE703: push    ecx
0x5DE704: mov     ecx, [esi+0A4h]; this
0x5DE70A: fstp    [esp+0Ch+a2]; a3
0x5DE70D: push    0FB3h; a2
0x5DE712: call    Tile_SetFloat
0x5DE717: fild    dword ptr ds:0B06F04h
0x5DE71D: push    ecx
0x5DE71E: mov     ecx, [esi+0A4h]; this
0x5DE724: fstp    [esp+0Ch+a2]; a3
0x5DE727: push    0FB3h; a2
0x5DE72C: call    Tile_SetFloat
0x5DE731: fldz
0x5DE733: push    ecx
0x5DE734: fstp    [esp+0Ch+a2]; a3
0x5DE737: mov     ecx, [esi+0A4h]; this
0x5DE73D: push    0FB3h; a2
0x5DE742: call    Tile_SetFloat
0x5DE747: fld     dword ptr ds:0A6B328h
0x5DE74D: push    ecx
0x5DE74E: mov     ecx, [esi+0ACh]; this
0x5DE754: fstp    [esp+0Ch+a2]; a3
0x5DE757: push    0FB3h; a2
0x5DE75C: call    Tile_SetFloat
0x5DE761: fild    dword ptr ds:0B06EFCh
0x5DE767: push    ecx
0x5DE768: mov     ecx, [esi+0ACh]; this
0x5DE76E: fstp    [esp+0Ch+a2]; a3
0x5DE771: push    0FB3h; a2
0x5DE776: call    Tile_SetFloat
0x5DE77B: fldz
0x5DE77D: push    ecx
0x5DE77E: fstp    [esp+0Ch+a2]; a3
0x5DE781: mov     ecx, [esi+0ACh]; this
0x5DE787: push    0FB3h; a2
0x5DE78C: call    Tile_SetFloat
0x5DE791: fld     dword ptr ds:0A6B328h
0x5DE797: push    ecx
0x5DE798: mov     ecx, [esi+0B4h]; this
0x5DE79E: fstp    [esp+0Ch+a2]; a3
0x5DE7A1: push    0FB3h; a2
0x5DE7A6: call    Tile_SetFloat
0x5DE7AB: fld     dword ptr ds:0B1488Ch
0x5DE7B1: fld     dword ptr ds:0B4308Ch
0x5DE7B7: fcom    st(1)
0x5DE7B9: fnstsw  ax
0x5DE7BB: test    ah, 5
0x5DE7BE: jp      short loc_5DE7C8
0x5DE7C0: fxch    st(1)
0x5DE7C2: fst     [esp+8+var_4]
0x5DE7C6: jmp     short loc_5DE7CE
0x5DE7C8: fst     [esp+8+var_4]
0x5DE7CC: fxch    st(1)
0x5DE7CE: fld     dword ptr ds:0B14894h
0x5DE7D4: fld     [esp+8+var_4]
0x5DE7D8: fcomp   st(1)
0x5DE7DA: fnstsw  ax
0x5DE7DC: test    ah, 41h
0x5DE7DF: jnz     short loc_5DE7EB
0x5DE7E1: fstp    st(2)
0x5DE7E3: fxch    st(1)
0x5DE7E5: fst     [esp+8+var_4]
0x5DE7E9: jmp     short loc_5DE804
0x5DE7EB: fxch    st(1)
0x5DE7ED: fcom    st(2)
0x5DE7EF: fnstsw  ax
0x5DE7F1: test    ah, 41h
0x5DE7F4: jnz     loc_5DE90A
0x5DE7FA: fstp    st(2)
0x5DE7FC: fxch    st(1)
0x5DE7FE: fst     [esp+8+var_4]
0x5DE802: fxch    st(1)
0x5DE804: fld     [esp+8+var_4]
0x5DE808: push    ecx
0x5DE809: fsub    st, st(2)
0x5DE80B: mov     ecx, [esi+0B4h]; this
0x5DE811: fxch    st(1)
0x5DE813: fsubrp  st(2), st
0x5DE815: fdivrp  st(1), st
0x5DE817: fmul    qword ptr ds:0A309F0h
0x5DE81D: fstp    [esp+0Ch+var_4]; a3
0x5DE821: fld     [esp+0Ch+var_4]
0x5DE825: fstp    [esp+0Ch+a2]; a3
0x5DE828: push    0FB3h; a2
0x5DE82D: call    Tile_SetFloat
0x5DE832: fldz
0x5DE834: push    ecx
0x5DE835: fstp    [esp+0Ch+a2]; a3
0x5DE838: mov     ecx, [esi+0B4h]; this
0x5DE83E: push    0FB3h; a2
0x5DE843: call    Tile_SetFloat
0x5DE848: fld     dword ptr ds:0A6B328h
0x5DE84E: push    ecx
0x5DE84F: mov     ecx, [esi+94h]; this
0x5DE855: fstp    [esp+0Ch+a2]; a3
0x5DE858: push    0FB3h; a2
0x5DE85D: call    Tile_SetFloat
0x5DE862: fld     dword ptr ds:0B0312Ch
0x5DE868: fsub    qword ptr ds:0A2FC68h
0x5DE86E: push    ecx
0x5DE86F: mov     ecx, [esi+94h]; this
0x5DE875: fmul    qword ptr ds:0A309F0h
0x5DE87B: fstp    [esp+0Ch+var_4]; a3
0x5DE87F: fld     [esp+0Ch+var_4]
0x5DE883: fstp    [esp+0Ch+a2]; a3
0x5DE886: push    0FB3h; a2
0x5DE88B: call    Tile_SetFloat
0x5DE890: fldz
0x5DE892: push    ecx
0x5DE893: fstp    [esp+0Ch+a2]; a3
0x5DE896: mov     ecx, [esi+94h]; this
0x5DE89C: push    0FB3h; a2
0x5DE8A1: call    Tile_SetFloat
0x5DE8A6: fld     dword ptr ds:0A6B328h
0x5DE8AC: push    ecx
0x5DE8AD: mov     ecx, [esi+38h]; this
0x5DE8B0: fstp    [esp+0Ch+a2]; a3
0x5DE8B3: push    0FB3h; a2
0x5DE8B8: call    Tile_SetFloat
0x5DE8BD: fld     dword ptr ds:0B06F64h
0x5DE8C3: fld     dword ptr ds:0B1485Ch
0x5DE8C9: push    ecx
0x5DE8CA: fld     st
0x5DE8CC: mov     ecx, [esi+38h]; this
0x5DE8CF: fsubp   st(2), st
0x5DE8D1: fsubr   dword ptr ds:0B14864h
0x5DE8D7: fdivp   st(1), st
0x5DE8D9: fmul    qword ptr ds:0A309F0h
0x5DE8DF: fstp    [esp+0Ch+var_4]; a3
0x5DE8E3: fld     [esp+0Ch+var_4]
0x5DE8E7: fstp    [esp+0Ch+a2]; a3
0x5DE8EA: push    0FB3h; a2
0x5DE8EF: call    Tile_SetFloat
0x5DE8F4: fldz
0x5DE8F6: push    ecx
0x5DE8F7: fstp    [esp+0Ch+a2]; a3
0x5DE8FA: mov     ecx, [esi+38h]; this
0x5DE8FD: push    0FB3h; a2
0x5DE902: call    Tile_SetFloat
0x5DE907: pop     esi
0x5DE908: pop     ecx
0x5DE909: retn
0x5DE90A: fxch    st(2)
0x5DE90C: fstp    [esp+8+var_4]
0x5DE910: jmp     loc_5DE804
