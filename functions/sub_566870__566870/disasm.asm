0x566870: push    esi
0x566871: mov     esi, ecx
0x566873: mov     ecx, [esi+28h]
0x566876: test    ecx, ecx
0x566878: jz      short loc_5668DC
0x56687A: call    sub_569E60
0x56687F: cmp     eax, [esp+4+arg_0]
0x566883: jnz     short loc_5668DC
0x566885: cmp     [esp+4+arg_4], 0
0x56688A: mov     eax, [esi+0Ch]
0x56688D: push    eax; _DWORD
0x56688E: jz      short loc_5668B8
0x566890: or      dword ptr [esi+1Ch], 8000h
0x566897: mov     ecx, ds:0B33A98h
0x56689D: call    TESDataHandler_IsFormIDCreated?
0x5668A2: test    al, al
0x5668A4: jnz     short loc_5668DC
0x5668A6: mov     eax, [esi]
0x5668A8: mov     edx, [eax+40h]
0x5668AB: push    10000000h
0x5668B0: mov     ecx, esi
0x5668B2: call    edx
0x5668B4: pop     esi
0x5668B5: retn    8
0x5668B8: and     dword ptr [esi+1Ch], 0FFFF7FFFh
0x5668BF: mov     ecx, ds:0B33A98h
0x5668C5: call    TESDataHandler_IsFormIDCreated?
0x5668CA: test    al, al
0x5668CC: jnz     short loc_5668DC
0x5668CE: mov     eax, [esi]
0x5668D0: mov     edx, [eax+44h]
0x5668D3: push    10000000h
0x5668D8: mov     ecx, esi
0x5668DA: call    edx
0x5668DC: pop     esi
0x5668DD: retn    8
