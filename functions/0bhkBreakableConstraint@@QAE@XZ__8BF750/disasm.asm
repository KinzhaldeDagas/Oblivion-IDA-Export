0x8BF750: push    0FFFFFFFFh
0x8BF752: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8BF757: mov     eax, large fs:0
0x8BF75D: push    eax
0x8BF75E: push    ecx
0x8BF75F: push    ebp
0x8BF760: push    esi
0x8BF761: push    edi
0x8BF762: mov     eax, ds:0B30AACh
0x8BF767: xor     eax, esp
0x8BF769: push    eax
0x8BF76A: lea     eax, [esp+20h+var_C]
0x8BF76E: mov     large fs:0, eax
0x8BF774: mov     edi, ecx
0x8BF776: push    offset stru_BA7C80; lpCriticalSection
0x8BF77B: call    dword ptr ds:0A2806Ch
0x8BF781: call    dword ptr ds:0A2808Ch
0x8BF787: mov     ebp, 1
0x8BF78C: add     ds:0BA7CFCh, ebp
0x8BF792: push    10h; Size
0x8BF794: mov     ds:0BA7CF8h, eax
0x8BF799: call    FormHeapAlloc
0x8BF79E: mov     esi, eax
0x8BF7A0: add     esp, 4
0x8BF7A3: mov     [esp+20h+var_10], esi
0x8BF7A7: test    esi, esi
0x8BF7A9: mov     [esp+20h+var_4], 0
0x8BF7B1: jz      short loc_8BF7DB
0x8BF7B3: mov     ecx, esi; this
0x8BF7B5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BF7BA: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8BF7C0: mov     dword ptr [esi+0Ch], 0
0x8BF7C7: add     ds:0BA7D4Ch, ebp
0x8BF7CD: mov     dword ptr [esi], offset ??_7bhkBreakableConstraint@@6B@; const bhkBreakableConstraint::`vftable'
0x8BF7D3: add     ds:0BA8094h, ebp
0x8BF7D9: jmp     short loc_8BF7DD
0x8BF7DB: xor     esi, esi
0x8BF7DD: mov     eax, [esp+20h+arg_0]
0x8BF7E1: push    eax
0x8BF7E2: push    esi
0x8BF7E3: mov     ecx, edi
0x8BF7E5: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8BF7ED: call    sub_8A0860
0x8BF7F2: sub     ds:0BA7CFCh, ebp
0x8BF7F8: jnz     short loc_8BF804
0x8BF7FA: mov     dword ptr ds:0BA7CF8h, 0
0x8BF804: push    offset stru_BA7C80; lpCriticalSection
0x8BF809: call    dword ptr ds:0A28074h
0x8BF80F: mov     eax, esi
0x8BF811: mov     ecx, [esp+20h+var_C]
0x8BF815: mov     large fs:0, ecx
0x8BF81C: pop     ecx
0x8BF81D: pop     edi
0x8BF81E: pop     esi
0x8BF81F: pop     ebp
0x8BF820: add     esp, 10h
0x8BF823: retn    4
