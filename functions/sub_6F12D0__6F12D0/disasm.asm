0x6F12D0: mov     ecx, [esp+arg_4]
0x6F12D4: test    ecx, ecx
0x6F12D6: jbe     short locret_6F12F8
0x6F12D8: mov     edx, [esp+arg_8]
0x6F12DC: mov     eax, [esp+arg_0]
0x6F12E0: test    eax, eax
0x6F12E2: jz      short loc_6F12EE
0x6F12E4: fld     dword ptr [edx]
0x6F12E6: fstp    dword ptr [eax]
0x6F12E8: fld     dword ptr [edx+4]
0x6F12EB: fstp    dword ptr [eax+4]
0x6F12EE: sub     ecx, 1
0x6F12F1: add     eax, 8
0x6F12F4: test    ecx, ecx
0x6F12F6: ja      short loc_6F12E0
0x6F12F8: retn
