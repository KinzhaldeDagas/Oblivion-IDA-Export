0x5E15E0: push    0FFFFFFFFh
0x5E15E2: push    offset SEH_5E1880
0x5E15E7: mov     eax, large fs:0
0x5E15ED: push    eax
0x5E15EE: sub     esp, 8
0x5E15F1: push    ebx
0x5E15F2: push    ebp
0x5E15F3: push    esi
0x5E15F4: push    edi
0x5E15F5: mov     eax, ds:0B30AACh
0x5E15FA: xor     eax, esp
0x5E15FC: push    eax
0x5E15FD: lea     eax, [esp+28h+var_C]
0x5E1601: mov     large fs:0, eax
0x5E1607: mov     esi, ecx
0x5E1609: mov     [esp+28h+var_14], esi
0x5E160D: call    MobilObject_constr
0x5E1612: lea     edi, [esi+5Ch]
0x5E1615: xor     ebx, ebx
0x5E1617: mov     ecx, edi
0x5E1619: mov     [esp+28h+var_4], ebx
0x5E161D: call    MagicCaster_constr
0x5E1622: lea     ebp, [esi+68h]
0x5E1625: mov     ecx, ebp
0x5E1627: mov     byte ptr [esp+28h+var_4], 1
0x5E162C: call    MagicTarget_constr
0x5E1631: lea     ecx, [esi+88h]
0x5E1637: mov     byte ptr [esp+28h+var_4], 2
0x5E163C: mov     dword ptr [esi], offset ??_7Actor@@6BActor@@@; const Actor::`vftable'{for `Actor'}
0x5E1642: mov     dword ptr [esi+18h], offset ??_7Actor@@6BTESChildCell@@@; const Actor::`vftable'{for `TESChildCell'}
0x5E1649: mov     dword ptr [edi], offset ??_7Actor@@6BMagicCaster@@@; const Actor::`vftable'{for `MagicCaster'}
0x5E164F: mov     dword ptr [ebp+0], offset ??_7Actor@@6BMagicTarget@@@; const Actor::`vftable'{for `MagicTarget'}
0x5E1656: call    AVCollection_Constr
0x5E165B: mov     [esi+9Ch], ebx
0x5E1661: mov     [esi+0A0h], ebx
0x5E1667: mov     [esi+0A4h], ebx
0x5E166D: mov     [esi+0A8h], ebx
0x5E1673: mov     [esi+0B4h], ebx
0x5E1679: mov     [esi+0B8h], ebx
0x5E167F: or      dword ptr [esi+8], 200000h
0x5E1686: push    90h; Size
0x5E168B: mov     byte ptr [esp+2Ch+var_4], 3
0x5E1690: call    FormHeapAlloc
0x5E1695: add     esp, 4
0x5E1698: mov     [esp+28h+var_10], eax
0x5E169C: cmp     eax, ebx
0x5E169E: mov     byte ptr [esp+28h+var_4], 4
0x5E16A3: jz      short loc_5E16AE
0x5E16A5: mov     ecx, eax; this
0x5E16A7: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x5E16AC: jmp     short loc_5E16B0
0x5E16AE: xor     eax, eax
0x5E16B0: push    ebx
0x5E16B1: push    ebx
0x5E16B2: push    ebx
0x5E16B3: push    3
0x5E16B5: push    esi
0x5E16B6: mov     ecx, offset ActorProcessManager_ptr
0x5E16BB: mov     byte ptr [esp+3Ch+var_4], 3
0x5E16C0: mov     [esi+58h], eax
0x5E16C3: call    sub_673A90
0x5E16C8: fld     dword ptr ds:0A30634h
0x5E16CE: fstp    dword ptr [esi+0BCh]
0x5E16D4: mov     [esi+0B0h], ebx
0x5E16DA: fldz
0x5E16DC: mov     [esi+0C0h], bl
0x5E16E2: fst     dword ptr [esi+74h]
0x5E16E5: mov     dword ptr [esi+70h], 7
0x5E16EC: fst     dword ptr [esi+0ACh]
0x5E16F2: mov     byte ptr [esi+78h], 1
0x5E16F6: fst     dword ptr [esi+0DCh]
0x5E16FC: mov     [esi+80h], bl
0x5E1702: fst     dword ptr [esi+100h]
0x5E1708: mov     [esi+0C9h], bl
0x5E170E: fstp    dword ptr [esi+0F4h]
0x5E1714: mov     [esi+0C8h], bl
0x5E171A: mov     [esi+7Ch], ebx
0x5E171D: mov     [esi+0E4h], ebx
0x5E1723: mov     [esi+0D0h], ebx
0x5E1729: mov     [esi+0D4h], ebx
0x5E172F: mov     byte ptr [esi+0CAh], 1
0x5E1736: mov     [esi+0CCh], ebx
0x5E173C: mov     byte ptr [esi+0E0h], 1
0x5E1743: mov     [esi+0C4h], ebx
0x5E1749: mov     [esi+0F8h], ebx
0x5E174F: mov     eax, ds:0B3F9A8h
0x5E1754: mov     [esi+0E8h], eax
0x5E175A: mov     ecx, ds:0B3F9ACh
0x5E1760: mov     [esi+0ECh], ecx
0x5E1766: mov     edx, ds:0B3F9B0h
0x5E176C: mov     [esi+0F0h], edx
0x5E1772: mov     [esi+0FCh], bl
0x5E1778: mov     byte ptr [esi+0FDh], 1
0x5E177F: mov     eax, esi
0x5E1781: mov     ecx, dword ptr [esp+28h+var_C]
0x5E1785: mov     large fs:0, ecx
0x5E178C: pop     ecx
0x5E178D: pop     edi
0x5E178E: pop     esi
0x5E178F: pop     ebp
0x5E1790: pop     ebx
0x5E1791: add     esp, 14h
0x5E1794: retn
