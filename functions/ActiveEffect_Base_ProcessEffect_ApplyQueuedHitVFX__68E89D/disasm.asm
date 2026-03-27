0x68E89D: test    ecx, ecx
0x68E89F: jz      short loc_68E8B9
0x68E8A1: call    BSSimpleList_Clear
0x68E8A6: mov     edx, [esi+34h]
0x68E8A9: push    edx
0x68E8AA: call    FormHeapFree
0x68E8AF: add     esp, 4
0x68E8B2: mov     dword ptr [esi+34h], 0
0x68E8B9: push    esi
0x68E8BA: call    MagicHitEffect?_BuildHitVFXList
0x68E8BF: add     esp, 4
0x68E8C2: and     dword ptr [esi+14h], 0FFFFFFBFh
0x68E8C6: mov     [esi+34h], eax
