0x6E2BC0: push    0FFFFFFFFh
0x6E2BC2: push    offset SEH_8C62B0
0x6E2BC7: mov     eax, large fs:0
0x6E2BCD: push    eax
0x6E2BCE: push    ecx
0x6E2BCF: push    esi
0x6E2BD0: mov     eax, ds:0B30AACh
0x6E2BD5: xor     eax, esp
0x6E2BD7: push    eax
0x6E2BD8: lea     eax, [esp+18h+var_C]
0x6E2BDC: mov     large fs:0, eax
0x6E2BE2: push    50h ; 'P'; Size
0x6E2BE4: call    FormHeapAlloc
0x6E2BE9: mov     esi, eax
0x6E2BEB: add     esp, 4
0x6E2BEE: mov     [esp+18h+var_10], esi
0x6E2BF2: test    esi, esi
0x6E2BF4: mov     [esp+18h+var_4], 0
0x6E2BFC: jz      short loc_6E2C2C
0x6E2BFE: mov     ecx, esi; this
0x6E2C00: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E2C05: mov     dword ptr [esi], offset ??_7NiFloatsExtraDataController@@6B@; const NiFloatsExtraDataController::`vftable'
0x6E2C0B: mov     dword ptr [esi+48h], 0FFFFFFFFh
0x6E2C12: mov     dword ptr [esi+4Ch], 0
0x6E2C19: mov     eax, esi
0x6E2C1B: mov     ecx, [esp+18h+var_C]
0x6E2C1F: mov     large fs:0, ecx
0x6E2C26: pop     ecx
0x6E2C27: pop     esi
0x6E2C28: add     esp, 10h
0x6E2C2B: retn
0x6E2C2C: xor     eax, eax
0x6E2C2E: mov     ecx, [esp+18h+var_C]
0x6E2C32: mov     large fs:0, ecx
0x6E2C39: pop     ecx
0x6E2C3A: pop     esi
0x6E2C3B: add     esp, 10h
0x6E2C3E: retn
