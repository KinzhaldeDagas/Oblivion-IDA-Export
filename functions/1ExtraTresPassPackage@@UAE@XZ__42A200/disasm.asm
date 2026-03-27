0x42A200: push    0FFFFFFFFh
0x42A202: push    offset SEH_42B090
0x42A207: mov     eax, large fs:0
0x42A20D: push    eax
0x42A20E: push    ecx
0x42A20F: push    esi
0x42A210: mov     eax, ___security_cookie
0x42A215: xor     eax, esp
0x42A217: push    eax
0x42A218: lea     eax, [esp+18h+var_C]
0x42A21C: mov     large fs:0, eax
0x42A222: mov     esi, ecx
0x42A224: mov     [esp+18h+var_10], esi
0x42A228: mov     dword ptr [esi], offset ??_7ExtraTresPassPackage@@6B@; const ExtraTresPassPackage::`vftable'
0x42A22E: mov     ecx, [esi+0Ch]
0x42A231: test    ecx, ecx
0x42A233: mov     [esp+18h+var_4], 0
0x42A23B: jz      short loc_42A274
0x42A23D: push    1
0x42A23F: call    sub_566830
0x42A244: mov     ecx, SaveLoad_CurrentSavegame
0x42A24A: call    sub_45A500
0x42A24F: test    al, al
0x42A251: jz      short loc_42A264
0x42A253: mov     eax, [esi+0Ch]
0x42A256: mov     ecx, SaveLoad_CurrentSavegame
0x42A25C: push    eax
0x42A25D: call    sub_45C7A0
0x42A262: jmp     short loc_42A274
0x42A264: mov     ecx, [esi+0Ch]
0x42A267: test    ecx, ecx
0x42A269: jz      short loc_42A274
0x42A26B: mov     edx, [ecx]
0x42A26D: mov     eax, [edx+10h]
0x42A270: push    1
0x42A272: call    eax
0x42A274: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A27A: mov     ecx, dword ptr [esp+18h+var_C]
0x42A27E: mov     large fs:0, ecx
0x42A285: pop     ecx
0x42A286: pop     esi
0x42A287: add     esp, 10h
0x42A28A: retn
