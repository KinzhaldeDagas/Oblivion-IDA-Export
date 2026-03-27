0x4D1570: push    ebx
0x4D1571: push    ebp
0x4D1572: mov     ebx, ecx
0x4D1574: push    esi
0x4D1575: push    ebx; a2
0x4D1576: mov     ecx, offset stru_B35C80; this
0x4D157B: call    sub_496EA0
0x4D1580: lea     esi, [ebx+48h]
0x4D1583: xor     ebp, ebp
0x4D1585: test    esi, esi
0x4D1587: jz      loc_4D1641
0x4D158D: push    edi
0x4D158E: mov     edi, edi
0x4D1590: cmp     dword ptr [esi+4], 0
0x4D1594: jnz     short loc_4D159F
0x4D1596: cmp     dword ptr [esi], 0
0x4D1599: jz      loc_4D1640
0x4D159F: mov     edi, [esi]
0x4D15A1: mov     ecx, edi; this
0x4D15A3: call    TESObjectREFR_IsPersistent?
0x4D15A8: test    al, al
0x4D15AA: jnz     loc_4D1633
0x4D15B0: push    0FFFFFFFFh; a2
0x4D15B2: mov     ecx, edi; this
0x4D15B4: call    TESForm_GetOverrideFile
0x4D15B9: test    eax, eax
0x4D15BB: jz      short loc_4D15D1
0x4D15BD: push    0FFFFFFFFh; a2
0x4D15BF: mov     ecx, edi; this
0x4D15C1: call    TESForm_GetOverrideFile
0x4D15C6: mov     ecx, eax
0x4D15C8: call    TESFile_GetIsMaster
0x4D15CD: test    al, al
0x4D15CF: jz      short loc_4D1633
0x4D15D1: test    ebp, ebp
0x4D15D3: jz      short loc_4D15E2
0x4D15D5: push    edi
0x4D15D6: mov     ecx, ebp
0x4D15D8: call    BSSimpleList_Remove
0x4D15DD: mov     esi, [ebp+4]
0x4D15E0: jmp     short loc_4D1604
0x4D15E2: mov     eax, [esi+4]
0x4D15E5: test    eax, eax
0x4D15E7: jz      short loc_4D15FE
0x4D15E9: mov     ecx, [eax+4]
0x4D15EC: mov     [esi+4], ecx
0x4D15EF: mov     edx, [eax]
0x4D15F1: push    eax
0x4D15F2: mov     [esi], edx
0x4D15F4: call    FormHeapFree
0x4D15F9: add     esp, 4
0x4D15FC: jmp     short loc_4D1604
0x4D15FE: mov     dword ptr [esi], 0
0x4D1604: mov     ecx, ds:0B33B00h
0x4D160A: push    edi
0x4D160B: call    sub_463A90
0x4D1610: mov     eax, [edi]
0x4D1612: mov     edx, [eax+194h]
0x4D1618: push    0
0x4D161A: mov     ecx, edi
0x4D161C: call    edx
0x4D161E: cmp     edi, ds:0B333C4h
0x4D1624: jz      short loc_4D1638
0x4D1626: mov     eax, [edi]
0x4D1628: mov     edx, [eax+10h]
0x4D162B: push    1
0x4D162D: mov     ecx, edi
0x4D162F: call    edx
0x4D1631: jmp     short loc_4D1638
0x4D1633: mov     ebp, esi
0x4D1635: mov     esi, [esi+4]
0x4D1638: test    esi, esi
0x4D163A: jnz     loc_4D1590
0x4D1640: pop     edi
0x4D1641: push    ebx; a2
0x4D1642: mov     ecx, offset stru_B35C80; this
0x4D1647: call    sub_496F50
0x4D164C: mov     ecx, [ebx+44h]; this
0x4D164F: xor     esi, esi
0x4D1651: cmp     ecx, esi
0x4D1653: jz      short loc_4D167E
0x4D1655: push    0FFFFFFFFh; a2
0x4D1657: call    TESForm_GetOverrideFile
0x4D165C: cmp     eax, esi
0x4D165E: jz      short loc_4D166B
0x4D1660: mov     ecx, eax
0x4D1662: call    TESFile_GetIsMaster
0x4D1667: test    al, al
0x4D1669: jz      short loc_4D167E
0x4D166B: mov     ecx, [ebx+44h]
0x4D166E: cmp     ecx, esi
0x4D1670: jz      short loc_4D167E
0x4D1672: mov     eax, [ecx]
0x4D1674: mov     edx, [eax+10h]
0x4D1677: push    1
0x4D1679: call    edx
0x4D167B: mov     [ebx+44h], esi
0x4D167E: mov     ecx, ebx; this
0x4D1680: call    sub_4CE3C0
0x4D1685: cmp     eax, esi
0x4D1687: jz      short loc_4D16BA
0x4D1689: push    0FFFFFFFFh; a2
0x4D168B: mov     ecx, eax; this
0x4D168D: call    TESForm_GetOverrideFile
0x4D1692: cmp     eax, esi
0x4D1694: jz      short loc_4D16A1
0x4D1696: mov     ecx, eax
0x4D1698: call    TESFile_GetIsMaster
0x4D169D: test    al, al
0x4D169F: jz      short loc_4D16BA
0x4D16A1: test    byte ptr [ebx+24h], 1
0x4D16A5: jnz     short loc_4D16BA
0x4D16A7: mov     ecx, [ebx+40h]
0x4D16AA: cmp     ecx, esi
0x4D16AC: jz      short loc_4D16BA
0x4D16AE: mov     eax, [ecx]
0x4D16B0: mov     edx, [eax+10h]
0x4D16B3: push    1
0x4D16B5: call    edx
0x4D16B7: mov     [ebx+40h], esi
0x4D16BA: and     byte ptr [ebx+24h], 0EFh
0x4D16BE: pop     esi
0x4D16BF: pop     ebp
0x4D16C0: pop     ebx
0x4D16C1: retn
