0x89E9F0: push    0FFFFFFFFh
0x89E9F2: push    offset SEH_8C8970
0x89E9F7: mov     eax, large fs:0
0x89E9FD: push    eax
0x89E9FE: push    ecx
0x89E9FF: push    esi
0x89EA00: push    edi
0x89EA01: mov     eax, ds:0B30AACh
0x89EA06: xor     eax, esp
0x89EA08: push    eax
0x89EA09: lea     eax, [esp+1Ch+var_C]
0x89EA0D: mov     large fs:0, eax
0x89EA13: mov     edi, ecx
0x89EA15: push    14h; Size
0x89EA17: call    FormHeapAlloc
0x89EA1C: mov     esi, eax
0x89EA1E: add     esp, 4
0x89EA21: mov     [esp+1Ch+var_10], esi
0x89EA25: test    esi, esi
0x89EA27: mov     [esp+1Ch+var_4], 0
0x89EA2F: jz      short loc_89EA40
0x89EA31: mov     ecx, esi
0x89EA33: call    sub_897600
0x89EA38: mov     dword ptr [esi], offset ??_7bhkCollisionObject@@6B@; const bhkCollisionObject::`vftable'
0x89EA3E: jmp     short loc_89EA42
0x89EA40: xor     esi, esi
0x89EA42: mov     eax, [esp+1Ch+arg_0]
0x89EA46: push    eax
0x89EA47: push    esi
0x89EA48: mov     ecx, edi
0x89EA4A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x89EA52: call    sub_8976D0
0x89EA57: mov     eax, esi
0x89EA59: mov     ecx, [esp+1Ch+var_C]
0x89EA5D: mov     large fs:0, ecx
0x89EA64: pop     ecx
0x89EA65: pop     edi
0x89EA66: pop     esi
0x89EA67: add     esp, 10h
0x89EA6A: retn    4
