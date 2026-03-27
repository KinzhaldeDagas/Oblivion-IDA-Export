0x6EBB40: push    0FFFFFFFFh
0x6EBB42: push    offset SEH_56B820
0x6EBB47: mov     eax, large fs:0
0x6EBB4D: push    eax
0x6EBB4E: push    ecx
0x6EBB4F: push    ebx
0x6EBB50: push    esi
0x6EBB51: push    edi
0x6EBB52: mov     eax, ds:0B30AACh
0x6EBB57: xor     eax, esp
0x6EBB59: push    eax
0x6EBB5A: lea     eax, [esp+20h+var_C]
0x6EBB5E: mov     large fs:0, eax
0x6EBB64: mov     edi, ecx
0x6EBB66: mov     [esp+20h+var_10], edi
0x6EBB6A: mov     esi, [edi+10h]
0x6EBB6D: test    esi, esi
0x6EBB6F: mov     ebx, ds:0A2807Ch
0x6EBB75: mov     [esp+20h+var_4], 1
0x6EBB7D: jz      short loc_6EBB97
0x6EBB7F: lea     eax, [esi+4]
0x6EBB82: push    eax; lpAddend
0x6EBB83: call    ebx ; InterlockedDecrement
0x6EBB85: test    eax, eax
0x6EBB87: jnz     short loc_6EBB97
0x6EBB89: test    esi, esi
0x6EBB8B: jz      short loc_6EBB97
0x6EBB8D: mov     edx, [esi]
0x6EBB8F: mov     eax, [edx]
0x6EBB91: push    1
0x6EBB93: mov     ecx, esi
0x6EBB95: call    eax
0x6EBB97: mov     esi, [edi+0Ch]
0x6EBB9A: test    esi, esi
0x6EBB9C: mov     byte ptr [esp+20h+var_4], 0
0x6EBBA1: jz      short loc_6EBBBB
0x6EBBA3: lea     ecx, [esi+4]
0x6EBBA6: push    ecx; lpAddend
0x6EBBA7: call    ebx ; InterlockedDecrement
0x6EBBA9: test    eax, eax
0x6EBBAB: jnz     short loc_6EBBBB
0x6EBBAD: test    esi, esi
0x6EBBAF: jz      short loc_6EBBBB
0x6EBBB1: mov     edx, [esi]
0x6EBBB3: mov     eax, [edx]
0x6EBBB5: push    1
0x6EBBB7: mov     ecx, esi
0x6EBBB9: call    eax
0x6EBBBB: mov     ecx, edi
0x6EBBBD: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6EBBC5: mov     dword ptr [edi], offset ??_7NiTask@@6B@; const NiTask::`vftable'
0x6EBBCB: call    NiRefObject_destr
0x6EBBD0: mov     ecx, [esp+20h+var_C]
0x6EBBD4: mov     large fs:0, ecx
0x6EBBDB: pop     ecx
0x6EBBDC: pop     edi
0x6EBBDD: pop     esi
0x6EBBDE: pop     ebx
0x6EBBDF: add     esp, 10h
0x6EBBE2: retn
