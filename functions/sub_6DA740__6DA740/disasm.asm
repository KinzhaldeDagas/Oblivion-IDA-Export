0x6DA740: push    0FFFFFFFFh
0x6DA742: push    offset SEH_8C62B0
0x6DA747: mov     eax, large fs:0
0x6DA74D: push    eax
0x6DA74E: push    ecx
0x6DA74F: push    esi
0x6DA750: mov     eax, ds:0B30AACh
0x6DA755: xor     eax, esp
0x6DA757: push    eax
0x6DA758: lea     eax, [esp+18h+var_C]
0x6DA75C: mov     large fs:0, eax
0x6DA762: push    20h ; ' '; Size
0x6DA764: call    FormHeapAlloc
0x6DA769: mov     esi, eax
0x6DA76B: add     esp, 4
0x6DA76E: mov     [esp+18h+var_10], esi
0x6DA772: test    esi, esi
0x6DA774: mov     [esp+18h+var_4], 0
0x6DA77C: jz      short loc_6DA7C6
0x6DA77E: mov     ecx, esi
0x6DA780: call    sub_6EC220
0x6DA785: mov     dword ptr [esi], offset ??_7NiPoint3Interpolator@@6B@; const NiPoint3Interpolator::`vftable'
0x6DA78B: mov     eax, ds:0B24FC8h
0x6DA790: mov     [esi+0Ch], eax
0x6DA793: mov     ecx, ds:0B24FCCh
0x6DA799: mov     [esi+10h], ecx
0x6DA79C: mov     edx, ds:0B24FD0h
0x6DA7A2: mov     [esi+14h], edx
0x6DA7A5: mov     dword ptr [esi+18h], 0
0x6DA7AC: mov     dword ptr [esi+1Ch], 0
0x6DA7B3: mov     eax, esi
0x6DA7B5: mov     ecx, [esp+18h+var_C]
0x6DA7B9: mov     large fs:0, ecx
0x6DA7C0: pop     ecx
0x6DA7C1: pop     esi
0x6DA7C2: add     esp, 10h
0x6DA7C5: retn
0x6DA7C6: xor     eax, eax
0x6DA7C8: mov     ecx, [esp+18h+var_C]
0x6DA7CC: mov     large fs:0, ecx
0x6DA7D3: pop     ecx
0x6DA7D4: pop     esi
0x6DA7D5: add     esp, 10h
0x6DA7D8: retn
