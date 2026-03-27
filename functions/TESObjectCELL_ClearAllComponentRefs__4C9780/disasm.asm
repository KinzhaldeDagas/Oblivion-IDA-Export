0x4C9780: push    esi
0x4C9781: mov     esi, ecx
0x4C9783: lea     ecx, [esi+28h]
0x4C9786: call    ExtraDataList_RemoveAllNonpersistentCellData
0x4C978B: mov     eax, [esi+3Ch]
0x4C978E: push    eax
0x4C978F: call    FormHeapFree
0x4C9794: add     esp, 4
0x4C9797: mov     dword ptr [esi+3Ch], 0
0x4C979E: pop     esi
0x4C979F: retn
