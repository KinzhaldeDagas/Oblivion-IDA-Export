0x4CBD30: push    ebx
0x4CBD31: mov     ebx, [esp+4+arg_0]
0x4CBD35: test    ebx, ebx
0x4CBD37: push    ebp
0x4CBD38: mov     ebp, ecx
0x4CBD3A: jz      short loc_4CBDAB
0x4CBD3C: push    edi
0x4CBD3D: push    ebp; a2
0x4CBD3E: mov     ecx, offset stru_B35C80; this
0x4CBD43: call    sub_496EA0
0x4CBD48: lea     edi, [ebp+48h]
0x4CBD4B: test    edi, edi
0x4CBD4D: jz      short loc_4CBD9F
0x4CBD4F: push    esi
0x4CBD50: mov     esi, [edi]
0x4CBD52: test    esi, esi
0x4CBD54: jz      short loc_4CBD97
0x4CBD56: mov     eax, [esi+8]
0x4CBD59: mov     ecx, eax
0x4CBD5B: shr     ecx, 0Bh
0x4CBD5E: test    cl, 1
0x4CBD61: jnz     short loc_4CBD97
0x4CBD63: shr     eax, 5
0x4CBD66: test    al, 1
0x4CBD68: jnz     short loc_4CBD97
0x4CBD6A: mov     edx, [esi]
0x4CBD6C: mov     eax, [edx+170h]
0x4CBD72: mov     ecx, esi
0x4CBD74: call    eax
0x4CBD76: cmp     byte ptr [eax+4], 18h
0x4CBD7A: jnz     short loc_4CBD97
0x4CBD7C: cmp     eax, ds:0B35EBCh
0x4CBD82: jz      short loc_4CBD97
0x4CBD84: mov     ecx, esi; this
0x4CBD86: call    GetTeleportExtraData
0x4CBD8B: test    eax, eax
0x4CBD8D: jz      short loc_4CBD97
0x4CBD8F: push    esi
0x4CBD90: mov     ecx, ebx
0x4CBD92: call    BSSimpleList_PushFront
0x4CBD97: mov     edi, [edi+4]
0x4CBD9A: test    edi, edi
0x4CBD9C: jnz     short loc_4CBD50
0x4CBD9E: pop     esi
0x4CBD9F: push    ebp; a2
0x4CBDA0: mov     ecx, offset stru_B35C80; this
0x4CBDA5: call    sub_496F50
0x4CBDAA: pop     edi
0x4CBDAB: pop     ebp
0x4CBDAC: pop     ebx
0x4CBDAD: retn    4
