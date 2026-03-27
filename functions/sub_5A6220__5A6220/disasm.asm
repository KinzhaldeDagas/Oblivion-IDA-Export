0x5A6220: push    edi
0x5A6221: mov     edi, ecx
0x5A6223: cmp     dword ptr [edi+38h], 0
0x5A6227: jz      short loc_5A62A6
0x5A6229: cmp     [esp+4+arg_0], 0
0x5A622E: push    esi
0x5A622F: jz      short loc_5A6292
0x5A6231: mov     eax, ds:0B333C4h
0x5A6236: test    eax, eax
0x5A6238: jz      short loc_5A6292
0x5A623A: mov     ecx, [eax+58h]
0x5A623D: test    ecx, ecx
0x5A623F: jz      short loc_5A6292
0x5A6241: mov     eax, [ecx]
0x5A6243: mov     edx, [eax+0ECh]
0x5A6249: push    1
0x5A624B: call    edx
0x5A624D: mov     esi, eax
0x5A624F: test    esi, esi
0x5A6251: jz      short loc_5A6292
0x5A6253: push    ebx; a3
0x5A6254: mov     ecx, esi
0x5A6256: call    sub_485C00
0x5A625B: mov     ebx, eax
0x5A625D: mov     [esp+0Ch+arg_0], ebx
0x5A6261: fild    [esp+0Ch+arg_0]
0x5A6265: push    ecx
0x5A6266: mov     ecx, [edi+38h]; this
0x5A6269: fstp    [esp+10h+var_10]; a3
0x5A626C: push    0FAEh; a2
0x5A6271: call    Tile_SetFloat
0x5A6276: push    ebx
0x5A6277: mov     ecx, esi
0x5A6279: call    sub_48F6A0
0x5A627E: mov     ecx, [edi+38h]
0x5A6281: push    eax
0x5A6282: push    0FAFh
0x5A6287: call    Tile_SetString
0x5A628C: pop     ebx
0x5A628D: pop     esi
0x5A628E: pop     edi
0x5A628F: retn    4
0x5A6292: fldz
0x5A6294: push    ecx
0x5A6295: mov     ecx, [edi+38h]; this
0x5A6298: fstp    [esp+0Ch+a3]; a3
0x5A629B: push    0FAEh; a2
0x5A62A0: call    Tile_SetFloat
0x5A62A5: pop     esi
0x5A62A6: pop     edi
0x5A62A7: retn    4
