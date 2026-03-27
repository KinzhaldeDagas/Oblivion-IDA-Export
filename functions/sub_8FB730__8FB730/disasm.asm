0x8FB730: mov     ecx, ds:0BA7D98h
0x8FB736: mov     eax, [ecx]
0x8FB738: push    esi
0x8FB739: push    1Ch
0x8FB73B: push    20h ; ' '
0x8FB73D: call    dword ptr [eax+10h]
0x8FB740: mov     ecx, [esp+4+arg_C]
0x8FB744: mov     esi, eax
0x8FB746: mov     eax, [esp+4+arg_0]
0x8FB74A: mov     [esi+8], ecx
0x8FB74D: mov     word ptr [esi+4], 20h ; ' '
0x8FB753: mov     word ptr [esi+6], 1
0x8FB759: mov     dword ptr [esi], offset off_A9B840
0x8FB75F: mov     word ptr [esi+0Ch], 0FFFFh
0x8FB765: mov     ecx, [eax]
0x8FB767: lea     edx, [esi+10h]
0x8FB76A: push    edx
0x8FB76B: add     ecx, 10h
0x8FB76E: push    ecx
0x8FB76F: call    sub_8D1DB0
0x8FB774: add     esp, 8
0x8FB777: mov     dword ptr [esi], offset off_A9B874
0x8FB77D: mov     eax, esi
0x8FB77F: pop     esi
0x8FB780: retn
