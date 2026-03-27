0x4E9060: sub     esp, 8
0x4E9063: push    ebx
0x4E9064: push    ebp
0x4E9065: mov     ebp, [esp+10h+a3]
0x4E9069: test    ebp, ebp
0x4E906B: mov     ebx, ecx
0x4E906D: mov     [esp+10h+var_4], ebx
0x4E9071: jz      loc_4E9147
0x4E9077: mov     ecx, ebp
0x4E9079: call    sub_4BEF40
0x4E907E: push    eax
0x4E907F: mov     ecx, ebx
0x4E9081: call    sub_4E8D00
0x4E9086: test    eax, eax
0x4E9088: jnz     loc_4E9147
0x4E908E: push    esi
0x4E908F: push    edi
0x4E9090: mov     ecx, ebp
0x4E9092: call    sub_4BEF40
0x4E9097: fld     dword ptr [eax]
0x4E9099: fstp    [esp+18h+var_8]
0x4E909D: fld     [esp+18h+var_8]
0x4E90A1: fistp   [esp+18h+a3]
0x4E90A5: mov     esi, [esp+18h+a3]
0x4E90A9: mov     ecx, ebp
0x4E90AB: sar     esi, 0Ch
0x4E90AE: call    sub_4BEF40
0x4E90B3: fld     dword ptr [eax+4]
0x4E90B6: fstp    [esp+18h+var_8]
0x4E90BA: fld     [esp+18h+var_8]
0x4E90BE: fistp   [esp+18h+a3]
0x4E90C2: mov     edi, [esp+18h+a3]
0x4E90C6: sar     edi, 0Ch
0x4E90C9: push    edi
0x4E90CA: push    esi
0x4E90CB: call    sub_4EF1D0
0x4E90D0: add     esp, 8
0x4E90D3: lea     ecx, [esp+18h+a3]
0x4E90D7: push    ecx
0x4E90D8: add     ebx, 1Ch
0x4E90DB: push    eax
0x4E90DC: mov     ecx, ebx
0x4E90DE: mov     [esp+20h+a3], 0
0x4E90E6: call    NiTMap_GetAt
0x4E90EB: mov     eax, [esp+18h+a3]
0x4E90EF: test    eax, eax
0x4E90F1: mov     ecx, eax
0x4E90F3: jnz     short loc_4E9137
0x4E90F5: push    8; Size
0x4E90F7: call    FormHeapAlloc
0x4E90FC: xor     ecx, ecx
0x4E90FE: add     esp, 4
0x4E9101: cmp     eax, ecx
0x4E9103: jz      short loc_4E9110
0x4E9105: mov     [eax], ecx
0x4E9107: mov     [eax+4], ecx
0x4E910A: mov     [esp+18h+a3], eax
0x4E910E: jmp     short loc_4E9114
0x4E9110: mov     [esp+18h+a3], ecx
0x4E9114: mov     edx, [esp+18h+a3]
0x4E9118: push    edi
0x4E9119: push    esi
0x4E911A: mov     [esp+20h+var_8], edx
0x4E911E: call    sub_4EF1D0
0x4E9123: mov     ecx, [esp+20h+a3]
0x4E9127: add     esp, 8
0x4E912A: push    ecx; a3
0x4E912B: push    eax; a2
0x4E912C: mov     ecx, ebx; this
0x4E912E: call    NiTMap_SetAt
0x4E9133: mov     ecx, [esp+18h+var_8]
0x4E9137: push    ebp
0x4E9138: call    BSSimpleList_PushFront
0x4E913D: mov     eax, [esp+18h+var_4]
0x4E9141: add     dword ptr [eax+18h], 1
0x4E9145: pop     edi
0x4E9146: pop     esi
0x4E9147: pop     ebp
0x4E9148: pop     ebx
0x4E9149: add     esp, 8
0x4E914C: retn    4
