0x5F4E10: push    edi
0x5F4E11: mov     edi, ecx
0x5F4E13: cmp     dword ptr [edi+58h], 0
0x5F4E17: jz      short loc_5F4E2F
0x5F4E19: mov     ecx, [edi+58h]
0x5F4E1C: mov     eax, [ecx]
0x5F4E1E: mov     edx, [eax+2D0h]
0x5F4E24: call    edx
0x5F4E26: cmp     eax, 8
0x5F4E29: jz      loc_5F4EF8
0x5F4E2F: push    ebp
0x5F4E30: mov     ecx, edi
0x5F4E32: call    TESObjectREFR_GetAnimData
0x5F4E37: mov     ebp, eax
0x5F4E39: test    ebp, ebp
0x5F4E3B: jz      loc_5F4EF7
0x5F4E41: cmp     dword ptr [edi+58h], 0
0x5F4E45: jz      loc_5F4EF7
0x5F4E4B: mov     eax, [edi]
0x5F4E4D: mov     edx, [eax+18Ch]
0x5F4E53: mov     ecx, edi
0x5F4E55: call    edx
0x5F4E57: test    eax, eax
0x5F4E59: jnz     loc_5F4EF7
0x5F4E5F: cmp     [esp+8+arg_0], al
0x5F4E63: push    ebx
0x5F4E64: setnz   al
0x5F4E67: push    esi
0x5F4E68: push    0
0x5F4E6A: push    0
0x5F4E6C: mov     ecx, edi
0x5F4E6E: add     eax, 1Ch
0x5F4E71: mov     esi, eax
0x5F4E73: push    esi
0x5F4E74: call    Actor_LoadAnimGroup?
0x5F4E79: movzx   ebx, ax
0x5F4E7C: push    ebx
0x5F4E7D: call    sub_51AA00
0x5F4E82: add     esp, 4
0x5F4E85: cmp     eax, esi
0x5F4E87: jz      short loc_5F4E99
0x5F4E89: push    ebx
0x5F4E8A: call    sub_51AA00
0x5F4E8F: add     esp, 4
0x5F4E92: cmp     eax, 1Ch
0x5F4E95: jnz     short loc_5F4E99
0x5F4E97: mov     esi, eax
0x5F4E99: push    ebx
0x5F4E9A: call    sub_51AA00
0x5F4E9F: add     esp, 4
0x5F4EA2: cmp     eax, esi
0x5F4EA4: jnz     short loc_5F4EF5
0x5F4EA6: push    0FFFFFFFFh
0x5F4EA8: push    1
0x5F4EAA: push    ebx
0x5F4EAB: mov     ecx, ebp
0x5F4EAD: call    ActorAnimData_PlayAnimGroup
0x5F4EB2: cmp     esi, 1Dh
0x5F4EB5: jnz     short loc_5F4ECA
0x5F4EB7: mov     ecx, ds:0B106FCh
0x5F4EBD: push    ecx
0x5F4EBE: mov     ecx, ebp
0x5F4EC0: call    sub_4706E0
0x5F4EC5: push    eax
0x5F4EC6: push    2
0x5F4EC8: jmp     short loc_5F4EDF
0x5F4ECA: lea     edx, [esi+esi*8]
0x5F4ECD: mov     eax, ds:0B102E8h[edx*4]
0x5F4ED4: push    eax
0x5F4ED5: mov     ecx, ebp
0x5F4ED7: call    sub_4706E0
0x5F4EDC: push    eax
0x5F4EDD: push    6
0x5F4EDF: mov     ecx, edi
0x5F4EE1: call    HighPRocess_DoAction?????
0x5F4EE6: mov     edx, [edi]
0x5F4EE8: mov     eax, [edx+3A4h]
0x5F4EEE: push    1
0x5F4EF0: push    ebx
0x5F4EF1: mov     ecx, edi
0x5F4EF3: call    eax
0x5F4EF5: pop     esi
0x5F4EF6: pop     ebx
0x5F4EF7: pop     ebp
0x5F4EF8: pop     edi
0x5F4EF9: retn    4
