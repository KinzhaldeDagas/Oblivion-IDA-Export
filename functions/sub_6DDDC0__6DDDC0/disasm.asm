0x6DDDC0: push    0FFFFFFFFh
0x6DDDC2: push    offset SEH_6DDDC0
0x6DDDC7: mov     eax, large fs:0
0x6DDDCD: push    eax
0x6DDDCE: push    ecx
0x6DDDCF: push    esi
0x6DDDD0: push    edi
0x6DDDD1: mov     eax, ds:0B30AACh
0x6DDDD6: xor     eax, esp
0x6DDDD8: push    eax
0x6DDDD9: lea     eax, [esp+1Ch+var_C]
0x6DDDDD: mov     large fs:0, eax
0x6DDDE3: push    6Ch ; 'l'; Size
0x6DDDE5: call    FormHeapAlloc
0x6DDDEA: mov     esi, eax
0x6DDDEC: add     esp, 4
0x6DDDEF: mov     [esp+1Ch+var_10], esi
0x6DDDF3: xor     edi, edi
0x6DDDF5: cmp     esi, edi
0x6DDDF7: mov     [esp+1Ch+var_4], edi
0x6DDDFB: jz      short loc_6DDE52
0x6DDDFD: mov     ecx, esi; this
0x6DDDFF: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6DDE04: mov     dword ptr [esi], offset ??_7NiPathController@@6B@; const NiPathController::`vftable'
0x6DDE0A: mov     [esi+48h], edi
0x6DDE0D: mov     [esi+4Ch], edi
0x6DDE10: fldz
0x6DDE12: fst     dword ptr [esi+58h]
0x6DDE15: mov     [esi+40h], edi
0x6DDE18: fst     dword ptr [esi+5Ch]
0x6DDE1B: mov     [esi+44h], edi
0x6DDE1E: fstp    dword ptr [esi+64h]
0x6DDE21: mov     dword ptr [esi+68h], 1
0x6DDE28: fld     dword ptr ds:0A30634h
0x6DDE2E: mov     [esi+60h], di
0x6DDE32: fstp    dword ptr [esi+54h]
0x6DDE35: mov     [esi+50h], edi
0x6DDE38: mov     word ptr [esi+3Ch], 3
0x6DDE3E: mov     eax, esi
0x6DDE40: mov     ecx, [esp+1Ch+var_C]
0x6DDE44: mov     large fs:0, ecx
0x6DDE4B: pop     ecx
0x6DDE4C: pop     edi
0x6DDE4D: pop     esi
0x6DDE4E: add     esp, 10h
0x6DDE51: retn
0x6DDE52: xor     eax, eax
0x6DDE54: mov     ecx, [esp+1Ch+var_C]
0x6DDE58: mov     large fs:0, ecx
0x6DDE5F: pop     ecx
0x6DDE60: pop     edi
0x6DDE61: pop     esi
0x6DDE62: add     esp, 10h
0x6DDE65: retn
