0x659F90: push    0FFFFFFFFh
0x659F92: push    offset MobileObject_destr_SEH
0x659F97: mov     eax, large fs:0
0x659F9D: push    eax
0x659F9E: push    ecx
0x659F9F: push    esi
0x659FA0: mov     eax, ds:0B30AACh
0x659FA5: xor     eax, esp
0x659FA7: push    eax
0x659FA8: lea     eax, [esp+18h+var_C]
0x659FAC: mov     large fs:0, eax
0x659FB2: mov     esi, ecx
0x659FB4: mov     [esp+18h+var_10], esi
0x659FB8: mov     dword ptr [esi], offset ??_7MobileObject@@6BMobileObject@@@; const MobileObject::`vftable'{for `MobileObject'}
0x659FBE: mov     dword ptr [esi+18h], offset ??_7MobileObject@@6BTESChildCell@@@; const MobileObject::`vftable'{for `TESChildCell'}
0x659FC5: mov     eax, [esi+8]
0x659FC8: shr     eax, 0Eh
0x659FCB: test    al, 1
0x659FCD: mov     [esp+18h+var_4], 0
0x659FD5: jnz     short loc_65A012
0x659FD7: push    esi
0x659FD8: mov     ecx, offset ActorProcessManager_ptr
0x659FDD: call    sub_674E10
0x659FE2: mov     ecx, ds:0B33A98h
0x659FE8: cmp     byte ptr [ecx+0CD4h], 0
0x659FEF: jnz     short loc_659FF8
0x659FF1: mov     ecx, esi; this
0x659FF3: call    TESOjectREFR_stuffsWithPArentCell
0x659FF8: mov     ecx, [esi+58h]
0x659FFB: test    ecx, ecx
0x659FFD: jz      short loc_65A012
0x659FFF: mov     edx, [ecx]
0x65A001: mov     eax, [edx+8]
0x65A004: call    eax
0x65A006: push    eax
0x65A007: push    esi
0x65A008: mov     ecx, offset ActorProcessManager_ptr
0x65A00D: call    sub_674550
0x65A012: mov     ecx, [esi+58h]
0x65A015: test    ecx, ecx
0x65A017: jz      short loc_65A021
0x65A019: mov     edx, [ecx]
0x65A01B: mov     eax, [edx]
0x65A01D: push    1
0x65A01F: call    eax
0x65A021: mov     ecx, esi
0x65A023: mov     [esp+18h+var_4], 0FFFFFFFFh
0x65A02B: call    TESObjectREFR_destr
0x65A030: mov     ecx, dword ptr [esp+18h+var_C]
0x65A034: mov     large fs:0, ecx
0x65A03B: pop     ecx
0x65A03C: pop     esi
0x65A03D: add     esp, 10h
0x65A040: retn
