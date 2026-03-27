0x918760: push    ebx
0x918761: push    esi
0x918762: push    edi
0x918763: mov     edi, ecx
0x918765: mov     ebx, [edi+30h]
0x918768: xor     esi, esi
0x91876A: test    ebx, ebx
0x91876C: jle     short loc_918785
0x91876E: push    ebp
0x91876F: mov     ebp, [esp+10h+arg_0]
0x918773: mov     eax, [edi+2Ch]
0x918776: mov     ecx, [eax+esi*4]
0x918779: mov     edx, [ecx]
0x91877B: push    ebp
0x91877C: call    dword ptr [edx+14h]
0x91877F: inc     esi
0x918780: cmp     esi, ebx
0x918782: jl      short loc_918773
0x918784: pop     ebp
0x918785: mov     eax, [edi+8]
0x918788: push    eax
0x918789: lea     ecx, [esp+10h+arg_0]
0x91878D: push    ecx
0x91878E: lea     ecx, [edi+18h]
0x918791: call    sub_947FA0
0x918796: pop     edi
0x918797: pop     esi
0x918798: pop     ebx
0x918799: retn    4
