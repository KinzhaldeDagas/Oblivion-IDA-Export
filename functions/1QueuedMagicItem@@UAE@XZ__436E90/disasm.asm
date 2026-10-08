0x436E90: push    0FFFFFFFFh
0x436E92: push    offset ??1QueuedMagicItem@@UAE@XZ_SEH
0x436E97: mov     eax, large fs:0
0x436E9D: push    eax
0x436E9E: push    ecx
0x436E9F: push    ebx
0x436EA0: push    esi
0x436EA1: push    edi
0x436EA2: mov     eax, ___security_cookie
0x436EA7: xor     eax, esp
0x436EA9: push    eax
0x436EAA: lea     eax, [esp+20h+var_C]
0x436EAE: mov     large fs:0, eax
0x436EB4: mov     edi, ecx
0x436EB6: mov     [esp+20h+var_10], edi
0x436EBA: mov     dword ptr [edi], offset ??_7QueuedFile@@6B@; const QueuedFile::`vftable'
0x436EC0: mov     ecx, [edi+1Ch]
0x436EC3: test    ecx, ecx
0x436EC5: mov     [esp+20h+var_4], 1
0x436ECD: jz      short loc_436ED7
0x436ECF: mov     eax, [ecx]
0x436ED1: mov     edx, [eax]
0x436ED3: push    1
0x436ED5: call    edx
0x436ED7: mov     esi, [edi+18h]
0x436EDA: test    esi, esi
0x436EDC: mov     ebx, ds:InterlockedDecrement
0x436EE2: mov     byte ptr [esp+20h+var_4], 0
0x436EE7: jz      short loc_436F01
0x436EE9: lea     eax, [esi+8]
0x436EEC: push    eax; lpAddend
0x436EED: call    ebx ; InterlockedDecrement
0x436EEF: test    eax, eax
0x436EF1: jnz     short loc_436F01
0x436EF3: test    esi, esi
0x436EF5: jz      short loc_436F01
0x436EF7: mov     edx, [esi]
0x436EF9: mov     eax, [edx]
0x436EFB: push    1
0x436EFD: mov     ecx, esi
0x436EFF: call    eax
0x436F01: push    0B33A20h; lpAddend
0x436F06: mov     dword ptr [edi], offset ??_7?$BSTask@_J@@6B@; const BSTask<__int64>::`vftable'
0x436F0C: call    ebx ; InterlockedDecrement
0x436F0E: mov     ecx, dword ptr [esp+20h+var_C]
0x436F12: mov     large fs:0, ecx
0x436F19: pop     ecx
0x436F1A: pop     edi
0x436F1B: pop     esi
0x436F1C: pop     ebx
0x436F1D: add     esp, 10h
0x436F20: retn
0x436670: push    0B33A20h; lpAddend
0x436675: mov     dword ptr [ecx], offset ??_7?$BSTask@_J@@6B@; const BSTask<__int64>::`vftable'
0x43667B: call    ds:InterlockedDecrement
0x436681: retn
0x9AC390: mov     ecx, [ebp-10h]
0x9AC393: jmp     loc_436670
0x9AC398: mov     ecx, [ebp-10h]
0x9AC39B: add     ecx, 18h; void *
0x9AC39E: jmp     sub_4BDDC0
0x9AC3A3: mov     edx, [esp+arg_4]
0x9AC3A7: lea     eax, [edx-10h]
0x9AC3AA: mov     ecx, [edx-14h]
0x9AC3AD: xor     ecx, eax
0x9AC3AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC3B4: mov     eax, offset stru_AD9068
0x9AC3B9: jmp     ___CxxFrameHandler3
