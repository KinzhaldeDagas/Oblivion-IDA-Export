0x6D8CF0: push    0FFFFFFFFh
0x6D8CF2: push    offset SEH_8C8970
0x6D8CF7: mov     eax, large fs:0
0x6D8CFD: push    eax
0x6D8CFE: push    ecx
0x6D8CFF: push    ebx
0x6D8D00: push    esi
0x6D8D01: mov     eax, ds:0B30AACh
0x6D8D06: xor     eax, esp
0x6D8D08: push    eax
0x6D8D09: lea     eax, [esp+1Ch+var_C]
0x6D8D0D: mov     large fs:0, eax
0x6D8D13: push    18h; Size
0x6D8D15: call    FormHeapAlloc
0x6D8D1A: mov     esi, eax
0x6D8D1C: add     esp, 4
0x6D8D1F: mov     [esp+1Ch+var_10], esi
0x6D8D23: xor     ebx, ebx
0x6D8D25: cmp     esi, ebx
0x6D8D27: mov     [esp+1Ch+var_4], ebx
0x6D8D2B: jz      short loc_6D8D5A
0x6D8D2D: mov     ecx, esi
0x6D8D2F: call    NiObject_constr
0x6D8D34: mov     dword ptr [esi], offset ??_7NiRotData@@6B@; const NiRotData::`vftable'
0x6D8D3A: mov     [esi+8], ebx
0x6D8D3D: mov     [esi+0Ch], ebx
0x6D8D40: mov     [esi+10h], ebx
0x6D8D43: mov     [esi+14h], bl
0x6D8D46: mov     eax, esi
0x6D8D48: mov     ecx, [esp+1Ch+var_C]
0x6D8D4C: mov     large fs:0, ecx
0x6D8D53: pop     ecx
0x6D8D54: pop     esi
0x6D8D55: pop     ebx
0x6D8D56: add     esp, 10h
0x6D8D59: retn
0x6D8D5A: xor     eax, eax
0x6D8D5C: mov     ecx, [esp+1Ch+var_C]
0x6D8D60: mov     large fs:0, ecx
0x6D8D67: pop     ecx
0x6D8D68: pop     esi
0x6D8D69: pop     ebx
0x6D8D6A: add     esp, 10h
0x6D8D6D: retn
