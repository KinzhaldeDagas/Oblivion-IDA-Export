0x8C9C80: push    0FFFFFFFFh
0x8C9C82: push    offset SEH_8C62B0
0x8C9C87: mov     eax, large fs:0
0x8C9C8D: push    eax
0x8C9C8E: push    ecx
0x8C9C8F: push    esi
0x8C9C90: mov     eax, ds:0B30AACh
0x8C9C95: xor     eax, esp
0x8C9C97: push    eax
0x8C9C98: lea     eax, [esp+18h+var_C]
0x8C9C9C: mov     large fs:0, eax
0x8C9CA2: push    14h; Size
0x8C9CA4: call    FormHeapAlloc
0x8C9CA9: mov     esi, eax
0x8C9CAB: add     esp, 4
0x8C9CAE: mov     [esp+18h+var_10], esi
0x8C9CB2: test    esi, esi
0x8C9CB4: mov     [esp+18h+var_4], 0
0x8C9CBC: jz      short loc_8C9D15
0x8C9CBE: mov     ecx, esi; this
0x8C9CC0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C9CC5: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8C9CCB: mov     eax, 1
0x8C9CD0: mov     dword ptr [esi+0Ch], 0
0x8C9CD7: mov     dword ptr [esi+10h], 0
0x8C9CDE: add     ds:0BA7D70h, eax
0x8C9CE4: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8C9CEA: add     ds:0BA7F44h, eax
0x8C9CF0: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8C9CF6: add     ds:0BA7F50h, eax
0x8C9CFC: mov     dword ptr [esi], offset ??_7bhkConvexSweepShape@@6B@; const bhkConvexSweepShape::`vftable'
0x8C9D02: mov     eax, esi
0x8C9D04: mov     ecx, [esp+18h+var_C]
0x8C9D08: mov     large fs:0, ecx
0x8C9D0F: pop     ecx
0x8C9D10: pop     esi
0x8C9D11: add     esp, 10h
0x8C9D14: retn
0x8C9D15: xor     eax, eax
0x8C9D17: mov     ecx, [esp+18h+var_C]
0x8C9D1B: mov     large fs:0, ecx
0x8C9D22: pop     ecx
0x8C9D23: pop     esi
0x8C9D24: add     esp, 10h
0x8C9D27: retn
