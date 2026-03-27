0x6D9980: push    0FFFFFFFFh
0x6D9982: push    offset SEH_8C62B0
0x6D9987: mov     eax, large fs:0
0x6D998D: push    eax
0x6D998E: push    ecx
0x6D998F: push    esi
0x6D9990: mov     eax, ds:0B30AACh
0x6D9995: xor     eax, esp
0x6D9997: push    eax
0x6D9998: lea     eax, [esp+18h+var_C]
0x6D999C: mov     large fs:0, eax
0x6D99A2: push    24h ; '$'; Size
0x6D99A4: call    FormHeapAlloc
0x6D99A9: mov     esi, eax
0x6D99AB: add     esp, 4
0x6D99AE: mov     [esp+18h+var_10], esi
0x6D99B2: test    esi, esi
0x6D99B4: mov     [esp+18h+var_4], 0
0x6D99BC: jz      short loc_6D9A0E
0x6D99BE: mov     ecx, esi
0x6D99C0: call    sub_6EC220
0x6D99C5: mov     dword ptr [esi], offset ??_7NiQuaternionInterpolator@@6B@; const NiQuaternionInterpolator::`vftable'
0x6D99CB: mov     eax, ds:0B3EBA0h
0x6D99D0: mov     [esi+0Ch], eax
0x6D99D3: mov     ecx, ds:0B3EBA4h
0x6D99D9: mov     [esi+10h], ecx
0x6D99DC: mov     edx, ds:0B3EBA8h
0x6D99E2: mov     [esi+14h], edx
0x6D99E5: mov     eax, ds:0B3EBACh
0x6D99EA: mov     [esi+18h], eax
0x6D99ED: mov     dword ptr [esi+1Ch], 0
0x6D99F4: mov     dword ptr [esi+20h], 0
0x6D99FB: mov     eax, esi
0x6D99FD: mov     ecx, [esp+18h+var_C]
0x6D9A01: mov     large fs:0, ecx
0x6D9A08: pop     ecx
0x6D9A09: pop     esi
0x6D9A0A: add     esp, 10h
0x6D9A0D: retn
0x6D9A0E: xor     eax, eax
0x6D9A10: mov     ecx, [esp+18h+var_C]
0x6D9A14: mov     large fs:0, ecx
0x6D9A1B: pop     ecx
0x6D9A1C: pop     esi
0x6D9A1D: add     esp, 10h
0x6D9A20: retn
