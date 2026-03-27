0x6D2DD0: push    0FFFFFFFFh
0x6D2DD2: push    offset SEH_8C62B0
0x6D2DD7: mov     eax, large fs:0
0x6D2DDD: push    eax
0x6D2DDE: push    ecx
0x6D2DDF: push    esi
0x6D2DE0: mov     eax, ds:0B30AACh
0x6D2DE5: xor     eax, esp
0x6D2DE7: push    eax
0x6D2DE8: lea     eax, [esp+18h+var_C]
0x6D2DEC: mov     large fs:0, eax
0x6D2DF2: push    18h; Size
0x6D2DF4: call    FormHeapAlloc
0x6D2DF9: mov     esi, eax
0x6D2DFB: add     esp, 4
0x6D2DFE: mov     [esp+18h+var_10], esi
0x6D2E02: test    esi, esi
0x6D2E04: mov     [esp+18h+var_4], 0
0x6D2E0C: jz      short loc_6D2E45
0x6D2E0E: mov     ecx, esi
0x6D2E10: call    sub_6EC220
0x6D2E15: mov     dword ptr [esi], offset ??_7NiFloatInterpolator@@6B@; const NiFloatInterpolator::`vftable'
0x6D2E1B: fld     dword ptr ds:0A7C6B0h
0x6D2E21: fstp    dword ptr [esi+0Ch]
0x6D2E24: mov     dword ptr [esi+10h], 0
0x6D2E2B: mov     dword ptr [esi+14h], 0
0x6D2E32: mov     eax, esi
0x6D2E34: mov     ecx, [esp+18h+var_C]
0x6D2E38: mov     large fs:0, ecx
0x6D2E3F: pop     ecx
0x6D2E40: pop     esi
0x6D2E41: add     esp, 10h
0x6D2E44: retn
0x6D2E45: xor     eax, eax
0x6D2E47: mov     ecx, [esp+18h+var_C]
0x6D2E4B: mov     large fs:0, ecx
0x6D2E52: pop     ecx
0x6D2E53: pop     esi
0x6D2E54: add     esp, 10h
0x6D2E57: retn
