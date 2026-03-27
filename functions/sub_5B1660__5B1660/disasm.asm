0x5B1660: sub     esp, 10h
0x5B1663: push    ebp; a3
0x5B1664: mov     ebp, [esp+14h+arg_0]
0x5B1668: cmp     ebp, 3E9h
0x5B166E: push    esi; a3
0x5B166F: mov     esi, ecx
0x5B1671: jge     short loc_5B167F
0x5B1673: lea     eax, [ebp-0Dh]
0x5B1676: cmp     eax, 1
0x5B1679: ja      loc_5B19FC
0x5B167F: push    edi; a3
0x5B1680: mov     edi, [esp+1Ch+arg_4]
0x5B1684: test    edi, edi
0x5B1686: jz      loc_5B19FB
0x5B168C: mov     dword ptr [esi+48h], 0
0x5B1693: call    sub_57BD80
0x5B1698: cmp     dword ptr [esi+28h], 0
0x5B169C: jz      loc_5B19FB
0x5B16A2: push    ebx; a3
0x5B16A3: push    4; int
0x5B16A5: call    sub_57DE50
0x5B16AA: add     esp, 4
0x5B16AD: push    0FE0h
0x5B16B2: mov     ecx, edi
0x5B16B4: call    Tile_GetFloat
0x5B16B9: call    Double_To_SInt32
0x5B16BE: mov     ebx, eax
0x5B16C0: push    0FD1h
0x5B16C5: mov     ecx, edi
0x5B16C7: mov     [esp+24h+arg_4], ebx
0x5B16CB: call    Tile_GetFloat
0x5B16D0: fcomp   dword ptr ds:0A379B4h
0x5B16D6: fnstsw  ax
0x5B16D8: test    ah, 44h
0x5B16DB: jp      short loc_5B16F1
0x5B16DD: push    0FCBh
0x5B16E2: mov     ecx, edi
0x5B16E4: call    Tile_GetFloat
0x5B16E9: fmul    qword ptr ds:0A2FAA0h
0x5B16EF: jmp     short loc_5B16F3
0x5B16F1: fldz
0x5B16F3: mov     ecx, edi
0x5B16F5: fstp    [esp+20h+var_8]
0x5B16F9: call    sub_588D90
0x5B16FE: fsub    qword ptr ds:0A2FAA0h
0x5B1704: push    ecx
0x5B1705: mov     ecx, [esi+28h]; this
0x5B1708: fstp    [esp+24h+arg_0]
0x5B170C: fld     [esp+24h+arg_0]
0x5B1710: fstp    [esp+24h+a2]; a3
0x5B1713: push    0FABh; a2
0x5B1718: call    Tile_SetFloat
0x5B171D: lea     ecx, [ebx+ebx]
0x5B1720: mov     [esp+20h+arg_0], ecx
0x5B1724: fild    [esp+20h+arg_0]
0x5B1728: push    0FCBh
0x5B172D: mov     ecx, edi
0x5B172F: fstp    qword ptr [esp+24h+var_10]; a3
0x5B1733: call    Tile_GetFloat
0x5B1738: fsub    qword ptr [esp+20h+var_10]
0x5B173C: push    ecx
0x5B173D: mov     ecx, [esi+28h]; this
0x5B1740: fstp    [esp+24h+arg_0]
0x5B1744: fld     [esp+24h+arg_0]
0x5B1748: fstp    [esp+24h+a2]; a3
0x5B174B: push    0FCBh; a2
0x5B1750: call    Tile_SetFloat
0x5B1755: push    0FCAh
0x5B175A: mov     ecx, edi
0x5B175C: call    Tile_GetFloat
0x5B1761: fsub    qword ptr [esp+20h+var_10]
0x5B1765: push    ecx
0x5B1766: mov     ecx, [esi+28h]; this
0x5B1769: fstp    [esp+24h+arg_0]
0x5B176D: fld     [esp+24h+arg_0]
0x5B1771: fstp    [esp+24h+a2]; a3
0x5B1774: push    0FCAh; a2
0x5B1779: call    Tile_SetFloat
0x5B177E: fild    [esp+20h+arg_4]
0x5B1782: mov     ecx, edi
0x5B1784: fstp    qword ptr [esp+20h+var_10]
0x5B1788: call    sub_588C50
0x5B178D: fadd    qword ptr [esp+20h+var_10]
0x5B1791: fld     [esp+20h+var_8]
0x5B1795: call    Double_To_SInt32
0x5B179A: mov     [esp+20h+arg_0], eax
0x5B179E: fisub   [esp+20h+arg_0]
0x5B17A2: push    ecx
0x5B17A3: mov     ecx, [esi+28h]; this
0x5B17A6: fstp    [esp+24h+arg_0]
0x5B17AA: fld     [esp+24h+arg_0]
0x5B17AE: fstp    [esp+24h+a2]; a3
0x5B17B1: push    0FADh; a2
0x5B17B6: call    Tile_SetFloat
0x5B17BB: mov     ecx, edi
0x5B17BD: call    sub_588CF0
0x5B17C2: fadd    qword ptr [esp+20h+var_10]
0x5B17C6: push    ecx
0x5B17C7: mov     ecx, [esi+28h]; this
0x5B17CA: fstp    [esp+24h+arg_0]
0x5B17CE: fld     [esp+24h+arg_0]
0x5B17D2: fstp    [esp+24h+a2]; a3
0x5B17D5: push    0FACh; a2
0x5B17DA: call    Tile_SetFloat
0x5B17DF: fld     dword ptr ds:0A379B4h
0x5B17E5: push    ecx
0x5B17E6: mov     ecx, [esi+28h]; this
0x5B17E9: fstp    [esp+24h+a2]; a3
0x5B17EC: push    0FA1h; a2
0x5B17F1: call    Tile_SetFloat
0x5B17F6: cmp     ebp, 3E9h
0x5B17FC: mov     [esi+48h], edi
0x5B17FF: jl      loc_5B19FA
0x5B1805: push    0FB5h
0x5B180A: mov     ecx, edi
0x5B180C: call    Tile_GetFloat
0x5B1811: call    Double_To_SInt32
0x5B1816: mov     ecx, [esi+4]
0x5B1819: push    0FB5h
0x5B181E: mov     ebx, eax
0x5B1820: call    Tile_GetFloat
0x5B1825: fstp    [esp+20h+arg_4]
0x5B1829: push    1; arg1
0x5B182B: push    0; canCreate
0x5B182D: call    InterfaceManager_GetSingleton
0x5B1832: mov     ebp, [esi+4]
0x5B1835: add     esp, 8
0x5B1838: call    sub_57D7F0
0x5B183D: fstp    [esp+20h+var_8]
0x5B1841: push    0FBAh
0x5B1846: mov     ecx, ebp
0x5B1848: call    Tile_GetFloat
0x5B184D: fsubr   [esp+20h+var_8]
0x5B1851: push    0FBBh
0x5B1856: mov     ecx, edi
0x5B1858: fstp    [esp+24h+arg_0]
0x5B185C: call    Tile_GetFloat
0x5B1861: call    Double_To_SInt32
0x5B1866: cmp     ebx, 8
0x5B1869: jnz     loc_5B190B
0x5B186F: mov     ecx, ds:0B14360h
0x5B1875: test    ecx, ecx
0x5B1877: jz      loc_5B19FA
0x5B187D: lea     ecx, [ecx+0]
0x5B1880: mov     ebx, [ecx+8]
0x5B1883: cmp     [ebx+4], eax
0x5B1886: lea     edx, [ecx+8]
0x5B1889: mov     ecx, [ecx]
0x5B188B: jz      short loc_5B189B
0x5B188D: test    ecx, ecx
0x5B188F: jnz     short loc_5B1880
0x5B1891: pop     ebx
0x5B1892: pop     edi
0x5B1893: pop     esi
0x5B1894: pop     ebp
0x5B1895: add     esp, 10h
0x5B1898: retn    8
0x5B189B: mov     ecx, [esi+4]
0x5B189E: call    sub_588D90
0x5B18A3: fstp    [esp+20h+var_10]
0x5B18A7: mov     edx, [ebx]
0x5B18A9: mov     eax, [edx+8]
0x5B18AC: push    0; int
0x5B18AE: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5B18B3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B18B8: push    0; int
0x5B18BA: push    eax; void *
0x5B18BB: call    OblivionDynamicCast
0x5B18C0: mov     eax, [eax+4]
0x5B18C3: add     esp, 14h
0x5B18C6: test    eax, eax
0x5B18C8: jz      short loc_5B18CF
0x5B18CA: lea     esi, [eax+18h]
0x5B18CD: jmp     short loc_5B18D1
0x5B18CF: xor     esi, esi
0x5B18D1: fld     [esp+20h+var_10]
0x5B18D5: push    ecx
0x5B18D6: fstp    [esp+24h+a2]; float
0x5B18D9: push    0; int
0x5B18DB: fld     [esp+28h+arg_0]
0x5B18DF: push    ecx
0x5B18E0: mov     ecx, edi
0x5B18E2: fstp    [esp+2Ch+var_2C]; float
0x5B18E5: call    sub_588CF0
0x5B18EA: sub     esp, 8
0x5B18ED: fstp    [esp+34h+var_30]; float
0x5B18F1: fld     [esp+34h+arg_4]
0x5B18F5: fstp    [esp+34h+var_34]; float
0x5B18F8: push    esi; int
0x5B18F9: call    sub_57BB20
0x5B18FE: add     esp, 18h
0x5B1901: pop     ebx
0x5B1902: pop     edi
0x5B1903: pop     esi
0x5B1904: pop     ebp
0x5B1905: add     esp, 10h
0x5B1908: retn    8
0x5B190B: cmp     ebx, 10h
0x5B190E: jnz     short loc_5B1981
0x5B1910: mov     edx, [esi+54h]
0x5B1913: lea     ecx, [esi+40h]
0x5B1916: test    ecx, ecx
0x5B1918: jz      loc_5B19A4
0x5B191E: mov     edi, edi
0x5B1920: mov     ebx, [ecx]
0x5B1922: mov     ecx, [ecx+4]
0x5B1925: mov     ebp, edx
0x5B1927: add     edx, 1
0x5B192A: cmp     ebp, eax
0x5B192C: jz      short loc_5B1932
0x5B192E: test    ecx, ecx
0x5B1930: jnz     short loc_5B1920
0x5B1932: test    ebx, ebx
0x5B1934: jz      short loc_5B19A4
0x5B1936: mov     ecx, [esi+4]
0x5B1939: call    sub_588D90
0x5B193E: fstp    [esp+20h+var_10]
0x5B1942: fld     [esp+20h+var_10]
0x5B1946: mov     eax, [ebx]
0x5B1948: mov     esi, [eax+0Ch]
0x5B194B: sub     esp, 8
0x5B194E: fstp    [esp+28h+a2]; float
0x5B1952: mov     ecx, edi
0x5B1954: fld     [esp+28h+arg_0]
0x5B1958: fstp    [esp+28h+var_28]; float
0x5B195B: call    sub_588CF0
0x5B1960: sub     esp, 8
0x5B1963: fstp    [esp+30h+var_2C]; float
0x5B1967: fld     [esp+30h+arg_4]
0x5B196B: fstp    [esp+30h+var_30]; float
0x5B196E: push    esi; int
0x5B196F: call    sub_57BBF0
0x5B1974: add     esp, 14h
0x5B1977: pop     ebx
0x5B1978: pop     edi
0x5B1979: pop     esi
0x5B197A: pop     ebp
0x5B197B: add     esp, 10h
0x5B197E: retn    8
0x5B1981: lea     ecx, [esi+38h]
0x5B1984: xor     edx, edx
0x5B1986: test    ecx, ecx
0x5B1988: jz      short loc_5B19A4
0x5B198A: lea     ebx, [ebx+0]
0x5B1990: mov     ebx, [ecx]
0x5B1992: mov     ecx, [ecx+4]
0x5B1995: add     edx, 1
0x5B1998: cmp     edx, eax
0x5B199A: jz      short loc_5B19A0
0x5B199C: test    ecx, ecx
0x5B199E: jnz     short loc_5B1990
0x5B19A0: test    ebx, ebx
0x5B19A2: jnz     short loc_5B19BB
0x5B19A4: push    offset aSpellItemIndex; "Spell item index did was not in saved l"...
0x5B19A9: call    PrintError
0x5B19AE: add     esp, 4
0x5B19B1: pop     ebx
0x5B19B2: pop     edi
0x5B19B3: pop     esi
0x5B19B4: pop     ebp
0x5B19B5: add     esp, 10h
0x5B19B8: retn    8
0x5B19BB: mov     ecx, [esi+4]
0x5B19BE: call    sub_588D90
0x5B19C3: fstp    [esp+20h+var_10]
0x5B19C7: fld     [esp+20h+var_10]
0x5B19CB: push    ecx
0x5B19CC: fstp    [esp+24h+a2]; float
0x5B19CF: push    0; int
0x5B19D1: fld     [esp+28h+arg_0]
0x5B19D5: push    ecx
0x5B19D6: mov     ecx, edi
0x5B19D8: fstp    [esp+2Ch+var_2C]; float
0x5B19DB: call    sub_588CF0
0x5B19E0: sub     esp, 8
0x5B19E3: fstp    [esp+34h+var_30]; float
0x5B19E7: add     ebx, 18h
0x5B19EA: fld     [esp+34h+arg_4]
0x5B19EE: fstp    [esp+34h+var_34]; float
0x5B19F1: push    ebx; int
0x5B19F2: call    sub_57BB20
0x5B19F7: add     esp, 18h
0x5B19FA: pop     ebx
0x5B19FB: pop     edi
0x5B19FC: pop     esi
0x5B19FD: pop     ebp
0x5B19FE: add     esp, 10h
0x5B1A01: retn    8
