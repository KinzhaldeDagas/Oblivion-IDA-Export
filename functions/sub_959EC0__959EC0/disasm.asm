0x959EC0: push    esi
0x959EC1: mov     esi, ecx
0x959EC3: call    sub_959CA0
0x959EC8: mov     eax, [esi+1Ch]
0x959ECB: push    eax
0x959ECC: mov     dword ptr [esi+18h], offset ??_7?$NiTArray@PAVRecord@NiPick@@@@6B@; const NiTArray<NiPick::Record *>::`vftable'
0x959ED3: call    FormHeapFree
0x959ED8: mov     esi, [esi+14h]
0x959EDB: add     esp, 4
0x959EDE: test    esi, esi
0x959EE0: jz      short loc_959EFE
0x959EE2: lea     ecx, [esi+4]
0x959EE5: push    ecx; lpAddend
0x959EE6: call    dword ptr ds:0A2807Ch
0x959EEC: test    eax, eax
0x959EEE: jnz     short loc_959EFE
0x959EF0: test    esi, esi
0x959EF2: jz      short loc_959EFE
0x959EF4: mov     edx, [esi]
0x959EF6: mov     eax, [edx]
0x959EF8: push    1
0x959EFA: mov     ecx, esi
0x959EFC: call    eax
0x959EFE: pop     esi
0x959EFF: retn
