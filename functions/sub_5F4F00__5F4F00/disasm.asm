0x5F4F00: push    esi
0x5F4F01: mov     esi, ecx
0x5F4F03: cmp     dword ptr [esi+58h], 0
0x5F4F07: jz      short loc_5F4F1F
0x5F4F09: mov     ecx, [esi+58h]
0x5F4F0C: mov     eax, [ecx]
0x5F4F0E: mov     edx, [eax+2D0h]
0x5F4F14: call    edx
0x5F4F16: cmp     eax, 8
0x5F4F19: jz      loc_5F4FCB
0x5F4F1F: push    ebx
0x5F4F20: mov     ecx, esi
0x5F4F22: call    TESObjectREFR_GetAnimData
0x5F4F27: mov     ebx, eax
0x5F4F29: test    ebx, ebx
0x5F4F2B: jz      loc_5F4FCA
0x5F4F31: cmp     dword ptr [esi+58h], 0
0x5F4F35: jz      loc_5F4FCA
0x5F4F3B: mov     eax, [esi]
0x5F4F3D: mov     edx, [eax+18Ch]
0x5F4F43: mov     ecx, esi
0x5F4F45: call    edx
0x5F4F47: test    eax, eax
0x5F4F49: jnz     short loc_5F4FCA
0x5F4F4B: push    edi
0x5F4F4C: push    eax
0x5F4F4D: push    eax
0x5F4F4E: push    1Eh
0x5F4F50: mov     ecx, esi
0x5F4F52: call    Actor_LoadAnimGroup?
0x5F4F57: movzx   edi, ax
0x5F4F5A: push    edi
0x5F4F5B: call    sub_51AA00
0x5F4F60: add     esp, 4
0x5F4F63: cmp     eax, 1Eh
0x5F4F66: jnz     short loc_5F4F9A
0x5F4F68: push    0FFFFFFFFh
0x5F4F6A: push    1
0x5F4F6C: push    edi
0x5F4F6D: mov     ecx, ebx
0x5F4F6F: call    ActorAnimData_PlayAnimGroup
0x5F4F74: push    3
0x5F4F76: mov     ecx, ebx
0x5F4F78: call    sub_4706E0
0x5F4F7D: push    eax
0x5F4F7E: push    7
0x5F4F80: mov     ecx, esi
0x5F4F82: call    HighPRocess_DoAction?????
0x5F4F87: mov     eax, [esi]
0x5F4F89: mov     edx, [eax+3A4h]
0x5F4F8F: push    1
0x5F4F91: push    edi
0x5F4F92: mov     ecx, esi
0x5F4F94: call    edx
0x5F4F96: pop     edi
0x5F4F97: pop     ebx
0x5F4F98: pop     esi
0x5F4F99: retn
0x5F4F9A: fldz
0x5F4F9C: push    ecx
0x5F4F9D: fstp    [esp+10h+var_10]; float
0x5F4FA0: mov     ecx, ebx
0x5F4FA2: push    3; int
0x5F4FA4: call    sub_470FC0
0x5F4FA9: mov     ecx, ds:0B333C4h; this
0x5F4FAF: cmp     esi, ecx
0x5F4FB1: jnz     short loc_5F4FC9
0x5F4FB3: push    1; a2
0x5F4FB5: call    Player_GetAnimData
0x5F4FBA: fldz
0x5F4FBC: push    ecx
0x5F4FBD: fstp    [esp+10h+var_10]; float
0x5F4FC0: push    3; int
0x5F4FC2: mov     ecx, eax
0x5F4FC4: call    sub_470FC0
0x5F4FC9: pop     edi
0x5F4FCA: pop     ebx
0x5F4FCB: pop     esi
0x5F4FCC: retn
