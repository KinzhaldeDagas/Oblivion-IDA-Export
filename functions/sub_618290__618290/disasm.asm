0x618290: push    esi
0x618291: mov     esi, [esp+4+Dst]
0x618295: push    1; Size
0x618297: lea     ecx, [esp+8+Dst]
0x61829B: test    esi, esi
0x61829D: setnz   al
0x6182A0: push    ecx; Dst
0x6182A1: mov     ecx, ds:0B33B00h
0x6182A7: mov     byte ptr [esp+0Ch+Dst], al
0x6182AB: call    SaveLoad_LoadData
0x6182B0: cmp     byte ptr [esp+4+Dst], 0
0x6182B5: jz      short loc_6182EE
0x6182B7: push    8; Size
0x6182B9: call    FormHeapAlloc
0x6182BE: add     esp, 4
0x6182C1: test    eax, eax
0x6182C3: jz      short loc_6182DF
0x6182C5: mov     dword ptr [eax], 0
0x6182CB: mov     dword ptr [eax+4], 0
0x6182D2: mov     ecx, eax
0x6182D4: mov     [esi], eax
0x6182D6: call    sub_614DB0
0x6182DB: pop     esi
0x6182DC: retn    4
0x6182DF: xor     eax, eax
0x6182E1: mov     ecx, eax
0x6182E3: mov     [esi], eax
0x6182E5: call    sub_614DB0
0x6182EA: pop     esi
0x6182EB: retn    4
0x6182EE: mov     dword ptr [esi], 0
0x6182F4: pop     esi
0x6182F5: retn    4
