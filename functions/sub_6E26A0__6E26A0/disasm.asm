0x6E26A0: push    0FFFFFFFFh
0x6E26A2: push    offset SEH_8C62B0
0x6E26A7: mov     eax, large fs:0
0x6E26AD: push    eax
0x6E26AE: push    ecx
0x6E26AF: push    esi
0x6E26B0: mov     eax, ds:0B30AACh
0x6E26B5: xor     eax, esp
0x6E26B7: push    eax
0x6E26B8: lea     eax, [esp+18h+var_C]
0x6E26BC: mov     large fs:0, eax
0x6E26C2: push    50h ; 'P'; Size
0x6E26C4: call    FormHeapAlloc
0x6E26C9: mov     esi, eax
0x6E26CB: add     esp, 4
0x6E26CE: mov     [esp+18h+var_10], esi
0x6E26D2: test    esi, esi
0x6E26D4: mov     [esp+18h+var_4], 0
0x6E26DC: jz      short loc_6E270C
0x6E26DE: mov     ecx, esi; this
0x6E26E0: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E26E5: mov     dword ptr [esi], offset ??_7NiFloatsExtraDataPoint3Controller@@6B@; const NiFloatsExtraDataPoint3Controller::`vftable'
0x6E26EB: mov     dword ptr [esi+48h], 0FFFFFFFFh
0x6E26F2: mov     dword ptr [esi+4Ch], 0
0x6E26F9: mov     eax, esi
0x6E26FB: mov     ecx, [esp+18h+var_C]
0x6E26FF: mov     large fs:0, ecx
0x6E2706: pop     ecx
0x6E2707: pop     esi
0x6E2708: add     esp, 10h
0x6E270B: retn
0x6E270C: xor     eax, eax
0x6E270E: mov     ecx, [esp+18h+var_C]
0x6E2712: mov     large fs:0, ecx
0x6E2719: pop     ecx
0x6E271A: pop     esi
0x6E271B: add     esp, 10h
0x6E271E: retn
