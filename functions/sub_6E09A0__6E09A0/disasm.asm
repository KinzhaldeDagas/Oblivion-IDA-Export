0x6E09A0: mov     eax, [ecx+30h]
0x6E09A3: sub     esp, 0Ch
0x6E09A6: test    eax, eax
0x6E09A8: jz      short loc_6E09F8
0x6E09AA: test    byte ptr [ecx+40h], 1
0x6E09AE: jz      short loc_6E09C4
0x6E09B0: mov     ecx, [eax+0E0h]
0x6E09B6: mov     edx, [eax+0E4h]
0x6E09BC: mov     eax, [eax+0E8h]
0x6E09C2: jmp     short loc_6E09D6
0x6E09C4: mov     ecx, [eax+0ECh]
0x6E09CA: mov     edx, [eax+0F0h]
0x6E09D0: mov     eax, [eax+0F4h]
0x6E09D6: mov     [esp+0Ch+var_4], eax
0x6E09DA: mov     eax, [esp+0Ch+arg_0]
0x6E09DE: mov     [esp+0Ch+var_C], ecx
0x6E09E1: fld     [esp+0Ch+var_C]
0x6E09E4: fstp    dword ptr [eax]
0x6E09E6: mov     [esp+0Ch+var_8], edx
0x6E09EA: fld     [esp+0Ch+var_8]
0x6E09EE: fstp    dword ptr [eax+4]
0x6E09F1: fld     [esp+0Ch+var_4]
0x6E09F5: fstp    dword ptr [eax+8]
0x6E09F8: add     esp, 0Ch
0x6E09FB: retn    4
