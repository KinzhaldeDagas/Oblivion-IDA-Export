0x571D40: push    0FFFFFFFFh
0x571D42: push    offset SEH_571D40
0x571D47: mov     eax, large fs:0
0x571D4D: push    eax
0x571D4E: push    ecx
0x571D4F: push    ebx
0x571D50: push    esi
0x571D51: push    edi
0x571D52: mov     eax, ds:0B30AACh
0x571D57: xor     eax, esp
0x571D59: push    eax
0x571D5A: lea     eax, [esp+20h+var_C]
0x571D5E: mov     large fs:0, eax
0x571D64: mov     esi, ecx
0x571D66: mov     [esp+20h+var_10], esi
0x571D6A: xor     ebx, ebx
0x571D6C: mov     [esi+0Ch], ebx
0x571D6F: mov     [esp+20h+var_4], ebx
0x571D73: mov     [esi+10h], ebx
0x571D76: mov     [esi+14h], bx
0x571D7A: mov     [esi+16h], bx
0x571D7E: fldz
0x571D80: fst     dword ptr [esi]
0x571D82: mov     [esi+8], ebx
0x571D85: fstp    dword ptr [esi+4]
0x571D88: mov     byte ptr [esp+20h+var_4], 1
0x571D8D: mov     edi, [esi+0Ch]
0x571D90: cmp     edi, ebx
0x571D92: jz      short loc_571DB3
0x571D94: lea     eax, [edi+4]
0x571D97: push    eax; lpAddend
0x571D98: call    dword ptr ds:0A2807Ch
0x571D9E: test    eax, eax
0x571DA0: jnz     short loc_571DB0
0x571DA2: cmp     edi, ebx
0x571DA4: jz      short loc_571DB0
0x571DA6: mov     edx, [edi]
0x571DA8: mov     eax, [edx]
0x571DAA: push    1
0x571DAC: mov     ecx, edi
0x571DAE: call    eax
0x571DB0: mov     [esi+0Ch], ebx
0x571DB3: mov     ecx, [esi+10h]
0x571DB6: push    ecx
0x571DB7: call    FormHeapFree
0x571DBC: fld     dword ptr ds:0A30634h
0x571DC2: mov     [esi+10h], ebx
0x571DC5: mov     [esi+16h], bx
0x571DC9: mov     [esi+14h], bx
0x571DCD: fstp    dword ptr [esi+18h]
0x571DD0: add     esp, 4
0x571DD3: mov     eax, esi
0x571DD5: mov     ecx, dword ptr [esp+20h+var_C]
0x571DD9: mov     large fs:0, ecx
0x571DE0: pop     ecx
0x571DE1: pop     edi
0x571DE2: pop     esi
0x571DE3: pop     ebx
0x571DE4: add     esp, 10h
0x571DE7: retn
