0x517F40: push    0FFFFFFFFh
0x517F42: push    offset ??0TESSound@@QAE@XZ_SEH
0x517F47: mov     eax, large fs:0
0x517F4D: push    eax
0x517F4E: push    ecx
0x517F4F: push    esi
0x517F50: mov     eax, ds:0B30AACh
0x517F55: xor     eax, esp
0x517F57: push    eax
0x517F58: lea     eax, [esp+18h+var_C]
0x517F5C: mov     large fs:0, eax
0x517F62: mov     esi, ecx
0x517F64: mov     [esp+18h+var_10], esi
0x517F68: call    TESBoundAnimObject_constr
0x517F6D: xor     eax, eax
0x517F6F: mov     dword ptr [esi+24h], offset ??_7TESSoundFile@@6B@; const TESSoundFile::`vftable'
0x517F76: mov     [esp+18h+var_4], eax
0x517F7A: mov     [esi+28h], eax
0x517F7D: mov     [esi+2Ch], ax
0x517F81: mov     [esi+2Eh], ax
0x517F85: mov     dword ptr [esi], offset ??_7TESSound@@6BTESSound@@@; const TESSound::`vftable'{for `TESSound'}
0x517F8B: mov     dword ptr [esi+24h], offset ??_7TESSound@@6BTESSoundFile@@@; const TESSound::`vftable'{for `TESSoundFile'}
0x517F92: mov     [esi+30h], eax
0x517F95: mov     [esi+34h], ax
0x517F99: mov     [esi+36h], ax
0x517F9D: mov     ecx, esi; this
0x517F9F: mov     byte ptr [esp+18h+var_4], 2
0x517FA4: mov     byte ptr [esi+4], 0Ah
0x517FA8: mov     [esi+3Ch], eax
0x517FAB: mov     [esi+39h], al
0x517FAE: mov     [esi+38h], al
0x517FB1: mov     [esi+3Ah], al
0x517FB4: mov     [esi+40h], ax
0x517FB8: mov     [esi+3Bh], al
0x517FBB: mov     [esi+42h], ax
0x517FBF: call    j_TESForm_InitializeComponents
0x517FC4: mov     eax, esi
0x517FC6: mov     ecx, [esp+18h+var_C]
0x517FCA: mov     large fs:0, ecx
0x517FD1: pop     ecx
0x517FD2: pop     esi
0x517FD3: add     esp, 10h
0x517FD6: retn
