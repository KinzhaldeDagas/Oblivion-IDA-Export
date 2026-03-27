0x90D3B0: push    esi
0x90D3B1: mov     esi, ecx
0x90D3B3: mov     eax, [esi+4]
0x90D3B6: test    eax, eax
0x90D3B8: mov     edx, [esi+1Ch]
0x90D3BB: push    edi
0x90D3BC: jz      short loc_90D3CC
0x90D3BE: mov     edi, edi
0x90D3C0: mov     edi, [eax+1Ch]
0x90D3C3: mov     eax, [eax+4]
0x90D3C6: add     edx, edi
0x90D3C8: test    eax, eax
0x90D3CA: jnz     short loc_90D3C0
0x90D3CC: mov     eax, [esp+8+arg_0]
0x90D3D0: mov     ecx, esi
0x90D3D2: sub     eax, edx
0x90D3D4: add     eax, [ecx+1Ch]
0x90D3D7: jns     short loc_90D3EA
0x90D3D9: mov     ecx, [ecx+4]
0x90D3DC: test    ecx, ecx
0x90D3DE: jnz     short loc_90D3D4
0x90D3E0: pop     edi
0x90D3E1: mov     eax, 1
0x90D3E6: pop     esi
0x90D3E7: retn    8
0x90D3EA: mov     ecx, [ecx+20h]
0x90D3ED: test    ecx, ecx
0x90D3EF: jz      short loc_90D3E0
0x90D3F1: mov     ecx, [ecx]
0x90D3F3: mov     edi, [ecx+eax*4]
0x90D3F6: test    edi, edi
0x90D3F8: jl      short loc_90D3E0
0x90D3FA: lea     edx, [eax+eax*4]
0x90D3FD: mov     eax, [esi+18h]
0x90D400: push    ebx
0x90D401: mov     ebx, [esp+0Ch+arg_4]
0x90D405: push    ebp
0x90D406: mov     ebp, [ebx]
0x90D408: lea     ecx, [eax+edx*4]
0x90D40B: call    sub_940B80
0x90D410: mov     ecx, [esi+20h]
0x90D413: add     ecx, edi
0x90D415: push    eax
0x90D416: push    ecx
0x90D417: mov     ecx, ebx
0x90D419: call    dword ptr [ebp+0Ch]
0x90D41C: pop     ebp
0x90D41D: pop     ebx
0x90D41E: pop     edi
0x90D41F: xor     eax, eax
0x90D421: pop     esi
0x90D422: retn    8
