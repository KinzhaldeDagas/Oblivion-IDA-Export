0x571CE0: push    0FFFFFFFFh
0x571CE2: push    offset ??1Extra@Tile@@UAE@XZ_SEH
0x571CE7: mov     eax, large fs:0
0x571CED: push    eax
0x571CEE: push    ecx
0x571CEF: push    esi
0x571CF0: mov     eax, ds:0B30AACh
0x571CF5: xor     eax, esp
0x571CF7: push    eax
0x571CF8: lea     eax, [esp+18h+var_C]
0x571CFC: mov     large fs:0, eax
0x571D02: mov     esi, ecx
0x571D04: mov     eax, [esi+10h]
0x571D07: push    eax
0x571D08: call    FormHeapFree
0x571D0D: xor     eax, eax
0x571D0F: add     esp, 4
0x571D12: mov     ecx, esi
0x571D14: mov     [esi+10h], eax
0x571D17: mov     [esi+16h], ax
0x571D1B: mov     [esi+14h], ax
0x571D1F: mov     [esp+18h+var_4], 0FFFFFFFFh
0x571D27: call    NiExtraData_dtor
0x571D2C: mov     ecx, [esp+18h+var_C]
0x571D30: mov     large fs:0, ecx
0x571D37: pop     ecx
0x571D38: pop     esi
0x571D39: add     esp, 10h
0x571D3C: retn
