0x552D90: push    0FFFFFFFFh
0x552D92: push    offset SEH_552D90
0x552D97: mov     eax, large fs:0
0x552D9D: push    eax
0x552D9E: push    ecx
0x552D9F: push    esi
0x552DA0: mov     eax, ds:0B30AACh
0x552DA5: xor     eax, esp
0x552DA7: push    eax
0x552DA8: lea     eax, [esp+18h+var_C]
0x552DAC: mov     large fs:0, eax
0x552DB2: mov     esi, ecx
0x552DB4: mov     [esp+18h+var_10], esi
0x552DB8: push    offset sub_551F40; a5
0x552DBD: push    offset sub_5527D0; a4
0x552DC2: push    5; size
0x552DC4: push    78h ; 'x'; a2
0x552DC6: lea     eax, [esi+4]
0x552DC9: push    eax; a1
0x552DCA: mov     byte ptr [esi], 0
0x552DCD: call    ArrayConstructor
0x552DD2: push    offset sub_43ACE0; a5
0x552DD7: push    offset unknown_libname_8_0; a4
0x552DDC: push    14h; size
0x552DDE: push    20h ; ' '; a2
0x552DE0: lea     ecx, [esi+25Ch]
0x552DE6: push    ecx; a1
0x552DE7: mov     [esp+2Ch+var_4], 0
0x552DEF: call    ArrayConstructor
0x552DF4: push    offset sub_551FD0; a5
0x552DF9: push    offset sub_552860; a4
0x552DFE: push    19h; size
0x552E00: push    38h ; '8'; a2
0x552E02: lea     edx, [esi+4DCh]
0x552E08: push    edx; a1
0x552E09: mov     byte ptr [esp+2Ch+var_4], 1
0x552E0E: call    ArrayConstructor
0x552E13: push    offset sub_43ACE0; a5
0x552E18: push    offset sub_43EB30; a4
0x552E1D: push    14h; size
0x552E1F: push    18h; a2
0x552E21: lea     eax, [esi+0A54h]
0x552E27: push    eax; a1
0x552E28: mov     byte ptr [esp+2Ch+var_4], 2
0x552E2D: call    ArrayConstructor
0x552E32: mov     eax, esi
0x552E34: mov     ecx, [esp+18h+var_C]
0x552E38: mov     large fs:0, ecx
0x552E3F: pop     ecx
0x552E40: pop     esi
0x552E41: add     esp, 10h
0x552E44: retn
