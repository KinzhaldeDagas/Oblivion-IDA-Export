0x731B60: push    ebx
0x731B61: push    esi
0x731B62: push    edi
0x731B63: push    20h ; ' '; Size
0x731B65: mov     edi, ecx
0x731B67: call    FormHeapAlloc
0x731B6C: mov     esi, eax
0x731B6E: xor     ebx, ebx
0x731B70: add     esp, 4
0x731B73: cmp     esi, ebx
0x731B75: jz      short loc_731BA5
0x731B77: push    offset NiRefObject_objcount; lpAddend
0x731B7C: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x731B82: mov     [esi+4], ebx
0x731B85: call    dword ptr ds:0A28078h
0x731B8B: mov     dword ptr [esi], offset ??_7NiDynamicEffectState@@6B@; const NiDynamicEffectState::`vftable'
0x731B91: mov     [esi+8], bl
0x731B94: mov     [esi+0Ch], ebx
0x731B97: mov     [esi+10h], ebx
0x731B9A: mov     [esi+14h], ebx
0x731B9D: mov     [esi+18h], ebx
0x731BA0: mov     [esi+1Ch], ebx
0x731BA3: jmp     short loc_731BA7
0x731BA5: xor     esi, esi
0x731BA7: mov     al, [edi+8]
0x731BAA: lea     ecx, [esi+0Ch]
0x731BAD: mov     [esi+8], al
0x731BB0: mov     edx, [edi+0Ch]
0x731BB3: push    ecx
0x731BB4: push    edx
0x731BB5: call    sub_731A90
0x731BBA: mov     ecx, [edi+10h]
0x731BBD: lea     eax, [esi+10h]
0x731BC0: push    eax
0x731BC1: push    ecx
0x731BC2: call    sub_731A90
0x731BC7: mov     eax, [edi+14h]
0x731BCA: lea     edx, [esi+14h]
0x731BCD: push    edx
0x731BCE: push    eax
0x731BCF: call    sub_731A90
0x731BD4: mov     ecx, [edi+18h]
0x731BD7: add     esp, 18h
0x731BDA: mov     [esi+18h], ecx
0x731BDD: mov     edx, [edi+1Ch]
0x731BE0: pop     edi
0x731BE1: mov     [esi+1Ch], edx
0x731BE4: mov     eax, esi
0x731BE6: pop     esi
0x731BE7: pop     ebx
0x731BE8: retn
