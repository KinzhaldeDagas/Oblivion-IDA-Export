0x6D2940: mov     eax, [ecx+10h]
0x6D2943: test    eax, eax
0x6D2945: jz      short loc_6D2968
0x6D2947: mov     ecx, [eax+8]
0x6D294A: mov     edx, [esp+arg_0]
0x6D294E: mov     [edx], ecx
0x6D2950: mov     ecx, [eax+10h]
0x6D2953: mov     edx, [esp+arg_4]
0x6D2957: mov     [edx], ecx
0x6D2959: mov     cl, [eax+14h]
0x6D295C: mov     edx, [esp+arg_8]
0x6D2960: mov     [edx], cl
0x6D2962: mov     eax, [eax+0Ch]
0x6D2965: retn    0Ch
0x6D2968: mov     eax, [esp+arg_0]
0x6D296C: mov     ecx, [esp+arg_4]
0x6D2970: mov     edx, [esp+arg_8]
0x6D2974: mov     dword ptr [eax], 0
0x6D297A: mov     dword ptr [ecx], 0
0x6D2980: mov     byte ptr [edx], 0
0x6D2983: xor     eax, eax
0x6D2985: retn    0Ch
