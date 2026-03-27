0x43F840: push    ecx
0x43F841: cmp     dword ptr [ecx+34h], 0
0x43F845: jz      short loc_43F84D
0x43F847: mov     al, 1
0x43F849: pop     ecx
0x43F84A: retn    4
0x43F84D: mov     edx, [esp+4+arg_0]
0x43F851: fld     dword ptr [edx]
0x43F853: push    ebx
0x43F854: push    esi
0x43F855: fstp    [esp+0Ch+var_4]
0x43F859: push    edi
0x43F85A: fld     [esp+10h+var_4]
0x43F85E: fistp   [esp+10h+arg_0]
0x43F862: fld     dword ptr [edx+4]
0x43F865: mov     eax, [esp+10h+arg_0]
0x43F869: fstp    [esp+10h+var_4]
0x43F86D: sar     eax, 0Ch
0x43F870: fld     [esp+10h+var_4]
0x43F874: fistp   [esp+10h+arg_0]
0x43F878: mov     ebx, ds:0B06A2Ch
0x43F87E: mov     edx, [ecx+20h]
0x43F881: mov     edi, [esp+10h+arg_0]
0x43F885: mov     ecx, [ecx+24h]
0x43F888: mov     esi, ebx
0x43F88A: shr     esi, 1
0x43F88C: sub     edx, esi
0x43F88E: sar     edi, 0Ch
0x43F891: sub     ecx, esi
0x43F893: cmp     eax, edx
0x43F895: jl      short loc_43F8B0
0x43F897: add     edx, ebx
0x43F899: cmp     eax, edx
0x43F89B: jge     short loc_43F8B0
0x43F89D: cmp     edi, ecx
0x43F89F: jl      short loc_43F8B0
0x43F8A1: add     ebx, ecx
0x43F8A3: cmp     edi, ebx
0x43F8A5: jge     short loc_43F8B0
0x43F8A7: pop     edi
0x43F8A8: pop     esi
0x43F8A9: mov     al, 1
0x43F8AB: pop     ebx
0x43F8AC: pop     ecx
0x43F8AD: retn    4
0x43F8B0: pop     edi
0x43F8B1: pop     esi
0x43F8B2: xor     al, al
0x43F8B4: pop     ebx
0x43F8B5: pop     ecx
0x43F8B6: retn    4
