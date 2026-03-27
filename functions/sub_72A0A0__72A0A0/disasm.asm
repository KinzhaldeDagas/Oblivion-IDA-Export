0x72A0A0: fld     dword ptr [ecx+0Ch]
0x72A0A3: mov     edx, [esp+arg_0]
0x72A0A7: fld     dword ptr [edx+0Ch]
0x72A0AA: fucompp
0x72A0AC: fnstsw  ax
0x72A0AE: test    ah, 44h
0x72A0B1: jp      short loc_72A0E6
0x72A0B3: fld     dword ptr [ecx]
0x72A0B5: fld     dword ptr [edx]
0x72A0B7: fucompp
0x72A0B9: fnstsw  ax
0x72A0BB: test    ah, 44h
0x72A0BE: jp      short loc_72A0E6
0x72A0C0: fld     dword ptr [ecx+4]
0x72A0C3: fld     dword ptr [edx+4]
0x72A0C6: fucompp
0x72A0C8: fnstsw  ax
0x72A0CA: test    ah, 44h
0x72A0CD: jp      short loc_72A0E6
0x72A0CF: fld     dword ptr [ecx+8]
0x72A0D2: fld     dword ptr [edx+8]
0x72A0D5: fucompp
0x72A0D7: fnstsw  ax
0x72A0D9: test    ah, 44h
0x72A0DC: jp      short loc_72A0E6
0x72A0DE: mov     eax, 1
0x72A0E3: retn    4
0x72A0E6: xor     eax, eax
0x72A0E8: retn    4
