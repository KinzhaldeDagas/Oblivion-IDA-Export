0x6DDEC0: push    0FFFFFFFFh
0x6DDEC2: push    offset ??0NiPathController@@QAE@XZ_SEH
0x6DDEC7: mov     eax, large fs:0
0x6DDECD: push    eax
0x6DDECE: push    ecx
0x6DDECF: push    ebx
0x6DDED0: push    esi
0x6DDED1: push    edi
0x6DDED2: mov     eax, ds:0B30AACh
0x6DDED7: xor     eax, esp
0x6DDED9: push    eax
0x6DDEDA: lea     eax, [esp+20h+var_C]
0x6DDEDE: mov     large fs:0, eax
0x6DDEE4: mov     ebx, ecx
0x6DDEE6: push    6Ch ; 'l'; Size
0x6DDEE8: call    FormHeapAlloc
0x6DDEED: mov     esi, eax
0x6DDEEF: add     esp, 4
0x6DDEF2: mov     [esp+20h+var_10], esi
0x6DDEF6: xor     edi, edi
0x6DDEF8: cmp     esi, edi
0x6DDEFA: mov     [esp+20h+var_4], edi
0x6DDEFE: jz      short loc_6DDF43
0x6DDF00: mov     ecx, esi; this
0x6DDF02: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6DDF07: mov     dword ptr [esi], offset ??_7NiPathController@@6B@; const NiPathController::`vftable'
0x6DDF0D: mov     [esi+48h], edi
0x6DDF10: mov     [esi+4Ch], edi
0x6DDF13: fldz
0x6DDF15: fst     dword ptr [esi+58h]
0x6DDF18: mov     [esi+40h], edi
0x6DDF1B: fst     dword ptr [esi+5Ch]
0x6DDF1E: mov     [esi+44h], edi
0x6DDF21: fstp    dword ptr [esi+64h]
0x6DDF24: mov     dword ptr [esi+68h], 1
0x6DDF2B: fld     dword ptr ds:0A30634h
0x6DDF31: mov     [esi+60h], di
0x6DDF35: fstp    dword ptr [esi+54h]
0x6DDF38: mov     [esi+50h], edi
0x6DDF3B: mov     word ptr [esi+3Ch], 3
0x6DDF41: jmp     short loc_6DDF45
0x6DDF43: xor     esi, esi
0x6DDF45: mov     eax, [esp+20h+arg_0]
0x6DDF49: push    eax
0x6DDF4A: push    esi
0x6DDF4B: mov     ecx, ebx
0x6DDF4D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6DDF55: call    sub_6DDC60
0x6DDF5A: mov     eax, esi
0x6DDF5C: mov     ecx, [esp+20h+var_C]
0x6DDF60: mov     large fs:0, ecx
0x6DDF67: pop     ecx
0x6DDF68: pop     edi
0x6DDF69: pop     esi
0x6DDF6A: pop     ebx
0x6DDF6B: add     esp, 10h
0x6DDF6E: retn    4
