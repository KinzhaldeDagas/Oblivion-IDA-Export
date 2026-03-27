0x6DC1D0: push    0FFFFFFFFh
0x6DC1D2: push    offset ??0NiPathInterpolator@@QAE@XZ_SEH
0x6DC1D7: mov     eax, large fs:0
0x6DC1DD: push    eax
0x6DC1DE: push    ecx
0x6DC1DF: push    ebx
0x6DC1E0: push    esi
0x6DC1E1: push    edi
0x6DC1E2: mov     eax, ds:0B30AACh
0x6DC1E7: xor     eax, esp
0x6DC1E9: push    eax
0x6DC1EA: lea     eax, [esp+20h+var_C]
0x6DC1EE: mov     large fs:0, eax
0x6DC1F4: mov     esi, ecx
0x6DC1F6: call    sub_6EC220
0x6DC1FB: mov     eax, [esp+20h+arg_0]
0x6DC1FF: mov     edi, ds:0A28078h
0x6DC205: xor     ebx, ebx
0x6DC207: cmp     eax, ebx
0x6DC209: mov     dword ptr [esi], offset ??_7NiPathInterpolator@@6B@; const NiPathInterpolator::`vftable'
0x6DC20F: mov     [esi+18h], eax
0x6DC212: jz      short loc_6DC21A
0x6DC214: add     eax, 4
0x6DC217: push    eax; lpAddend
0x6DC218: call    edi ; InterlockedIncrement
0x6DC21A: mov     eax, [esp+20h+arg_4]
0x6DC21E: cmp     eax, ebx
0x6DC220: mov     [esi+1Ch], eax
0x6DC223: jz      short loc_6DC22B
0x6DC225: add     eax, 4
0x6DC228: push    eax; lpAddend
0x6DC229: call    edi ; InterlockedIncrement
0x6DC22B: fldz
0x6DC22D: mov     eax, ds:0B3EBA0h
0x6DC232: mov     [esi+3Ch], eax
0x6DC235: mov     ecx, ds:0B3EBA4h
0x6DC23B: mov     [esi+40h], ecx
0x6DC23E: mov     edx, ds:0B3EBA8h
0x6DC244: mov     [esi+44h], edx
0x6DC247: mov     eax, ds:0B3EBACh
0x6DC24C: mov     [esi+48h], eax
0x6DC24F: mov     ecx, ds:0B24FC8h
0x6DC255: mov     [esi+4Ch], ecx
0x6DC258: mov     edx, ds:0B24FCCh
0x6DC25E: mov     [esi+50h], edx
0x6DC261: mov     eax, ds:0B24FD0h
0x6DC266: fst     dword ptr [esi+28h]
0x6DC269: fst     dword ptr [esi+2Ch]
0x6DC26C: mov     [esi+54h], eax
0x6DC26F: fstp    dword ptr [esi+34h]
0x6DC272: mov     [esi+10h], ebx
0x6DC275: fld     dword ptr ds:0A30634h
0x6DC27B: mov     [esi+14h], ebx
0x6DC27E: fstp    dword ptr [esi+24h]
0x6DC281: mov     dword ptr [esi+38h], 1
0x6DC288: mov     [esi+30h], bx
0x6DC28C: mov     [esi+20h], ebx
0x6DC28F: mov     word ptr [esi+0Ch], 3
0x6DC295: fld     dword ptr ds:0A7DEB4h
0x6DC29B: fchs
0x6DC29D: mov     eax, esi
0x6DC29F: fstp    dword ptr [esi+58h]
0x6DC2A2: mov     ecx, [esp+20h+var_C]
0x6DC2A6: mov     large fs:0, ecx
0x6DC2AD: pop     ecx
0x6DC2AE: pop     edi
0x6DC2AF: pop     esi
0x6DC2B0: pop     ebx
0x6DC2B1: add     esp, 10h
0x6DC2B4: retn    8
