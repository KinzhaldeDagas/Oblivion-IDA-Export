0x85D380: push    0FFFFFFFFh
0x85D382: push    offset SEH_85E160
0x85D387: mov     eax, large fs:0
0x85D38D: push    eax
0x85D38E: push    ebx
0x85D38F: push    ebp
0x85D390: push    esi
0x85D391: push    edi
0x85D392: mov     eax, ds:0B30AACh
0x85D397: xor     eax, esp
0x85D399: push    eax
0x85D39A: lea     eax, [esp+20h+var_C]
0x85D39E: mov     large fs:0, eax
0x85D3A4: mov     esi, ecx
0x85D3A6: mov     eax, [esp+20h+arg_8]
0x85D3AA: mov     ebx, [eax+0Ch]
0x85D3AD: mov     edi, ds:0B477B8h
0x85D3B3: push    ebx
0x85D3B4: call    sub_848E50
0x85D3B9: mov     edx, [esi]
0x85D3BB: mov     eax, [esp+20h+arg_0]
0x85D3BF: mov     edx, [edx+0BCh]
0x85D3C5: push    0
0x85D3C7: push    ebx
0x85D3C8: push    eax
0x85D3C9: mov     ecx, esi
0x85D3CB: call    edx
0x85D3CD: mov     eax, [edi+24h]
0x85D3D0: mov     ebp, [esp+20h+arg_C]
0x85D3D4: mov     ebx, [eax]
0x85D3D6: mov     edx, [ebp+0]
0x85D3D9: mov     eax, [edx+88h]
0x85D3DF: push    0
0x85D3E1: mov     ecx, ebp
0x85D3E3: mov     [esp+24h+arg_8], ebx
0x85D3E7: call    eax
0x85D3E9: mov     ebx, [ebx+4]
0x85D3EC: cmp     ebx, eax
0x85D3EE: mov     [esp+20h+arg_0], eax
0x85D3F2: jz      short loc_85D42D
0x85D3F4: test    ebx, ebx
0x85D3F6: jz      short loc_85D418
0x85D3F8: lea     ecx, [ebx+4]
0x85D3FB: push    ecx; lpAddend
0x85D3FC: call    dword ptr ds:0A2807Ch
0x85D402: test    eax, eax
0x85D404: jnz     short loc_85D414
0x85D406: test    ebx, ebx
0x85D408: jz      short loc_85D414
0x85D40A: mov     edx, [ebx]
0x85D40C: mov     eax, [edx]
0x85D40E: push    1
0x85D410: mov     ecx, ebx
0x85D412: call    eax
0x85D414: mov     eax, [esp+20h+arg_0]
0x85D418: test    eax, eax
0x85D41A: mov     ecx, [esp+20h+arg_8]
0x85D41E: mov     [ecx+4], eax
0x85D421: jz      short loc_85D42D
0x85D423: add     eax, 4
0x85D426: push    eax; lpAddend
0x85D427: call    dword ptr ds:0A28078h
0x85D42D: mov     edx, [esp+20h+arg_8]
0x85D431: push    ebp
0x85D432: push    edx
0x85D433: mov     ecx, esi
0x85D435: call    sub_848FA0
0x85D43A: mov     eax, [edi+24h]
0x85D43D: mov     ebx, [eax+4]
0x85D440: push    0
0x85D442: push    ebp
0x85D443: mov     ecx, esi
0x85D445: mov     [esp+28h+arg_8], ebx
0x85D449: call    sub_848FD0
0x85D44E: mov     ebx, [ebx+4]
0x85D451: cmp     ebx, eax
0x85D453: mov     [esp+20h+arg_0], eax
0x85D457: jz      short loc_85D492
0x85D459: test    ebx, ebx
0x85D45B: jz      short loc_85D47D
0x85D45D: lea     ecx, [ebx+4]
0x85D460: push    ecx; lpAddend
0x85D461: call    dword ptr ds:0A2807Ch
0x85D467: test    eax, eax
0x85D469: jnz     short loc_85D479
0x85D46B: test    ebx, ebx
0x85D46D: jz      short loc_85D479
0x85D46F: mov     edx, [ebx]
0x85D471: mov     eax, [edx]
0x85D473: push    1
0x85D475: mov     ecx, ebx
0x85D477: call    eax
0x85D479: mov     eax, [esp+20h+arg_0]
0x85D47D: test    eax, eax
0x85D47F: mov     ecx, [esp+20h+arg_8]
0x85D483: mov     [ecx+4], eax
0x85D486: jz      short loc_85D492
0x85D488: add     eax, 4
0x85D48B: push    eax; lpAddend
0x85D48C: call    dword ptr ds:0A28078h
0x85D492: mov     edx, [esp+20h+arg_8]
0x85D496: push    ebp
0x85D497: push    edx
0x85D498: mov     ecx, esi
0x85D49A: call    sub_848FA0
0x85D49F: cmp     byte ptr [esp+20h+arg_10], 0
0x85D4A4: jnz     short loc_85D4E1
0x85D4A6: mov     ebx, 1
0x85D4AB: add     [edi+60h], ebx
0x85D4AE: mov     [esp+20h+arg_10], edi
0x85D4B2: mov     ecx, [esi+38h]
0x85D4B5: lea     eax, [esp+20h+arg_10]
0x85D4B9: push    eax
0x85D4BA: push    ecx
0x85D4BB: lea     ecx, [esi+40h]
0x85D4BE: mov     [esp+28h+var_4], 0
0x85D4C6: call    sub_76CE40
0x85D4CB: or      eax, 0FFFFFFFFh
0x85D4CE: add     [edi+60h], eax
0x85D4D1: mov     [esp+20h+var_4], eax
0x85D4D5: jnz     short loc_85D4DE
0x85D4D7: mov     ecx, edi
0x85D4D9: call    sub_7604D0
0x85D4DE: add     [esi+38h], ebx
0x85D4E1: mov     ecx, [esp+20h+var_C]
0x85D4E5: mov     large fs:0, ecx
0x85D4EC: pop     ecx
0x85D4ED: pop     edi
0x85D4EE: pop     esi
0x85D4EF: pop     ebp
0x85D4F0: pop     ebx
0x85D4F1: add     esp, 0Ch
0x85D4F4: retn    14h
