0x8F92C0: mov     ecx, ds:0BA7D98h
0x8F92C6: mov     eax, [ecx]
0x8F92C8: push    esi
0x8F92C9: push    1Ch
0x8F92CB: push    28h ; '('
0x8F92CD: call    dword ptr [eax+10h]
0x8F92D0: mov     ecx, [esp+4+arg_C]
0x8F92D4: mov     esi, eax
0x8F92D6: mov     eax, 0FFFFh
0x8F92DB: mov     [esi+0Ch], ax
0x8F92DF: mov     [esi+0Eh], ax
0x8F92E3: mov     [esi+10h], ax
0x8F92E7: mov     eax, [esp+4+arg_4]
0x8F92EB: mov     [esi+8], ecx
0x8F92EE: mov     word ptr [esi+4], 28h ; '('
0x8F92F4: mov     word ptr [esi+6], 1
0x8F92FA: mov     dword ptr [esi], offset off_A9B6F0
0x8F9300: mov     ecx, [eax]
0x8F9302: lea     edx, [esi+14h]
0x8F9305: push    edx
0x8F9306: add     ecx, 10h
0x8F9309: push    ecx
0x8F930A: call    sub_8D1EF0
0x8F930F: add     esp, 8
0x8F9312: mov     eax, esi
0x8F9314: pop     esi
0x8F9315: retn
