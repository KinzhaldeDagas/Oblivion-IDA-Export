0x5A17B0: push    esi; ArgList
0x5A17B1: mov     esi, ecx
0x5A17B3: cmp     dword ptr [esi+3Ch], 0
0x5A17B7: jnz     short loc_5A17C6
0x5A17B9: push    offset aPenchantmentna; "pEnchantmentName is NULL"
0x5A17BE: call    PrintError
0x5A17C3: add     esp, 4
0x5A17C6: cmp     dword ptr [esi+44h], 0
0x5A17CA: jnz     short loc_5A17D9
0x5A17CC: push    offset aPusesiconIsNul; "pUsesIcon is NULL"
0x5A17D1: call    PrintError
0x5A17D6: add     esp, 4
0x5A17D9: cmp     dword ptr [esi+50h], 0
0x5A17DD: jnz     short loc_5A17EC
0x5A17DF: push    offset aPenchantmentic; "pEnchantmentIcon is NULL"
0x5A17E4: call    PrintError
0x5A17E9: add     esp, 4
0x5A17EC: cmp     dword ptr [esi+48h], 0
0x5A17F0: jnz     short loc_5A17FF
0x5A17F2: push    offset aPenchantmentgo; "pEnchantmentGoldCost is NULL"
0x5A17F7: call    PrintError
0x5A17FC: add     esp, 4
0x5A17FF: cmp     dword ptr [esi+4Ch], 0
0x5A1803: jnz     short loc_5A1812
0x5A1805: push    offset aPenchantmentgo; "pEnchantmentGoldCost is NULL"
0x5A180A: call    PrintError
0x5A180F: add     esp, 4
0x5A1812: cmp     dword ptr [esi+54h], 0
0x5A1816: jnz     short loc_5A1825
0x5A1818: push    offset aPknowneffectli; "pKnownEffectList is NULL"
0x5A181D: call    PrintError
0x5A1822: add     esp, 4
0x5A1825: cmp     dword ptr [esi+58h], 0
0x5A1829: jnz     short loc_5A1838
0x5A182B: push    offset aPaddedeffectli; "pAddedEffectList is NULL"
0x5A1830: call    PrintError
0x5A1835: add     esp, 4
0x5A1838: cmp     dword ptr [esi+5Ch], 0
0x5A183C: jnz     short loc_5A184B
0x5A183E: push    offset aPfocusIsNull; "pFocus is NULL"
0x5A1843: call    PrintError
0x5A1848: add     esp, 4
0x5A184B: cmp     dword ptr [esi+60h], 0
0x5A184F: jnz     short loc_5A185E
0x5A1851: push    offset aPknowneffectsc; "pKnownEffectScroll is NULL"
0x5A1856: call    PrintError
0x5A185B: add     esp, 4
0x5A185E: cmp     dword ptr [esi+64h], 0
0x5A1862: jnz     short loc_5A1871
0x5A1864: push    offset aPknowneffectma; "pKnownEffectMarker is NULL"
0x5A1869: call    PrintError
0x5A186E: add     esp, 4
0x5A1871: cmp     dword ptr [esi+68h], 0
0x5A1875: jnz     short loc_5A1884
0x5A1877: push    offset aPaddedeffectsc; "pAddedEffectScroll is NULL"
0x5A187C: call    PrintError
0x5A1881: add     esp, 4
0x5A1884: cmp     dword ptr [esi+6Ch], 0
0x5A1888: jnz     short loc_5A1897
0x5A188A: push    offset aPaddedeffectma; "pAddedEffectMarker is NULL"
0x5A188F: call    PrintError
0x5A1894: add     esp, 4
0x5A1897: cmp     dword ptr [esi+70h], 0
0x5A189B: jnz     short loc_5A18AA
0x5A189D: push    offset aPcreatebuttonI; "pCreateButton is NULL"
0x5A18A2: call    PrintError
0x5A18A7: add     esp, 4
0x5A18AA: cmp     dword ptr [esi+74h], 0
0x5A18AE: jnz     short loc_5A18BD
0x5A18B0: push    offset aPexitbuttonIsN; "pExitButton is NULL"
0x5A18B5: call    PrintError
0x5A18BA: add     esp, 4
0x5A18BD: cmp     dword ptr [esi+78h], 0
0x5A18C1: jnz     short loc_5A18D0
0x5A18C3: push    offset aPknowneffect_0; "pKnownEffectListText is NULL"
0x5A18C8: call    PrintError
0x5A18CD: add     esp, 4
0x5A18D0: cmp     dword ptr [esi+7Ch], 0
0x5A18D4: jnz     short loc_5A18E3
0x5A18D6: push    offset aPaddedeffect_0; "pAddedEffectListText is NULL"
0x5A18DB: call    PrintError
0x5A18E0: add     esp, 4
0x5A18E3: cmp     dword ptr [esi+80h], 0
0x5A18EA: jnz     short loc_5A18F9
0x5A18EC: push    offset aPitemrectIsNul; "pItemRect is NULL"
0x5A18F1: call    PrintError
0x5A18F6: add     esp, 4
0x5A18F9: cmp     dword ptr [esi+84h], 0
0x5A1900: jnz     short loc_5A190F
0x5A1902: push    offset aPsoulgemrectIs; "pSoulGemRect is NULL"
0x5A1907: call    PrintError
0x5A190C: add     esp, 4
0x5A190F: cmp     dword ptr [esi+3Ch], 0
0x5A1913: jz      short loc_5A1985
0x5A1915: cmp     dword ptr [esi+44h], 0
0x5A1919: jz      short loc_5A1985
0x5A191B: cmp     dword ptr [esi+50h], 0
0x5A191F: jz      short loc_5A1985
0x5A1921: cmp     dword ptr [esi+48h], 0
0x5A1925: jz      short loc_5A1985
0x5A1927: cmp     dword ptr [esi+4Ch], 0
0x5A192B: jz      short loc_5A1985
0x5A192D: cmp     dword ptr [esi+54h], 0
0x5A1931: jz      short loc_5A1985
0x5A1933: cmp     dword ptr [esi+58h], 0
0x5A1937: jz      short loc_5A1985
0x5A1939: cmp     dword ptr [esi+5Ch], 0
0x5A193D: jz      short loc_5A1985
0x5A193F: cmp     dword ptr [esi+60h], 0
0x5A1943: jz      short loc_5A1985
0x5A1945: cmp     dword ptr [esi+64h], 0
0x5A1949: jz      short loc_5A1985
0x5A194B: cmp     dword ptr [esi+68h], 0
0x5A194F: jz      short loc_5A1985
0x5A1951: cmp     dword ptr [esi+6Ch], 0
0x5A1955: jz      short loc_5A1985
0x5A1957: cmp     dword ptr [esi+70h], 0
0x5A195B: jz      short loc_5A1985
0x5A195D: cmp     dword ptr [esi+74h], 0
0x5A1961: jz      short loc_5A1985
0x5A1963: cmp     dword ptr [esi+78h], 0
0x5A1967: jz      short loc_5A1985
0x5A1969: cmp     dword ptr [esi+7Ch], 0
0x5A196D: jz      short loc_5A1985
0x5A196F: cmp     dword ptr [esi+80h], 0
0x5A1976: jz      short loc_5A1985
0x5A1978: cmp     dword ptr [esi+84h], 0
0x5A197F: jz      short loc_5A1985
0x5A1981: mov     al, 1
0x5A1983: pop     esi
0x5A1984: retn
0x5A1985: xor     al, al
0x5A1987: pop     esi
0x5A1988: retn
