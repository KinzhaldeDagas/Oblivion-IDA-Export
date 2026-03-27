0x8AA390: fld     dword ptr [ecx]
0x8AA392: mov     edx, [esp+arg_0]
0x8AA396: fld     dword ptr [edx]
0x8AA398: fucompp
0x8AA39A: fnstsw  ax
0x8AA39C: test    ah, 44h
0x8AA39F: jp      short loc_8AA3D0
0x8AA3A1: fld     dword ptr [ecx+4]
0x8AA3A4: fld     dword ptr [edx+4]
0x8AA3A7: fucompp
0x8AA3A9: fnstsw  ax
0x8AA3AB: test    ah, 44h
0x8AA3AE: jp      short loc_8AA3D0
0x8AA3B0: fld     dword ptr [ecx+8]
0x8AA3B3: fld     dword ptr [edx+8]
0x8AA3B6: fucompp
0x8AA3B8: fnstsw  ax
0x8AA3BA: test    ah, 44h
0x8AA3BD: jp      short loc_8AA3D0
0x8AA3BF: mov     eax, 1
0x8AA3C4: xor     ecx, ecx
0x8AA3C6: test    al, al
0x8AA3C8: setz    cl
0x8AA3CB: mov     al, cl
0x8AA3CD: retn    4
0x8AA3D0: xor     eax, eax
0x8AA3D2: xor     ecx, ecx
0x8AA3D4: test    al, al
0x8AA3D6: setz    cl
0x8AA3D9: mov     al, cl
0x8AA3DB: retn    4
