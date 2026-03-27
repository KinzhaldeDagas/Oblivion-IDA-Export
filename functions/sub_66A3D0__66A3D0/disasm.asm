0x66A3D0: mov     eax, [esp+arg_0]
0x66A3D4: push    esi
0x66A3D5: push    1
0x66A3D7: push    1
0x66A3D9: push    eax
0x66A3DA: mov     esi, ecx
0x66A3DC: call    Player_SkillLevelIncrease
0x66A3E1: add     dword ptr [esi+5BCh], 1
0x66A3E8: add     dword ptr [esi+664h], 1
0x66A3EF: pop     esi
0x66A3F0: retn    4
