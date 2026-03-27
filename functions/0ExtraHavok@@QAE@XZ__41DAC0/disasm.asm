0x41DAC0: push    0FFFFFFFFh
0x41DAC2: push    offset ??0ExtraHavok@@QAE@XZ_SEH
0x41DAC7: mov     eax, large fs:0
0x41DACD: push    eax
0x41DACE: push    ecx
0x41DACF: push    ebx
0x41DAD0: push    ebp
0x41DAD1: push    esi
0x41DAD2: push    edi
0x41DAD3: mov     eax, ___security_cookie
0x41DAD8: xor     eax, esp
0x41DADA: push    eax
0x41DADB: lea     eax, [esp+24h+var_C]
0x41DADF: mov     large fs:0, eax
0x41DAE5: mov     esi, ecx
0x41DAE7: mov     [esp+24h+var_10], esi
0x41DAEB: mov     al, 2
0x41DAED: xor     ebx, ebx
0x41DAEF: mov     [esi+4], al
0x41DAF2: mov     [esi+8], ebx
0x41DAF5: mov     dword ptr [esi], offset ??_7ExtraHavok@@6B@; const ExtraHavok::`vftable'
0x41DAFB: mov     [esp+24h+var_4], ebx
0x41DAFF: mov     [esi+0Ch], ebx
0x41DB02: mov     [esi+10h], ebx
0x41DB05: mov     edi, [esi+0Ch]
0x41DB08: mov     ebp, [esp+24h+arg_0]
0x41DB0C: cmp     edi, ebp
0x41DB0E: mov     byte ptr [esp+24h+var_4], al
0x41DB12: jz      short loc_41DB45
0x41DB14: cmp     edi, ebx
0x41DB16: jz      short loc_41DB34
0x41DB18: lea     eax, [edi+4]
0x41DB1B: push    eax; lpAddend
0x41DB1C: call    ds:InterlockedDecrement
0x41DB22: test    eax, eax
0x41DB24: jnz     short loc_41DB34
0x41DB26: cmp     edi, ebx
0x41DB28: jz      short loc_41DB34
0x41DB2A: mov     edx, [edi]
0x41DB2C: mov     eax, [edx]
0x41DB2E: push    1
0x41DB30: mov     ecx, edi
0x41DB32: call    eax
0x41DB34: cmp     ebp, ebx
0x41DB36: mov     [esi+0Ch], ebp
0x41DB39: jz      short loc_41DB45
0x41DB3B: add     ebp, 4
0x41DB3E: push    ebp; lpAddend
0x41DB3F: call    ds:InterlockedIncrement
0x41DB45: mov     edi, [esi+10h]
0x41DB48: cmp     edi, ebx
0x41DB4A: jz      short loc_41DB6B
0x41DB4C: lea     ecx, [edi+4]
0x41DB4F: push    ecx; lpAddend
0x41DB50: call    ds:InterlockedDecrement
0x41DB56: test    eax, eax
0x41DB58: jnz     short loc_41DB68
0x41DB5A: cmp     edi, ebx
0x41DB5C: jz      short loc_41DB68
0x41DB5E: mov     edx, [edi]
0x41DB60: mov     eax, [edx]
0x41DB62: push    1
0x41DB64: mov     ecx, edi
0x41DB66: call    eax
0x41DB68: mov     [esi+10h], ebx
0x41DB6B: mov     eax, esi
0x41DB6D: mov     ecx, dword ptr [esp+24h+var_C]
0x41DB71: mov     large fs:0, ecx
0x41DB78: pop     ecx
0x41DB79: pop     edi
0x41DB7A: pop     esi
0x41DB7B: pop     ebp
0x41DB7C: pop     ebx
0x41DB7D: add     esp, 10h
0x41DB80: retn    4
