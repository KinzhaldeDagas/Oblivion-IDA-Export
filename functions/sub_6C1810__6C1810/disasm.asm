0x6C1810: push    0FFFFFFFFh
0x6C1812: push    offset SEH_6CED50
0x6C1817: mov     eax, large fs:0
0x6C181D: push    eax
0x6C181E: sub     esp, 8
0x6C1821: push    ebx
0x6C1822: push    ebp
0x6C1823: push    esi
0x6C1824: push    edi
0x6C1825: mov     eax, ds:0B30AACh
0x6C182A: xor     eax, esp
0x6C182C: push    eax
0x6C182D: lea     eax, [esp+28h+var_C]
0x6C1831: mov     large fs:0, eax
0x6C1837: mov     edi, [esp+28h+arg_8]
0x6C183B: fld     [esp+28h+arg_0]
0x6C183F: mov     eax, [esp+28h+arg_4]
0x6C1843: mov     edx, [edi]
0x6C1845: mov     ebp, [eax]
0x6C1847: push    1Ch; char
0x6C1849: lea     ecx, [esp+2Ch+var_14]
0x6C184D: push    ecx; int
0x6C184E: push    edx; int
0x6C184F: push    ebp; int
0x6C1850: push    ecx
0x6C1851: fstp    [esp+3Ch+var_3C]; float
0x6C1854: call    sub_6D31B0
0x6C1859: add     esp, 14h
0x6C185C: test    al, al
0x6C185E: jz      loc_6C19AC
0x6C1864: mov     esi, [edi]
0x6C1866: add     esi, 1
0x6C1869: xor     ecx, ecx
0x6C186B: mov     eax, esi
0x6C186D: mov     edx, 1Ch
0x6C1872: mul     edx
0x6C1874: seto    cl
0x6C1877: neg     ecx
0x6C1879: or      ecx, eax
0x6C187B: xor     eax, eax
0x6C187D: add     ecx, 4
0x6C1880: setb    al
0x6C1883: neg     eax
0x6C1885: or      eax, ecx
0x6C1887: push    eax; Size
0x6C1888: call    FormHeapAlloc
0x6C188D: add     esp, 4
0x6C1890: mov     [esp+28h+var_10], eax
0x6C1894: test    eax, eax
0x6C1896: mov     [esp+28h+var_4], 0
0x6C189E: jz      short loc_6C18BC
0x6C18A0: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C18A5: push    offset sub_7616D0; a4
0x6C18AA: push    esi; size
0x6C18AB: lea     ebx, [eax+4]
0x6C18AE: push    1Ch; a2
0x6C18B0: push    ebx; a1
0x6C18B1: mov     [eax], esi
0x6C18B3: call    ArrayConstructor
0x6C18B8: mov     esi, ebx
0x6C18BA: jmp     short loc_6C18BE
0x6C18BC: xor     esi, esi
0x6C18BE: mov     eax, [esp+28h+var_14]
0x6C18C2: lea     ecx, ds:0[eax*8]
0x6C18C9: sub     ecx, eax
0x6C18CB: add     ecx, ecx
0x6C18CD: add     ecx, ecx
0x6C18CF: push    ecx; Size
0x6C18D0: push    ebp; Src
0x6C18D1: push    esi; Dst
0x6C18D2: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6C18DA: call    _memcpy
0x6C18DF: mov     ecx, [edi]
0x6C18E1: mov     edx, [esp+34h+var_14]
0x6C18E5: add     esp, 0Ch
0x6C18E8: cmp     ecx, edx
0x6C18EA: jbe     short loc_6C191A
0x6C18EC: lea     eax, ds:0[edx*8]
0x6C18F3: sub     eax, edx
0x6C18F5: sub     ecx, edx
0x6C18F7: lea     edx, ds:0[ecx*8]
0x6C18FE: sub     edx, ecx
0x6C1900: add     edx, edx
0x6C1902: add     eax, eax
0x6C1904: add     eax, eax
0x6C1906: add     edx, edx
0x6C1908: push    edx; Size
0x6C1909: lea     ecx, [eax+ebp]
0x6C190C: push    ecx; Src
0x6C190D: lea     edx, [eax+esi+1Ch]
0x6C1911: push    edx; Dst
0x6C1912: call    _memcpy
0x6C1917: add     esp, 0Ch
0x6C191A: mov     eax, [edi]
0x6C191C: fld     [esp+28h+arg_0]
0x6C1920: push    1Ch; char
0x6C1922: push    eax; int
0x6C1923: push    3; int
0x6C1925: push    ebp; int
0x6C1926: push    ecx
0x6C1927: fstp    [esp+3Ch+var_3C]; float
0x6C192A: call    sub_6BB4D0
0x6C192F: mov     eax, [esp+3Ch+var_14]
0x6C1933: fstp    [esp+3Ch+var_10]
0x6C1937: fld     [esp+3Ch+arg_0]
0x6C193B: lea     ecx, ds:0[eax*8]
0x6C1942: sub     ecx, eax
0x6C1944: lea     eax, [esi+ecx*4]
0x6C1947: fstp    dword ptr [eax]
0x6C1949: add     esp, 14h
0x6C194C: fld     [esp+28h+var_10]
0x6C1950: fstp    dword ptr [eax+4]
0x6C1953: fldz
0x6C1955: fst     dword ptr [eax+8]
0x6C1958: fst     dword ptr [eax+0Ch]
0x6C195B: fstp    dword ptr [eax+10h]
0x6C195E: add     dword ptr [edi], 1
0x6C1961: test    ebp, ebp
0x6C1963: jz      short loc_6C1982
0x6C1965: mov     edx, [ebp-4]
0x6C1968: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C196D: lea     ebx, [ebp-4]
0x6C1970: push    edx; int
0x6C1971: push    1Ch; unsigned int
0x6C1973: push    ebp; void *
0x6C1974: call    $LN21
0x6C1979: push    ebx
0x6C197A: call    FormHeapFree
0x6C197F: add     esp, 4
0x6C1982: mov     eax, [esp+28h+arg_4]
0x6C1986: mov     [eax], esi
0x6C1988: mov     ecx, [edi]
0x6C198A: push    1Ch
0x6C198C: push    ecx
0x6C198D: push    esi
0x6C198E: call    sub_6C1650
0x6C1993: add     esp, 0Ch
0x6C1996: mov     al, 1
0x6C1998: mov     ecx, [esp+28h+var_C]
0x6C199C: mov     large fs:0, ecx
0x6C19A3: pop     ecx
0x6C19A4: pop     edi
0x6C19A5: pop     esi
0x6C19A6: pop     ebp
0x6C19A7: pop     ebx
0x6C19A8: add     esp, 14h
0x6C19AB: retn
0x6C19AC: xor     al, al
0x6C19AE: mov     ecx, [esp+28h+var_C]
0x6C19B2: mov     large fs:0, ecx
0x6C19B9: pop     ecx
0x6C19BA: pop     edi
0x6C19BB: pop     esi
0x6C19BC: pop     ebp
0x6C19BD: pop     ebx
0x6C19BE: add     esp, 14h
0x6C19C1: retn
