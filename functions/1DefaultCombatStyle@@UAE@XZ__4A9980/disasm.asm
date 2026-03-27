0x4A9980: push    0FFFFFFFFh
0x4A9982: push    offset Script_Constructor_SEH
0x4A9987: mov     eax, large fs:0
0x4A998D: push    eax
0x4A998E: push    ecx
0x4A998F: push    esi
0x4A9990: mov     eax, ds:0B30AACh
0x4A9995: xor     eax, esp
0x4A9997: push    eax
0x4A9998: lea     eax, [esp+18h+var_C]
0x4A999C: mov     large fs:0, eax
0x4A99A2: mov     esi, ecx
0x4A99A4: mov     [esp+18h+var_10], esi
0x4A99A8: mov     dword ptr [esi], offset ??_7TESCombatStyle@@6B@; const TESCombatStyle::`vftable'
0x4A99AE: mov     eax, [esi+94h]
0x4A99B4: test    eax, eax
0x4A99B6: mov     [esp+18h+var_4], 0
0x4A99BE: jz      short loc_4A99D3
0x4A99C0: push    eax
0x4A99C1: call    FormHeapFree
0x4A99C6: add     esp, 4
0x4A99C9: mov     dword ptr [esi+94h], 0
0x4A99D3: mov     ecx, esi
0x4A99D5: call    j_TESForm_ClearComponentReferences
0x4A99DA: mov     ecx, esi; this
0x4A99DC: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A99E4: call    TESForm_destr
0x4A99E9: mov     ecx, [esp+18h+var_C]
0x4A99ED: mov     large fs:0, ecx
0x4A99F4: pop     ecx
0x4A99F5: pop     esi
0x4A99F6: add     esp, 10h
0x4A99F9: retn
