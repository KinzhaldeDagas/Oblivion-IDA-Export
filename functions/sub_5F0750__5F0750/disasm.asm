0x5F0750: push    ecx
0x5F0751: push    ebp
0x5F0752: mov     ebp, ecx
0x5F0754: mov     ecx, [ebp+58h]
0x5F0757: test    ecx, ecx
0x5F0759: mov     [esp+8+var_1], 0
0x5F075E: jz      loc_5F0802
0x5F0764: mov     eax, [ecx]
0x5F0766: mov     edx, [eax+3D0h]
0x5F076C: call    edx
0x5F076E: test    eax, eax
0x5F0770: jz      loc_5F0802
0x5F0776: mov     ecx, [ebp+58h]
0x5F0779: mov     eax, [ecx]
0x5F077B: mov     edx, [eax+3D0h]
0x5F0781: push    edi
0x5F0782: call    edx
0x5F0784: lea     ecx, [eax+68h]
0x5F0787: mov     eax, [ecx]
0x5F0789: mov     edx, [eax+8]
0x5F078C: call    edx
0x5F078E: mov     edi, eax
0x5F0790: test    edi, edi
0x5F0792: jz      short loc_5F07FA
0x5F0794: push    esi
0x5F0795: cmp     dword ptr [edi+4], 0
0x5F0799: jnz     short loc_5F07A0
0x5F079B: cmp     dword ptr [edi], 0
0x5F079E: jz      short loc_5F07F9
0x5F07A0: mov     esi, [edi]
0x5F07A2: test    esi, esi
0x5F07A4: jz      short loc_5F07F2
0x5F07A6: mov     eax, [esi+0Ch]
0x5F07A9: mov     ecx, [eax+1Ch]
0x5F07AC: mov     edx, [ecx+58h]
0x5F07AF: shr     edx, 12h
0x5F07B2: test    dl, 1
0x5F07B5: jz      short loc_5F07F2
0x5F07B7: push    0; int
0x5F07B9: push    offset ??_R0?AVSummonCreatureEffect@@@8; struct TypeDescriptor *
0x5F07BE: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x5F07C3: push    0; int
0x5F07C5: push    esi; void *
0x5F07C6: call    OblivionDynamicCast
0x5F07CB: add     esp, 14h
0x5F07CE: test    eax, eax
0x5F07D0: jz      short loc_5F07D7
0x5F07D2: mov     ecx, [eax+3Ch]
0x5F07D5: jmp     short loc_5F07D9
0x5F07D7: xor     ecx, ecx
0x5F07D9: cmp     ecx, ebp
0x5F07DB: jnz     short loc_5F07F2
0x5F07DD: push    1
0x5F07DF: mov     ecx, esi
0x5F07E1: mov     dword ptr [eax+3Ch], 0
0x5F07E8: call    ActiveEffect_Base_Remove
0x5F07ED: mov     [esp+10h+var_1], 1
0x5F07F2: mov     edi, [edi+4]
0x5F07F5: test    edi, edi
0x5F07F7: jnz     short loc_5F0795
0x5F07F9: pop     esi
0x5F07FA: mov     al, [esp+0Ch+var_1]
0x5F07FE: pop     edi
0x5F07FF: pop     ebp
0x5F0800: pop     ecx
0x5F0801: retn
0x5F0802: xor     al, al
0x5F0804: pop     ebp
0x5F0805: pop     ecx
0x5F0806: retn
