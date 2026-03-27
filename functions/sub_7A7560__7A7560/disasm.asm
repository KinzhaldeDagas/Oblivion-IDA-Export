0x7A7560: push    0FFFFFFFFh
0x7A7562: push    offset SEH_7A7560
0x7A7567: mov     eax, large fs:0
0x7A756D: push    eax
0x7A756E: push    ecx
0x7A756F: push    esi
0x7A7570: mov     eax, ds:0B30AACh
0x7A7575: xor     eax, esp
0x7A7577: push    eax
0x7A7578: lea     eax, [esp+18h+var_C]
0x7A757C: mov     large fs:0, eax
0x7A7582: mov     esi, ecx
0x7A7584: mov     [esp+18h+var_10], esi
0x7A7588: fldz
0x7A758A: xor     eax, eax
0x7A758C: fstp    dword ptr [esi+4]
0x7A758F: mov     byte ptr [esi+10h], 1
0x7A7593: mov     [esi+8], eax
0x7A7596: mov     [esi+0Ch], eax
0x7A7599: mov     dword ptr [esi], offset ??_7Normal@@6B@; const Normal::`vftable'
0x7A759F: cmp     ds:0B42C9Ch, eax
0x7A75A5: mov     [esp+18h+var_4], eax
0x7A75A9: jz      short loc_7A75CA
0x7A75AB: mov     [esi+10h], al
0x7A75AE: fld     dword ptr ds:0B42C98h
0x7A75B4: fstp    dword ptr [esi+4]
0x7A75B7: mov     eax, ds:0B42A88h
0x7A75BC: mov     [esi+8], eax
0x7A75BF: mov     ecx, ds:0B42A8Ch
0x7A75C5: mov     [esi+0Ch], ecx
0x7A75C8: jmp     short loc_7A75ED
0x7A75CA: push    1
0x7A75CC: mov     ecx, esi
0x7A75CE: call    sub_7A71D0
0x7A75D3: fld     dword ptr [esi+4]
0x7A75D6: fstp    dword ptr ds:0B42C98h
0x7A75DC: mov     edx, [esi+8]
0x7A75DF: mov     ds:0B42A88h, edx
0x7A75E5: mov     eax, [esi+0Ch]
0x7A75E8: mov     ds:0B42A8Ch, eax
0x7A75ED: mov     eax, esi
0x7A75EF: add     dword ptr ds:0B42C9Ch, 1
0x7A75F6: mov     ecx, [esp+18h+var_C]
0x7A75FA: mov     large fs:0, ecx
0x7A7601: pop     ecx
0x7A7602: pop     esi
0x7A7603: add     esp, 10h
0x7A7606: retn
