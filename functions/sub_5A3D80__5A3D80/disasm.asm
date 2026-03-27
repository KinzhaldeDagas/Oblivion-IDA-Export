0x5A3D80: sub     esp, 54h
0x5A3D83: push    ebx
0x5A3D84: mov     ebx, [esp+58h+arg_0]
0x5A3D88: test    ebx, ebx
0x5A3D8A: push    edi
0x5A3D8B: mov     edi, ecx
0x5A3D8D: jle     loc_5A3E74
0x5A3D93: push    esi
0x5A3D94: mov     [esp+60h+var_54], 0FAEh
0x5A3D9C: mov     [esp+60h+var_50], 0FAFh
0x5A3DA4: mov     [esp+60h+var_4C], 0FB0h
0x5A3DAC: mov     [esp+60h+var_48], 0FB1h
0x5A3DB4: mov     [esp+60h+var_44], 0FB2h
0x5A3DBC: mov     [esp+60h+var_40], 0FB3h
0x5A3DC4: mov     [esp+60h+var_3C], 0FB4h
0x5A3DCC: mov     [esp+60h+var_38], 0FB5h
0x5A3DD4: mov     [esp+60h+var_34], 0FB6h
0x5A3DDC: mov     [esp+60h+var_30], 0FB7h
0x5A3DE4: mov     [esp+60h+var_2C], 0FB8h
0x5A3DEC: mov     [esp+60h+var_28], 0FB9h
0x5A3DF4: mov     [esp+60h+var_24], 0FBAh
0x5A3DFC: mov     [esp+60h+var_20], 0FBBh
0x5A3E04: mov     [esp+60h+var_1C], 0FBCh
0x5A3E0C: mov     [esp+60h+var_18], 0FBDh
0x5A3E14: mov     [esp+60h+var_14], 0FBEh
0x5A3E1C: mov     [esp+60h+var_10], 0FBFh
0x5A3E24: mov     [esp+60h+var_C], 0FC0h
0x5A3E2C: mov     [esp+60h+var_8], 0FC1h
0x5A3E34: mov     [esp+60h+var_4], 0FC2h
0x5A3E3C: xor     esi, esi
0x5A3E3E: mov     edi, edi
0x5A3E40: mov     eax, [esp+esi+60h+var_54]
0x5A3E44: mov     ecx, [edi+4]
0x5A3E47: push    eax
0x5A3E48: call    Tile_GetFloat
0x5A3E4D: fstp    dword ptr [esi+0B3B2E0h]
0x5A3E53: add     esi, 4
0x5A3E56: cmp     esi, 54h ; 'T'
0x5A3E59: jl      short loc_5A3E40
0x5A3E5B: mov     ecx, [edi+34h]
0x5A3E5E: push    ebx
0x5A3E5F: mov     ds:0B3B2D8h, ecx
0x5A3E65: mov     ds:0B3B2DCh, ebx
0x5A3E6B: call    sub_5A3D00
0x5A3E70: add     esp, 4
0x5A3E73: pop     esi
0x5A3E74: pop     edi
0x5A3E75: pop     ebx
0x5A3E76: add     esp, 54h
0x5A3E79: retn    8
