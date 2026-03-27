0x5D6693: xor     ebx, ebx
0x5D6695: xor     ebp, ebp
0x5D6697: push    ebp
0x5D6698: push    0
0x5D669A: call    ActorValue_GetAVFromGroupOffset
0x5D669F: mov     edi, eax
0x5D66A1: add     esp, 8
0x5D66A4: push    edi
0x5D66A5: push    edi
0x5D66A6: call    ActorValue_GetName
0x5D66AB: add     esp, 4
0x5D66AE: push    eax
0x5D66AF: mov     ecx, esi
0x5D66B1: call    sub_5D6270
0x5D66B6: test    ebx, ebx
0x5D66B8: jz      short loc_5D66BF
0x5D66BA: cmp     edi, [esi+40h]
0x5D66BD: jnz     short loc_5D66C1
0x5D66BF: mov     ebx, eax
0x5D66C1: add     ebp, 1
0x5D66C4: cmp     ebp, 8
0x5D66C7: jl      short loc_5D6697
0x5D66C9: cmp     dword ptr [esi+4Ch], 0
0x5D66CD: jnz     loc_5D65E1
0x5D66D3: test    ebx, ebx
0x5D66D5: jz      loc_5D6622
0x5D66DB: mov     edi, [esi]
0x5D66DD: push    ebx
0x5D66DE: push    0FA8h
0x5D66E3: mov     ecx, ebx
0x5D66E5: add     edi, 0Ch
0x5D66E8: call    Tile_GetFloat
0x5D66ED: call    Double_To_SInt32
0x5D66F2: mov     edx, [edi]
0x5D66F4: push    eax
0x5D66F5: mov     ecx, esi
0x5D66F7: call    edx
0x5D66F9: fld     dword ptr ds:0A379B4h
0x5D66FF: push    ecx
0x5D6700: fstp    [esp+4+var_4]
0x5D6703: push    0FF0h
0x5D6708: mov     ecx, ebx
0x5D670A: jmp     loc_5D661D
