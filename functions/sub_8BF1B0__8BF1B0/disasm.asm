0x8BF1B0: sub     esp, 18h
0x8BF1B3: fld     dword ptr ds:0A34BA0h
0x8BF1B9: push    esi
0x8BF1BA: mov     esi, [esp+1Ch+arg_4]
0x8BF1BE: fstp    [esp+1Ch+var_C]
0x8BF1C2: fld     dword ptr ds:0A37080h
0x8BF1C8: push    edi
0x8BF1C9: mov     edi, ecx
0x8BF1CB: fstp    [esp+20h+var_8]
0x8BF1CF: xor     ecx, ecx
0x8BF1D1: cmp     esi, ecx
0x8BF1D3: mov     [esp+20h+var_18], ecx
0x8BF1D7: mov     [esp+20h+var_14], ecx
0x8BF1DB: mov     [esp+20h+var_10], ecx
0x8BF1DF: mov     [esp+20h+var_4], ecx
0x8BF1E3: jnz     short loc_8BF203
0x8BF1E5: mov     eax, [esp+20h+arg_0]
0x8BF1E9: mov     eax, [eax+21Ch]
0x8BF1EF: mov     edx, [eax+4]
0x8BF1F2: push    ecx
0x8BF1F3: push    ecx
0x8BF1F4: lea     esi, [esp+28h+var_18]
0x8BF1F8: push    18h
0x8BF1FA: mov     ecx, esi
0x8BF1FC: push    ecx
0x8BF1FD: push    eax
0x8BF1FE: call    edx
0x8BF200: add     esp, 14h
0x8BF203: mov     eax, [edi]
0x8BF205: mov     edx, [eax+10h]
0x8BF208: mov     ecx, edi
0x8BF20A: call    edx
0x8BF20C: fld     dword ptr [esi+0Ch]
0x8BF20F: mov     edi, [edi+4]
0x8BF212: fstp    dword ptr [edi+10h]
0x8BF215: fld     dword ptr [esi+10h]
0x8BF218: fstp    dword ptr [edi+14h]
0x8BF21B: pop     edi
0x8BF21C: pop     esi
0x8BF21D: add     esp, 18h
0x8BF220: retn    8
