0x5E8E60: cmp     byte ptr [esp+arg_0], 0
0x5E8E65: push    esi
0x5E8E66: mov     esi, ecx
0x5E8E68: jz      short loc_5E8E8D
0x5E8E6A: push    5; newDeadState
0x5E8E6C: call    Actor_HandleDeathSTate????
0x5E8E71: cmp     dword ptr [esi+58h], 0
0x5E8E75: jz      short loc_5E8E9D
0x5E8E77: mov     ecx, [esi+58h]; this
0x5E8E7A: mov     eax, [ecx]
0x5E8E7C: pop     esi
0x5E8E7D: mov     [esp+arg_0], 0
0x5E8E85: mov     edx, [eax+2C8h]
0x5E8E8B: jmp     edx
0x5E8E8D: cmp     dword ptr [esi+0B0h], 5
0x5E8E94: jnz     short loc_5E8E9D
0x5E8E96: push    0; newDeadState
0x5E8E98: call    Actor_HandleDeathSTate????
0x5E8E9D: pop     esi
0x5E8E9E: retn    4
