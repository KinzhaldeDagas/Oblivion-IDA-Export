0x731620: push    0FFFFFFFFh
0x731622: push    offset ??1NiPropertyState@@UAE@XZ_SEH
0x731627: mov     eax, large fs:0
0x73162D: push    eax
0x73162E: push    ecx
0x73162F: push    ebx
0x731630: push    ebp
0x731631: push    esi
0x731632: push    edi
0x731633: mov     eax, ds:0B30AACh
0x731638: xor     eax, esp
0x73163A: push    eax
0x73163B: lea     eax, [esp+24h+var_C]
0x73163F: mov     large fs:0, eax
0x731645: mov     esi, ecx
0x731647: mov     [esp+24h+var_10], esi
0x73164B: xor     edi, edi
0x73164D: push    offset NiRefObject_objcount; lpAddend
0x731652: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x731658: mov     [esi+4], edi
0x73165B: call    dword ptr ds:0A28078h
0x731661: push    offset sub_7016A0; a5
0x731666: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x73166B: push    0Ah; size
0x73166D: mov     [esp+30h+var_4], edi
0x731671: push    4; a2
0x731673: lea     edi, [esi+8]
0x731676: push    edi; a1
0x731677: mov     dword ptr [esi], offset ??_7NiPropertyState@@6B@; const NiPropertyState::`vftable'
0x73167D: call    ArrayConstructor
0x731682: mov     ebp, [esp+24h+arg_0]
0x731686: mov     byte ptr [esp+24h+var_4], 1
0x73168B: sub     ebp, esi
0x73168D: mov     [esp+24h+arg_0], 0Ah
0x731695: mov     ebx, [edi]
0x731697: cmp     ebx, [edi+ebp]
0x73169A: jz      short loc_7316CF
0x73169C: test    ebx, ebx
0x73169E: jz      short loc_7316BC
0x7316A0: lea     eax, [ebx+4]
0x7316A3: push    eax; lpAddend
0x7316A4: call    dword ptr ds:0A2807Ch
0x7316AA: test    eax, eax
0x7316AC: jnz     short loc_7316BC
0x7316AE: test    ebx, ebx
0x7316B0: jz      short loc_7316BC
0x7316B2: mov     edx, [ebx]
0x7316B4: mov     eax, [edx]
0x7316B6: push    1
0x7316B8: mov     ecx, ebx
0x7316BA: call    eax
0x7316BC: mov     eax, [edi+ebp]
0x7316BF: test    eax, eax
0x7316C1: mov     [edi], eax
0x7316C3: jz      short loc_7316CF
0x7316C5: add     eax, 4
0x7316C8: push    eax; lpAddend
0x7316C9: call    dword ptr ds:0A28078h
0x7316CF: add     edi, 4
0x7316D2: sub     [esp+24h+arg_0], 1
0x7316D7: jnz     short loc_731695
0x7316D9: mov     eax, esi
0x7316DB: mov     ecx, dword ptr [esp+24h+var_C]
0x7316DF: mov     large fs:0, ecx
0x7316E6: pop     ecx
0x7316E7: pop     edi
0x7316E8: pop     esi
0x7316E9: pop     ebp
0x7316EA: pop     ebx
0x7316EB: add     esp, 10h
0x7316EE: retn    4
