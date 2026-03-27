0x4B1600: push    0FFFFFFFFh
0x4B1602: push    offset SEH_4B1600
0x4B1607: mov     eax, large fs:0
0x4B160D: push    eax
0x4B160E: sub     esp, 134h
0x4B1614: mov     eax, ds:0B30AACh
0x4B1619: xor     eax, esp
0x4B161B: mov     [esp+140h+var_10], eax
0x4B1622: push    ebx
0x4B1623: push    ebp
0x4B1624: push    esi
0x4B1625: push    edi
0x4B1626: mov     eax, ds:0B30AACh
0x4B162B: xor     eax, esp
0x4B162D: push    eax
0x4B162E: lea     eax, [esp+154h+var_C]
0x4B1635: mov     large fs:0, eax
0x4B163B: mov     ebp, [esp+154h+arg_0]
0x4B1642: test    ebp, ebp
0x4B1644: mov     esi, [esp+154h+arg_4]
0x4B164B: mov     [esp+154h+var_140], ecx
0x4B164F: jz      loc_4B1A17
0x4B1655: test    esi, esi
0x4B1657: jz      loc_4B1A17
0x4B165D: mov     eax, [ebp+0]
0x4B1660: mov     edx, [eax+170h]
0x4B1666: mov     ecx, ebp
0x4B1668: call    edx
0x4B166A: mov     edi, eax
0x4B166C: mov     eax, [esp+154h+var_140]
0x4B1670: mov     bl, 20h ; ' '
0x4B1672: test    [eax+7Ch], bl
0x4B1675: jnz     short loc_4B16AF
0x4B1677: mov     ecx, ebp; this
0x4B1679: call    TESObjectREFR_GetParentCell
0x4B167E: test    eax, eax
0x4B1680: jz      short loc_4B16F4
0x4B1682: mov     edx, [ebp+0]
0x4B1685: mov     eax, [edx+174h]
0x4B168B: mov     ecx, ebp
0x4B168D: call    eax
0x4B168F: fld     dword ptr [eax+8]
0x4B1692: mov     ecx, ebp; this
0x4B1694: fstp    [esp+154h+var_138]
0x4B1698: call    TESObjectREFR_GetParentCell
0x4B169D: mov     ecx, eax
0x4B169F: call    TESObjectCELL_GetWaterHeight
0x4B16A4: fcomp   [esp+154h+var_138]
0x4B16A8: fnstsw  ax
0x4B16AA: test    ah, 41h
0x4B16AD: jnz     short loc_4B16F4
0x4B16AF: cmp     byte ptr [edi+4], 1Ah
0x4B16B3: jnz     short loc_4B16D4
0x4B16B5: push    esi
0x4B16B6: call    sub_4DE320
0x4B16BB: add     esp, 4
0x4B16BE: test    al, al
0x4B16C0: jz      short loc_4B16D4
0x4B16C2: push    1
0x4B16C4: mov     ecx, ebp
0x4B16C6: call    sub_46AB60
0x4B16CB: push    esi
0x4B16CC: call    sub_4B1580
0x4B16D1: add     esp, 4
0x4B16D4: mov     edx, [ebp+0]
0x4B16D7: mov     eax, [edx+190h]
0x4B16DD: mov     ecx, ebp
0x4B16DF: call    eax
0x4B16E1: test    al, al
0x4B16E3: mov     eax, [esp+154h+var_140]
0x4B16E7: jnz     short loc_4B16F8
0x4B16E9: test    [eax+7Ch], bl
0x4B16EC: jnz     loc_4B1A17
0x4B16F2: jmp     short loc_4B16F8
0x4B16F4: mov     eax, [esp+154h+var_140]
0x4B16F8: test    byte ptr [eax+7Ch], 4
0x4B16FC: movzx   ecx, byte ptr [eax+78h]
0x4B1700: mov     [esp+154h+var_13C], ecx
0x4B1704: movzx   edx, byte ptr [eax+79h]
0x4B1708: fild    [esp+154h+var_13C]
0x4B170C: fld     qword ptr ds:0A3DDD8h
0x4B1712: mov     [esp+154h+var_13C], edx
0x4B1716: movzx   ecx, byte ptr [eax+7Ah]
0x4B171A: fdiv    st(1), st
0x4B171C: fxch    st(1)
0x4B171E: fstp    [esp+154h+var_130]
0x4B1722: fild    [esp+154h+var_13C]
0x4B1726: mov     [esp+154h+var_13C], ecx
0x4B172A: fdiv    st, st(1)
0x4B172C: fstp    [esp+154h+var_12C]
0x4B1730: fild    [esp+154h+var_13C]
0x4B1734: fdivrp  st(1), st
0x4B1736: fstp    [esp+154h+var_128]
0x4B173A: jz      short loc_4B178A
0x4B173C: fld     [esp+154h+var_130]
0x4B1740: fchs
0x4B1742: fstp    [esp+154h+var_13C]
0x4B1746: fld     [esp+154h+var_12C]
0x4B174A: fchs
0x4B174C: fstp    [esp+154h+var_118]
0x4B1750: fld     [esp+154h+var_128]
0x4B1754: fchs
0x4B1756: fstp    dword ptr [esp+154h+var_138]
0x4B175A: fld     [esp+154h+var_13C]
0x4B175E: fstp    [esp+154h+var_124]
0x4B1762: mov     edx, [esp+154h+var_124]
0x4B1766: fld     [esp+154h+var_118]
0x4B176A: mov     [esp+154h+var_130], edx
0x4B176E: fstp    [esp+154h+var_120]
0x4B1772: mov     eax, [esp+154h+var_120]
0x4B1776: fld     dword ptr [esp+154h+var_138]
0x4B177A: mov     [esp+154h+var_12C], eax
0x4B177E: fstp    [esp+154h+var_11C]
0x4B1782: mov     ecx, [esp+154h+var_11C]
0x4B1786: mov     [esp+154h+var_128], ecx
0x4B178A: mov     edx, [esi]
0x4B178C: mov     eax, [edx+58h]
0x4B178F: push    offset aAttachlight; "AttachLight"
0x4B1794: mov     ecx, esi
0x4B1796: call    eax
0x4B1798: test    eax, eax
0x4B179A: jz      short loc_4B17AB
0x4B179C: mov     edx, [eax]
0x4B179E: mov     ecx, eax
0x4B17A0: mov     eax, [edx+8]
0x4B17A3: call    eax
0x4B17A5: mov     edi, eax
0x4B17A7: test    edi, edi
0x4B17A9: jnz     short loc_4B17AD
0x4B17AB: mov     edi, esi
0x4B17AD: movzx   eax, word ptr [edi+0B6h]
0x4B17B4: xor     ebx, ebx
0x4B17B6: test    eax, eax
0x4B17B8: jbe     short loc_4B1810
0x4B17BA: cmp     eax, ebx
0x4B17BC: jbe     short loc_4B1802
0x4B17BE: mov     ecx, [edi+0B0h]
0x4B17C4: mov     esi, [ecx+ebx*4]
0x4B17C7: test    esi, esi
0x4B17C9: jz      short loc_4B1802
0x4B17CB: mov     edx, [esi]
0x4B17CD: mov     eax, [edx+4]
0x4B17D0: mov     ecx, esi
0x4B17D2: call    eax
0x4B17D4: test    eax, eax
0x4B17D6: jz      short loc_4B17F2
0x4B17D8: jmp     short loc_4B17E0
0x4B17DA: align 10h
0x4B17E0: cmp     eax, offset dword_B3FD80
0x4B17E5: jz      loc_4B187C
0x4B17EB: mov     eax, [eax+4]
0x4B17EE: test    eax, eax
0x4B17F0: jnz     short loc_4B17E0
0x4B17F2: xor     al, al
0x4B17F4: neg     al
0x4B17F6: sbb     eax, eax
0x4B17F8: and     eax, esi
0x4B17FA: mov     esi, eax
0x4B17FC: jnz     loc_4B18BC
0x4B1802: movzx   eax, word ptr [edi+0B6h]
0x4B1809: add     ebx, 1
0x4B180C: cmp     eax, ebx
0x4B180E: ja      short loc_4B17BE
0x4B1810: mov     ebx, [esp+154h+var_140]
0x4B1814: mov     edx, [ebx]
0x4B1816: mov     eax, [edx+0D4h]
0x4B181C: mov     ecx, ebx
0x4B181E: call    eax
0x4B1820: push    eax; Format
0x4B1821: push    offset aSPtlight; "%s PtLight"
0x4B1826: lea     ecx, [esp+15Ch+Dest]
0x4B182A: push    104h; Count
0x4B182F: push    ecx; Dest
0x4B1830: call    __snprintf
0x4B1835: push    114h; Size
0x4B183A: call    FormHeapAlloc
0x4B183F: mov     esi, eax
0x4B1841: add     esp, 14h
0x4B1844: mov     dword ptr [esp+154h+var_138], esi
0x4B1848: test    esi, esi
0x4B184A: mov     [esp+154h+var_4], 0
0x4B1855: jz      short loc_4B1883
0x4B1857: mov     ecx, esi; this
0x4B1859: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x4B185E: fldz
0x4B1860: fst     dword ptr [esi+108h]
0x4B1866: mov     dword ptr [esi], offset ??_7NiPointLight@@6B@; const NiPointLight::`vftable'
0x4B186C: fld1
0x4B186E: fstp    dword ptr [esi+10Ch]
0x4B1874: fstp    dword ptr [esi+110h]
0x4B187A: jmp     short loc_4B1885
0x4B187C: mov     al, 1
0x4B187E: jmp     loc_4B17F4
0x4B1883: xor     esi, esi
0x4B1885: lea     edx, [esp+154h+Dest]
0x4B1889: push    edx; Src
0x4B188A: mov     ecx, esi
0x4B188C: mov     [esp+158h+var_4], 0FFFFFFFFh
0x4B1897: call    NiObjectNET_SetName
0x4B189C: mov     eax, [edi]
0x4B189E: mov     edx, [eax+84h]
0x4B18A4: push    1
0x4B18A6: push    esi
0x4B18A7: mov     ecx, edi
0x4B18A9: call    edx
0x4B18AB: fldz
0x4B18AD: push    0; a3
0x4B18AF: push    ecx
0x4B18B0: mov     ecx, edi; this
0x4B18B2: fstp    [esp+15Ch+a2]; a2
0x4B18B5: call    NiAVObject_UpdateNiAVObject
0x4B18BA: jmp     short loc_4B18C0
0x4B18BC: mov     ebx, [esp+154h+var_140]
0x4B18C0: push    esi; a2
0x4B18C1: mov     ecx, ebp; this
0x4B18C3: call    sub_4DD130
0x4B18C8: mov     eax, ds:0B3FA90h
0x4B18CD: mov     [esi+0E0h], eax
0x4B18D3: mov     ecx, ds:0B3FA94h
0x4B18D9: mov     [esi+0E4h], ecx
0x4B18DF: mov     edx, ds:0B3FA98h
0x4B18E5: add     dword ptr [esi+0B8h], 1
0x4B18EC: mov     eax, [esi+0B8h]
0x4B18F2: mov     [esi+0E8h], edx
0x4B18F8: mov     ecx, ds:0B3FA90h
0x4B18FE: mov     [esi+0F8h], ecx
0x4B1904: mov     edx, ds:0B3FA94h
0x4B190A: mov     [esi+0FCh], edx
0x4B1910: mov     ecx, ds:0B3FA98h
0x4B1916: add     eax, 1
0x4B1919: mov     [esi+100h], ecx
0x4B191F: mov     [esi+0B8h], eax
0x4B1925: fild    dword ptr [ebx+74h]
0x4B1928: mov     edx, [ebx+74h]
0x4B192B: test    edx, edx
0x4B192D: jge     short loc_4B1935
0x4B192F: fadd    dword ptr ds:0A2FC78h
0x4B1935: fstp    dword ptr [esp+154h+var_138]
0x4B1939: add     eax, 2
0x4B193C: fld     dword ptr [esp+154h+var_138]
0x4B1940: xor     bl, bl
0x4B1942: fst     [esp+154h+var_124]
0x4B1946: mov     ecx, [esp+154h+var_124]
0x4B194A: mov     [esi+0F8h], ecx
0x4B1950: fst     [esp+154h+var_120]
0x4B1954: mov     edx, [esp+154h+var_120]
0x4B1958: fstp    [esp+154h+var_11C]
0x4B195C: mov     ecx, [esp+154h+var_11C]
0x4B1960: mov     [esi+0FCh], edx
0x4B1966: mov     edx, [esp+154h+var_130]
0x4B196A: mov     [esi+0ECh], edx
0x4B1970: mov     edx, [esp+154h+var_128]
0x4B1974: mov     [esi+100h], ecx
0x4B197A: mov     ecx, [esp+154h+var_12C]
0x4B197E: mov     [esi+0F0h], ecx
0x4B1984: mov     [esi+0F4h], edx
0x4B198A: mov     [esi+0B8h], eax
0x4B1990: cmp     ds:0B43384h, bl
0x4B1996: jz      short loc_4B19BD
0x4B1998: push    offset stru_B43400; lpCriticalSection
0x4B199D: call    dword ptr ds:0A2806Ch
0x4B19A3: call    dword ptr ds:0A2808Ch
0x4B19A9: mov     ebp, 1
0x4B19AE: add     ds:0B4347Ch, ebp
0x4B19B4: mov     ds:0B43478h, eax
0x4B19B9: mov     bl, 1
0x4B19BB: jmp     short loc_4B19C2
0x4B19BD: mov     ebp, 1
0x4B19C2: push    0
0x4B19C4: push    esi
0x4B19C5: push    0
0x4B19C7: call    GetShadowSceneNode
0x4B19CC: add     esp, 4
0x4B19CF: mov     ecx, eax
0x4B19D1: call    sub_7C6AE0
0x4B19D6: test    bl, bl
0x4B19D8: jz      short loc_4B19F7
0x4B19DA: sub     ds:0B4347Ch, ebp
0x4B19E0: jnz     short loc_4B19EC
0x4B19E2: mov     dword ptr ds:0B43478h, 0
0x4B19EC: push    offset stru_B43400; lpCriticalSection
0x4B19F1: call    dword ptr ds:0A28074h
0x4B19F7: mov     edi, [esp+154h+var_140]
0x4B19FB: mov     eax, [edi+74h]
0x4B19FE: mov     ecx, esi
0x4B1A00: call    sub_4B1210
0x4B1A05: fld     dword ptr [edi+88h]
0x4B1A0B: add     [esi+0B8h], ebp
0x4B1A11: fstp    dword ptr [esi+0DCh]
0x4B1A17: mov     ecx, dword ptr [esp+154h+var_C]
0x4B1A1E: mov     large fs:0, ecx
0x4B1A25: pop     ecx
0x4B1A26: pop     edi
0x4B1A27: pop     esi
0x4B1A28: pop     ebp
0x4B1A29: pop     ebx
0x4B1A2A: mov     ecx, [esp+140h+var_10]
0x4B1A31: xor     ecx, esp
0x4B1A33: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B1A38: add     esp, 140h
0x4B1A3E: retn    8
