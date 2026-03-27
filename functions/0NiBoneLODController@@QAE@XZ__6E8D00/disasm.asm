0x6E8D00: push    0FFFFFFFFh
0x6E8D02: push    offset ??0NiBoneLODController@@QAE@XZ_SEH
0x6E8D07: mov     eax, large fs:0
0x6E8D0D: push    eax
0x6E8D0E: push    ecx
0x6E8D0F: push    esi
0x6E8D10: mov     eax, ds:0B30AACh
0x6E8D15: xor     eax, esp
0x6E8D17: push    eax
0x6E8D18: lea     eax, [esp+18h+var_C]
0x6E8D1C: mov     large fs:0, eax
0x6E8D22: mov     esi, ecx
0x6E8D24: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6E8D29: xor     eax, eax
0x6E8D2B: mov     dword ptr [esi], offset ??_7NiBoneLODController@@6B@; const NiBoneLODController::`vftable'
0x6E8D31: mov     dword ptr [esi+3Ch], 0FFFFFFFFh
0x6E8D38: mov     [esi+40h], eax
0x6E8D3B: mov     ecx, 1
0x6E8D40: mov     dword ptr [esi+44h], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6E8D47: mov     [esi+4Ch], ax
0x6E8D4B: mov     [esi+52h], cx
0x6E8D4F: mov     [esi+4Eh], ax
0x6E8D53: mov     [esi+50h], ax
0x6E8D57: mov     [esi+48h], eax
0x6E8D5A: mov     dword ptr [esi+54h], offset ??_7?$NiTArray@PAV?$NiTSet@PAUSkinInfo@NiBoneLODController@@@@@@6B@; const NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'
0x6E8D61: mov     [esi+5Ch], ax
0x6E8D65: mov     [esi+62h], cx
0x6E8D69: mov     [esi+5Eh], ax
0x6E8D6D: mov     [esi+60h], ax
0x6E8D71: mov     [esi+58h], eax
0x6E8D74: mov     [esi+64h], eax
0x6E8D77: mov     [esi+68h], eax
0x6E8D7A: mov     [esi+6Ch], eax
0x6E8D7D: mov     eax, esi
0x6E8D7F: mov     ecx, [esp+18h+var_C]
0x6E8D83: mov     large fs:0, ecx
0x6E8D8A: pop     ecx
0x6E8D8B: pop     esi
0x6E8D8C: add     esp, 10h
0x6E8D8F: retn
