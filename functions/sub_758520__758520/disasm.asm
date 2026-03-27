0x758520: push    esi
0x758521: mov     esi, ecx
0x758523: mov     eax, [esi+0Ch]
0x758526: test    eax, eax
0x758528: mov     dword ptr [esi], offset ??_7NiPSysEmitterCtlrData@@6B@; const NiPSysEmitterCtlrData::`vftable'
0x75852E: jz      short loc_758540
0x758530: mov     ecx, [esi+10h]
0x758533: mov     edx, ds:0B3D2C8h[ecx*4]
0x75853A: push    eax
0x75853B: call    edx ; dword_B3D2C8
0x75853D: add     esp, 4
0x758540: mov     eax, [esi+1Ch]
0x758543: test    eax, eax
0x758545: jz      short loc_758557
0x758547: mov     ecx, [esi+20h]
0x75854A: mov     edx, ds:0B3D340h[ecx*4]
0x758551: push    eax
0x758552: call    edx ; dword_B3D340
0x758554: add     esp, 4
0x758557: mov     ecx, esi
0x758559: call    NiRefObject_destr
0x75855E: test    [esp+4+arg_0], 1
0x758563: jz      short loc_75856E
0x758565: push    esi
0x758566: call    FormHeapFree
0x75856B: add     esp, 4
0x75856E: mov     eax, esi
0x758570: pop     esi
0x758571: retn    4
