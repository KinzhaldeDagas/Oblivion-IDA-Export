0x51F820: push    0FFFFFFFFh
0x51F822: push    offset SEH_51F820
0x51F827: mov     eax, large fs:0
0x51F82D: push    eax
0x51F82E: push    ecx
0x51F82F: push    ebx
0x51F830: push    esi
0x51F831: push    edi
0x51F832: mov     eax, ds:0B30AACh
0x51F837: xor     eax, esp
0x51F839: push    eax
0x51F83A: lea     eax, [esp+20h+var_C]
0x51F83E: mov     large fs:0, eax
0x51F844: mov     esi, ecx
0x51F846: mov     [esp+20h+var_10], esi
0x51F84A: call    TESForm_constr
0x51F84F: xor     ebx, ebx
0x51F851: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x51F858: mov     [esp+20h+var_4], ebx
0x51F85C: mov     [esi+1Ch], ebx
0x51F85F: mov     [esi+20h], bx
0x51F863: mov     [esi+22h], bx
0x51F867: lea     edi, [esi+24h]
0x51F86A: mov     ecx, edi
0x51F86C: mov     byte ptr [esp+20h+var_4], 1
0x51F871: call    sub_46E5E0
0x51F876: fld1
0x51F878: mov     dword ptr [esi], offset ??_7TESFaction@@6BTESFaction@@@; const TESFaction::`vftable'{for `TESFaction'}
0x51F87E: mov     dword ptr [esi+18h], offset ??_7TESFaction@@6BTESFullName@@@; const TESFaction::`vftable'{for `TESFullName'}
0x51F885: mov     dword ptr [edi], offset ??_7TESFaction@@6BTESReactionForm@@@; const TESFaction::`vftable'{for `TESReactionForm'}
0x51F88B: mov     [esi+3Ch], ebx
0x51F88E: mov     [esi+40h], ebx
0x51F891: mov     [esi+34h], bl
0x51F894: fstp    dword ptr [esi+38h]
0x51F897: mov     ecx, esi; this
0x51F899: mov     byte ptr [esp+20h+var_4], 2
0x51F89E: call    j_TESForm_InitializeComponents
0x51F8A3: mov     byte ptr [esi+4], 6
0x51F8A7: mov     eax, esi
0x51F8A9: mov     ecx, [esp+20h+var_C]
0x51F8AD: mov     large fs:0, ecx
0x51F8B4: pop     ecx
0x51F8B5: pop     edi
0x51F8B6: pop     esi
0x51F8B7: pop     ebx
0x51F8B8: add     esp, 10h
0x51F8BB: retn
