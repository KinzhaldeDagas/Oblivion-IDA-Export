0x4ABB40: push    0FFFFFFFFh
0x4ABB42: push    offset Script_Constructor_SEH
0x4ABB47: mov     eax, large fs:0
0x4ABB4D: push    eax
0x4ABB4E: push    ecx
0x4ABB4F: push    esi
0x4ABB50: mov     eax, ds:0B30AACh
0x4ABB55: xor     eax, esp
0x4ABB57: push    eax
0x4ABB58: lea     eax, [esp+18h+var_C]
0x4ABB5C: mov     large fs:0, eax
0x4ABB62: mov     esi, ecx
0x4ABB64: mov     [esp+18h+var_10], esi
0x4ABB68: call    TESForm_constr
0x4ABB6D: mov     ecx, esi
0x4ABB6F: mov     [esp+18h+var_4], 0
0x4ABB77: mov     dword ptr [esi], offset ??_7TESCombatStyle@@6B@; const TESCombatStyle::`vftable'
0x4ABB7D: mov     byte ptr [esi+4], 3Eh ; '>'
0x4ABB81: call    sub_4A9A00
0x4ABB86: mov     eax, esi
0x4ABB88: mov     ecx, [esp+18h+var_C]
0x4ABB8C: mov     large fs:0, ecx
0x4ABB93: pop     ecx
0x4ABB94: pop     esi
0x4ABB95: add     esp, 10h
0x4ABB98: retn
