0x4A7220: push    ecx
0x4A7221: fld     dword ptr ds:0A3B888h
0x4A7227: fstp    [esp+4+var_4]
0x4A722A: fld     dword ptr [ecx+1Ch]
0x4A722D: fcomp   qword ptr ds:0A40398h
0x4A7233: fnstsw  ax
0x4A7235: test    ah, 41h
0x4A7238: jnz     short loc_4A7240
0x4A723A: fld     dword ptr [ecx+1Ch]
0x4A723D: pop     ecx
0x4A723E: retn
0x4A723F: align 10h
0x4A7240: mov     edx, [ecx]
0x4A7242: test    edx, edx
0x4A7244: jz      short loc_4A7262
0x4A7246: fld     dword ptr [edx+4]
0x4A7249: fld     [esp+4+var_4]
0x4A724C: fcompp
0x4A724E: fnstsw  ax
0x4A7250: test    ah, 5
0x4A7253: jp      short loc_4A725B
0x4A7255: fld     dword ptr [edx+4]
0x4A7258: fstp    [esp+4+var_4]
0x4A725B: mov     ecx, [ecx+4]
0x4A725E: test    ecx, ecx
0x4A7260: jnz     short loc_4A7240
0x4A7262: fld     [esp+4+var_4]
0x4A7265: pop     ecx
0x4A7266: retn
