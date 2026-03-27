0x7738E0: mov     eax, [esp+arg_0]
0x7738E4: push    esi
0x7738E5: mov     esi, ecx
0x7738E7: mov     ecx, [esp+4+arg_4]
0x7738EB: mov     [esi+8], ecx
0x7738EE: lea     ecx, [esi+0Ch]
0x7738F1: mov     [esi+4], eax
0x7738F4: mov     dword ptr [esi], offset ??_7NiDX9TextureData@@6B@; const NiDX9TextureData::`vftable'
0x7738FA: call    InitSurfacEData
0x7738FF: xor     eax, eax
0x773901: mov     [esi+50h], eax
0x773904: mov     [esi+54h], eax
0x773907: mov     [esi+58h], eax
0x77390A: mov     [esi+5Ch], eax
0x77390D: mov     eax, esi
0x77390F: pop     esi
0x773910: retn    8
