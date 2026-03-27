0x4A1870: push    0FFFFFFFFh
0x4A1872: push    offset SEH_8C8970
0x4A1877: mov     eax, large fs:0
0x4A187D: push    eax
0x4A187E: push    ecx
0x4A187F: push    esi
0x4A1880: push    edi
0x4A1881: mov     eax, ds:0B30AACh
0x4A1886: xor     eax, esp
0x4A1888: push    eax
0x4A1889: lea     eax, [esp+1Ch+var_C]
0x4A188D: mov     large fs:0, eax
0x4A1893: mov     edi, ecx
0x4A1895: push    0D0h ; 'Ð'; Size
0x4A189A: call    FormHeapAlloc
0x4A189F: mov     esi, eax
0x4A18A1: add     esp, 4
0x4A18A4: mov     [esp+1Ch+var_10], esi
0x4A18A8: test    esi, esi
0x4A18AA: mov     [esp+1Ch+var_4], 0
0x4A18B2: jz      short loc_4A18C3
0x4A18B4: mov     ecx, esi
0x4A18B6: call    sub_717590
0x4A18BB: mov     dword ptr [esi], offset ??_7BSScissorTriShape@@6B@; const BSScissorTriShape::`vftable'
0x4A18C1: jmp     short loc_4A18C5
0x4A18C3: xor     esi, esi
0x4A18C5: mov     eax, [edi+0C0h]
0x4A18CB: mov     [esi+0C0h], eax
0x4A18D1: mov     ecx, [edi+0C4h]
0x4A18D7: mov     [esi+0C4h], ecx
0x4A18DD: mov     edx, [edi+0C8h]
0x4A18E3: mov     ecx, [esp+1Ch+arg_0]
0x4A18E7: mov     [esi+0C8h], edx
0x4A18ED: mov     eax, [edi+0CCh]
0x4A18F3: push    ecx
0x4A18F4: push    esi
0x4A18F5: mov     ecx, edi
0x4A18F7: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A18FF: mov     [esi+0CCh], eax
0x4A1905: call    sub_7175B0
0x4A190A: mov     eax, esi
0x4A190C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4A1910: mov     large fs:0, ecx
0x4A1917: pop     ecx
0x4A1918: pop     edi
0x4A1919: pop     esi
0x4A191A: add     esp, 10h
0x4A191D: retn    4
