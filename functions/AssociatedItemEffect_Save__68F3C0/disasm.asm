0x68F3C0: mov     eax, [esp+arg_0]
0x68F3C4: push    esi
0x68F3C5: push    eax
0x68F3C6: mov     esi, ecx
0x68F3C8: call    ActiveEffect_Base_SaveEffect
0x68F3CD: mov     esi, [esi+38h]
0x68F3D0: test    esi, esi
0x68F3D2: mov     [esp+4+arg_0], 0
0x68F3DA: jz      short loc_68F3E3
0x68F3DC: mov     ecx, [esi+0Ch]
0x68F3DF: mov     [esp+4+arg_0], ecx
0x68F3E3: mov     ecx, ds:0B33B00h
0x68F3E9: push    4
0x68F3EB: lea     edx, [esp+8+arg_0]
0x68F3EF: push    edx
0x68F3F0: call    SaveLoad_SaveFormID
0x68F3F5: pop     esi
0x68F3F6: retn    4
