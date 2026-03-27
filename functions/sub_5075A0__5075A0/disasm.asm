0x5075A0: push    ecx
0x5075A1: mov     ecx, [esp+4+l]
0x5075A5: mov     edx, [esp+4+arg_10]
0x5075A9: push    esi
0x5075AA: mov     esi, [esp+8+a4]
0x5075AE: lea     eax, [esp+8+var_4]
0x5075B2: push    eax; UInt16
0x5075B3: mov     eax, [esp+0Ch+arg_C]
0x5075B7: push    ecx; l
0x5075B8: mov     ecx, [esp+10h+a3]
0x5075BC: push    edx; a6
0x5075BD: mov     edx, [esp+14h+arg_4]
0x5075C1: push    eax; a5
0x5075C2: mov     eax, [esp+18h+a1]
0x5075C6: push    esi; a4
0x5075C7: push    ecx; a3
0x5075C8: push    edx; a2
0x5075C9: push    eax; a1
0x5075CA: mov     dword ptr [esp+28h+var_4], 0
0x5075D2: call    Script_ExtractArgs
0x5075D7: add     esp, 20h
0x5075DA: test    al, al
0x5075DC: jnz     short loc_5075E1
0x5075DE: pop     esi
0x5075DF: pop     ecx
0x5075E0: retn
0x5075E1: mov     eax, dword ptr [esp+8+var_4]
0x5075E5: test    eax, eax
0x5075E7: jnz     short loc_5075FD
0x5075E9: mov     ecx, ds:0B333C4h
0x5075EF: mov     edx, [ecx]
0x5075F1: mov     eax, [edx+170h]
0x5075F7: call    eax
0x5075F9: mov     dword ptr [esp+8+var_4], eax
0x5075FD: test    esi, esi
0x5075FF: jz      short loc_507618
0x507601: push    eax
0x507602: lea     ecx, [esi+44h]
0x507605: call    ExtraDataList__SetOrRemoveExtraOwnership
0x50760A: mov     edx, [esi]
0x50760C: mov     eax, [edx+40h]
0x50760F: push    80h ; '€'
0x507614: mov     ecx, esi
0x507616: call    eax
0x507618: mov     al, 1
0x50761A: pop     esi
0x50761B: pop     ecx
0x50761C: retn
