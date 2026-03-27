0x5E08C0: push    esi
0x5E08C1: push    edi
0x5E08C2: mov     edi, [esp+8+arg_0]
0x5E08C6: test    edi, edi
0x5E08C8: mov     esi, ecx
0x5E08CA: jnz     short loc_5E08D3
0x5E08CC: pop     edi
0x5E08CD: xor     al, al
0x5E08CF: pop     esi
0x5E08D0: retn    0Ch
0x5E08D3: mov     ecx, ds:0B333C4h
0x5E08D9: cmp     esi, ecx
0x5E08DB: push    ebx
0x5E08DC: mov     bl, 1
0x5E08DE: jnz     short loc_5E0915
0x5E08E0: cmp     [esp+0Ch+arg_8], 0
0x5E08E5: jnz     short loc_5E0915
0x5E08E7: lea     eax, [edi+24h]
0x5E08EA: push    eax
0x5E08EB: call    Player_EquipPotion?
0x5E08F0: mov     bl, al
0x5E08F2: test    bl, bl
0x5E08F4: jz      short loc_5E095B
0x5E08F6: mov     edx, [esi]
0x5E08F8: mov     eax, [esp+0Ch+arg_4]
0x5E08FC: mov     edx, [edx+100h]
0x5E0902: push    0
0x5E0904: push    1
0x5E0906: push    0
0x5E0908: push    0
0x5E090A: push    0
0x5E090C: push    0
0x5E090E: push    0
0x5E0910: push    1
0x5E0912: push    eax
0x5E0913: jmp     short loc_5E0956
0x5E0915: mov     eax, [esi+5Ch]
0x5E0918: mov     edx, [eax+34h]
0x5E091B: push    ebp
0x5E091C: lea     ebp, [esi+5Ch]
0x5E091F: lea     ecx, [edi+24h]
0x5E0922: push    ecx
0x5E0923: mov     ecx, ebp
0x5E0925: call    edx
0x5E0927: push    0
0x5E0929: mov     ecx, ebp
0x5E092B: call    MagicCaster_UseActiveMagicItem
0x5E0930: cmp     esi, ds:0B333C4h
0x5E0936: pop     ebp
0x5E0937: jz      short loc_5E0963
0x5E0939: mov     eax, [esi]
0x5E093B: mov     ecx, [esp+0Ch+arg_4]
0x5E093F: mov     edx, [eax+100h]
0x5E0945: push    0
0x5E0947: push    1
0x5E0949: push    0
0x5E094B: push    0
0x5E094D: push    0
0x5E094F: push    0
0x5E0951: push    0
0x5E0953: push    1
0x5E0955: push    ecx
0x5E0956: push    edi
0x5E0957: mov     ecx, esi
0x5E0959: call    edx
0x5E095B: cmp     esi, ds:0B333C4h
0x5E0961: jnz     short loc_5E0968
0x5E0963: call    sub_5C1900
0x5E0968: mov     al, bl
0x5E096A: pop     ebx
0x5E096B: pop     edi
0x5E096C: pop     esi
0x5E096D: retn    0Ch
