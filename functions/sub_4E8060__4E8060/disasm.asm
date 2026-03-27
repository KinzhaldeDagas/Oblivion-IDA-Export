0x4E8060: sub     esp, 8
0x4E8063: fld     dword ptr [ecx+1Ch]
0x4E8066: fstp    [esp+8+var_4]
0x4E806A: fld     [esp+8+var_4]
0x4E806E: fistp   [esp+8+var_8]
0x4E8071: cmp     byte ptr [esp+8+arg_0], 0
0x4E8076: jz      short loc_4E808F
0x4E8078: mov     eax, [esp+8+var_8]
0x4E807B: or      eax, 1
0x4E807E: mov     [esp+8+arg_0], eax
0x4E8082: fild    [esp+8+arg_0]
0x4E8086: fstp    dword ptr [ecx+1Ch]
0x4E8089: add     esp, 8
0x4E808C: retn    4
0x4E808F: mov     edx, [esp+8+var_8]
0x4E8092: and     edx, 0FFFFFFFEh
0x4E8095: mov     [esp+8+arg_0], edx
0x4E8099: fild    [esp+8+arg_0]
0x4E809D: fstp    dword ptr [ecx+1Ch]
0x4E80A0: add     esp, 8
0x4E80A3: retn    4
