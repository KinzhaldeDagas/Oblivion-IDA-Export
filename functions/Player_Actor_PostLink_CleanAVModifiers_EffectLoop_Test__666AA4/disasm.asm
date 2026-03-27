0x666AA4: mov     esi, [edi]
0x666AA6: test    esi, esi
0x666AA8: jz      loc_666B30
0x666AAE: push    0; int
0x666AB0: push    offset ??_R0?AVValueModifierEffect@@@8; struct TypeDescriptor *
0x666AB5: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x666ABA: push    0; int
0x666ABC: push    esi; void *
0x666ABD: call    OblivionDynamicCast
0x666AC2: add     esp, 14h
0x666AC5: test    eax, eax
0x666AC7: jz      short Player_Actor_PostLink_CleanAVModifiers___EffectLoop_Next
0x666AC9: mov     ecx, [esi+0Ch]
0x666ACC: mov     eax, [ecx]
0x666ACE: cmp     eax, 48534946h
0x666AD3: jz      short loc_666AE7
0x666AD5: cmp     eax, 4853494Ch
0x666ADA: jz      short loc_666AE7
0x666ADC: cmp     eax, 48535246h
0x666AE1: jz      short loc_666AE7
0x666AE3: xor     edx, edx
0x666AE5: jmp     short loc_666AE9
0x666AE7: mov     edx, esi
0x666AE9: cmp     dword ptr [esi+28h], 4
0x666AED: jz      short Player_Actor_PostLink_CleanAVModifiers___EffectLoop_Next
0x666AEF: mov     eax, [ecx+1Ch]
0x666AF2: mov     eax, [eax+58h]
0x666AF5: shr     eax, 1
0x666AF7: test    al, 1
0x666AF9: jz      short Player_Actor_PostLink_CleanAVModifiers___EffectLoop_Next
0x666AFB: mov     eax, [ecx+14h]
0x666AFE: cmp     eax, 48h ; 'H'
0x666B01: jge     short loc_666B0E
0x666B03: fld     dword ptr [esi+18h]
0x666B06: lea     eax, [esp+eax*4+arg_8]
0x666B0A: fadd    dword ptr [eax]
0x666B0C: fstp    dword ptr [eax]
0x666B0E: test    edx, edx
0x666B10: jz      short Player_Actor_PostLink_CleanAVModifiers___EffectLoop_Next
0x666B12: mov     eax, [edx+3Ch]
0x666B15: cmp     eax, 48h ; 'H'
0x666B18: jge     short Player_Actor_PostLink_CleanAVModifiers___EffectLoop_Next
0x666B1A: fld     dword ptr [esi+18h]
0x666B1D: lea     eax, [esp+eax*4+arg_8]
0x666B21: fadd    dword ptr [eax]
0x666B23: fstp    dword ptr [eax]
