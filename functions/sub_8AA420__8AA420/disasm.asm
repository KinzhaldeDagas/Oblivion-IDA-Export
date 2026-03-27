0x8AA420: test    byte ptr [ecx+9], 1
0x8AA424: jz      short locret_8AA44E
0x8AA426: fldz
0x8AA428: fcomp   dword ptr [ecx+58h]
0x8AA42B: fnstsw  ax
0x8AA42D: test    ah, 41h
0x8AA430: jp      short locret_8AA44E
0x8AA432: fld     dword ptr [ecx+58h]
0x8AA435: mov     eax, [esp+arg_0]
0x8AA439: fstp    dword ptr [eax+14h]
0x8AA43C: fld     dword ptr [ecx+5Ch]
0x8AA43F: fstp    dword ptr [eax+18h]
0x8AA442: fld     dword ptr ds:0A30634h
0x8AA448: fst     dword ptr [ecx+5Ch]
0x8AA44B: fstp    dword ptr [ecx+58h]
0x8AA44E: retn    4
