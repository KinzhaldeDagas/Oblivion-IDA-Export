0x4BEC50: push    0FFFFFFFFh
0x4BEC52: push    offset ??0TESClimate@@QAE@XZ_SEH
0x4BEC57: mov     eax, large fs:0
0x4BEC5D: push    eax
0x4BEC5E: push    ecx
0x4BEC5F: push    esi
0x4BEC60: mov     eax, ds:0B30AACh
0x4BEC65: xor     eax, esp
0x4BEC67: push    eax
0x4BEC68: lea     eax, [esp+18h+var_C]
0x4BEC6C: mov     large fs:0, eax
0x4BEC72: mov     esi, ecx
0x4BEC74: mov     [esp+18h+var_10], esi
0x4BEC78: call    TESForm_constr
0x4BEC7D: lea     ecx, [esi+18h]; this
0x4BEC80: mov     [esp+18h+var_4], 0
0x4BEC88: mov     dword ptr [esi], offset ??_7TESClimate@@6B@; const TESClimate::`vftable'
0x4BEC8E: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4BEC93: lea     ecx, [esi+30h]
0x4BEC96: mov     byte ptr [esp+18h+var_4], 1
0x4BEC9B: call    sub_4EED50
0x4BECA0: push    offset TESTexture_destr; a5
0x4BECA5: push    offset TESTexture_constr; a4
0x4BECAA: push    2; size
0x4BECAC: push    0Ch; a2
0x4BECAE: lea     eax, [esi+38h]
0x4BECB1: push    eax; a1
0x4BECB2: mov     byte ptr [esp+2Ch+var_4], 2
0x4BECB7: call    ArrayConstructor
0x4BECBC: xor     eax, eax
0x4BECBE: mov     byte ptr [esi+4], 2Eh ; '.'
0x4BECC2: mov     [esi+50h], eax
0x4BECC5: mov     [esi+54h], ax
0x4BECC9: mov     cl, [esi+55h]
0x4BECCC: and     cl, 0C3h
0x4BECCF: or      cl, 3
0x4BECD2: mov     [esi+55h], cl
0x4BECD5: mov     eax, esi
0x4BECD7: mov     ecx, [esp+18h+var_C]
0x4BECDB: mov     large fs:0, ecx
0x4BECE2: pop     ecx
0x4BECE3: pop     esi
0x4BECE4: add     esp, 10h
0x4BECE7: retn
