0x529820: cmp     [esp+running], 0; TESQuest running/active setter used by StartQuest and StopQuest. Runtime bit 0x01 shares QUST DATA's editor label 'Start Game Enabled'; toggling it marks modified flag 0x04.
0x529825: jz      short loc_52982D
0x529827: or      byte ptr [ecx+3Ch], 1
0x52982B: jmp     short loc_529831
0x52982D: and     byte ptr [ecx+3Ch], 0FEh
0x529831: mov     eax, [ecx]
0x529833: mov     edx, [eax+40h]
0x529836: mov     dword ptr [esp+running], 4
0x52983E: jmp     edx
