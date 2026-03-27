0x955C00: mov     ecx, [esp+arg_0]
0x955C04: fld     dword ptr [ecx+1Ch]
0x955C07: mov     eax, [ecx+0Ch]
0x955C0A: mov     edx, [esp+arg_4]
0x955C0E: fld     dword ptr [ecx+14h]
0x955C11: mov     [edx], eax
0x955C13: fstp    dword ptr [edx+4]
0x955C16: fstp    dword ptr [edx+8]
0x955C19: mov     dword ptr [edx+0Ch], 0
0x955C20: fld     dword ptr ds:0A2FAA8h
0x955C26: fld     dword ptr [ecx+10h]
0x955C29: fsub    dword ptr [ecx+0Ch]
0x955C2C: fstp    [esp+arg_0]
0x955C30: fld     dword ptr ds:0A2FAA8h
0x955C36: fcomp   [esp+arg_0]
0x955C3A: fnstsw  ax
0x955C3C: test    ah, 41h
0x955C3F: jz      short loc_955C47
0x955C41: fstp    st
0x955C43: fld     [esp+arg_0]
0x955C47: fld     dword ptr [ecx+18h]
0x955C4A: fsub    dword ptr [ecx+14h]
0x955C4D: fstp    [esp+arg_0]
0x955C51: fcom    [esp+arg_0]
0x955C55: fnstsw  ax
0x955C57: test    ah, 41h
0x955C5A: jz      short loc_955C62
0x955C5C: fstp    st
0x955C5E: fld     [esp+arg_0]
0x955C62: fld     dword ptr [ecx+20h]
0x955C65: fsub    dword ptr [ecx+1Ch]
0x955C68: fstp    [esp+arg_0]
0x955C6C: fcom    [esp+arg_0]
0x955C70: fnstsw  ax
0x955C72: test    ah, 41h
0x955C75: jz      short loc_955C7D
0x955C77: fstp    st
0x955C79: fld     [esp+arg_0]
0x955C7D: fld     dword ptr ds:0AA3554h
0x955C83: fdiv    st, st(1)
0x955C85: fmul    dword ptr ds:0AA3550h
0x955C8B: fstp    dword ptr [edx+0Ch]
0x955C8E: fstp    st
0x955C90: retn    8
