0x8F0FB0: mov     ecx, [esp+arg_0]
0x8F0FB4: fld     dword ptr [ecx+8]
0x8F0FB7: mov     edx, [esp+arg_8]
0x8F0FBB: mov     eax, [edx+4]
0x8F0FBE: push    ebx
0x8F0FBF: push    esi
0x8F0FC0: mov     esi, [edx]
0x8F0FC2: push    edi
0x8F0FC3: mov     edi, [esp+0Ch+arg_4]
0x8F0FC7: fmul    dword ptr [edi]
0x8F0FC9: add     esi, 20h ; ' '
0x8F0FCC: add     eax, 1Ch
0x8F0FCF: fstp    dword ptr [eax-18h]
0x8F0FD2: fld     dword ptr [ecx+0Ch]
0x8F0FD5: fmul    dword ptr [edi]
0x8F0FD7: fstp    dword ptr [eax-14h]
0x8F0FDA: mov     ebx, [ecx+4]
0x8F0FDD: mov     [eax-10h], ebx
0x8F0FE0: mov     ebx, [ecx+18h]
0x8F0FE3: mov     [eax-4], ebx
0x8F0FE6: mov     ebx, [ecx+10h]
0x8F0FE9: mov     [eax-0Ch], ebx
0x8F0FEC: mov     ebx, [ecx+14h]
0x8F0FEF: mov     [eax-8], ebx
0x8F0FF2: mov     dword ptr [eax-1Ch], 41C04h
0x8F0FF9: fld     dword ptr [edi+4]
0x8F0FFC: fmul    dword ptr [ecx]
0x8F0FFE: pop     edi
0x8F0FFF: fstp    dword ptr [esi-4]
0x8F1002: mov     [edx], esi
0x8F1004: pop     esi
0x8F1005: mov     [edx+4], eax
0x8F1008: pop     ebx
0x8F1009: retn
