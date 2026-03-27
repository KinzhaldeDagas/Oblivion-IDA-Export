0x6D9D40: push    0FFFFFFFFh
0x6D9D42: push    offset SEH_8C8970
0x6D9D47: mov     eax, large fs:0
0x6D9D4D: push    eax
0x6D9D4E: push    ecx
0x6D9D4F: push    ebx
0x6D9D50: push    esi
0x6D9D51: mov     eax, ds:0B30AACh
0x6D9D56: xor     eax, esp
0x6D9D58: push    eax
0x6D9D59: lea     eax, [esp+1Ch+var_C]
0x6D9D5D: mov     large fs:0, eax
0x6D9D63: push    18h; Size
0x6D9D65: call    FormHeapAlloc
0x6D9D6A: mov     esi, eax
0x6D9D6C: add     esp, 4
0x6D9D6F: mov     [esp+1Ch+var_10], esi
0x6D9D73: xor     ebx, ebx
0x6D9D75: cmp     esi, ebx
0x6D9D77: mov     [esp+1Ch+var_4], ebx
0x6D9D7B: jz      short loc_6D9DAA
0x6D9D7D: mov     ecx, esi
0x6D9D7F: call    NiObject_constr
0x6D9D84: mov     dword ptr [esi], offset ??_7NiPosData@@6B@; const NiPosData::`vftable'
0x6D9D8A: mov     [esi+8], ebx
0x6D9D8D: mov     [esi+0Ch], ebx
0x6D9D90: mov     [esi+10h], ebx
0x6D9D93: mov     [esi+14h], bl
0x6D9D96: mov     eax, esi
0x6D9D98: mov     ecx, [esp+1Ch+var_C]
0x6D9D9C: mov     large fs:0, ecx
0x6D9DA3: pop     ecx
0x6D9DA4: pop     esi
0x6D9DA5: pop     ebx
0x6D9DA6: add     esp, 10h
0x6D9DA9: retn
0x6D9DAA: xor     eax, eax
0x6D9DAC: mov     ecx, [esp+1Ch+var_C]
0x6D9DB0: mov     large fs:0, ecx
0x6D9DB7: pop     ecx
0x6D9DB8: pop     esi
0x6D9DB9: pop     ebx
0x6D9DBA: add     esp, 10h
0x6D9DBD: retn
