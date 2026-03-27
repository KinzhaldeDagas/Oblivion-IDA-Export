0x552240: push    0FFFFFFFFh
0x552242: push    offset SEH_552240
0x552247: mov     eax, large fs:0
0x55224D: push    eax
0x55224E: push    ecx
0x55224F: push    esi
0x552250: mov     eax, ds:0B30AACh
0x552255: xor     eax, esp
0x552257: push    eax
0x552258: lea     eax, [esp+18h+var_C]
0x55225C: mov     large fs:0, eax
0x552262: mov     esi, ecx
0x552264: mov     [esp+18h+var_10], esi
0x552268: mov     eax, [esp+18h+arg_0]
0x55226C: mov     ecx, [esp+18h+arg_4]
0x552270: mov     [esi], eax
0x552272: mov     [esi+4], ecx
0x552275: lea     ecx, [esi+8]; int
0x552278: xor     eax, eax
0x55227A: mov     [ecx+4], eax
0x55227D: mov     [ecx+8], eax
0x552280: mov     [ecx+0Ch], eax
0x552283: fldz
0x552285: mov     edx, [esi+4]
0x552288: imul    edx, [esi]
0x55228B: push    ecx
0x55228C: mov     [esp+1Ch+var_4], eax
0x552290: fstp    [esp+1Ch+var_1C]; int
0x552293: push    edx; int
0x552294: call    sub_527160
0x552299: mov     eax, esi
0x55229B: mov     ecx, [esp+18h+var_C]
0x55229F: mov     large fs:0, ecx
0x5522A6: pop     ecx
0x5522A7: pop     esi
0x5522A8: add     esp, 10h
0x5522AB: retn    8
