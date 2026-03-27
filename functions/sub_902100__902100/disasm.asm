0x902100: mov     ecx, ds:0BA7D98h
0x902106: push    esi
0x902107: mov     esi, [esp+4+arg_C]
0x90210B: test    esi, esi
0x90210D: push    1Ch
0x90210F: jz      short loc_90213A
0x902111: mov     eax, [ecx]
0x902113: push    90h
0x902118: call    dword ptr [eax+10h]
0x90211B: mov     ecx, [esp+4+arg_8]
0x90211F: mov     edx, [esp+4+arg_4]
0x902123: push    esi
0x902124: push    ecx
0x902125: mov     ecx, [esp+0Ch+arg_0]
0x902129: push    edx
0x90212A: push    ecx
0x90212B: mov     ecx, eax
0x90212D: mov     word ptr [eax+4], 90h
0x902133: call    sub_901FF0
0x902138: pop     esi
0x902139: retn
0x90213A: mov     edx, [ecx]
0x90213C: push    30h ; '0'
0x90213E: call    dword ptr [edx+10h]
0x902141: mov     ecx, [esp+4+arg_4]
0x902145: mov     edx, [esp+4+arg_0]
0x902149: push    0
0x90214B: push    ecx
0x90214C: push    edx
0x90214D: mov     ecx, eax
0x90214F: mov     word ptr [eax+4], 30h ; '0'
0x902155: call    sub_93F0E0
0x90215A: pop     esi
0x90215B: retn
