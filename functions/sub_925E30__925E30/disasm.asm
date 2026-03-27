0x925E30: push    ebx
0x925E31: push    ebp
0x925E32: push    esi
0x925E33: push    edi
0x925E34: mov     edi, [esp+10h+arg_4]
0x925E38: xor     ebx, ebx
0x925E3A: lea     ebx, [ebx+0]
0x925E40: mov     eax, [esp+10h+arg_0]
0x925E44: mov     ecx, [eax]
0x925E46: mov     eax, [ebx+ecx]
0x925E49: mov     ecx, [eax]
0x925E4B: mov     edx, [edi]
0x925E4D: push    200h
0x925E52: lea     ebp, [ecx+eax+10h]
0x925E56: add     ecx, 10h
0x925E59: push    ecx
0x925E5A: push    eax
0x925E5B: push    8
0x925E5D: push    offset aSector; "Sector"
0x925E62: mov     ecx, edi
0x925E64: lea     esi, [eax+10h]
0x925E67: call    dword ptr [edx+4]
0x925E6A: add     ebx, 4
0x925E6D: lea     ecx, [ecx+0]
0x925E70: movzx   eax, byte ptr [esi]
0x925E73: cmp     eax, 6; switch 7 cases
0x925E76: ja      short def_925E78
0x925E78: jmp     ds:jpt_925E78[eax*4]; switch jump
0x925E7F: mov     ecx, [esi+4]; jumptable 00925E78 case 6
0x925E82: mov     eax, [edi]
0x925E84: push    ecx
0x925E85: push    8
0x925E87: push    offset aAgent; "Agent"
0x925E8C: mov     ecx, edi
0x925E8E: call    dword ptr [eax+8]
0x925E91: movzx   edx, byte ptr [esi+3]
0x925E95: add     esi, edx
0x925E97: jmp     short def_925E78
0x925E99: movzx   eax, byte ptr [esi+3]; jumptable 00925E78 cases 0,2-5
0x925E9D: add     esi, eax
