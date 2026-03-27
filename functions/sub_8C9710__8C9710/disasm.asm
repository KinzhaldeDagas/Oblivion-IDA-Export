0x8C9710: push    ecx
0x8C9711: push    ebx
0x8C9712: push    esi
0x8C9713: mov     esi, ecx
0x8C9715: mov     eax, [esi]
0x8C9717: mov     edx, [eax+74h]
0x8C971A: push    edi
0x8C971B: lea     ecx, [esp+10h+var_1]
0x8C971F: push    ecx
0x8C9720: mov     ecx, esi
0x8C9722: call    edx
0x8C9724: mov     ebx, [esp+10h+arg_0]
0x8C9728: mov     edi, eax
0x8C972A: test    edi, edi
0x8C972C: jz      short loc_8C9753
0x8C972E: mov     ecx, ebx
0x8C9730: call    sub_7124A0
0x8C9735: test    eax, eax
0x8C9737: jz      short loc_8C974E
0x8C9739: mov     eax, [eax+8]
0x8C973C: push    ebx
0x8C973D: mov     ecx, esi
0x8C973F: mov     [edi+8], eax
0x8C9742: call    sub_8A2600
0x8C9747: pop     edi
0x8C9748: pop     esi
0x8C9749: pop     ebx
0x8C974A: pop     ecx
0x8C974B: retn    4
0x8C974E: xor     eax, eax
0x8C9750: mov     [edi+8], eax
0x8C9753: push    ebx
0x8C9754: mov     ecx, esi
0x8C9756: call    sub_8A2600
0x8C975B: pop     edi
0x8C975C: pop     esi
0x8C975D: pop     ebx
0x8C975E: pop     ecx
0x8C975F: retn    4
