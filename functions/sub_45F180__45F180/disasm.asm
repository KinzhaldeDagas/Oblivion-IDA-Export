0x45F180: mov     eax, [esp+arg_4]
0x45F184: push    ebx
0x45F185: push    ebp
0x45F186: mov     ebp, [eax]
0x45F188: push    esi
0x45F189: mov     esi, [esp+0Ch+arg_0]
0x45F18D: push    edi
0x45F18E: push    0; int
0x45F190: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45F195: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45F19A: push    0; int
0x45F19C: mov     ebx, ebp
0x45F19E: push    esi; void *
0x45F19F: mov     edi, ecx
0x45F1A1: and     ebx, 0FFFh
0x45F1A7: call    OblivionDynamicCast
0x45F1AC: add     esp, 14h
0x45F1AF: test    eax, eax
0x45F1B1: jz      short loc_45F1B9
0x45F1B3: and     ebx, 0FFFFF7FFh
0x45F1B9: test    ebx, ebx
0x45F1BB: jz      short loc_45F1DF
0x45F1BD: mov     eax, [esi+0Ch]
0x45F1C0: mov     ecx, ds:0B33A98h
0x45F1C6: push    eax; _DWORD
0x45F1C7: call    TESDataHandler_IsFormIDCreated?
0x45F1CC: test    al, al
0x45F1CE: jz      short loc_45F1DF
0x45F1D0: push    esi
0x45F1D1: mov     ecx, edi
0x45F1D3: call    sub_45C7A0
0x45F1D8: pop     edi
0x45F1D9: pop     esi
0x45F1DA: pop     ebp
0x45F1DB: pop     ebx
0x45F1DC: retn    8
0x45F1DF: push    ebp
0x45F1E0: push    esi
0x45F1E1: mov     ecx, edi
0x45F1E3: call    sub_4535A0
0x45F1E8: mov     ebp, eax
0x45F1EA: mov     dword ptr [edi+44h], 1FFFF000h
0x45F1F1: mov     edx, [esi]
0x45F1F3: mov     edx, [edx+60h]
0x45F1F6: and     eax, 1FFFF080h
0x45F1FB: push    eax
0x45F1FC: mov     ecx, esi
0x45F1FE: call    edx
0x45F200: test    ebx, ebx
0x45F202: jz      loc_45F2B6
0x45F208: push    0
0x45F20A: push    ebx
0x45F20B: push    esi
0x45F20C: mov     ecx, edi
0x45F20E: call    TESSaveLoadGame_ResetObject
0x45F213: test    ebp, ebp
0x45F215: jns     short loc_45F25C
0x45F217: push    0; int
0x45F219: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45F21E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45F223: push    0; int
0x45F225: push    esi; void *
0x45F226: call    OblivionDynamicCast
0x45F22B: add     esp, 14h
0x45F22E: mov     ecx, eax; this
0x45F230: mov     [esp+10h+arg_4], eax
0x45F234: call    TESObjectREFR_GetParentCell
0x45F239: test    eax, eax
0x45F23B: jz      short loc_45F1D0
0x45F23D: mov     ecx, [esp+10h+arg_4]; this
0x45F241: push    0; a2
0x45F243: call    TESObjectREFR_GetParentCell
0x45F248: mov     ecx, ds:0B333A0h
0x45F24E: push    eax; a1
0x45F24F: call    TESObjectCELL_IsProcessLevel?LowHigh
0x45F254: test    al, al
0x45F256: jz      loc_45F1D0
0x45F25C: mov     ecx, edi
0x45F25E: call    sub_45A500
0x45F263: cmp     byte ptr [esi+4], 30h ; '0'
0x45F267: mov     byte ptr [esp+10h+arg_0], al
0x45F26B: jnz     short loc_45F292
0x45F26D: mov     eax, ds:0B33398h
0x45F272: mov     ecx, [eax+10h]
0x45F275: mov     [esp+10h+arg_4], ecx
0x45F279: call    dword ptr ds:0A2808Ch
0x45F27F: cmp     eax, [esp+10h+arg_4]
0x45F283: jnz     short loc_45F28B
0x45F285: and     dword ptr [edi+18h], 0FFFFFFFEh
0x45F289: jmp     short loc_45F292
0x45F28B: and     dword ptr [edi+18h], 0FFFBFFFFh
0x45F292: mov     edx, [esi]
0x45F294: mov     eax, [edx+6Ch]
0x45F297: mov     ecx, esi
0x45F299: call    eax
0x45F29B: mov     ecx, [esp+10h+arg_0]
0x45F29F: push    ecx
0x45F2A0: mov     ecx, edi
0x45F2A2: call    sub_45A530
0x45F2A7: push    0
0x45F2A9: push    ebx
0x45F2AA: push    esi
0x45F2AB: mov     ecx, edi
0x45F2AD: call    sub_45C020
0x45F2B2: test    al, al
0x45F2B4: jz      short loc_45F2D7
0x45F2B6: mov     dword ptr [edi+44h], 60000000h
0x45F2BD: mov     edx, [esi]
0x45F2BF: mov     edx, [edx+60h]
0x45F2C2: mov     eax, ebp
0x45F2C4: and     eax, 60000000h
0x45F2C9: push    eax
0x45F2CA: mov     ecx, esi
0x45F2CC: call    edx
0x45F2CE: push    ebp
0x45F2CF: push    esi
0x45F2D0: mov     ecx, edi
0x45F2D2: call    sub_45B7A0
0x45F2D7: pop     edi
0x45F2D8: pop     esi
0x45F2D9: pop     ebp
0x45F2DA: pop     ebx
0x45F2DB: retn    8
