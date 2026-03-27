0x51EFD0: push    0FFFFFFFFh
0x51EFD2: push    offset ??0TESEyes@@QAE@XZ_SEH
0x51EFD7: mov     eax, large fs:0
0x51EFDD: push    eax
0x51EFDE: push    ecx
0x51EFDF: push    ebx
0x51EFE0: push    esi
0x51EFE1: push    edi
0x51EFE2: mov     eax, ds:0B30AACh
0x51EFE7: xor     eax, esp
0x51EFE9: push    eax
0x51EFEA: lea     eax, [esp+20h+var_C]
0x51EFEE: mov     large fs:0, eax
0x51EFF4: mov     esi, ecx
0x51EFF6: mov     [esp+20h+var_10], esi
0x51EFFA: call    TESForm_constr
0x51EFFF: xor     ebx, ebx
0x51F001: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x51F008: mov     [esp+20h+var_4], ebx
0x51F00C: mov     [esi+1Ch], ebx
0x51F00F: mov     [esi+20h], bx
0x51F013: mov     [esi+22h], bx
0x51F017: lea     edi, [esi+24h]
0x51F01A: mov     ecx, edi
0x51F01C: mov     byte ptr [esp+20h+var_4], 1
0x51F021: call    TESTexture_constr
0x51F026: mov     ecx, esi; this
0x51F028: mov     byte ptr [esp+20h+var_4], 2
0x51F02D: mov     dword ptr [esi], offset ??_7TESEyes@@6BTESEyes@@@; const TESEyes::`vftable'{for `TESEyes'}
0x51F033: mov     dword ptr [esi+18h], offset ??_7TESEyes@@6BTESFullName@@@; const TESEyes::`vftable'{for `TESFullName'}
0x51F03A: mov     dword ptr [edi], offset ??_7TESEyes@@6BTESTexture@@@; const TESEyes::`vftable'{for `TESTexture'}
0x51F040: mov     byte ptr [esi+4], 8
0x51F044: mov     [esi+30h], bl
0x51F047: call    j_TESForm_InitializeComponents
0x51F04C: mov     eax, esi
0x51F04E: mov     ecx, [esp+20h+var_C]
0x51F052: mov     large fs:0, ecx
0x51F059: pop     ecx
0x51F05A: pop     edi
0x51F05B: pop     esi
0x51F05C: pop     ebx
0x51F05D: add     esp, 10h
0x51F060: retn
