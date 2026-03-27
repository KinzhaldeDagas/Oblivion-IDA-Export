0x8F9410: mov     ecx, ds:0BA7D98h
0x8F9416: mov     eax, [ecx]
0x8F9418: push    esi
0x8F9419: push    1Ch
0x8F941B: push    28h ; '('
0x8F941D: call    dword ptr [eax+10h]
0x8F9420: mov     ecx, [esp+4+arg_C]
0x8F9424: mov     esi, eax
0x8F9426: mov     eax, 0FFFFh
0x8F942B: mov     [esi+0Ch], ax
0x8F942F: mov     [esi+0Eh], ax
0x8F9433: mov     [esi+10h], ax
0x8F9437: mov     eax, [esp+4+arg_0]
0x8F943B: mov     [esi+8], ecx
0x8F943E: mov     word ptr [esi+4], 28h ; '('
0x8F9444: mov     word ptr [esi+6], 1
0x8F944A: mov     dword ptr [esi], offset off_A9B6F0
0x8F9450: mov     ecx, [eax]
0x8F9452: lea     edx, [esi+14h]
0x8F9455: push    edx
0x8F9456: add     ecx, 10h
0x8F9459: push    ecx
0x8F945A: call    sub_8D1EF0
0x8F945F: add     esp, 8
0x8F9462: mov     dword ptr [esi], offset off_A9B724
0x8F9468: mov     eax, esi
0x8F946A: pop     esi
0x8F946B: retn
