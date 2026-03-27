0x5F4FD0: push    ebx
0x5F4FD1: push    esi
0x5F4FD2: mov     esi, ecx
0x5F4FD4: call    TESObjectREFR_GetAnimData
0x5F4FD9: mov     ebx, eax
0x5F4FDB: test    ebx, ebx
0x5F4FDD: jz      short loc_5F5041
0x5F4FDF: cmp     dword ptr [esi+58h], 0
0x5F4FE3: jz      short loc_5F5041
0x5F4FE5: mov     eax, [esi]
0x5F4FE7: mov     edx, [eax+18Ch]
0x5F4FED: mov     ecx, esi
0x5F4FEF: call    edx
0x5F4FF1: test    eax, eax
0x5F4FF3: jnz     short loc_5F5041
0x5F4FF5: push    edi
0x5F4FF6: push    eax
0x5F4FF7: push    eax
0x5F4FF8: push    1Fh
0x5F4FFA: mov     ecx, esi
0x5F4FFC: call    Actor_LoadAnimGroup?
0x5F5001: movzx   edi, ax
0x5F5004: push    edi
0x5F5005: call    sub_51AA00
0x5F500A: add     esp, 4
0x5F500D: cmp     eax, 1Fh
0x5F5010: jnz     short loc_5F5040
0x5F5012: push    0FFFFFFFFh
0x5F5014: push    1
0x5F5016: push    edi
0x5F5017: mov     ecx, ebx
0x5F5019: call    ActorAnimData_PlayAnimGroup
0x5F501E: push    0
0x5F5020: mov     ecx, ebx
0x5F5022: call    sub_4706E0
0x5F5027: push    eax
0x5F5028: push    8
0x5F502A: mov     ecx, esi
0x5F502C: call    HighPRocess_DoAction?????
0x5F5031: mov     eax, [esi]
0x5F5033: mov     edx, [eax+3A4h]
0x5F5039: push    1
0x5F503B: push    edi
0x5F503C: mov     ecx, esi
0x5F503E: call    edx
0x5F5040: pop     edi
0x5F5041: pop     esi
0x5F5042: pop     ebx
0x5F5043: retn
