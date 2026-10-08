0x529840: cmp     [esp+completed], 0; TESQuest completed-state setter used by CompleteQuest. Runtime bit 0x02 is saved through the same one-byte questFlags field.
0x529845: jz      short loc_52984D
0x529847: or      byte ptr [ecx+3Ch], 2
0x52984B: jmp     short loc_529851
0x52984D: and     byte ptr [ecx+3Ch], 0FDh
0x529851: mov     eax, [ecx]
0x529853: mov     edx, [eax+40h]
0x529856: mov     dword ptr [esp+completed], 4
0x52985E: jmp     edx
