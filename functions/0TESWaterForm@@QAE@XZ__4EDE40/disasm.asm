0x4EDE40: push    0FFFFFFFFh
0x4EDE42: push    offset ??0TESWaterForm@@QAE@XZ_SEH
0x4EDE47: mov     eax, large fs:0
0x4EDE4D: push    eax
0x4EDE4E: push    ecx
0x4EDE4F: push    ebx
0x4EDE50: push    esi
0x4EDE51: push    edi
0x4EDE52: mov     eax, ds:0B30AACh
0x4EDE57: xor     eax, esp
0x4EDE59: push    eax
0x4EDE5A: lea     eax, [esp+20h+var_C]
0x4EDE5E: mov     large fs:0, eax
0x4EDE64: mov     esi, ecx
0x4EDE66: mov     [esp+20h+var_10], esi
0x4EDE6A: call    TESForm_constr
0x4EDE6F: lea     edi, [esi+18h]
0x4EDE72: xor     ebx, ebx
0x4EDE74: mov     ecx, edi
0x4EDE76: mov     [esp+20h+var_4], ebx
0x4EDE7A: call    TESAttackDamageForm_constr
0x4EDE7F: lea     ecx, [esi+20h]
0x4EDE82: mov     byte ptr [esp+20h+var_4], 1
0x4EDE87: mov     dword ptr [esi], offset ??_7TESWaterForm@@6BTESWaterForm@@@; const TESWaterForm::`vftable'{for `TESWaterForm'}
0x4EDE8D: mov     dword ptr [edi], offset ??_7TESWaterForm@@6BTESAttackDamageForm@@@; const TESWaterForm::`vftable'{for `TESAttackDamageForm'}
0x4EDE93: call    TESTexture_constr
0x4EDE98: mov     [esi+30h], ebx
0x4EDE9B: mov     [esi+34h], bx
0x4EDE9F: mov     [esi+36h], bx
0x4EDEA3: lea     ecx, [esi+3Ch]
0x4EDEA6: mov     byte ptr [esp+20h+var_4], 3
0x4EDEAB: call    sub_4ED580
0x4EDEB0: mov     ecx, esi
0x4EDEB2: mov     byte ptr [esi+4], 42h ; 'B'
0x4EDEB6: call    sub_4EDDE0
0x4EDEBB: mov     eax, esi
0x4EDEBD: mov     ecx, [esp+20h+var_C]
0x4EDEC1: mov     large fs:0, ecx
0x4EDEC8: pop     ecx
0x4EDEC9: pop     edi
0x4EDECA: pop     esi
0x4EDECB: pop     ebx
0x4EDECC: add     esp, 10h
0x4EDECF: retn
