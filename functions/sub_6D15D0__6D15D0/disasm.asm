0x6D15D0: push    ecx
0x6D15D1: push    ebx
0x6D15D2: push    ebp
0x6D15D3: mov     ebp, [esp+0Ch+arg_0]
0x6D15D7: push    esi
0x6D15D8: push    edi
0x6D15D9: push    ebp
0x6D15DA: mov     esi, ecx
0x6D15DC: call    sub_754E90
0x6D15E1: mov     ecx, ebp
0x6D15E3: call    sub_7124A0
0x6D15E8: mov     edi, [esi+50h]
0x6D15EB: mov     ebx, eax
0x6D15ED: cmp     edi, ebx
0x6D15EF: jz      short loc_6D1622
0x6D15F1: test    edi, edi
0x6D15F3: jz      short loc_6D1611
0x6D15F5: lea     eax, [edi+4]
0x6D15F8: push    eax; lpAddend
0x6D15F9: call    dword ptr ds:0A2807Ch
0x6D15FF: test    eax, eax
0x6D1601: jnz     short loc_6D1611
0x6D1603: test    edi, edi
0x6D1605: jz      short loc_6D1611
0x6D1607: mov     edx, [edi]
0x6D1609: mov     eax, [edx]
0x6D160B: push    1
0x6D160D: mov     ecx, edi
0x6D160F: call    eax
0x6D1611: test    ebx, ebx
0x6D1613: mov     [esi+50h], ebx
0x6D1616: jz      short loc_6D1622
0x6D1618: add     ebx, 4
0x6D161B: push    ebx; lpAddend
0x6D161C: call    dword ptr ds:0A28078h
0x6D1622: mov     eax, [esi+50h]
0x6D1625: test    eax, eax
0x6D1627: jz      short loc_6D1633
0x6D1629: mov     eax, [eax+8]
0x6D162C: test    eax, eax
0x6D162E: jbe     short loc_6D1633
0x6D1630: push    eax
0x6D1631: jmp     short loc_6D1635
0x6D1633: push    0
0x6D1635: mov     ecx, esi
0x6D1637: call    sub_6D10F0
0x6D163C: cmp     dword ptr [ebp+0D8h], 0A010068h
0x6D1646: jnb     short loc_6D1690
0x6D1648: mov     eax, [esi+50h]
0x6D164B: test    eax, eax
0x6D164D: jz      short loc_6D1690
0x6D164F: mov     ebp, [eax+8]
0x6D1652: xor     edi, edi
0x6D1654: test    ebp, ebp
0x6D1656: jbe     loc_6D16EE
0x6D165C: xor     ebx, ebx
0x6D165E: mov     edi, edi
0x6D1660: mov     eax, [esi+50h]
0x6D1663: cmp     edi, [eax+8]
0x6D1666: jnb     short loc_6D166F
0x6D1668: mov     ecx, [eax+10h]
0x6D166B: add     ecx, ebx
0x6D166D: jmp     short loc_6D1671
0x6D166F: xor     ecx, ecx
0x6D1671: call    sub_452A60
0x6D1676: mov     edx, [esi]
0x6D1678: push    edi
0x6D1679: push    eax
0x6D167A: mov     eax, [edx+84h]
0x6D1680: mov     ecx, esi
0x6D1682: call    eax
0x6D1684: add     edi, 1
0x6D1687: add     ebx, 0Ch
0x6D168A: cmp     edi, ebp
0x6D168C: jb      short loc_6D1660
0x6D168E: jmp     short loc_6D16EE
0x6D1690: mov     ecx, ebp
0x6D1692: call    sub_7124D0
0x6D1697: mov     ebx, eax
0x6D1699: test    ebx, ebx
0x6D169B: jz      short loc_6D16EE
0x6D169D: lea     ebp, [esi+40h]
0x6D16A0: push    ebx
0x6D16A1: mov     ecx, ebp
0x6D16A3: call    sub_4CA040
0x6D16A8: xor     edi, edi
0x6D16AA: test    ebx, ebx
0x6D16AC: jbe     short loc_6D16C8
0x6D16AE: fldz
0x6D16B0: fstp    [esp+14h+var_4]
0x6D16B4: lea     ecx, [esp+14h+var_4]
0x6D16B8: push    ecx
0x6D16B9: push    edi
0x6D16BA: mov     ecx, ebp
0x6D16BC: call    sub_4CA210
0x6D16C1: add     edi, 1
0x6D16C4: cmp     edi, ebx
0x6D16C6: jb      short loc_6D16B4
0x6D16C8: xor     edi, edi
0x6D16CA: test    ebx, ebx
0x6D16CC: jbe     short loc_6D16EE
0x6D16CE: mov     edi, edi
0x6D16D0: mov     ecx, [esp+14h+arg_0]
0x6D16D4: call    sub_7124A0
0x6D16D9: mov     edx, [esi]
0x6D16DB: push    edi
0x6D16DC: push    eax
0x6D16DD: mov     eax, [edx+84h]
0x6D16E3: mov     ecx, esi
0x6D16E5: call    eax
0x6D16E7: add     edi, 1
0x6D16EA: cmp     edi, ebx
0x6D16EC: jb      short loc_6D16D0
0x6D16EE: cmp     dword ptr [esi+50h], 0
0x6D16F2: jz      short loc_6D1720
0x6D16F4: mov     ecx, [esp+14h+arg_0]
0x6D16F8: cmp     dword ptr [ecx+0D8h], 401000Ch
0x6D1702: ja      short loc_6D1720
0x6D1704: fld     dword ptr [esi+18h]
0x6D1707: mov     edx, [esi]
0x6D1709: mov     eax, [edx+9Ch]
0x6D170F: sub     esp, 8
0x6D1712: fstp    [esp+1Ch+var_18]
0x6D1716: mov     ecx, esi
0x6D1718: fld     dword ptr [esi+14h]
0x6D171B: fstp    [esp+1Ch+var_1C]
0x6D171E: call    eax
0x6D1720: pop     edi
0x6D1721: pop     esi
0x6D1722: pop     ebp
0x6D1723: pop     ebx
0x6D1724: pop     ecx
0x6D1725: retn    4
