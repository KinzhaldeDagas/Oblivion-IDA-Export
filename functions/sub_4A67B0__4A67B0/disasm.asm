0x4A67B0: sub     esp, 8; Verified: converts world XYZ input to a 2D point and delegates region-data selection for that location.
0x4A67B3: push    esi
0x4A67B4: mov     esi, ecx
0x4A67B6: lea     ecx, [esp+0Ch+worldXY]
0x4A67BA: call    sub_4A6920
0x4A67BF: fld     [esp+0Ch+worldX]
0x4A67C3: mov     eax, [esp+0Ch+worldspace]
0x4A67C7: fstp    [esp+0Ch+worldXY]
0x4A67CB: mov     edx, [esp+0Ch+dataID]
0x4A67CF: fld     [esp+0Ch+worldY]
0x4A67D3: push    eax; worldspace
0x4A67D4: fstp    [esp+10h+var_4]
0x4A67D8: lea     ecx, [esp+10h+worldXY]
0x4A67DC: push    ecx; worldXY
0x4A67DD: push    edx; dataID
0x4A67DE: mov     ecx, esi; this
0x4A67E0: call    TESRegionList_SelectDataForLocation
0x4A67E5: pop     esi
0x4A67E6: add     esp, 8
0x4A67E9: retn    14h
