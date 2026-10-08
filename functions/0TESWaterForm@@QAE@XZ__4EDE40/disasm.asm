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
0x9B66A0: mov     ecx, [ebp-10h]; this
0x9B66A3: jmp     TESForm_destr
0x9B66A8: mov     ecx, [ebp-10h]
0x9B66AB: add     ecx, 18h
0x9B66AE: jmp     TESAttackDamageForm_destr
0x9B66B3: mov     ecx, [ebp-10h]
0x9B66B6: add     ecx, 20h ; ' '; void *
0x9B66B9: jmp     TESTexture_destr
0x9B66BE: mov     ecx, [ebp-10h]
0x9B66C1: add     ecx, 30h ; '0'; void *
0x9B66C4: jmp     BSStringT_Clear
0x9B66C9: mov     edx, [esp+arg_4]
0x9B66CD: lea     eax, [edx-10h]
0x9B66D0: mov     ecx, [edx-14h]
0x9B66D3: xor     ecx, eax
0x9B66D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B66DA: mov     eax, offset stru_AE1538
0x9B66DF: jmp     ___CxxFrameHandler3
