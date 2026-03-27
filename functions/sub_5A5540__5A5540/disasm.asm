0x5A5540: push    esi
0x5A5541: mov     esi, ecx
0x5A5543: add     dword ptr [esi+58h], 1
0x5A5547: cmp     dword ptr [esi+58h], 3Ch ; '<'
0x5A554B: jle     short loc_5A5598
0x5A554D: cmp     dword ptr [esi+54h], 0
0x5A5551: mov     dword ptr [esi+58h], 0
0x5A5558: jz      short loc_5A5598
0x5A555A: mov     ecx, [esi+4]
0x5A555D: push    0FB2h
0x5A5562: call    Tile_GetFloat
0x5A5567: fcomp   dword ptr ds:0A379B4h
0x5A556D: fnstsw  ax
0x5A556F: test    ah, 44h
0x5A5572: jp      short loc_5A5587
0x5A5574: mov     al, 1
0x5A5576: push    1
0x5A5578: push    eax
0x5A5579: mov     eax, [esi+54h]
0x5A557C: push    eax
0x5A557D: call    sub_5A4980
0x5A5582: add     esp, 0Ch
0x5A5585: pop     esi
0x5A5586: retn
0x5A5587: xor     al, al
0x5A5589: push    1
0x5A558B: push    eax
0x5A558C: mov     eax, [esi+54h]
0x5A558F: push    eax
0x5A5590: call    sub_5A4980
0x5A5595: add     esp, 0Ch
0x5A5598: pop     esi
0x5A5599: retn
