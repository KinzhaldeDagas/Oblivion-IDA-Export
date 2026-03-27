0x7073A0: fld     [esp+arg_0]
0x7073A4: push    esi
0x7073A5: mov     esi, ecx
0x7073A7: mov     eax, [esi]
0x7073A9: mov     edx, [eax+64h]
0x7073AC: push    ecx
0x7073AD: fstp    [esp+8+var_8]
0x7073B0: call    edx
0x7073B2: cmp     dword ptr [esi+1Ch], 0
0x7073B6: jz      short loc_7073C5
0x7073B8: mov     ecx, [esi+1Ch]
0x7073BB: mov     eax, [ecx]
0x7073BD: mov     edx, [eax+94h]
0x7073C3: call    edx
0x7073C5: pop     esi
0x7073C6: retn    4
