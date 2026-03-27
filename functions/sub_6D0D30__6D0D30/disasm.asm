0x6D0D30: sub     esp, 8
0x6D0D33: push    ebx
0x6D0D34: push    esi
0x6D0D35: mov     esi, [esp+10h+arg_0]
0x6D0D39: push    esi
0x6D0D3A: mov     ebx, ecx
0x6D0D3C: call    sub_6D0550
0x6D0D41: cmp     dword ptr [esi+0D8h], 0A000102h
0x6D0D4B: jnb     short loc_6D0D62
0x6D0D4D: mov     ax, [esi+25Ah]
0x6D0D54: shr     ax, 5
0x6D0D58: and     ax, 3Fh
0x6D0D5C: mov     [ebx+3Ch], ax
0x6D0D60: jmp     short loc_6D0D86
0x6D0D62: mov     eax, [esi+21Ch]
0x6D0D68: push    1
0x6D0D6A: lea     ecx, [esp+14h+arg_0]
0x6D0D6E: push    ecx
0x6D0D6F: push    2
0x6D0D71: lea     edx, [ebx+3Ch]
0x6D0D74: push    edx
0x6D0D75: push    eax
0x6D0D76: mov     eax, [eax+4]
0x6D0D79: mov     [esp+24h+arg_0], 2
0x6D0D81: call    eax
0x6D0D83: add     esp, 14h
0x6D0D86: mov     ecx, esi
0x6D0D88: call    sub_712A20
0x6D0D8D: cmp     dword ptr [esi+0D8h], 4000002h
0x6D0D97: jb      short loc_6D0DC9
0x6D0D99: mov     eax, [esi+21Ch]
0x6D0D9F: push    1
0x6D0DA1: lea     ecx, [esp+14h+var_8]
0x6D0DA5: push    ecx
0x6D0DA6: push    1
0x6D0DA8: lea     edx, [esp+1Ch+arg_0]
0x6D0DAC: push    edx
0x6D0DAD: push    eax
0x6D0DAE: mov     eax, [eax+4]
0x6D0DB1: mov     [esp+24h+var_8], 1
0x6D0DB9: call    eax
0x6D0DBB: add     esp, 14h
0x6D0DBE: cmp     byte ptr [esp+10h+arg_0], 0
0x6D0DC3: setnz   cl
0x6D0DC6: mov     [ebx+5Ah], cl
0x6D0DC9: cmp     dword ptr [esi+0D8h], 0A010068h
0x6D0DD3: jb      short loc_6D0DDC
0x6D0DD5: mov     ecx, esi
0x6D0DD7: call    sub_712AE0
0x6D0DDC: cmp     dword ptr [esi+4], 0Ah
0x6D0DE0: jb      loc_6D0E71
0x6D0DE6: mov     eax, [esi+21Ch]
0x6D0DEC: push    ebp
0x6D0DED: push    edi
0x6D0DEE: push    1
0x6D0DF0: lea     edx, [esp+1Ch+var_8]
0x6D0DF4: push    edx
0x6D0DF5: mov     edx, [eax+4]
0x6D0DF8: push    4
0x6D0DFA: lea     ecx, [esp+24h+arg_0]
0x6D0DFE: push    ecx
0x6D0DFF: push    eax
0x6D0E00: mov     [esp+2Ch+var_8], 4
0x6D0E08: call    edx
0x6D0E0A: mov     eax, [esp+2Ch+arg_0]
0x6D0E0E: add     esp, 14h
0x6D0E11: lea     ebp, [ebx+40h]
0x6D0E14: push    eax
0x6D0E15: mov     ecx, ebp
0x6D0E17: call    sub_4CA040
0x6D0E1C: xor     edi, edi
0x6D0E1E: cmp     [esp+18h+arg_0], edi
0x6D0E22: jbe     short loc_6D0E6F
0x6D0E24: mov     eax, [esi+21Ch]
0x6D0E2A: push    1
0x6D0E2C: lea     ecx, [esp+1Ch+var_8]
0x6D0E30: push    ecx
0x6D0E31: push    4
0x6D0E33: lea     edx, [esp+24h+var_4]
0x6D0E37: push    edx
0x6D0E38: push    eax
0x6D0E39: mov     eax, [eax+4]
0x6D0E3C: mov     [esp+2Ch+var_8], 4
0x6D0E44: call    eax
0x6D0E46: fld     [esp+2Ch+var_4]
0x6D0E4A: movzx   ecx, word ptr [ebx+4Ah]
0x6D0E4E: fstp    [esp+2Ch+var_8]
0x6D0E52: add     esp, 14h
0x6D0E55: cmp     edi, ecx
0x6D0E57: jnb     short loc_6D0E66
0x6D0E59: lea     edx, [esp+18h+var_8]
0x6D0E5D: push    edx
0x6D0E5E: push    edi
0x6D0E5F: mov     ecx, ebp
0x6D0E61: call    sub_4CA210
0x6D0E66: add     edi, 1
0x6D0E69: cmp     edi, [esp+18h+arg_0]
0x6D0E6D: jb      short loc_6D0E24
0x6D0E6F: pop     edi
0x6D0E70: pop     ebp
0x6D0E71: pop     esi
0x6D0E72: pop     ebx
0x6D0E73: add     esp, 8
0x6D0E76: retn    4
