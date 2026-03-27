0x4D8880: push    ebx
0x4D8881: push    esi
0x4D8882: mov     esi, ecx
0x4D8884: call    TESObjectREFR_GetContainer
0x4D8889: xor     bl, bl
0x4D888B: test    eax, eax
0x4D888D: jz      short loc_4D88AD
0x4D888F: push    eax
0x4D8890: push    esi; a1
0x4D8891: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D8896: mov     ecx, [esp+10h+arg_0]
0x4D889A: add     esp, 8
0x4D889D: push    0
0x4D889F: push    ecx
0x4D88A0: mov     ecx, eax
0x4D88A2: call    ExtraContainerChanges_SetEquipped
0x4D88A7: test    eax, eax
0x4D88A9: mov     al, 1
0x4D88AB: jnz     short loc_4D88AF
0x4D88AD: mov     al, bl
0x4D88AF: pop     esi
0x4D88B0: pop     ebx
0x4D88B1: retn    4
