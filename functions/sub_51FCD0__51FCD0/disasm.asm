0x51FCD0: push    0FFFFFFFFh
0x51FCD2: push    offset SEH_51FCD0
0x51FCD7: mov     eax, large fs:0
0x51FCDD: push    eax
0x51FCDE: sub     esp, 0Ch
0x51FCE1: push    esi
0x51FCE2: push    edi
0x51FCE3: mov     eax, ds:0B30AACh
0x51FCE8: xor     eax, esp
0x51FCEA: push    eax
0x51FCEB: lea     eax, [esp+24h+var_C]
0x51FCEF: mov     large fs:0, eax
0x51FCF5: mov     esi, ecx
0x51FCF7: mov     [esp+24h+var_10], esi
0x51FCFB: lea     edi, [esi+24h]
0x51FCFE: mov     dword ptr [esi], offset ??_7TESFaction@@6BTESFaction@@@; const TESFaction::`vftable'{for `TESFaction'}
0x51FD04: mov     dword ptr [esi+18h], offset ??_7TESFaction@@6BTESFullName@@@; const TESFaction::`vftable'{for `TESFullName'}
0x51FD0B: mov     dword ptr [edi], offset ??_7TESFaction@@6BTESReactionForm@@@; const TESFaction::`vftable'{for `TESReactionForm'}
0x51FD11: mov     [esp+24h+var_4], 2
0x51FD19: call    sub_51FB00
0x51FD1E: mov     ecx, esi
0x51FD20: call    j_TESForm_ClearComponentReferences
0x51FD25: mov     ecx, edi
0x51FD27: mov     byte ptr [esp+24h+var_4], 1
0x51FD2C: call    sub_46E5C0
0x51FD31: mov     eax, [esi+1Ch]
0x51FD34: push    eax
0x51FD35: call    FormHeapFree
0x51FD3A: xor     eax, eax
0x51FD3C: add     esp, 4
0x51FD3F: mov     ecx, esi; this
0x51FD41: mov     [esi+1Ch], eax
0x51FD44: mov     [esi+22h], ax
0x51FD48: mov     [esi+20h], ax
0x51FD4C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x51FD54: call    TESForm_destr
0x51FD59: mov     ecx, [esp+24h+var_C]
0x51FD5D: mov     large fs:0, ecx
0x51FD64: pop     ecx
0x51FD65: pop     edi
0x51FD66: pop     esi
0x51FD67: add     esp, 18h
0x51FD6A: retn
