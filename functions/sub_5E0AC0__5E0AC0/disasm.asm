0x5E0AC0: push    ecx
0x5E0AC1: cmp     dword ptr [ecx+58h], 0
0x5E0AC5: jz      short loc_5E0ADC
0x5E0AC7: mov     ecx, [ecx+58h]
0x5E0ACA: mov     eax, [ecx]
0x5E0ACC: mov     edx, [eax+430h]
0x5E0AD2: call    edx
0x5E0AD4: fstp    [esp+4+var_4]
0x5E0AD7: fld     [esp+4+var_4]
0x5E0ADA: pop     ecx
0x5E0ADB: retn
0x5E0ADC: fld1
0x5E0ADE: fstp    [esp+4+var_4]
0x5E0AE1: fld     [esp+4+var_4]
0x5E0AE4: pop     ecx
0x5E0AE5: retn
