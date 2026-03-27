0x57DA90: sub     esp, 10h
0x57DA93: push    ebx
0x57DA94: mov     ebx, [esp+14h+arg_4]
0x57DA98: test    ebx, ebx
0x57DA9A: push    ebp
0x57DA9B: push    esi
0x57DA9C: mov     esi, [esp+1Ch+arg_0]
0x57DAA0: mov     ebp, [esi]
0x57DAA2: mov     [esp+1Ch+var_4], ecx
0x57DAA6: mov     [esp+1Ch+var_10], 0
0x57DAAE: mov     [esp+1Ch+var_8], 7FFFFFFFh
0x57DAB6: mov     dword ptr [esi], 80000000h
0x57DABC: mov     [esp+1Ch+var_C], 80000000h
0x57DAC4: jnz     short loc_57DB13
0x57DAC6: push    1
0x57DAC8: call    Menu_GetB3A708
0x57DACD: add     esp, 4
0x57DAD0: mov     ecx, eax
0x57DAD2: call    sub_5877D0
0x57DAD7: test    eax, eax
0x57DAD9: jz      short loc_57DB08
0x57DADB: mov     ebx, [eax+4]
0x57DADE: mov     eax, [ebx]
0x57DAE0: mov     edx, [eax+0Ch]
0x57DAE3: mov     ecx, ebx
0x57DAE5: call    edx
0x57DAE7: cmp     eax, 389h
0x57DAEC: jnz     short loc_57DB13
0x57DAEE: mov     ecx, ebx
0x57DAF0: call    Tile_GetParentMenu
0x57DAF5: cmp     dword ptr [eax+24h], 1
0x57DAF9: jz      short loc_57DB13
0x57DAFB: mov     ecx, ebx
0x57DAFD: call    Tile_GetParentMenu
0x57DB02: cmp     dword ptr [eax+24h], 8
0x57DB06: jz      short loc_57DB13
0x57DB08: pop     esi
0x57DB09: pop     ebp
0x57DB0A: xor     eax, eax
0x57DB0C: pop     ebx
0x57DB0D: add     esp, 10h
0x57DB10: retn    8
0x57DB13: push    0FA1h
0x57DB18: mov     ecx, ebx
0x57DB1A: call    Tile_GetFloat
0x57DB1F: fcomp   dword ptr ds:0A2F948h
0x57DB25: fnstsw  ax
0x57DB27: test    ah, 44h
0x57DB2A: jnp     short loc_57DB08
0x57DB2C: push    edi
0x57DB2D: mov     edi, [ebx+34h]
0x57DB30: test    edi, edi
0x57DB32: jz      short loc_57DB94
0x57DB34: mov     ecx, [esp+20h+var_4]
0x57DB38: lea     eax, [edi+8]
0x57DB3B: mov     eax, [eax]
0x57DB3D: mov     edi, [edi]
0x57DB3F: push    eax
0x57DB40: lea     eax, [esp+24h+var_C]
0x57DB44: push    eax
0x57DB45: mov     [esp+28h+var_C], 80000000h
0x57DB4D: call    sub_57DA90
0x57DB52: mov     esi, eax
0x57DB54: test    esi, esi
0x57DB56: jz      short loc_57DB8C
0x57DB58: mov     eax, [esp+20h+var_C]
0x57DB5C: cmp     eax, ebp
0x57DB5E: jle     short loc_57DB64
0x57DB60: mov     ebp, eax
0x57DB62: jmp     short loc_57DB88
0x57DB64: jnz     short loc_57DB8C
0x57DB66: push    0FAAh
0x57DB6B: mov     ecx, esi
0x57DB6D: call    sub_588B50
0x57DB72: test    eax, eax
0x57DB74: jz      short loc_57DB8C
0x57DB76: fld     dword ptr [eax+4]
0x57DB79: call    Double_To_SInt32
0x57DB7E: cmp     eax, [esp+20h+var_8]
0x57DB82: jge     short loc_57DB8C
0x57DB84: mov     [esp+20h+var_8], eax
0x57DB88: mov     [esp+20h+var_10], esi
0x57DB8C: test    edi, edi
0x57DB8E: jnz     short loc_57DB34
0x57DB90: mov     esi, [esp+20h+arg_0]
0x57DB94: push    0FC9h
0x57DB99: mov     ecx, ebx
0x57DB9B: call    Tile_GetFloat
0x57DBA0: fcomp   dword ptr ds:0A379B4h
0x57DBA6: pop     edi
0x57DBA7: fnstsw  ax
0x57DBA9: test    ah, 44h
0x57DBAC: jp      short loc_57DC1E
0x57DBAE: push    0FA1h
0x57DBB3: mov     ecx, ebx
0x57DBB5: call    Tile_GetFloat
0x57DBBA: fcomp   dword ptr ds:0A2F948h
0x57DBC0: fnstsw  ax
0x57DBC2: test    ah, 44h
0x57DBC5: jnp     short loc_57DC1E
0x57DBC7: push    0FF0h
0x57DBCC: mov     ecx, ebx
0x57DBCE: call    sub_588B50
0x57DBD3: test    eax, eax
0x57DBD5: jz      short loc_57DC1E
0x57DBD7: fld     dword ptr [eax+4]
0x57DBDA: call    Double_To_SInt32
0x57DBDF: cmp     eax, ebp
0x57DBE1: mov     [esp+1Ch+var_C], eax
0x57DBE5: jle     short loc_57DBFA
0x57DBE7: mov     ebp, eax
0x57DBE9: mov     [esi], ebp
0x57DBEB: pop     esi
0x57DBEC: pop     ebp
0x57DBED: mov     [esp+14h+var_10], ebx
0x57DBF1: mov     eax, ebx
0x57DBF3: pop     ebx
0x57DBF4: add     esp, 10h
0x57DBF7: retn    8
0x57DBFA: jnz     short loc_57DC1E
0x57DBFC: push    0FAAh
0x57DC01: mov     ecx, ebx
0x57DC03: call    sub_588B50
0x57DC08: test    eax, eax
0x57DC0A: jz      short loc_57DC1E
0x57DC0C: fld     dword ptr [eax+4]
0x57DC0F: call    Double_To_SInt32
0x57DC14: cmp     eax, [esp+1Ch+var_8]
0x57DC18: jge     short loc_57DC1E
0x57DC1A: mov     [esp+1Ch+var_10], ebx
0x57DC1E: mov     eax, [esp+1Ch+var_10]
0x57DC22: mov     [esi], ebp
0x57DC24: pop     esi
0x57DC25: pop     ebp
0x57DC26: pop     ebx
0x57DC27: add     esp, 10h
0x57DC2A: retn    8
