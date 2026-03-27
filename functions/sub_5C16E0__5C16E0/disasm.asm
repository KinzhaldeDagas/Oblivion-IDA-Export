0x5C16E0: sub     esp, 10Ch
0x5C16E6: mov     eax, ds:0B30AACh
0x5C16EB: xor     eax, esp
0x5C16ED: mov     [esp+10Ch+var_4], eax
0x5C16F4: push    esi
0x5C16F5: mov     esi, [esp+110h+a1]
0x5C16FC: push    edi
0x5C16FD: push    103h
0x5C1702: lea     eax, [esp+118h+var_108+1]
0x5C1706: push    0
0x5C1708: push    eax
0x5C1709: mov     [esp+120h+var_108], 0
0x5C170E: call    __memset
0x5C1713: add     esp, 0Ch
0x5C1716: cmp     [esp+114h+arg_4], 0
0x5C171E: jz      loc_5C184B
0x5C1724: test    esi, esi
0x5C1726: jz      loc_5C184B
0x5C172C: movzx   eax, byte ptr [esi+4]
0x5C1730: add     eax, 0FFFFFFEBh; switch 22 cases
0x5C1733: cmp     eax, 15h
0x5C1736: ja      short def_5C173F; jumptable 005C173F default case, cases 22-24,26,28-32,34-37,41
0x5C1738: movzx   ecx, ds:byte_5C18E0[eax]
0x5C173F: jmp     ds:jpt_5C173F[ecx*4]; switch jump
0x5C1746: mov     edx, ds:0B38BA0h; jumptable 005C173F case 25
0x5C174C: push    edx
0x5C174D: push    esi; a1
0x5C174E: call    TESFullName_GetNameForForm
0x5C1753: add     esp, 4
0x5C1756: jmp     loc_5C17EE
0x5C175B: lea     ecx, [esi+30h]; jumptable 005C173F case 40
0x5C175E: call    EffectItemList_AllEffectsHostile
0x5C1763: test    al, al
0x5C1765: jnz     loc_5C1801; jumptable 005C173F cases 21,27,38,39,42
0x5C176B: mov     ecx, ds:0B38BA0h
0x5C1771: push    ecx
0x5C1772: push    esi; a1
0x5C1773: call    TESFullName_GetNameForForm
0x5C1778: add     esp, 4
0x5C177B: push    eax
0x5C177C: push    offset aSS; "%s %s"
0x5C1781: lea     edx, [esp+120h+var_108]
0x5C1785: push    edx
0x5C1786: jmp     short loc_5C17F9
0x5C1788: mov     ecx, ds:0B333C4h; jumptable 005C173F case 33
0x5C178E: mov     eax, [ecx]
0x5C1790: mov     edx, [eax+380h]
0x5C1796: call    edx
0x5C1798: test    eax, eax
0x5C179A: jz      short def_5C173F; jumptable 005C173F default case, cases 22-24,26,28-32,34-37,41
0x5C179C: mov     ecx, ds:0B333C4h
0x5C17A2: mov     eax, [ecx]
0x5C17A4: mov     edx, [eax+18Ch]
0x5C17AA: call    edx
0x5C17AC: test    eax, eax
0x5C17AE: jnz     short loc_5C1801; jumptable 005C173F cases 21,27,38,39,42
0x5C17B0: cmp     [esp+114h+arg_8], 1; jumptable 005C173F default case, cases 22-24,26,28-32,34-37,41
0x5C17B8: mov     edi, ds:0B38B90h
0x5C17BE: jz      short loc_5C17C6
0x5C17C0: mov     edi, ds:0B38B98h
0x5C17C6: push    0; int
0x5C17C8: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x5C17CD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C17D2: push    0; int
0x5C17D4: push    esi; void *
0x5C17D5: call    OblivionDynamicCast
0x5C17DA: add     esp, 14h
0x5C17DD: test    eax, eax
0x5C17DF: jz      short loc_5C17E8
0x5C17E1: mov     eax, [eax+4]
0x5C17E4: test    eax, eax
0x5C17E6: jnz     short loc_5C17ED
0x5C17E8: mov     eax, offset EmptyString
0x5C17ED: push    edi
0x5C17EE: push    eax
0x5C17EF: push    offset aSS; "%s %s"
0x5C17F4: lea     eax, [esp+120h+var_108]
0x5C17F8: push    eax
0x5C17F9: call    __sprintf
0x5C17FE: add     esp, 10h
0x5C1801: lea     eax, [esp+114h+var_108]; jumptable 005C173F cases 21,27,38,39,42
0x5C1805: lea     edx, [eax+1]
0x5C1808: mov     cl, [eax]
0x5C180A: add     eax, 1
0x5C180D: test    cl, cl
0x5C180F: jnz     short loc_5C1808
0x5C1811: sub     eax, edx
0x5C1813: jz      loc_5C18B3
0x5C1819: fld     dword ptr ds:0A379B4h
0x5C181F: push    0; int
0x5C1821: push    0; int
0x5C1823: push    ecx
0x5C1824: lea     ecx, [esp+120h+var_108]
0x5C1828: fstp    [esp+120h+var_120]; float
0x5C182B: push    ecx; int
0x5C182C: call    QueueUIMessage
0x5C1831: add     esp, 10h
0x5C1834: pop     edi
0x5C1835: pop     esi
0x5C1836: mov     ecx, [esp+10Ch+var_4]
0x5C183D: xor     ecx, esp
0x5C183F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5C1844: add     esp, 10Ch
0x5C184A: retn
0x5C184B: push    416h
0x5C1850: call    Menu_GetOpenMenuTile
0x5C1855: add     esp, 4
0x5C1858: test    eax, eax
0x5C185A: jz      short loc_5C18B3
0x5C185C: mov     ecx, eax
0x5C185E: call    Tile_GetParentMenu
0x5C1863: mov     edi, eax
0x5C1865: test    edi, edi
0x5C1867: jz      short loc_5C18B3
0x5C1869: test    esi, esi
0x5C186B: jz      short loc_5C1880
0x5C186D: push    esi; a1
0x5C186E: call    TESFullName_GetNameForForm
0x5C1873: push    eax
0x5C1874: push    offset aS; "%s"
0x5C1879: lea     edx, [esp+120h+var_108]
0x5C187D: push    edx
0x5C187E: jmp     short loc_5C1899
0x5C1880: call    sub_5C1100
0x5C1885: add     eax, 1
0x5C1888: push    eax
0x5C1889: mov     eax, ds:0B38B88h
0x5C188E: push    eax
0x5C188F: push    offset aSD_0; "%s %d"
0x5C1894: lea     ecx, [esp+120h+var_108]
0x5C1898: push    ecx
0x5C1899: call    __sprintf
0x5C189E: mov     ecx, [edi+28h]
0x5C18A1: add     esp, 10h
0x5C18A4: lea     edx, [esp+114h+var_108]
0x5C18A8: push    edx
0x5C18A9: push    0FDEh
0x5C18AE: call    Tile_SetString
0x5C18B3: mov     ecx, [esp+114h+var_4]
0x5C18BA: pop     edi
0x5C18BB: pop     esi
0x5C18BC: xor     ecx, esp
0x5C18BE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5C18C3: add     esp, 10Ch
0x5C18C9: retn
