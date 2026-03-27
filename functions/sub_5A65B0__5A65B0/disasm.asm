0x5A65B0: push    esi
0x5A65B1: push    3ECh
0x5A65B6: call    Menu_GetOpenMenuTile
0x5A65BB: mov     esi, eax
0x5A65BD: add     esp, 4
0x5A65C0: test    esi, esi
0x5A65C2: jz      loc_5A669C
0x5A65C8: mov     ecx, esi
0x5A65CA: call    Tile_GetParentMenu
0x5A65CF: test    eax, eax
0x5A65D1: jz      loc_5A669C
0x5A65D7: push    ebx
0x5A65D8: push    edi
0x5A65D9: mov     ecx, esi
0x5A65DB: call    Tile_GetParentMenu
0x5A65E0: mov     edi, [esp+0Ch+arg_0]
0x5A65E4: mov     edx, ds:0B3B344h
0x5A65EA: mov     ebx, eax
0x5A65EC: mov     al, [edi+4]
0x5A65EF: test    al, al
0x5A65F1: jz      loc_5A667B
0x5A65F7: mov     ecx, [edi]
0x5A65F9: cmp     ecx, edx
0x5A65FB: jz      short loc_5A6677
0x5A65FD: test    ecx, ecx
0x5A65FF: mov     ds:0B3B344h, ecx
0x5A6605: jz      loc_5A669A
0x5A660B: call    sub_4D7730
0x5A6610: test    eax, eax
0x5A6612: jz      loc_5A669A
0x5A6618: mov     ecx, [edi]
0x5A661A: call    sub_4D7730
0x5A661F: mov     ecx, eax; this
0x5A6621: call    TESModel_GetModelPath
0x5A6626: push    eax
0x5A6627: push    0FB6h
0x5A662C: mov     ecx, esi
0x5A662E: call    Tile_SetString
0x5A6633: fld     dword ptr ds:0A41304h
0x5A6639: sub     esp, 8
0x5A663C: fstp    [esp+14h+var_10]; float
0x5A6640: mov     ecx, esi
0x5A6642: fld     dword ptr ds:0A6BED0h
0x5A6648: fstp    [esp+14h+var_14]; float
0x5A664B: push    0FB5h
0x5A6650: call    Tile_GetFloat
0x5A6655: push    ecx
0x5A6656: fstp    [esp+18h+var_18]; float
0x5A6659: push    0FB5h; int
0x5A665E: mov     ecx, esi; int
0x5A6660: call    sub_589980
0x5A6665: call    dword ptr ds:0A280D0h
0x5A666B: add     eax, 1388h
0x5A6670: pop     edi
0x5A6671: mov     [ebx+74h], eax
0x5A6674: pop     ebx
0x5A6675: pop     esi
0x5A6676: retn
0x5A6677: test    al, al
0x5A6679: jnz     short loc_5A668D
0x5A667B: cmp     [edi], edx
0x5A667D: jnz     short loc_5A668D
0x5A667F: pop     edi
0x5A6680: pop     ebx
0x5A6681: mov     dword ptr ds:0B3B344h, 0
0x5A668B: pop     esi
0x5A668C: retn
0x5A668D: cmp     byte ptr [edi+5], 0
0x5A6691: jz      short loc_5A669A
0x5A6693: mov     eax, [edi]
0x5A6695: mov     ds:0B3B344h, eax
0x5A669A: pop     edi
0x5A669B: pop     ebx
0x5A669C: pop     esi
0x5A669D: retn
