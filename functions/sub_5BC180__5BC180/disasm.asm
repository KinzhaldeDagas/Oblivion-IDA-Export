0x5BC180: mov     eax, [esp+arg_0]
0x5BC184: sub     esp, 0Ch
0x5BC187: cmp     eax, 0Dh
0x5BC18A: push    esi
0x5BC18B: mov     esi, ecx
0x5BC18D: jnz     short loc_5BC1D3
0x5BC18F: fld1
0x5BC191: fcomp   [esp+10h+arg_4]
0x5BC195: fnstsw  ax
0x5BC197: test    ah, 41h
0x5BC19A: jp      loc_5BC43B
0x5BC1A0: call    sub_578FE0
0x5BC1A5: cmp     eax, 1
0x5BC1A8: jnz     loc_5BC43B
0x5BC1AE: push    0Bh
0x5BC1B0: push    3E9h
0x5BC1B5: call    sub_5790E0
0x5BC1BA: add     esp, 8
0x5BC1BD: test    al, al
0x5BC1BF: jnz     loc_5BC43B
0x5BC1C5: call    sub_5A5F60
0x5BC1CA: mov     al, 1
0x5BC1CC: pop     esi
0x5BC1CD: add     esp, 0Ch
0x5BC1D0: retn    8
0x5BC1D3: cmp     eax, 0Eh
0x5BC1D6: jnz     short loc_5BC21C
0x5BC1D8: fld1
0x5BC1DA: fcomp   [esp+10h+arg_4]
0x5BC1DE: fnstsw  ax
0x5BC1E0: test    ah, 41h
0x5BC1E3: jp      loc_5BC43B
0x5BC1E9: call    sub_578FE0
0x5BC1EE: cmp     eax, 1
0x5BC1F1: jnz     loc_5BC43B
0x5BC1F7: push    0Bh
0x5BC1F9: push    3E9h
0x5BC1FE: call    sub_5790E0
0x5BC203: add     esp, 8
0x5BC206: test    al, al
0x5BC208: jnz     loc_5BC43B
0x5BC20E: call    sub_5A5E80
0x5BC213: mov     al, 1
0x5BC215: pop     esi
0x5BC216: add     esp, 0Ch
0x5BC219: retn    8
0x5BC21C: cmp     eax, 0Bh
0x5BC21F: jnz     loc_5BC43B
0x5BC225: fld1
0x5BC227: fcomp   [esp+10h+arg_4]
0x5BC22B: fnstsw  ax
0x5BC22D: test    ah, 41h
0x5BC230: jp      loc_5BC43B
0x5BC236: call    sub_578FE0
0x5BC23B: cmp     eax, 1
0x5BC23E: jnz     loc_5BC43B
0x5BC244: mov     ecx, [esi+28h]
0x5BC247: push    0FAEh
0x5BC24C: call    Tile_GetFloat
0x5BC251: fcomp   dword ptr ds:0A379B4h
0x5BC257: fnstsw  ax
0x5BC259: test    ah, 44h
0x5BC25C: jp      loc_5BC34F
0x5BC262: mov     ecx, [esi+6Ch]
0x5BC265: push    0FADh
0x5BC26A: mov     byte ptr [esi+0DCh], 0
0x5BC271: call    Tile_GetFloat
0x5BC276: fstp    [esp+10h+var_C]
0x5BC27A: mov     ecx, [esi+58h]
0x5BC27D: push    0FADh
0x5BC282: call    Tile_GetFloat
0x5BC287: fsubr   [esp+10h+var_C]
0x5BC28B: mov     ecx, [esi+6Ch]
0x5BC28E: push    0FACh
0x5BC293: fstp    dword ptr [esi+0D4h]
0x5BC299: call    Tile_GetFloat
0x5BC29E: mov     ecx, [esi+58h]
0x5BC2A1: fstp    [esp+10h+var_C]
0x5BC2A5: push    0FACh
0x5BC2AA: call    Tile_GetFloat
0x5BC2AF: fsubr   [esp+10h+var_C]
0x5BC2B3: push    offset Vector3_InitValue?
0x5BC2B8: fstp    dword ptr [esi+0D8h]
0x5BC2BE: mov     eax, ds:0B333C4h
0x5BC2C3: mov     ecx, [eax+62Ch]
0x5BC2C9: mov     edx, [eax+630h]
0x5BC2CF: mov     eax, [eax+634h]
0x5BC2D5: mov     dword ptr [esp+14h+var_C], ecx
0x5BC2D9: lea     ecx, [esp+14h+var_C]
0x5BC2DD: mov     dword ptr [esp+14h+var_C+4], edx
0x5BC2E1: mov     [esp+14h+var_4], eax
0x5BC2E5: call    sub_8AA350
0x5BC2EA: test    al, al
0x5BC2EC: push    0
0x5BC2EE: jz      short loc_5BC31C
0x5BC2F0: mov     ecx, ds:0B38D00h
0x5BC2F6: mov     edx, ds:0B38CF8h
0x5BC2FC: mov     eax, ds:0B38C68h
0x5BC301: push    ecx
0x5BC302: push    edx
0x5BC303: push    1
0x5BC305: push    offset sub_5BB350
0x5BC30A: push    eax
0x5BC30B: call    ShowUIMessageBox
0x5BC310: add     esp, 18h
0x5BC313: xor     al, al
0x5BC315: pop     esi
0x5BC316: add     esp, 0Ch
0x5BC319: retn    8
0x5BC31C: mov     ecx, ds:0B38C88h
0x5BC322: mov     edx, ds:0B38C80h
0x5BC328: mov     eax, ds:0B38C78h
0x5BC32D: push    ecx
0x5BC32E: mov     ecx, ds:0B38C70h
0x5BC334: push    edx
0x5BC335: push    eax
0x5BC336: push    1
0x5BC338: push    offset sub_5BB350
0x5BC33D: push    ecx
0x5BC33E: call    ShowUIMessageBox
0x5BC343: add     esp, 1Ch
0x5BC346: xor     al, al
0x5BC348: pop     esi
0x5BC349: add     esp, 0Ch
0x5BC34C: retn    8
0x5BC34F: mov     ecx, [esi+28h]
0x5BC352: push    0FAEh
0x5BC357: call    Tile_GetFloat
0x5BC35C: fcomp   dword ptr ds:0A2F948h
0x5BC362: fnstsw  ax
0x5BC364: test    ah, 44h
0x5BC367: jp      loc_5BC43B
0x5BC36D: mov     ecx, [esi+70h]
0x5BC370: push    0FADh
0x5BC375: mov     byte ptr [esi+0DCh], 1
0x5BC37C: call    Tile_GetFloat
0x5BC381: fstp    [esp+10h+var_C]
0x5BC385: mov     ecx, [esi+60h]
0x5BC388: push    0FADh
0x5BC38D: call    Tile_GetFloat
0x5BC392: fsubr   [esp+10h+var_C]
0x5BC396: mov     ecx, [esi+70h]
0x5BC399: push    0FACh
0x5BC39E: fstp    dword ptr [esi+0D4h]
0x5BC3A4: call    Tile_GetFloat
0x5BC3A9: mov     ecx, [esi+60h]
0x5BC3AC: fstp    [esp+10h+var_C]
0x5BC3B0: push    0FACh
0x5BC3B5: call    Tile_GetFloat
0x5BC3BA: fsubr   [esp+10h+var_C]
0x5BC3BE: push    offset Vector3_InitValue?
0x5BC3C3: lea     edx, [esp+14h+var_C]
0x5BC3C7: fstp    dword ptr [esi+0D8h]
0x5BC3CD: mov     ecx, ds:0B333C4h
0x5BC3D3: push    edx
0x5BC3D4: call    sub_5A5790
0x5BC3D9: mov     ecx, eax
0x5BC3DB: call    sub_8AA350
0x5BC3E0: test    al, al
0x5BC3E2: push    0
0x5BC3E4: jz      short loc_5BC412
0x5BC3E6: mov     eax, ds:0B38D00h
0x5BC3EB: mov     ecx, ds:0B38CF8h
0x5BC3F1: mov     edx, ds:0B38C68h
0x5BC3F7: push    eax
0x5BC3F8: push    ecx
0x5BC3F9: push    1
0x5BC3FB: push    offset sub_5BB350
0x5BC400: push    edx
0x5BC401: call    ShowUIMessageBox
0x5BC406: add     esp, 18h
0x5BC409: xor     al, al
0x5BC40B: pop     esi
0x5BC40C: add     esp, 0Ch
0x5BC40F: retn    8
0x5BC412: mov     eax, ds:0B38C88h
0x5BC417: mov     ecx, ds:0B38C80h
0x5BC41D: mov     edx, ds:0B38C78h
0x5BC423: push    eax
0x5BC424: mov     eax, ds:0B38C70h
0x5BC429: push    ecx
0x5BC42A: push    edx
0x5BC42B: push    1
0x5BC42D: push    offset sub_5BB350
0x5BC432: push    eax
0x5BC433: call    ShowUIMessageBox
0x5BC438: add     esp, 1Ch
0x5BC43B: xor     al, al
0x5BC43D: pop     esi
0x5BC43E: add     esp, 0Ch
0x5BC441: retn    8
