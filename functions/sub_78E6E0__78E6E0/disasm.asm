0x78E6E0: sub     esp, 0Ch
0x78E6E3: push    ebx
0x78E6E4: mov     ebx, [esp+10h+arg_4]
0x78E6E8: mov     edx, [ebx+14h]
0x78E6EB: push    ebp
0x78E6EC: mov     ebp, [ecx+14h]
0x78E6EF: cmp     ebp, edx
0x78E6F1: push    esi
0x78E6F2: push    edi
0x78E6F3: jge     short loc_78E6F7
0x78E6F5: mov     edx, ebp
0x78E6F7: cmp     edx, 5
0x78E6FA: fldz
0x78E6FC: mov     eax, [esp+1Ch+arg_0]
0x78E700: fst     dword ptr [eax+10h]
0x78E703: fst     dword ptr [eax+0Ch]
0x78E706: lea     esi, [eax+8]
0x78E709: fst     dword ptr [esi]
0x78E70B: fst     dword ptr [eax+4]
0x78E70E: fstp    dword ptr [eax]
0x78E710: jle     short loc_78E717
0x78E712: mov     edx, 5
0x78E717: xor     edi, edi
0x78E719: cmp     ebp, 4
0x78E71C: mov     [eax+14h], edx
0x78E71F: jl      short loc_78E788
0x78E721: sub     eax, ecx
0x78E723: mov     [esp+1Ch+var_8], eax
0x78E727: mov     ebp, ebx
0x78E729: sub     ebp, ecx
0x78E72B: mov     eax, ebx
0x78E72D: sub     eax, [esp+1Ch+arg_0]
0x78E731: mov     [esp+1Ch+var_C], ebp
0x78E735: mov     ebp, [ecx+14h]
0x78E738: lea     edx, [ecx+4]
0x78E73B: mov     [esp+1Ch+var_4], eax
0x78E73F: nop
0x78E740: fld     dword ptr [ebx+edi*4]
0x78E743: mov     eax, [esp+1Ch+var_C]
0x78E747: fadd    dword ptr [edx-4]
0x78E74A: add     edi, 4
0x78E74D: add     edx, 10h
0x78E750: add     esi, 10h
0x78E753: fstp    dword ptr [esi-18h]
0x78E756: fld     dword ptr [eax+edx-10h]
0x78E75A: mov     eax, [esp+1Ch+var_8]
0x78E75E: fadd    dword ptr [edx-10h]
0x78E761: fstp    dword ptr [eax+edx-10h]
0x78E765: mov     eax, [esp+1Ch+var_4]
0x78E769: fld     dword ptr [eax+esi-10h]
0x78E76D: lea     eax, [ebp-3]
0x78E770: cmp     edi, eax
0x78E772: fadd    dword ptr [edx-0Ch]
0x78E775: fstp    dword ptr [esi-10h]
0x78E778: fld     dword ptr [ebx+edi*4-4]
0x78E77C: fadd    dword ptr [edx-8]
0x78E77F: fstp    dword ptr [esi-0Ch]
0x78E782: jl      short loc_78E740
0x78E784: mov     eax, [esp+1Ch+arg_0]
0x78E788: cmp     edi, ebp
0x78E78A: jge     short loc_78E7A9
0x78E78C: mov     esi, eax
0x78E78E: sub     ebx, ecx
0x78E790: sub     esi, ecx
0x78E792: lea     edx, [ecx+edi*4]
0x78E795: sub     ebp, edi
0x78E797: fld     dword ptr [edx+ebx]
0x78E79A: add     edx, 4
0x78E79D: sub     ebp, 1
0x78E7A0: fadd    dword ptr [edx-4]
0x78E7A3: fstp    dword ptr [edx+esi-4]
0x78E7A7: jnz     short loc_78E797
0x78E7A9: pop     edi
0x78E7AA: pop     esi
0x78E7AB: pop     ebp
0x78E7AC: pop     ebx
0x78E7AD: add     esp, 0Ch
0x78E7B0: retn    8
