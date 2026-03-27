0x463700: push    esi
0x463701: mov     esi, ecx
0x463703: mov     ecx, offset dword_B3BDB0
0x463708: call    sub_67CF00
0x46370D: mov     ecx, ds:0B3BF80h
0x463713: test    ecx, ecx
0x463715: jz      short loc_46371C
0x463717: call    sub_683500
0x46371C: mov     ecx, ds:0B35B90h
0x463722: test    ecx, ecx
0x463724: jz      short loc_46372B
0x463726: call    sub_4BE420
0x46372B: mov     ecx, ds:0B35B8Ch
0x463731: test    ecx, ecx
0x463733: jz      short loc_46373A
0x463735: call    sub_4BD8C0
0x46373A: mov     ecx, ds:0B333C4h
0x463740: call    sub_65E800
0x463745: mov     eax, ds:0B33A98h
0x46374A: add     eax, 74h ; 't'
0x46374D: push    eax
0x46374E: mov     ecx, esi
0x463750: call    sub_45C470
0x463755: mov     ecx, esi
0x463757: call    SaveLoad_ClearCreatedObjList??
0x46375C: mov     ecx, ds:0B333A0h
0x463762: call    sub_443300
0x463767: mov     ecx, offset ActorProcessManager_ptr
0x46376C: call    sub_677280
0x463771: mov     ecx, offset ActorProcessManager_ptr
0x463776: call    sub_67AE90
0x46377B: mov     ecx, ds:0B33398h
0x463781: mov     dword ptr ds:0B3B90Ch, 0
0x46378B: mov     esi, [ecx+24h]
0x46378E: test    esi, esi
0x463790: jz      short loc_4637A6
0x463792: push    0
0x463794: push    0
0x463796: push    0
0x463798: mov     ecx, esi
0x46379A: call    SoundManager_OpenMusicFile
0x46379F: mov     ecx, esi
0x4637A1: call    SoundManager_PlayMusic
0x4637A6: call    sub_5C16D0
0x4637AB: call    sub_5A8BA0
0x4637B0: call    sub_57C0A0
0x4637B5: call    sub_4F9FD0
0x4637BA: pop     esi
0x4637BB: jmp     sub_4F9DD0
