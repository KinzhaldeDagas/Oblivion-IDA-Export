0x7B2130: mov     ecx, ds:0B42D64h
0x7B2136: test    ecx, ecx
0x7B2138: jnz     short loc_7B2157
0x7B213A: push    43Ch
0x7B213F: push    offset a_Distantlodsha; ".\\DistantLODShaderProperty.cpp"
0x7B2144: push    offset aTriedToEnableD; "Tried to enable/disable NULL LOD tree p"...
0x7B2149: call    nullsub_return0_0arg
0x7B214E: mov     ecx, ds:0B42D64h
0x7B2154: add     esp, 0Ch
0x7B2157: mov     al, [ecx+18h]
0x7B215A: and     al, 1
0x7B215C: cmp     [esp+arg_0], 0
0x7B2161: jz      short loc_7B2169
0x7B2163: or      word ptr [ecx+18h], 1
0x7B2168: retn
0x7B2169: and     word ptr [ecx+18h], 0FFFEh
0x7B216F: retn
