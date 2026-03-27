0x75E5C0: mov     eax, [esp+arg_0]
0x75E5C4: push    esi
0x75E5C5: mov     esi, ecx
0x75E5C7: push    eax
0x75E5C8: mov     dword ptr [esi+44h], 0
0x75E5CF: call    NiTimeController__SetTarget
0x75E5D4: mov     eax, [esi+30h]
0x75E5D7: test    eax, eax
0x75E5D9: jz      short loc_75E5FA
0x75E5DB: mov     ecx, [esi+40h]
0x75E5DE: lea     edx, [esp+4+arg_0]
0x75E5E2: push    edx
0x75E5E3: push    ecx
0x75E5E4: lea     ecx, [eax+0D4h]
0x75E5EA: call    NiTMap_GetAt
0x75E5EF: neg     al
0x75E5F1: sbb     eax, eax
0x75E5F3: and     eax, [esp+4+arg_0]
0x75E5F7: mov     [esi+44h], eax
0x75E5FA: pop     esi
0x75E5FB: retn    4
