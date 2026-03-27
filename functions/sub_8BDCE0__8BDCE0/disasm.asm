0x8BDCE0: push    0FFFFFFFFh
0x8BDCE2: push    offset SEH_8C62B0
0x8BDCE7: mov     eax, large fs:0
0x8BDCED: push    eax
0x8BDCEE: push    ecx
0x8BDCEF: push    esi
0x8BDCF0: mov     eax, ds:0B30AACh
0x8BDCF5: xor     eax, esp
0x8BDCF7: push    eax
0x8BDCF8: lea     eax, [esp+18h+var_C]
0x8BDCFC: mov     large fs:0, eax
0x8BDD02: push    10h; Size
0x8BDD04: call    FormHeapAlloc
0x8BDD09: mov     esi, eax
0x8BDD0B: add     esp, 4
0x8BDD0E: mov     [esp+18h+var_10], esi
0x8BDD12: test    esi, esi
0x8BDD14: mov     [esp+18h+var_4], 0
0x8BDD1C: jz      short loc_8BDD68
0x8BDD1E: mov     ecx, esi; this
0x8BDD20: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BDD25: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BDD2B: mov     eax, 1
0x8BDD30: mov     dword ptr [esi+0Ch], 0
0x8BDD37: add     ds:0BA7D00h, eax
0x8BDD3D: mov     dword ptr [esi], offset ??_7bhkBinaryAction@@6B@; const bhkBinaryAction::`vftable'
0x8BDD43: add     ds:0BA7D40h, eax
0x8BDD49: mov     dword ptr [esi], offset ??_7bhkAngularDashpotAction@@6B@; const bhkAngularDashpotAction::`vftable'
0x8BDD4F: add     ds:0BA8064h, eax
0x8BDD55: mov     eax, esi
0x8BDD57: mov     ecx, [esp+18h+var_C]
0x8BDD5B: mov     large fs:0, ecx
0x8BDD62: pop     ecx
0x8BDD63: pop     esi
0x8BDD64: add     esp, 10h
0x8BDD67: retn
0x8BDD68: xor     eax, eax
0x8BDD6A: mov     ecx, [esp+18h+var_C]
0x8BDD6E: mov     large fs:0, ecx
0x8BDD75: pop     ecx
0x8BDD76: pop     esi
0x8BDD77: add     esp, 10h
0x8BDD7A: retn
