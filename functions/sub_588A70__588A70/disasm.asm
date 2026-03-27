0x588A70: fld     [esp+arg_8]
0x588A74: mov     eax, [esp+arg_0]
0x588A78: push    esi
0x588A79: mov     esi, ecx
0x588A7B: mov     ecx, [esp+4+arg_4]
0x588A7F: fstp    dword ptr [esi+8]
0x588A82: fld     [esp+4+arg_C]
0x588A86: push    ecx
0x588A87: fstp    dword ptr [esi+0Ch]
0x588A8A: mov     [esi], eax
0x588A8C: fld     [esp+8+arg_10]
0x588A90: mov     [esi+4], ecx
0x588A93: fst     dword ptr [esi+10h]
0x588A96: fstp    [esp+8+var_8]; float
0x588A99: push    esi; int
0x588A9A: call    sub_584300
0x588A9F: mov     eax, [esi]
0x588AA1: mov     edx, [eax+28h]
0x588AA4: mov     [esi+14h], edx
0x588AA7: mov     [eax+28h], esi
0x588AAA: mov     eax, [esi]
0x588AAC: or      dword ptr [eax+2Ch], 80h
0x588AB3: add     esp, 8
0x588AB6: mov     eax, esi
0x588AB8: pop     esi
0x588AB9: retn    14h
