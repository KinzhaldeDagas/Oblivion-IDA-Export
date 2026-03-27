0x8B7280: push    0FFFFFFFFh
0x8B7282: push    offset SEH_8C8970
0x8B7287: mov     eax, large fs:0
0x8B728D: push    eax
0x8B728E: push    ecx
0x8B728F: push    esi
0x8B7290: push    edi
0x8B7291: mov     eax, ds:0B30AACh
0x8B7296: xor     eax, esp
0x8B7298: push    eax
0x8B7299: lea     eax, [esp+1Ch+var_C]
0x8B729D: mov     large fs:0, eax
0x8B72A3: mov     edi, ecx
0x8B72A5: push    14h; Size
0x8B72A7: call    FormHeapAlloc
0x8B72AC: mov     esi, eax
0x8B72AE: add     esp, 4
0x8B72B1: mov     [esp+1Ch+var_10], esi
0x8B72B5: test    esi, esi
0x8B72B7: mov     [esp+1Ch+var_4], 0
0x8B72BF: jz      short loc_8B72D0
0x8B72C1: mov     ecx, esi
0x8B72C3: call    sub_897600
0x8B72C8: mov     dword ptr [esi], offset ??_7bhkSPCollisionObject@@6B@; const bhkSPCollisionObject::`vftable'
0x8B72CE: jmp     short loc_8B72D2
0x8B72D0: xor     esi, esi
0x8B72D2: mov     eax, [esp+1Ch+arg_0]
0x8B72D6: push    eax
0x8B72D7: push    esi
0x8B72D8: mov     ecx, edi
0x8B72DA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8B72E2: call    sub_89E930
0x8B72E7: mov     eax, esi
0x8B72E9: mov     ecx, [esp+1Ch+var_C]
0x8B72ED: mov     large fs:0, ecx
0x8B72F4: pop     ecx
0x8B72F5: pop     edi
0x8B72F6: pop     esi
0x8B72F7: add     esp, 10h
0x8B72FA: retn    4
