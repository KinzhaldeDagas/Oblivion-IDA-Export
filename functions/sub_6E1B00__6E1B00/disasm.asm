0x6E1B00: sub     esp, 8
0x6E1B03: push    esi
0x6E1B04: mov     esi, ecx
0x6E1B06: movzx   eax, word ptr [esi+8]
0x6E1B0A: test    ax, ax
0x6E1B0D: jz      short loc_6E1B57
0x6E1B0F: fld     [esp+0Ch+arg_4]
0x6E1B13: mov     ecx, [esi+20h]
0x6E1B16: sub     esp, 8
0x6E1B19: fstp    [esp+14h+var_10]; float
0x6E1B1D: movzx   eax, ax
0x6E1B20: fld     [esp+14h+arg_0]
0x6E1B24: lea     edx, [esp+14h+var_8]
0x6E1B28: fstp    [esp+14h+var_14]; float
0x6E1B2B: push    edx; int
0x6E1B2C: mov     [esp+18h+var_8], eax
0x6E1B30: lea     eax, [esp+18h+var_4]
0x6E1B34: mov     [esp+18h+var_4], ecx
0x6E1B38: mov     ecx, [esi+10h]
0x6E1B3B: push    eax; int
0x6E1B3C: push    ecx; int
0x6E1B3D: push    2; int
0x6E1B3F: call    sub_6D3540
0x6E1B44: mov     dx, word ptr [esp+24h+var_8]
0x6E1B49: mov     eax, [esp+24h+var_4]
0x6E1B4D: add     esp, 18h
0x6E1B50: mov     [esi+8], dx
0x6E1B54: mov     [esi+20h], eax
0x6E1B57: movzx   eax, word ptr [esi+0Ah]
0x6E1B5B: test    ax, ax
0x6E1B5E: jz      short loc_6E1BA8
0x6E1B60: fld     [esp+0Ch+arg_4]
0x6E1B64: mov     edx, [esi+24h]
0x6E1B67: sub     esp, 8
0x6E1B6A: fstp    [esp+14h+var_10]; float
0x6E1B6E: movzx   ecx, ax
0x6E1B71: fld     [esp+14h+arg_0]
0x6E1B75: lea     eax, [esp+14h+var_8]
0x6E1B79: fstp    [esp+14h+var_14]; float
0x6E1B7C: push    eax; int
0x6E1B7D: mov     [esp+18h+var_8], ecx
0x6E1B81: lea     ecx, [esp+18h+var_4]
0x6E1B85: mov     [esp+18h+var_4], edx
0x6E1B89: mov     edx, [esi+14h]
0x6E1B8C: push    ecx; int
0x6E1B8D: push    edx; int
0x6E1B8E: push    1; int
0x6E1B90: call    sub_6D3540
0x6E1B95: mov     ax, word ptr [esp+24h+var_8]
0x6E1B9A: mov     ecx, [esp+24h+var_4]
0x6E1B9E: add     esp, 18h
0x6E1BA1: mov     [esi+0Ah], ax
0x6E1BA5: mov     [esi+24h], ecx
0x6E1BA8: movzx   eax, word ptr [esi+0Ch]
0x6E1BAC: test    ax, ax
0x6E1BAF: jz      short loc_6E1BF9
0x6E1BB1: fld     [esp+0Ch+arg_4]
0x6E1BB5: sub     esp, 8
0x6E1BB8: fstp    [esp+14h+var_10]; float
0x6E1BBC: movzx   edx, ax
0x6E1BBF: mov     eax, [esi+28h]
0x6E1BC2: fld     [esp+14h+arg_0]
0x6E1BC6: fstp    [esp+14h+var_14]; float
0x6E1BC9: lea     ecx, [esp+14h+var_8]
0x6E1BCD: push    ecx; int
0x6E1BCE: mov     [esp+18h+var_8], edx
0x6E1BD2: lea     edx, [esp+18h+var_4]
0x6E1BD6: mov     [esp+18h+var_4], eax
0x6E1BDA: mov     eax, [esi+18h]
0x6E1BDD: push    edx; int
0x6E1BDE: push    eax; int
0x6E1BDF: push    0; int
0x6E1BE1: call    sub_6D3540
0x6E1BE6: mov     cx, word ptr [esp+24h+var_8]
0x6E1BEB: mov     edx, [esp+24h+var_4]
0x6E1BEF: add     esp, 18h
0x6E1BF2: mov     [esi+0Ch], cx
0x6E1BF6: mov     [esi+28h], edx
0x6E1BF9: pop     esi
0x6E1BFA: add     esp, 8
0x6E1BFD: retn    8
