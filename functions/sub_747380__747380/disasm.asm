0x747380: mov     eax, [esp+arg_0]
0x747384: mov     ecx, [eax+16B4h]
0x74738A: cmp     ecx, 0Dh
0x74738D: jle     short loc_7473F8
0x74738F: push    ebx
0x747390: push    esi
0x747391: mov     esi, [esp+8+arg_C]
0x747395: mov     edx, esi
0x747397: shl     edx, cl
0x747399: mov     ecx, [eax+8]
0x74739C: or      [eax+16B0h], dx
0x7473A3: movzx   ebx, byte ptr [eax+16B0h]
0x7473AA: mov     edx, [eax+14h]
0x7473AD: mov     [ecx+edx], bl
0x7473B0: movzx   ebx, byte ptr [eax+16B1h]
0x7473B7: add     dword ptr [eax+14h], 1
0x7473BB: mov     ecx, [eax+14h]
0x7473BE: mov     edx, [eax+8]
0x7473C1: mov     [ecx+edx], bl
0x7473C4: mov     edx, [eax+16B4h]
0x7473CA: add     dword ptr [eax+14h], 1
0x7473CE: mov     cl, 10h
0x7473D0: sub     cl, dl
0x7473D2: shr     si, cl
0x7473D5: mov     ecx, [esp+8+arg_8]
0x7473D9: add     edx, 0FFFFFFF3h
0x7473DC: mov     [eax+16B4h], edx
0x7473E2: mov     edx, [esp+8+arg_4]
0x7473E6: mov     [eax+16B0h], si
0x7473ED: pop     esi
0x7473EE: pop     ebx
0x7473EF: push    1
0x7473F1: call    sub_746F20
0x7473F6: pop     ecx
0x7473F7: retn
0x7473F8: mov     edx, [esp+arg_C]
0x7473FC: shl     edx, cl
0x7473FE: add     ecx, 3
0x747401: mov     [eax+16B4h], ecx
0x747407: mov     ecx, [esp+arg_8]
0x74740B: or      [eax+16B0h], dx
0x747412: mov     edx, [esp+arg_4]
0x747416: push    1
0x747418: call    sub_746F20
0x74741D: pop     ecx
0x74741E: retn
