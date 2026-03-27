0x4CCD60: test    [esp+arg_0], 20h
0x4CCD65: push    esi
0x4CCD66: mov     esi, ecx
0x4CCD68: jz      short loc_4CCD96
0x4CCD6A: push    edi
0x4CCD6B: lea     edi, [esi+28h]
0x4CCD6E: mov     ecx, edi
0x4CCD70: call    ExtraDataList_GetOwner
0x4CCD75: test    eax, eax
0x4CCD77: jz      short loc_4CCD95
0x4CCD79: push    eax; a1
0x4CCD7A: call    TESForm_LookupByFormID
0x4CCD7F: add     esp, 4
0x4CCD82: push    eax
0x4CCD83: mov     ecx, edi
0x4CCD85: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4CCD8A: mov     eax, [esi]
0x4CCD8C: mov     edx, [eax+40h]
0x4CCD8F: push    20h ; ' '
0x4CCD91: mov     ecx, esi
0x4CCD93: call    edx
0x4CCD95: pop     edi
0x4CCD96: pop     esi
0x4CCD97: retn    8
