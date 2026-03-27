0x632310: fld     dword ptr [ecx]
0x632312: mov     edx, [esp+arg_0]
0x632316: fld     dword ptr [edx]
0x632318: fucompp
0x63231A: fnstsw  ax
0x63231C: test    ah, 44h
0x63231F: jp      short loc_63235F
0x632321: fld     dword ptr [ecx+4]
0x632324: fld     dword ptr [edx+4]
0x632327: fucompp
0x632329: fnstsw  ax
0x63232B: test    ah, 44h
0x63232E: jp      short loc_63235F
0x632330: fld     dword ptr [ecx+8]
0x632333: fld     dword ptr [edx+8]
0x632336: fucompp
0x632338: fnstsw  ax
0x63233A: test    ah, 44h
0x63233D: jp      short loc_63235F
0x63233F: fld     dword ptr [ecx+0Ch]
0x632342: fld     dword ptr [edx+0Ch]
0x632345: fucompp
0x632347: fnstsw  ax
0x632349: test    ah, 44h
0x63234C: jp      short loc_63235F
0x63234E: mov     eax, 1
0x632353: xor     ecx, ecx
0x632355: test    al, al
0x632357: setz    cl
0x63235A: mov     al, cl
0x63235C: retn    4
0x63235F: xor     eax, eax
0x632361: xor     ecx, ecx
0x632363: test    al, al
0x632365: setz    cl
0x632368: mov     al, cl
0x63236A: retn    4
