0x614ED0: sub     esp, 8
0x614ED3: push    ebx
0x614ED4: mov     ebx, [esp+0Ch+arg_0]
0x614ED8: push    esi
0x614ED9: push    edi
0x614EDA: push    0; int
0x614EDC: push    offset ??_R0?AVCombatController@@@8; struct TypeDescriptor *
0x614EE1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x614EE6: push    0; int
0x614EE8: push    ebx; void *
0x614EE9: mov     edi, ecx
0x614EEB: call    OblivionDynamicCast
0x614EF0: mov     esi, eax
0x614EF2: add     esp, 14h
0x614EF5: test    esi, esi
0x614EF7: jnz     short loc_614F04
0x614EF9: pop     edi
0x614EFA: pop     esi
0x614EFB: xor     al, al
0x614EFD: pop     ebx
0x614EFE: add     esp, 8
0x614F01: retn    4
0x614F04: push    ebx
0x614F05: mov     ecx, edi
0x614F07: call    sub_566400
0x614F0C: test    al, al
0x614F0E: jz      short loc_614F6F
0x614F10: mov     ecx, esi
0x614F12: call    sub_6135F0
0x614F17: mov     ecx, edi
0x614F19: mov     ebx, eax
0x614F1B: call    sub_6135F0
0x614F20: cmp     eax, ebx
0x614F22: jnz     short loc_614F6F
0x614F24: mov     al, [edi+48h]
0x614F27: cmp     al, [esi+48h]
0x614F2A: jnz     short loc_614F6F
0x614F2C: mov     cl, [edi+49h]
0x614F2F: cmp     cl, [esi+49h]
0x614F32: jnz     short loc_614F6F
0x614F34: mov     dl, [edi+4Ah]
0x614F37: cmp     dl, [esi+4Ah]
0x614F3A: jnz     short loc_614F6F
0x614F3C: mov     al, [edi+4Dh]
0x614F3F: cmp     al, [esi+4Dh]
0x614F42: jnz     short loc_614F6F
0x614F44: mov     ecx, edi
0x614F46: call    sub_612F30
0x614F4B: fstp    [esp+14h+var_8]
0x614F4F: mov     ecx, esi
0x614F51: call    sub_612F30
0x614F56: fcomp   [esp+14h+var_8]
0x614F5A: fnstsw  ax
0x614F5C: test    ah, 44h
0x614F5F: jp      short loc_614F6F
0x614F61: pop     edi
0x614F62: pop     esi
0x614F63: mov     eax, 1
0x614F68: pop     ebx
0x614F69: add     esp, 8
0x614F6C: retn    4
0x614F6F: pop     edi
0x614F70: pop     esi
0x614F71: xor     eax, eax
0x614F73: pop     ebx
0x614F74: add     esp, 8
0x614F77: retn    4
