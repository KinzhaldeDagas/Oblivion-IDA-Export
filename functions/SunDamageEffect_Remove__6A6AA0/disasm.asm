0x6A6AA0: cmp     byte ptr ds:0B43070h, 0
0x6A6AA7: jz      short loc_6A6AB2
0x6A6AA9: fld1
0x6A6AAB: fstp    dword ptr ds:0B2C7A4h
0x6A6AB1: retn
0x6A6AB2: mov     eax, ds:0B06D54h
0x6A6AB7: fld     dword ptr ds:0B06D64h
0x6A6ABD: mov     ecx, ds:0B06D44h
0x6A6AC3: mov     edx, ds:0B06D3Ch
0x6A6AC9: push    eax; int
0x6A6ACA: sub     esp, 0Ch
0x6A6ACD: fstp    [esp+10h+var_8]; float
0x6A6AD1: fld     dword ptr ds:0B06D5Ch
0x6A6AD7: fstp    [esp+10h+var_C]; float
0x6A6ADB: fld     dword ptr ds:0B06D4Ch
0x6A6AE1: fstp    [esp+10h+var_10]; float
0x6A6AE4: push    ecx; int
0x6A6AE5: push    edx; int
0x6A6AE6: call    sub_7B4830
0x6A6AEB: add     esp, 18h
0x6A6AEE: retn
