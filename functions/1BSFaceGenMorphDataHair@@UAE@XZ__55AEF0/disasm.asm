0x55AEF0: push    0FFFFFFFFh
0x55AEF2: push    offset SEH_7F1810
0x55AEF7: mov     eax, large fs:0
0x55AEFD: push    eax
0x55AEFE: push    ecx
0x55AEFF: push    esi
0x55AF00: mov     eax, ds:0B30AACh
0x55AF05: xor     eax, esp
0x55AF07: push    eax
0x55AF08: lea     eax, [esp+18h+var_C]
0x55AF0C: mov     large fs:0, eax
0x55AF12: mov     esi, ecx
0x55AF14: mov     [esp+18h+var_10], esi
0x55AF18: mov     dword ptr [esi], offset ??_7BSFaceGenMorphDataHair@@6B@; const BSFaceGenMorphDataHair::`vftable'
0x55AF1E: mov     ecx, [esi+8]
0x55AF21: test    ecx, ecx
0x55AF23: mov     [esp+18h+var_4], 0
0x55AF2B: jz      short loc_55AF35
0x55AF2D: mov     eax, [ecx]
0x55AF2F: mov     edx, [eax]
0x55AF31: push    1
0x55AF33: call    edx
0x55AF35: push    0B3FD64h; lpAddend
0x55AF3A: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x55AF40: call    dword ptr ds:0A2807Ch
0x55AF46: mov     ecx, dword ptr [esp+18h+var_C]
0x55AF4A: mov     large fs:0, ecx
0x55AF51: pop     ecx
0x55AF52: pop     esi
0x55AF53: add     esp, 10h
0x55AF56: retn
0x9CFDD0: mov     ecx, [ebp-10h]
0x9CFDD3: jmp     NiRefObject_destr
0x9CFDD8: mov     edx, [esp+arg_4]
0x9CFDDC: lea     eax, [edx-8]
0x9CFDDF: mov     ecx, [edx-0Ch]
0x9CFDE2: xor     ecx, eax
0x9CFDE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFDE9: mov     eax, offset stru_AF88CC
0x9CFDEE: jmp     ___CxxFrameHandler3
