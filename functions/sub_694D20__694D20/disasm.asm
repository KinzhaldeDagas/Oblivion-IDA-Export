0x694D20: push    0FFFFFFFFh
0x694D22: push    offset SEH_69C140
0x694D27: mov     eax, large fs:0
0x694D2D: push    eax
0x694D2E: sub     esp, 8
0x694D31: push    esi
0x694D32: push    edi
0x694D33: mov     eax, ds:0B30AACh
0x694D38: xor     eax, esp
0x694D3A: push    eax
0x694D3B: lea     eax, [esp+20h+var_C]
0x694D3F: mov     large fs:0, eax
0x694D45: mov     esi, ecx
0x694D47: mov     [esp+20h+var_10], esi
0x694D4B: mov     dword ptr [esi], offset ??_7MagicBallProjectile@@6BMagicBallProjectile@@@; const MagicBallProjectile::`vftable'{for `MagicBallProjectile'}
0x694D51: mov     dword ptr [esi+18h], offset ??_7MagicBallProjectile@@6BTESChildCell@@@; const MagicBallProjectile::`vftable'{for `TESChildCell'}
0x694D58: mov     ecx, [esi+68h]
0x694D5B: test    ecx, ecx
0x694D5D: mov     [esp+20h+var_4], 0
0x694D65: jz      short loc_694D70
0x694D67: mov     eax, [ecx]
0x694D69: mov     edx, [eax+20h]
0x694D6C: call    edx
0x694D6E: jmp     short loc_694D72
0x694D70: xor     eax, eax
0x694D72: cmp     eax, ds:0B333C4h
0x694D78: jz      short loc_694DA5
0x694D7A: fld     dword ptr ds:0B38108h
0x694D80: fcom    qword ptr ds:0A2FC68h
0x694D86: fnstsw  ax
0x694D88: test    ah, 5
0x694D8B: jp      short loc_694D91
0x694D8D: fstp    st
0x694D8F: fldz
0x694D91: fstp    [esp+20h+var_14]
0x694D95: fld     dword ptr ds:0B3C0D0h
0x694D9B: fsub    [esp+20h+var_14]
0x694D9F: fstp    dword ptr ds:0B3C0D0h
0x694DA5: mov     ecx, [esi+88h]
0x694DAB: test    ecx, ecx
0x694DAD: jz      short loc_694DD8
0x694DAF: call    sub_6B7240
0x694DB4: mov     edi, [esi+88h]
0x694DBA: test    edi, edi
0x694DBC: jz      short loc_694DD8
0x694DBE: mov     ecx, edi; this
0x694DC0: call    sub_6B73E0
0x694DC5: push    edi
0x694DC6: call    FormHeapFree
0x694DCB: add     esp, 4
0x694DCE: mov     dword ptr [esi+88h], 0
0x694DD8: mov     edi, [esi+8Ch]
0x694DDE: test    edi, edi
0x694DE0: jz      short loc_694DF2
0x694DE2: mov     ecx, edi; this
0x694DE4: call    MagicCaster_CastingVFX_destr
0x694DE9: push    edi
0x694DEA: call    FormHeapFree
0x694DEF: add     esp, 4
0x694DF2: mov     ecx, esi
0x694DF4: mov     dword ptr [esi+8Ch], 0
0x694DFE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x694E06: call    sub_69FA60
0x694E0B: mov     ecx, [esp+20h+var_C]
0x694E0F: mov     large fs:0, ecx
0x694E16: pop     ecx
0x694E17: pop     edi
0x694E18: pop     esi
0x694E19: add     esp, 14h
0x694E1C: retn
