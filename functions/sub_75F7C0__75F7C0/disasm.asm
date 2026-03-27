0x75F7C0: fld     dword ptr [ecx]
0x75F7C2: mov     edx, [esp+arg_0]
0x75F7C6: fld     dword ptr [edx]
0x75F7C8: fucompp
0x75F7CA: fnstsw  ax
0x75F7CC: test    ah, 44h
0x75F7CF: jp      short loc_75F835
0x75F7D1: fld     dword ptr [ecx+4]
0x75F7D4: fld     dword ptr [edx+4]
0x75F7D7: fucompp
0x75F7D9: fnstsw  ax
0x75F7DB: test    ah, 44h
0x75F7DE: jp      short loc_75F835
0x75F7E0: fld     dword ptr [ecx+8]
0x75F7E3: fld     dword ptr [edx+8]
0x75F7E6: fucompp
0x75F7E8: fnstsw  ax
0x75F7EA: test    ah, 44h
0x75F7ED: jp      short loc_75F835
0x75F7EF: fld     dword ptr [ecx+0Ch]
0x75F7F2: fld     dword ptr [edx+0Ch]
0x75F7F5: fucompp
0x75F7F7: fnstsw  ax
0x75F7F9: test    ah, 44h
0x75F7FC: jp      short loc_75F835
0x75F7FE: fld     dword ptr [ecx+10h]
0x75F801: fld     dword ptr [edx+10h]
0x75F804: fucompp
0x75F806: fnstsw  ax
0x75F808: test    ah, 44h
0x75F80B: jp      short loc_75F835
0x75F80D: fld     dword ptr [ecx+14h]
0x75F810: fld     dword ptr [edx+14h]
0x75F813: fucompp
0x75F815: fnstsw  ax
0x75F817: test    ah, 44h
0x75F81A: jp      short loc_75F835
0x75F81C: mov     ax, [ecx+18h]
0x75F820: cmp     ax, [edx+18h]
0x75F824: jnz     short loc_75F835
0x75F826: mov     cx, [ecx+1Ah]
0x75F82A: cmp     cx, [edx+1Ah]
0x75F82E: jnz     short loc_75F835
0x75F830: mov     al, 1
0x75F832: retn    4
0x75F835: xor     al, al
0x75F837: retn    4
