0x424B10: push    ebx
0x424B11: mov     ebx, [esp+4+arg_0]
0x424B15: test    ebx, ebx
0x424B17: push    ebp
0x424B18: mov     ebp, ecx
0x424B1A: jz      short loc_424B4D
0x424B1C: push    edi
0x424B1D: push    40h ; '@'; a2
0x424B1F: call    BaseExtraList_GetExtraData
0x424B24: mov     edi, eax
0x424B26: test    edi, edi
0x424B28: jz      short loc_424B4C
0x424B2A: push    esi
0x424B2B: lea     esi, [edi+0Ch]
0x424B2E: push    ebx
0x424B2F: mov     ecx, esi
0x424B31: call    BSSimpleList_Remove
0x424B36: cmp     dword ptr [esi+4], 0
0x424B3A: jnz     short loc_424B4B
0x424B3C: cmp     dword ptr [esi], 0
0x424B3F: jnz     short loc_424B4B
0x424B41: push    1
0x424B43: push    edi
0x424B44: mov     ecx, ebp
0x424B46: call    BaseExtraList_RemoveExtraByPtr
0x424B4B: pop     esi
0x424B4C: pop     edi
0x424B4D: pop     ebp
0x424B4E: pop     ebx
0x424B4F: retn    4
