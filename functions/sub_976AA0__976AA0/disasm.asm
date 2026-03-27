0x976AA0: fld     dword ptr [ecx]
0x976AA2: mov     edx, [esp+arg_0]
0x976AA6: fld     dword ptr [edx]
0x976AA8: fucompp
0x976AAA: fnstsw  ax
0x976AAC: test    ah, 44h
0x976AAF: jp      short loc_976B04
0x976AB1: fld     dword ptr [ecx+4]
0x976AB4: fld     dword ptr [edx+4]
0x976AB7: fucompp
0x976AB9: fnstsw  ax
0x976ABB: test    ah, 44h
0x976ABE: jp      short loc_976B04
0x976AC0: fld     dword ptr [ecx+8]
0x976AC3: fld     dword ptr [edx+8]
0x976AC6: fucompp
0x976AC8: fnstsw  ax
0x976ACA: test    ah, 44h
0x976ACD: jp      short loc_976B04
0x976ACF: fld     dword ptr [ecx+0Ch]
0x976AD2: fld     dword ptr [edx+0Ch]
0x976AD5: fucompp
0x976AD7: fnstsw  ax
0x976AD9: test    ah, 44h
0x976ADC: jp      short loc_976B04
0x976ADE: fld     dword ptr [ecx+10h]
0x976AE1: fld     dword ptr [edx+10h]
0x976AE4: fucompp
0x976AE6: fnstsw  ax
0x976AE8: test    ah, 44h
0x976AEB: jp      short loc_976B04
0x976AED: fld     dword ptr [ecx+14h]
0x976AF0: fld     dword ptr [edx+14h]
0x976AF3: fucompp
0x976AF5: fnstsw  ax
0x976AF7: test    ah, 44h
0x976AFA: jp      short loc_976B04
0x976AFC: mov     eax, 1
0x976B01: retn    4
0x976B04: xor     eax, eax
0x976B06: retn    4
