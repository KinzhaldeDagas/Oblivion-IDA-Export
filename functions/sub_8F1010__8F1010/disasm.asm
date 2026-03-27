0x8F1010: mov     ecx, [esp+arg_0]
0x8F1014: fld     dword ptr [ecx+8]
0x8F1017: mov     edx, [esp+arg_8]
0x8F101B: mov     eax, [edx+4]
0x8F101E: push    ebx
0x8F101F: push    esi
0x8F1020: mov     esi, [edx]
0x8F1022: push    edi
0x8F1023: mov     edi, [esp+0Ch+arg_4]
0x8F1027: fmul    dword ptr [edi]
0x8F1029: add     esi, 30h ; '0'
0x8F102C: add     eax, 1Ch
0x8F102F: fstp    dword ptr [eax-18h]
0x8F1032: fld     dword ptr [ecx+0Ch]
0x8F1035: fmul    dword ptr [edi]
0x8F1037: fstp    dword ptr [eax-14h]
0x8F103A: mov     ebx, [ecx+4]
0x8F103D: mov     [eax-10h], ebx
0x8F1040: mov     ebx, [ecx+18h]
0x8F1043: mov     [eax-4], ebx
0x8F1046: mov     ebx, [ecx+10h]
0x8F1049: mov     [eax-0Ch], ebx
0x8F104C: mov     ebx, [ecx+14h]
0x8F104F: mov     [eax-8], ebx
0x8F1052: mov     dword ptr [eax-1Ch], 31C05h
0x8F1059: fld     dword ptr [edi+4]
0x8F105C: fmul    dword ptr [ecx]
0x8F105E: pop     edi
0x8F105F: fstp    dword ptr [esi-24h]
0x8F1062: mov     [edx], esi
0x8F1064: pop     esi
0x8F1065: mov     [edx+4], eax
0x8F1068: pop     ebx
0x8F1069: retn
