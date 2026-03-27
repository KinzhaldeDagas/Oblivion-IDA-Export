0x6B1210: sub     esp, 88h
0x6B1216: mov     eax, ds:0B3C20Ch
0x6B121B: push    ebp
0x6B121C: xor     ebp, ebp
0x6B121E: cmp     eax, ds:0B16304h
0x6B1224: mov     [esp+8Ch+var_64], ebp
0x6B1228: mov     [esp+8Ch+var_70], ebp
0x6B122C: mov     [esp+8Ch+var_68], ebp
0x6B1230: mov     [esp+8Ch+var_81], 0
0x6B1235: jnb     loc_6B18AE
0x6B123B: cmp     ds:0B3C0F0h, ebp
0x6B1241: jnz     short loc_6B1252
0x6B1243: mov     ecx, ds:0B33398h
0x6B1249: mov     edx, [ecx+24h]
0x6B124C: mov     ds:0B3C0F0h, edx
0x6B1252: push    ebx
0x6B1253: mov     ebx, [esp+90h+arg_0]
0x6B125A: mov     eax, [ebx]
0x6B125C: mov     edx, [eax+174h]
0x6B1262: mov     ecx, ebx
0x6B1264: call    edx
0x6B1266: fld     dword ptr ds:0B162FCh
0x6B126C: cmp     byte ptr ds:0B333B8h, 0
0x6B1273: fstp    [esp+90h+var_88]
0x6B1277: mov     ecx, [eax]
0x6B1279: mov     [esp+90h+var_80], ecx
0x6B127D: mov     edx, [eax+4]
0x6B1280: mov     [esp+90h+var_7C], edx
0x6B1284: mov     eax, [eax+8]
0x6B1287: mov     [esp+90h+var_78], eax
0x6B128B: jz      short loc_6B129B
0x6B128D: fld     [esp+90h+var_88]
0x6B1291: fmul    qword ptr ds:0A2FAA0h
0x6B1297: fstp    [esp+90h+var_88]
0x6B129B: mov     eax, ds:0B3C0F0h
0x6B12A0: fld     dword ptr [eax+80h]
0x6B12A6: fstp    [esp+90h+var_5C]
0x6B12AA: fld     dword ptr [eax+84h]
0x6B12B0: fstp    [esp+90h+var_58]
0x6B12B4: fld     dword ptr [eax+88h]
0x6B12BA: fstp    [esp+90h+var_54]
0x6B12BE: fld     [esp+90h+var_5C]
0x6B12C2: fsub    [esp+90h+var_80]
0x6B12C6: fstp    [esp+90h+var_5C]
0x6B12CA: fld     [esp+90h+var_58]
0x6B12CE: fsub    [esp+90h+var_7C]
0x6B12D2: fstp    [esp+90h+var_58]
0x6B12D6: fld     [esp+90h+var_54]
0x6B12DA: fsub    [esp+90h+var_78]
0x6B12DE: fstp    [esp+90h+var_54]
0x6B12E2: fld     [esp+90h+var_58]
0x6B12E6: fld     [esp+90h+var_5C]
0x6B12EA: fld     [esp+90h+var_54]
0x6B12EE: fld     st(2)
0x6B12F0: fmulp   st(3), st
0x6B12F2: fld     st(1)
0x6B12F4: fmulp   st(2), st
0x6B12F6: fxch    st(2)
0x6B12F8: faddp   st(1), st
0x6B12FA: fld     st(1)
0x6B12FC: fmulp   st(2), st
0x6B12FE: faddp   st(1), st
0x6B1300: fstp    [esp+90h+var_74]
0x6B1304: fld     [esp+90h+var_74]
0x6B1308: call    __CIsqrt
0x6B130D: fstp    [esp+90h+var_74]
0x6B1311: fld     [esp+90h+var_74]
0x6B1315: fld     [esp+90h+var_88]
0x6B1319: fcompp
0x6B131B: fnstsw  ax
0x6B131D: test    ah, 5
0x6B1320: jnp     loc_6B18AD
0x6B1326: mov     edx, [ebx]
0x6B1328: mov     eax, [edx+190h]
0x6B132E: mov     ecx, ebx
0x6B1330: call    eax
0x6B1332: test    al, al
0x6B1334: jz      loc_6B18AD
0x6B133A: push    esi
0x6B133B: push    edi
0x6B133C: push    ebp; int
0x6B133D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6B1342: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6B1347: push    ebp; int
0x6B1348: push    ebx; void *
0x6B1349: call    OblivionDynamicCast
0x6B134E: mov     edi, eax
0x6B1350: add     esp, 14h
0x6B1353: mov     ecx, edi; this
0x6B1355: call    Actor_IsCreature
0x6B135A: test    al, al
0x6B135C: jz      loc_6B144D
0x6B1362: mov     edx, [ebx]
0x6B1364: mov     eax, [edx+170h]
0x6B136A: mov     ecx, ebx
0x6B136C: call    eax
0x6B136E: push    ebp; int
0x6B136F: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x6B1374: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6B1379: push    ebp; int
0x6B137A: push    eax; void *
0x6B137B: call    OblivionDynamicCast
0x6B1380: mov     ecx, [esp+0ACh+arg_4]
0x6B1387: add     esp, 14h
0x6B138A: push    ecx
0x6B138B: mov     ecx, eax
0x6B138D: call    sub_51CEC0
0x6B1392: cmp     eax, ebp
0x6B1394: jz      loc_6B18AB
0x6B139A: mov     ecx, ds:0B3C0F0h
0x6B13A0: cmp     ecx, ebp
0x6B13A2: jz      loc_6B18AB
0x6B13A8: mov     eax, [eax+0Ch]
0x6B13AB: push    1
0x6B13AD: push    410Ah
0x6B13B2: push    eax
0x6B13B3: call    OSGLobals_PlaySound
0x6B13B8: mov     esi, eax
0x6B13BA: cmp     esi, ebp
0x6B13BC: jz      loc_6B18AB
0x6B13C2: fld     [esp+98h+var_78]
0x6B13C6: sub     esp, 0Ch
0x6B13C9: fstp    [esp+0A4h+var_9C]; float
0x6B13CD: mov     ecx, esi
0x6B13CF: fld     [esp+0A4h+var_7C]
0x6B13D3: fstp    [esp+0A4h+var_A0]; float
0x6B13D7: fld     [esp+0A4h+var_80]
0x6B13DB: fstp    [esp+0A4h+var_A4]; float
0x6B13DE: call    sub_6B7360
0x6B13E3: mov     edx, [esi]
0x6B13E5: mov     ecx, ds:0B3C0F0h
0x6B13EB: push    ebx
0x6B13EC: push    edx
0x6B13ED: call    sub_6AC3E0
0x6B13F2: fld     dword ptr ds:0A52A74h
0x6B13F8: push    ecx
0x6B13F9: mov     ecx, esi
0x6B13FB: fstp    [esp+9Ch+var_9C]; float
0x6B13FE: call    sub_6B7280
0x6B1403: fld     dword ptr ds:0A57F50h
0x6B1409: push    ecx
0x6B140A: fstp    [esp+9Ch+var_9C]; float
0x6B140D: call    Rand5
0x6B1412: fadd    qword ptr ds:0A2F928h
0x6B1418: mov     ecx, esi
0x6B141A: fstp    [esp+9Ch+var_70]
0x6B141E: fld     [esp+9Ch+var_70]
0x6B1422: fstp    [esp+9Ch+var_9C]; float
0x6B1425: call    sub_6B7310
0x6B142A: push    ebp
0x6B142B: mov     ecx, esi
0x6B142D: call    sub_6B7190
0x6B1432: mov     ecx, esi; this
0x6B1434: call    sub_6B73E0
0x6B1439: push    esi
0x6B143A: call    FormHeapFree
0x6B143F: add     esp, 4
0x6B1442: pop     edi
0x6B1443: pop     esi
0x6B1444: pop     ebx
0x6B1445: pop     ebp
0x6B1446: add     esp, 88h
0x6B144C: retn
0x6B144D: mov     ecx, ds:0B333A0h
0x6B1453: mov     esi, [ecx+34h]
0x6B1456: cmp     esi, ebp
0x6B1458: mov     [esp+98h+var_88], ebp
0x6B145C: jnz     short loc_6B1484
0x6B145E: push    ebp; int
0x6B145F: call    TES__GetCurrentWorldspace
0x6B1464: fld     [esp+9Ch+var_7C]
0x6B1468: mov     ecx, ds:0B33A98h
0x6B146E: push    eax; int
0x6B146F: sub     esp, 8
0x6B1472: fstp    [esp+0A8h+var_A4]; float
0x6B1476: fld     [esp+0A8h+var_80]
0x6B147A: fstp    [esp+0A8h+var_A8]; float
0x6B147D: call    sub_44A270
0x6B1482: mov     esi, eax
0x6B1484: mov     ecx, edi
0x6B1486: xor     bl, bl
0x6B1488: call    Actor_IsSwimming
0x6B148D: test    al, al
0x6B148F: jnz     short loc_6B14DA
0x6B1491: fld     dword ptr ds:0A77830h
0x6B1497: push    ecx
0x6B1498: fstp    [esp+9Ch+var_9C]; float
0x6B149B: push    esi; int
0x6B149C: lea     eax, [esp+0A0h+var_80]
0x6B14A0: push    eax; int
0x6B14A1: mov     ecx, edi
0x6B14A3: call    Actor_IsUnderwater??
0x6B14A8: test    al, al
0x6B14AA: jz      short loc_6B14DA
0x6B14AC: mov     ecx, esi; this
0x6B14AE: call    TESObjectCELL_IsInterior
0x6B14B3: test    al, al
0x6B14B5: jz      short loc_6B14C2
0x6B14B7: movzx   ecx, byte ptr [esi+24h]
0x6B14BB: shr     ecx, 1
0x6B14BD: test    cl, 1
0x6B14C0: jnz     short loc_6B14D8
0x6B14C2: mov     ecx, esi; this
0x6B14C4: call    TESObjectCELL_IsInterior
0x6B14C9: test    al, al
0x6B14CB: jnz     short loc_6B14DA
0x6B14CD: mov     ecx, esi
0x6B14CF: call    sub_4CA6F0
0x6B14D4: test    al, al
0x6B14D6: jnz     short loc_6B14DA
0x6B14D8: mov     bl, 1
0x6B14DA: mov     edx, ds:0B333A0h
0x6B14E0: cmp     [edx+34h], ebp
0x6B14E3: jnz     loc_6B15A5
0x6B14E9: cmp     esi, ebp
0x6B14EB: jz      loc_6B15A5
0x6B14F1: mov     ecx, esi; this
0x6B14F3: call    sub_4CE3C0
0x6B14F8: test    eax, eax
0x6B14FA: jz      loc_6B15A5
0x6B1500: push    1
0x6B1502: lea     eax, [esp+9Ch+var_80]
0x6B1506: push    eax
0x6B1507: lea     ecx, [esp+0A0h+var_50]
0x6B150B: push    ecx
0x6B150C: mov     ecx, esi; this
0x6B150E: call    sub_4CE3C0
0x6B1513: mov     ecx, eax
0x6B1515: call    sub_4C3030
0x6B151A: mov     edx, dword ptr [esp+98h+var_14]
0x6B1521: mov     eax, [esp+98h+var_38]
0x6B1525: push    edx; __int16
0x6B1526: push    eax; float
0x6B1527: mov     ecx, esi; this
0x6B1529: call    sub_4CE3C0
0x6B152E: mov     ecx, eax
0x6B1530: call    sub_4C0190
0x6B1535: fldz
0x6B1537: test    bl, bl
0x6B1539: fstp    [esp+98h+var_74]
0x6B153D: mov     ebp, eax
0x6B153F: mov     [esp+98h+var_88], 0
0x6B1547: jz      short loc_6B1556
0x6B1549: mov     [esp+98h+var_88], 8
0x6B1551: jmp     loc_6B15D8
0x6B1556: test    edi, edi
0x6B1558: jz      short loc_6B1577
0x6B155A: mov     ecx, edi; this
0x6B155C: call    MobileObject_GetCharProxy
0x6B1561: test    eax, eax
0x6B1563: jz      short loc_6B1577
0x6B1565: mov     ecx, edi; this
0x6B1567: call    MobileObject_GetCharProxy
0x6B156C: add     eax, 1F0h
0x6B1571: cmp     dword ptr [eax+24h], 1Fh
0x6B1575: jnz     short loc_6B15C2
0x6B1577: test    ebp, ebp
0x6B1579: jz      short loc_6B15D8
0x6B157B: mov     ecx, ebp
0x6B157D: call    sub_4C8D10
0x6B1582: lea     edx, [esp+98h+var_74]
0x6B1586: mov     [esp+98h+var_88], eax
0x6B158A: push    edx
0x6B158B: lea     eax, [esp+9Ch+var_80]
0x6B158F: push    eax
0x6B1590: mov     ecx, esi
0x6B1592: call    sub_4D1E10
0x6B1597: test    al, al
0x6B1599: jz      short loc_6B15D8
0x6B159B: fld     [esp+98h+var_74]
0x6B159F: fstp    [esp+98h+var_78]
0x6B15A3: jmp     short loc_6B15D8
0x6B15A5: test    bl, bl
0x6B15A7: jz      short loc_6B15B3
0x6B15A9: mov     [esp+98h+var_88], 8
0x6B15B1: jmp     short loc_6B15D8
0x6B15B3: cmp     edi, ebp
0x6B15B5: jz      short loc_6B15D8
0x6B15B7: mov     ecx, edi; this
0x6B15B9: call    MobileObject_GetCharProxy
0x6B15BE: test    eax, eax
0x6B15C0: jz      short loc_6B15D8
0x6B15C2: mov     ecx, edi; this
0x6B15C4: call    MobileObject_GetCharProxy
0x6B15C9: mov     ecx, [eax+214h]
0x6B15CF: add     eax, 1F0h
0x6B15D4: mov     [esp+98h+var_88], ecx
0x6B15D8: push    5
0x6B15DA: mov     ecx, edi
0x6B15DC: call    sub_5E4330
0x6B15E1: mov     ebp, eax
0x6B15E3: or      ebx, 0FFFFFFFFh
0x6B15E6: test    ebp, ebp
0x6B15E8: jz      short loc_6B15EF
0x6B15EA: mov     ecx, [ebp+8]
0x6B15ED: jmp     short loc_6B15F1
0x6B15EF: xor     ecx, ecx
0x6B15F1: test    ecx, ecx
0x6B15F3: jz      short loc_6B15FD
0x6B15F5: call    TESObjectARMO_ISHeavyArmor
0x6B15FA: movzx   ebx, al
0x6B15FD: mov     ecx, edi
0x6B15FF: call    Actor_IsSneaking
0x6B1604: mov     ecx, [esp+98h+var_88]
0x6B1608: cmp     ecx, 0Fh
0x6B160B: jl      short loc_6B1610
0x6B160D: sub     ecx, 0Fh
0x6B1610: cmp     ecx, 1Eh; switch 31 cases
0x6B1613: ja      short def_6B161C; jumptable 006B161C default case, cases 1,3,6,7,10-13,15-29
0x6B1615: movzx   edx, ds:byte_6B18D8[ecx]
0x6B161C: jmp     ds:jpt_6B161C[edx*4]; switch jump
0x6B1623: mov     cl, al; jumptable 006B161C case 2
0x6B1625: neg     cl
0x6B1627: sbb     ecx, ecx
0x6B1629: and     ecx, 10h
0x6B162C: mov     esi, ecx
0x6B162E: jmp     short loc_6B1695
0x6B1630: mov     dl, al; jumptable 006B161C case 4
0x6B1632: neg     dl
0x6B1634: sbb     edx, edx
0x6B1636: and     edx, 10h
0x6B1639: add     edx, 1
0x6B163C: jmp     short loc_6B1693
0x6B163E: mov     cl, al; jumptable 006B161C cases 0,30
0x6B1640: neg     cl
0x6B1642: sbb     ecx, ecx
0x6B1644: and     ecx, 10h
0x6B1647: add     ecx, 3
0x6B164A: mov     esi, ecx
0x6B164C: jmp     short loc_6B1695
0x6B164E: mov     dl, al; jumptable 006B161C case 8
0x6B1650: neg     dl
0x6B1652: sbb     edx, edx
0x6B1654: and     edx, 10h
0x6B1657: add     edx, 4
0x6B165A: jmp     short loc_6B1693
0x6B165C: mov     cl, al; jumptable 006B161C case 9
0x6B165E: neg     cl
0x6B1660: sbb     ecx, ecx
0x6B1662: and     ecx, 10h
0x6B1665: add     ecx, 5
0x6B1668: mov     esi, ecx
0x6B166A: jmp     short loc_6B1695
0x6B166C: mov     dl, al; jumptable 006B161C case 14
0x6B166E: neg     dl
0x6B1670: sbb     edx, edx
0x6B1672: and     edx, 10h
0x6B1675: add     edx, 6
0x6B1678: jmp     short loc_6B1693
0x6B167A: mov     cl, al; jumptable 006B161C case 5
0x6B167C: neg     cl
0x6B167E: sbb     ecx, ecx
0x6B1680: and     ecx, 10h
0x6B1683: add     ecx, 2
0x6B1686: mov     esi, ecx
0x6B1688: jmp     short loc_6B1695
0x6B168A: mov     dl, al; jumptable 006B161C default case, cases 1,3,6,7,10-13,15-29
0x6B168C: neg     dl
0x6B168E: sbb     edx, edx
0x6B1690: and     edx, 10h
0x6B1693: mov     esi, edx
0x6B1695: mov     ecx, ebx
0x6B1697: sub     ecx, 0
0x6B169A: jz      short loc_6B16B8
0x6B169C: sub     ecx, 1
0x6B169F: jnz     short loc_6B16D1
0x6B16A1: test    al, al
0x6B16A3: jz      short loc_6B16AC
0x6B16A5: mov     eax, ds:0B36274h
0x6B16AA: jmp     short loc_6B16CD
0x6B16AC: mov     ecx, ds:0B36234h
0x6B16B2: mov     [esp+98h+var_68], ecx
0x6B16B6: jmp     short loc_6B16D1
0x6B16B8: test    al, al
0x6B16BA: jz      short loc_6B16C8
0x6B16BC: mov     edx, ds:0B36278h
0x6B16C2: mov     [esp+98h+var_68], edx
0x6B16C6: jmp     short loc_6B16D1
0x6B16C8: mov     eax, ds:0B36238h
0x6B16CD: mov     [esp+98h+var_68], eax
0x6B16D1: test    ebp, ebp
0x6B16D3: jz      short loc_6B16E5
0x6B16D5: mov     ecx, ebp
0x6B16D7: call    ContainerEntryExtraData_DestroyDataTable
0x6B16DC: push    ebp
0x6B16DD: call    FormHeapFree
0x6B16E2: add     esp, 4
0x6B16E5: mov     eax, ds:0B36218h[esi*4]
0x6B16EC: test    eax, eax
0x6B16EE: jz      loc_6B18AB
0x6B16F4: mov     ecx, ds:0B3C0F0h
0x6B16FA: test    ecx, ecx
0x6B16FC: jz      short loc_6B1734
0x6B16FE: mov     eax, [eax+0Ch]
0x6B1701: push    1
0x6B1703: push    410Ah
0x6B1708: push    eax
0x6B1709: call    OSGLobals_PlaySound
0x6B170E: mov     [esp+98h+var_64], eax
0x6B1712: mov     eax, [esp+98h+var_68]
0x6B1716: test    eax, eax
0x6B1718: jz      short loc_6B1734
0x6B171A: mov     eax, [eax+0Ch]
0x6B171D: mov     ecx, ds:0B3C0F0h
0x6B1723: push    1
0x6B1725: push    410Ah
0x6B172A: push    eax
0x6B172B: call    OSGLobals_PlaySound
0x6B1730: mov     [esp+98h+var_70], eax
0x6B1734: mov     ebp, [esp+98h+arg_0]
0x6B173B: cmp     ebp, ds:0B333C4h
0x6B1741: mov     bl, 1
0x6B1743: jz      short loc_6B1749
0x6B1745: mov     bl, [esp+98h+var_81]
0x6B1749: mov     edi, [esp+98h+var_64]
0x6B174D: test    edi, edi
0x6B174F: jz      loc_6B18AB
0x6B1755: fld     [esp+98h+var_78]
0x6B1759: sub     esp, 0Ch
0x6B175C: fsub    qword ptr ds:0A3F428h
0x6B1762: mov     ecx, edi
0x6B1764: fstp    [esp+0A4h+var_64]
0x6B1768: fld     [esp+0A4h+var_64]
0x6B176C: fstp    [esp+0A4h+var_9C]; float
0x6B1770: fld     [esp+0A4h+var_7C]
0x6B1774: fstp    [esp+0A4h+var_A0]; float
0x6B1778: fld     [esp+0A4h+var_80]
0x6B177C: fstp    [esp+0A4h+var_A4]; float
0x6B177F: call    sub_6B7360
0x6B1784: mov     ecx, [edi]
0x6B1786: push    ebp
0x6B1787: push    ecx
0x6B1788: mov     ecx, ds:0B3C0F0h
0x6B178E: call    sub_6AC3E0
0x6B1793: test    bl, bl
0x6B1795: jz      short loc_6B17BC
0x6B1797: mov     ecx, offset unk_B162F4
0x6B179C: call    GameSetting_GetSafeFloatPointer
0x6B17A1: fld     dword ptr [eax]
0x6B17A3: fstp    qword ptr [esp+98h+var_64]
0x6B17A7: push    ecx
0x6B17A8: fld     dword ptr ds:0A2FAACh
0x6B17AE: fstp    [esp+9Ch+var_9C]; float
0x6B17B1: call    Rand5
0x6B17B6: fsubr   qword ptr [esp+9Ch+var_64]
0x6B17BA: jmp     short loc_6B17CF
0x6B17BC: fld     dword ptr ds:0A2FAACh
0x6B17C2: push    ecx
0x6B17C3: fstp    [esp+9Ch+var_9C]; float
0x6B17C6: call    Rand5
0x6B17CB: fld1
0x6B17CD: fsubrp  st(1), st
0x6B17CF: fstp    [esp+9Ch+var_64]
0x6B17D3: mov     ecx, edi
0x6B17D5: fld     [esp+9Ch+var_64]
0x6B17D9: fstp    [esp+9Ch+var_9C]; float
0x6B17DC: call    sub_6B7280
0x6B17E1: mov     esi, [esp+98h+var_70]
0x6B17E5: test    esi, esi
0x6B17E7: jz      loc_6B1892
0x6B17ED: fld     [esp+98h+var_78]
0x6B17F1: sub     esp, 0Ch
0x6B17F4: fsub    qword ptr ds:0A3F428h
0x6B17FA: mov     ecx, esi
0x6B17FC: fstp    [esp+0A4h+var_70]
0x6B1800: fld     [esp+0A4h+var_70]
0x6B1804: fstp    [esp+0A4h+var_9C]; float
0x6B1808: fld     [esp+0A4h+var_7C]
0x6B180C: fstp    [esp+0A4h+var_A0]; float
0x6B1810: fld     [esp+0A4h+var_80]
0x6B1814: fstp    [esp+0A4h+var_A4]; float
0x6B1817: call    sub_6B7360
0x6B181C: mov     edx, [esi]
0x6B181E: mov     ecx, ds:0B3C0F0h
0x6B1824: push    ebp
0x6B1825: push    edx
0x6B1826: call    sub_6AC3E0
0x6B182B: test    bl, bl
0x6B182D: jz      short loc_6B1854
0x6B182F: mov     ecx, offset unk_B162F4
0x6B1834: call    GameSetting_GetSafeFloatPointer
0x6B1839: fld     dword ptr [eax]
0x6B183B: fstp    qword ptr [esp+98h+var_70]
0x6B183F: push    ecx
0x6B1840: fld     dword ptr ds:0A2FAACh
0x6B1846: fstp    [esp+9Ch+var_9C]; float
0x6B1849: call    Rand5
0x6B184E: fsubr   qword ptr [esp+9Ch+var_70]
0x6B1852: jmp     short loc_6B1867
0x6B1854: fld     dword ptr ds:0A2FAACh
0x6B185A: push    ecx
0x6B185B: fstp    [esp+9Ch+var_9C]; float
0x6B185E: call    Rand5
0x6B1863: fld1
0x6B1865: fsubrp  st(1), st
0x6B1867: fstp    [esp+9Ch+var_70]
0x6B186B: mov     ecx, esi
0x6B186D: fld     [esp+9Ch+var_70]
0x6B1871: fstp    [esp+9Ch+var_9C]; float
0x6B1874: call    sub_6B7280
0x6B1879: push    0
0x6B187B: mov     ecx, esi
0x6B187D: call    sub_6B7190
0x6B1882: mov     ecx, esi; this
0x6B1884: call    sub_6B73E0
0x6B1889: push    esi
0x6B188A: call    FormHeapFree
0x6B188F: add     esp, 4
0x6B1892: push    0
0x6B1894: mov     ecx, edi
0x6B1896: call    sub_6B7190
0x6B189B: mov     ecx, edi; this
0x6B189D: call    sub_6B73E0
0x6B18A2: push    edi
0x6B18A3: call    FormHeapFree
0x6B18A8: add     esp, 4
0x6B18AB: pop     edi
0x6B18AC: pop     esi
0x6B18AD: pop     ebx
0x6B18AE: pop     ebp
0x6B18AF: add     esp, 88h
0x6B18B5: retn
