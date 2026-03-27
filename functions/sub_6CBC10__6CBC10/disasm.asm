0x6CBC10: push    ecx
0x6CBC11: fld     dword ptr ds:0A7DEB4h
0x6CBC17: fchs
0x6CBC19: fstp    [esp+4+var_4]
0x6CBC1C: fld     dword ptr [ecx+1Ch]
0x6CBC1F: fld     [esp+4+var_4]
0x6CBC22: fld     st
0x6CBC24: fucomp  st(2)
0x6CBC26: fnstsw  ax
0x6CBC28: fstp    st(1)
0x6CBC2A: test    ah, 44h
0x6CBC2D: jp      short loc_6CBC4F
0x6CBC2F: fld     dword ptr [ecx+10h]
0x6CBC32: fld     st(1)
0x6CBC34: fucompp
0x6CBC36: fnstsw  ax
0x6CBC38: test    ah, 44h
0x6CBC3B: jp      short loc_6CBC4F
0x6CBC3D: fld     dword ptr [ecx]
0x6CBC3F: fucompp
0x6CBC41: fnstsw  ax
0x6CBC43: test    ah, 44h
0x6CBC46: jp      short loc_6CBC51
0x6CBC48: mov     eax, 1
0x6CBC4D: pop     ecx
0x6CBC4E: retn
0x6CBC4F: fstp    st
0x6CBC51: xor     eax, eax
0x6CBC53: pop     ecx
0x6CBC54: retn
