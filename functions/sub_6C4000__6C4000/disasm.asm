0x6C4000: mov     ecx, [esp+arg_0]
0x6C4004: cmp     dword ptr [ecx+44h], 0
0x6C4008: push    esi
0x6C4009: jz      short loc_6C4052
0x6C400B: mov     esi, [esp+4+arg_4]
0x6C400F: cmp     dword ptr [esi+44h], 0
0x6C4013: jnz     short loc_6C4052
0x6C4015: fld     [esp+4+arg_8]
0x6C4019: push    0; char
0x6C401B: push    ecx
0x6C401C: fstp    [esp+0Ch+var_C]; float
0x6C401F: call    sub_6C9CB0
0x6C4024: mov     eax, [esp+4+arg_18]
0x6C4028: fld     [esp+4+arg_8]
0x6C402C: mov     ecx, dword ptr [esp+4+arg_10]
0x6C4030: mov     edx, [esp+4+arg_C]
0x6C4034: push    0; int
0x6C4036: push    eax; int
0x6C4037: sub     esp, 8
0x6C403A: fstp    [esp+14h+var_10]; float
0x6C403E: fld     [esp+14h+arg_14]
0x6C4042: fstp    [esp+14h+var_14]; float
0x6C4045: push    ecx; char
0x6C4046: push    edx; int
0x6C4047: mov     ecx, esi
0x6C4049: call    sub_6C9BA0
0x6C404E: pop     esi
0x6C404F: retn    1Ch
0x6C4052: xor     al, al
0x6C4054: pop     esi
0x6C4055: retn    1Ch
