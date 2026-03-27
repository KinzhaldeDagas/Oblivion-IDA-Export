0x6AA9C0: push    0FFFFFFFFh
0x6AA9C2: push    offset SEH_70B000
0x6AA9C7: mov     eax, large fs:0
0x6AA9CD: push    eax
0x6AA9CE: push    ecx
0x6AA9CF: push    ebx
0x6AA9D0: push    esi
0x6AA9D1: push    edi
0x6AA9D2: mov     eax, ds:0B30AACh
0x6AA9D7: xor     eax, esp
0x6AA9D9: push    eax
0x6AA9DA: lea     eax, [esp+20h+var_C]
0x6AA9DE: mov     large fs:0, eax
0x6AA9E4: mov     esi, ecx
0x6AA9E6: mov     [esp+20h+var_10], 0
0x6AA9EE: mov     edi, [esp+20h+arg_0]
0x6AA9F2: mov     eax, [edi]
0x6AA9F4: mov     eax, [eax+0Ch]
0x6AA9F7: lea     ecx, [esp+20h+var_10]
0x6AA9FB: push    ecx
0x6AA9FC: mov     ecx, [esi+304h]
0x6AAA02: push    eax
0x6AAA03: mov     [esp+28h+var_4], 0
0x6AAA0B: call    sub_4A1AB0
0x6AAA10: mov     edx, [edi]
0x6AAA12: mov     eax, [edx+0Ch]
0x6AAA15: mov     ecx, [esi+304h]
0x6AAA1B: push    eax
0x6AAA1C: call    NiTMap_RemoveAt
0x6AAA21: mov     ebx, [esp+20h+var_10]
0x6AAA25: test    ebx, ebx
0x6AAA27: jz      short loc_6AAA32
0x6AAA29: push    ebx
0x6AAA2A: call    sub_6F9710
0x6AAA2F: add     esp, 4
0x6AAA32: mov     eax, [edi]
0x6AAA34: mov     eax, [eax+0Ch]
0x6AAA37: mov     ecx, [esi+300h]
0x6AAA3D: push    eax
0x6AAA3E: call    NiTMap_RemoveAt
0x6AAA43: mov     edi, [edi]
0x6AAA45: test    edi, edi
0x6AAA47: jz      short loc_6AAA59
0x6AAA49: mov     ecx, edi
0x6AAA4B: call    sub_6B6700
0x6AAA50: push    edi
0x6AAA51: call    FormHeapFree
0x6AAA56: add     esp, 4
0x6AAA59: test    ebx, ebx
0x6AAA5B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6AAA63: jz      short loc_6AAA7D
0x6AAA65: lea     ecx, [ebx+4]
0x6AAA68: push    ecx; lpAddend
0x6AAA69: call    dword ptr ds:0A2807Ch
0x6AAA6F: test    eax, eax
0x6AAA71: jnz     short loc_6AAA7D
0x6AAA73: mov     edx, [ebx]
0x6AAA75: mov     eax, [edx]
0x6AAA77: push    1
0x6AAA79: mov     ecx, ebx
0x6AAA7B: call    eax
0x6AAA7D: xor     eax, eax
0x6AAA7F: mov     ecx, dword ptr [esp+20h+var_C]
0x6AAA83: mov     large fs:0, ecx
0x6AAA8A: pop     ecx
0x6AAA8B: pop     edi
0x6AAA8C: pop     esi
0x6AAA8D: pop     ebx
0x6AAA8E: add     esp, 10h
0x6AAA91: retn    4
