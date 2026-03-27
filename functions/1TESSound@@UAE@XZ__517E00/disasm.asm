0x517E00: push    0FFFFFFFFh
0x517E02: push    offset ??1TESSound@@UAE@XZ_SEH
0x517E07: mov     eax, large fs:0
0x517E0D: push    eax
0x517E0E: sub     esp, 8
0x517E11: push    esi
0x517E12: push    edi
0x517E13: mov     eax, ds:0B30AACh
0x517E18: xor     eax, esp
0x517E1A: push    eax
0x517E1B: lea     eax, [esp+20h+var_C]
0x517E1F: mov     large fs:0, eax
0x517E25: mov     esi, ecx
0x517E27: mov     [esp+20h+var_10], esi
0x517E2B: mov     dword ptr [esi], offset ??_7TESSound@@6BTESSound@@@; const TESSound::`vftable'{for `TESSound'}
0x517E31: mov     dword ptr [esi+24h], offset ??_7TESSound@@6BTESSoundFile@@@; const TESSound::`vftable'{for `TESSoundFile'}
0x517E38: mov     [esp+20h+var_4], 2
0x517E40: call    j_TESForm_ClearComponentReferences
0x517E45: mov     eax, [esi+30h]
0x517E48: push    eax
0x517E49: call    FormHeapFree
0x517E4E: xor     edi, edi
0x517E50: mov     [esi+30h], edi
0x517E53: mov     [esi+36h], di
0x517E57: mov     [esi+34h], di
0x517E5B: mov     eax, [esi+28h]
0x517E5E: push    eax
0x517E5F: call    FormHeapFree
0x517E64: add     esp, 8
0x517E67: mov     ecx, esi
0x517E69: mov     [esi+28h], edi
0x517E6C: mov     [esi+2Eh], di
0x517E70: mov     [esi+2Ch], di
0x517E74: mov     [esp+20h+var_4], 0FFFFFFFFh
0x517E7C: call    TESObject_destr
0x517E81: mov     ecx, [esp+20h+var_C]
0x517E85: mov     large fs:0, ecx
0x517E8C: pop     ecx
0x517E8D: pop     edi
0x517E8E: pop     esi
0x517E8F: add     esp, 14h
0x517E92: retn
