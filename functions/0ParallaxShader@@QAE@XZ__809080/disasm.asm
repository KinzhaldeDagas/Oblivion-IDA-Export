0x809080: push    0FFFFFFFFh
0x809082: push    offset ??0ParallaxShader@@QAE@XZ_SEH
0x809087: mov     eax, large fs:0
0x80908D: push    eax
0x80908E: push    ecx
0x80908F: push    ebx
0x809090: push    ebp
0x809091: push    esi
0x809092: push    edi
0x809093: mov     eax, ds:0B30AACh
0x809098: xor     eax, esp
0x80909A: push    eax
0x80909B: lea     eax, [esp+24h+var_C]
0x80909F: mov     large fs:0, eax
0x8090A5: mov     esi, ecx
0x8090A7: mov     [esp+24h+var_10], esi
0x8090AB: mov     ebx, [esp+24h+arg_4]
0x8090AF: mov     ebp, [esp+24h+arg_0]
0x8090B3: push    0
0x8090B5: push    0
0x8090B7: push    ebx
0x8090B8: push    ebp
0x8090B9: call    ??0ShadowLightShader@@QAE@XZ; ShadowLightShader::ShadowLightShader(void)
0x8090BE: push    offset sub_7016A0; a5
0x8090C3: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x8090C8: push    24h ; '$'; size
0x8090CA: push    4; a2
0x8090CC: lea     eax, [esi+9Ch]
0x8090D2: push    eax; a1
0x8090D3: mov     [esp+38h+var_4], 0
0x8090DB: mov     dword ptr [esi], offset ??_7ParallaxShader@@6B@; const ParallaxShader::`vftable'
0x8090E1: call    ArrayConstructor
0x8090E6: push    offset sub_7016A0; a5
0x8090EB: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x8090F0: push    1Eh; size
0x8090F2: push    4; a2
0x8090F4: lea     ecx, [esi+12Ch]
0x8090FA: push    ecx; a1
0x8090FB: mov     byte ptr [esp+38h+var_4], 1
0x809100: call    ArrayConstructor
0x809105: mov     byte ptr [esi+78h], 0
0x809109: mov     edi, [esi+7Ch]
0x80910C: cmp     edi, ebp
0x80910E: mov     byte ptr [esp+24h+var_4], 2
0x809113: jz      short loc_809146
0x809115: test    edi, edi
0x809117: jz      short loc_809135
0x809119: lea     edx, [edi+4]
0x80911C: push    edx; lpAddend
0x80911D: call    dword ptr ds:0A2807Ch
0x809123: test    eax, eax
0x809125: jnz     short loc_809135
0x809127: test    edi, edi
0x809129: jz      short loc_809135
0x80912B: mov     eax, [edi]
0x80912D: mov     edx, [eax]
0x80912F: push    1
0x809131: mov     ecx, edi
0x809133: call    edx
0x809135: test    ebp, ebp
0x809137: mov     [esi+7Ch], ebp
0x80913A: jz      short loc_809146
0x80913C: add     ebp, 4
0x80913F: push    ebp; lpAddend
0x809140: call    dword ptr ds:0A28078h
0x809146: mov     edi, [esi+80h]
0x80914C: cmp     edi, ebx
0x80914E: jz      short loc_809184
0x809150: test    edi, edi
0x809152: jz      short loc_809170
0x809154: lea     eax, [edi+4]
0x809157: push    eax; lpAddend
0x809158: call    dword ptr ds:0A2807Ch
0x80915E: test    eax, eax
0x809160: jnz     short loc_809170
0x809162: test    edi, edi
0x809164: jz      short loc_809170
0x809166: mov     edx, [edi]
0x809168: mov     eax, [edx]
0x80916A: push    1
0x80916C: mov     ecx, edi
0x80916E: call    eax
0x809170: test    ebx, ebx
0x809172: mov     [esi+80h], ebx
0x809178: jz      short loc_809184
0x80917A: add     ebx, 4
0x80917D: push    ebx; lpAddend
0x80917E: call    dword ptr ds:0A28078h
0x809184: mov     dword ptr [esi+74h], 0FFFFFFFFh
0x80918B: mov     eax, esi
0x80918D: mov     ecx, dword ptr [esp+24h+var_C]
0x809191: mov     large fs:0, ecx
0x809198: pop     ecx
0x809199: pop     edi
0x80919A: pop     esi
0x80919B: pop     ebp
0x80919C: pop     ebx
0x80919D: add     esp, 10h
0x8091A0: retn    8
