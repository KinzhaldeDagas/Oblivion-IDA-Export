0x78E7C0: sub     esp, 0Ch
0x78E7C3: push    ebx
0x78E7C4: mov     ebx, [esp+10h+arg_4]
0x78E7C8: mov     edx, [ebx+14h]
0x78E7CB: push    ebp
0x78E7CC: mov     ebp, [ecx+14h]
0x78E7CF: cmp     ebp, edx
0x78E7D1: push    esi
0x78E7D2: push    edi
0x78E7D3: jge     short loc_78E7D7
0x78E7D5: mov     edx, ebp
0x78E7D7: cmp     edx, 5
0x78E7DA: fldz
0x78E7DC: mov     eax, [esp+1Ch+arg_0]
0x78E7E0: fst     dword ptr [eax+10h]
0x78E7E3: fst     dword ptr [eax+0Ch]
0x78E7E6: lea     esi, [eax+8]
0x78E7E9: fst     dword ptr [esi]
0x78E7EB: fst     dword ptr [eax+4]
0x78E7EE: fstp    dword ptr [eax]
0x78E7F0: jle     short loc_78E7F7
0x78E7F2: mov     edx, 5
0x78E7F7: xor     edi, edi
0x78E7F9: cmp     ebp, 4
0x78E7FC: mov     [eax+14h], edx
0x78E7FF: jl      short loc_78E868
0x78E801: sub     eax, ebx
0x78E803: mov     [esp+1Ch+var_8], eax
0x78E807: mov     ebp, ecx
0x78E809: sub     ebp, ebx
0x78E80B: mov     eax, ecx
0x78E80D: sub     eax, [esp+1Ch+arg_0]
0x78E811: mov     [esp+1Ch+var_C], ebp
0x78E815: mov     ebp, [ecx+14h]
0x78E818: lea     edx, [ebx+4]
0x78E81B: mov     [esp+1Ch+var_4], eax
0x78E81F: nop
0x78E820: fld     dword ptr [ecx+edi*4]
0x78E823: mov     eax, [esp+1Ch+var_C]
0x78E827: fsub    dword ptr [edx-4]
0x78E82A: add     edi, 4
0x78E82D: add     edx, 10h
0x78E830: add     esi, 10h
0x78E833: fstp    dword ptr [esi-18h]
0x78E836: fld     dword ptr [eax+edx-10h]
0x78E83A: mov     eax, [esp+1Ch+var_8]
0x78E83E: fsub    dword ptr [edx-10h]
0x78E841: fstp    dword ptr [eax+edx-10h]
0x78E845: mov     eax, [esp+1Ch+var_4]
0x78E849: fld     dword ptr [eax+esi-10h]
0x78E84D: lea     eax, [ebp-3]
0x78E850: cmp     edi, eax
0x78E852: fsub    dword ptr [edx-0Ch]
0x78E855: fstp    dword ptr [esi-10h]
0x78E858: fld     dword ptr [ecx+edi*4-4]
0x78E85C: fsub    dword ptr [edx-8]
0x78E85F: fstp    dword ptr [esi-0Ch]
0x78E862: jl      short loc_78E820
0x78E864: mov     eax, [esp+1Ch+arg_0]
0x78E868: cmp     edi, ebp
0x78E86A: jge     short loc_78E889
0x78E86C: mov     esi, eax
0x78E86E: sub     ecx, ebx
0x78E870: sub     esi, ebx
0x78E872: lea     edx, [ebx+edi*4]
0x78E875: sub     ebp, edi
0x78E877: fld     dword ptr [edx+ecx]
0x78E87A: add     edx, 4
0x78E87D: sub     ebp, 1
0x78E880: fsub    dword ptr [edx-4]
0x78E883: fstp    dword ptr [edx+esi-4]
0x78E887: jnz     short loc_78E877
0x78E889: pop     edi
0x78E88A: pop     esi
0x78E88B: pop     ebp
0x78E88C: pop     ebx
0x78E88D: add     esp, 0Ch
0x78E890: retn    8
