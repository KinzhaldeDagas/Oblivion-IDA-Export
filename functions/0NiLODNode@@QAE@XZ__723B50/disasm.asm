0x723B50: push    0FFFFFFFFh
0x723B52: push    offset SEH_8C8970
0x723B57: mov     eax, large fs:0
0x723B5D: push    eax
0x723B5E: push    ecx
0x723B5F: push    ebx
0x723B60: push    esi
0x723B61: mov     eax, ds:0B30AACh
0x723B66: xor     eax, esp
0x723B68: push    eax
0x723B69: lea     eax, [esp+1Ch+var_C]
0x723B6D: mov     large fs:0, eax
0x723B73: mov     ebx, ecx
0x723B75: push    104h; Size
0x723B7A: call    FormHeapAlloc
0x723B7F: mov     esi, eax
0x723B81: add     esp, 4
0x723B84: mov     [esp+1Ch+var_10], esi
0x723B88: test    esi, esi
0x723B8A: mov     [esp+1Ch+var_4], 0
0x723B92: jz      short loc_723BBE
0x723B94: mov     ecx, esi
0x723B96: call    sub_723F70
0x723B9B: mov     dword ptr [esi], offset ??_7NiLODNode@@6B@; const NiLODNode::`vftable'
0x723BA1: mov     dword ptr [esi+0FCh], 0
0x723BAB: mov     dword ptr [esi+0E0h], 0
0x723BB5: mov     byte ptr [esi+100h], 1
0x723BBC: jmp     short loc_723BC0
0x723BBE: xor     esi, esi
0x723BC0: mov     eax, [esp+1Ch+arg_0]
0x723BC4: push    eax
0x723BC5: push    esi
0x723BC6: mov     ecx, ebx
0x723BC8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x723BD0: call    sub_7239B0
0x723BD5: mov     eax, esi
0x723BD7: mov     ecx, [esp+1Ch+var_C]
0x723BDB: mov     large fs:0, ecx
0x723BE2: pop     ecx
0x723BE3: pop     esi
0x723BE4: pop     ebx
0x723BE5: add     esp, 10h
0x723BE8: retn    4
