0x6A1CA0: push    0FFFFFFFFh
0x6A1CA2: push    offset SEH_6A1CA0
0x6A1CA7: mov     eax, large fs:0
0x6A1CAD: push    eax
0x6A1CAE: push    ecx
0x6A1CAF: push    esi; int
0x6A1CB0: mov     eax, ds:0B30AACh
0x6A1CB5: xor     eax, esp
0x6A1CB7: push    eax; int
0x6A1CB8: lea     eax, [esp+18h+var_C]
0x6A1CBC: mov     large fs:0, eax
0x6A1CC2: mov     esi, ecx
0x6A1CC4: mov     [esp+18h+var_10], esi
0x6A1CC8: mov     ecx, [esp+18h+arg_1C]
0x6A1CCC: mov     edx, [esp+18h+arg_20]
0x6A1CD0: sub     esp, 0Ch
0x6A1CD3: mov     eax, esp
0x6A1CD5: mov     [eax], ecx
0x6A1CD7: mov     ecx, [esp+24h+arg_24]
0x6A1CDB: mov     [eax+4], edx
0x6A1CDE: mov     edx, [esp+24h+arg_10]
0x6A1CE2: mov     [eax+8], ecx
0x6A1CE5: mov     ecx, [esp+24h+arg_14]
0x6A1CE9: sub     esp, 0Ch
0x6A1CEC: mov     eax, esp
0x6A1CEE: mov     [eax], edx
0x6A1CF0: mov     edx, [esp+30h+arg_18]
0x6A1CF4: mov     [eax+4], ecx
0x6A1CF7: mov     ecx, [esp+30h+arg_8]
0x6A1CFB: mov     [eax+8], edx
0x6A1CFE: mov     eax, [esp+30h+arg_C]
0x6A1D02: mov     edx, [esp+30h+arg_4]
0x6A1D06: push    eax
0x6A1D07: mov     eax, [esp+34h+arg_0]
0x6A1D0B: push    ecx
0x6A1D0C: push    edx
0x6A1D0D: push    eax
0x6A1D0E: mov     ecx, esi
0x6A1D10: call    sub_69F360
0x6A1D15: mov     ecx, esi; int
0x6A1D17: mov     [esp+18h+var_4], 0
0x6A1D1F: mov     dword ptr [esi], offset ??_7MagicSprayProjectile@@6BMagicSprayProjectile@@@; const MagicSprayProjectile::`vftable'{for `MagicSprayProjectile'}
0x6A1D25: mov     dword ptr [esi+18h], offset ??_7MagicSprayProjectile@@6BTESChildCell@@@; const MagicSprayProjectile::`vftable'{for `TESChildCell'}
0x6A1D2C: call    sub_65B750
0x6A1D31: mov     eax, esi
0x6A1D33: mov     ecx, [esp+18h+var_C]
0x6A1D37: mov     large fs:0, ecx
0x6A1D3E: pop     ecx
0x6A1D3F: pop     esi
0x6A1D40: add     esp, 10h
0x6A1D43: retn    28h ; '('
