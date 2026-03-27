0x6E4090: push    0FFFFFFFFh
0x6E4092: push    offset SEH_8C62B0
0x6E4097: mov     eax, large fs:0
0x6E409D: push    eax
0x6E409E: push    ecx
0x6E409F: push    esi
0x6E40A0: mov     eax, ds:0B30AACh
0x6E40A5: xor     eax, esp
0x6E40A7: push    eax
0x6E40A8: lea     eax, [esp+18h+var_C]
0x6E40AC: mov     large fs:0, eax
0x6E40B2: push    48h ; 'H'; Size
0x6E40B4: call    FormHeapAlloc
0x6E40B9: mov     esi, eax
0x6E40BB: add     esp, 4
0x6E40BE: mov     [esp+18h+var_10], esi
0x6E40C2: xor     eax, eax
0x6E40C4: cmp     esi, eax
0x6E40C6: mov     [esp+18h+var_4], eax
0x6E40CA: jz      short loc_6E40DB
0x6E40CC: mov     ecx, esi; this
0x6E40CE: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E40D3: mov     dword ptr [esi], offset ??_7NiColorExtraDataController@@6B@; const NiColorExtraDataController::`vftable'
0x6E40D9: mov     eax, esi
0x6E40DB: mov     ecx, [esp+18h+var_C]
0x6E40DF: mov     large fs:0, ecx
0x6E40E6: pop     ecx
0x6E40E7: pop     esi
0x6E40E8: add     esp, 10h
0x6E40EB: retn
