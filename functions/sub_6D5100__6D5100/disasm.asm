0x6D5100: mov     eax, [ecx+50h]
0x6D5103: test    eax, eax
0x6D5105: jz      short loc_6D5128
0x6D5107: mov     ecx, [eax+14h]
0x6D510A: mov     edx, [esp+arg_0]
0x6D510E: mov     [edx], ecx
0x6D5110: mov     ecx, [eax+1Ch]
0x6D5113: mov     edx, [esp+arg_4]
0x6D5117: mov     [edx], ecx
0x6D5119: mov     cl, [eax+49h]
0x6D511C: mov     edx, [esp+arg_8]
0x6D5120: mov     [edx], cl
0x6D5122: mov     eax, [eax+18h]
0x6D5125: retn    0Ch
0x6D5128: mov     eax, [esp+arg_0]
0x6D512C: mov     ecx, [esp+arg_4]
0x6D5130: mov     edx, [esp+arg_8]
0x6D5134: mov     dword ptr [eax], 0
0x6D513A: mov     dword ptr [ecx], 0
0x6D5140: mov     byte ptr [edx], 0
0x6D5143: xor     eax, eax
0x6D5145: retn    0Ch
