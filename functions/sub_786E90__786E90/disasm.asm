0x786E90: fld     dword ptr [ecx]
0x786E92: mov     edx, [esp+arg_0]
0x786E96: fld     dword ptr [edx]
0x786E98: fucompp
0x786E9A: fnstsw  ax
0x786E9C: test    ah, 44h
0x786E9F: jp      short loc_786EC4
0x786EA1: fld     dword ptr [ecx+4]
0x786EA4: fld     dword ptr [edx+4]
0x786EA7: fucompp
0x786EA9: fnstsw  ax
0x786EAB: test    ah, 44h
0x786EAE: jp      short loc_786EC4
0x786EB0: fld     dword ptr [ecx+8]
0x786EB3: fld     dword ptr [edx+8]
0x786EB6: fucompp
0x786EB8: fnstsw  ax
0x786EBA: test    ah, 44h
0x786EBD: jp      short loc_786EC4
0x786EBF: xor     eax, eax
0x786EC1: retn    4
0x786EC4: mov     eax, 1
0x786EC9: retn    4
