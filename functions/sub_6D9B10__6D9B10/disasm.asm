0x6D9B10: push    0FFFFFFFFh
0x6D9B12: push    offset SEH_8C8970
0x6D9B17: mov     eax, large fs:0
0x6D9B1D: push    eax
0x6D9B1E: push    ecx
0x6D9B1F: push    ebx
0x6D9B20: push    esi
0x6D9B21: mov     eax, ds:0B30AACh
0x6D9B26: xor     eax, esp
0x6D9B28: push    eax
0x6D9B29: lea     eax, [esp+1Ch+var_C]
0x6D9B2D: mov     large fs:0, eax
0x6D9B33: mov     ebx, ecx
0x6D9B35: push    24h ; '$'; Size
0x6D9B37: call    FormHeapAlloc
0x6D9B3C: mov     esi, eax
0x6D9B3E: add     esp, 4
0x6D9B41: mov     [esp+1Ch+var_10], esi
0x6D9B45: test    esi, esi
0x6D9B47: mov     [esp+1Ch+var_4], 0
0x6D9B4F: jz      short loc_6D9B90
0x6D9B51: mov     ecx, esi
0x6D9B53: call    sub_6EC220
0x6D9B58: mov     dword ptr [esi], offset ??_7NiQuaternionInterpolator@@6B@; const NiQuaternionInterpolator::`vftable'
0x6D9B5E: mov     eax, ds:0B3EBA0h
0x6D9B63: mov     [esi+0Ch], eax
0x6D9B66: mov     ecx, ds:0B3EBA4h
0x6D9B6C: mov     [esi+10h], ecx
0x6D9B6F: mov     edx, ds:0B3EBA8h
0x6D9B75: mov     [esi+14h], edx
0x6D9B78: mov     eax, ds:0B3EBACh
0x6D9B7D: mov     [esi+18h], eax
0x6D9B80: mov     dword ptr [esi+1Ch], 0
0x6D9B87: mov     dword ptr [esi+20h], 0
0x6D9B8E: jmp     short loc_6D9B92
0x6D9B90: xor     esi, esi
0x6D9B92: mov     ecx, [esp+1Ch+arg_0]
0x6D9B96: push    ecx
0x6D9B97: push    esi
0x6D9B98: mov     ecx, ebx
0x6D9B9A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D9BA2: call    sub_6D98F0
0x6D9BA7: mov     eax, esi
0x6D9BA9: mov     ecx, [esp+1Ch+var_C]
0x6D9BAD: mov     large fs:0, ecx
0x6D9BB4: pop     ecx
0x6D9BB5: pop     esi
0x6D9BB6: pop     ebx
0x6D9BB7: add     esp, 10h
0x6D9BBA: retn    4
