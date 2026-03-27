0x694980: mov     ecx, [esp+arg_0]
0x694984: test    ecx, ecx
0x694986: jz      locret_694A20
0x69498C: mov     eax, [ecx]
0x69498E: mov     edx, [eax+8]
0x694991: push    ebx
0x694992: push    edi
0x694993: xor     ebx, ebx
0x694995: call    edx
0x694997: mov     edi, eax
0x694999: test    edi, edi
0x69499B: jz      loc_694A1E
0x6949A1: push    esi
0x6949A2: cmp     dword ptr [edi+4], 0
0x6949A6: jnz     short loc_6949AD
0x6949A8: cmp     dword ptr [edi], 0
0x6949AB: jz      short loc_694A10
0x6949AD: mov     eax, [edi]
0x6949AF: test    eax, eax
0x6949B1: jz      short loc_694A09
0x6949B3: mov     ecx, [eax+0Ch]
0x6949B6: mov     edx, [ecx+1Ch]
0x6949B9: cmp     dword ptr [edx+98h], 5448474Ch
0x6949C3: jnz     short loc_694A09
0x6949C5: cmp     byte ptr [eax+11h], 0
0x6949C9: jnz     short loc_694A09
0x6949CB: push    0; int
0x6949CD: push    offset ??_R0?AVLightEffect@@@8; struct TypeDescriptor *
0x6949D2: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6949D7: push    0; int
0x6949D9: push    eax; void *
0x6949DA: call    OblivionDynamicCast
0x6949DF: add     esp, 14h
0x6949E2: test    ebx, ebx
0x6949E4: mov     esi, eax
0x6949E6: jz      short loc_694A07
0x6949E8: fld     dword ptr [ebx+18h]
0x6949EB: fld     dword ptr [esi+18h]
0x6949EE: fcompp
0x6949F0: fnstsw  ax
0x6949F2: test    ah, 41h
0x6949F5: jz      short loc_694A00
0x6949F7: mov     ecx, esi
0x6949F9: call    sub_6948B0
0x6949FE: jmp     short loc_694A09
0x694A00: mov     ecx, ebx
0x694A02: call    sub_6948B0
0x694A07: mov     ebx, esi
0x694A09: mov     edi, [edi+4]
0x694A0C: test    edi, edi
0x694A0E: jnz     short loc_6949A2
0x694A10: test    ebx, ebx
0x694A12: pop     esi
0x694A13: jz      short loc_694A1E
0x694A15: pop     edi
0x694A16: mov     ecx, ebx
0x694A18: pop     ebx
0x694A19: jmp     loc_694600
0x694A1E: pop     edi
0x694A1F: pop     ebx
0x694A20: retn
