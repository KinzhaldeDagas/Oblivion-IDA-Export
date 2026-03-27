0x946470: push    ebx
0x946471: push    esi
0x946472: mov     esi, ecx
0x946474: mov     ebx, [esi+2Ch]
0x946477: test    ebx, ebx
0x946479: mov     dword ptr [esi], offset off_AA2950
0x94647F: mov     dword ptr [esi+8], offset off_AA2938
0x946486: jz      short loc_9464D1
0x946488: mov     eax, [ebx+28h]
0x94648B: push    edi
0x94648C: xor     edi, edi
0x94648E: test    eax, eax
0x946490: jle     short loc_9464A8
0x946492: mov     eax, [ebx+24h]
0x946495: mov     ecx, [eax+edi*8]
0x946498: push    ecx
0x946499: mov     ecx, esi
0x94649B: call    sub_946340
0x9464A0: mov     eax, [ebx+28h]
0x9464A3: inc     edi
0x9464A4: cmp     edi, eax
0x9464A6: jl      short loc_946492
0x9464A8: mov     ecx, [esi+2Ch]
0x9464AB: push    offset sub_9463B0
0x9464B0: call    sub_8CA250
0x9464B5: mov     ecx, [esi+2Ch]
0x9464B8: cmp     word ptr [ecx+4], 0
0x9464BD: pop     edi
0x9464BE: jz      short loc_9464D1
0x9464C0: dec     word ptr [ecx+6]
0x9464C4: cmp     word ptr [ecx+6], 0
0x9464C9: jnz     short loc_9464D1
0x9464CB: mov     edx, [ecx]
0x9464CD: push    1
0x9464CF: call    dword ptr [edx]
0x9464D1: mov     eax, [esi+28h]
0x9464D4: test    eax, eax
0x9464D6: js      short loc_94650C
0x9464D8: mov     ecx, ds:0BA9DE4h
0x9464DE: mov     edx, large fs:2Ch
0x9464E5: mov     ecx, [edx+ecx*4]
0x9464E8: mov     ecx, [ecx+19Ch]
0x9464EE: test    ecx, ecx
0x9464F0: jnz     short loc_9464F8
0x9464F2: mov     ecx, ds:0BA7D9Ch
0x9464F8: mov     edx, [esi+20h]
0x9464FB: and     eax, 3FFFFFFFh
0x946500: push    14h
0x946502: shl     eax, 3
0x946505: push    eax
0x946506: push    edx
0x946507: call    sub_8A75D0
0x94650C: mov     dword ptr [esi+8], offset off_A9D1C0
0x946513: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x946519: pop     esi
0x94651A: pop     ebx
0x94651B: retn
