0x415BC0: push    ebx
0x415BC1: mov     ebx, [esp+4+a2]
0x415BC5: push    esi
0x415BC6: push    edi
0x415BC7: push    0; int
0x415BC9: push    offset ??_R0?AVEffectSetting@@@8; struct TypeDescriptor *
0x415BCE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415BD3: push    0; int
0x415BD5: push    ebx; void *
0x415BD6: mov     edi, ecx
0x415BD8: call    OblivionDynamicCast
0x415BDD: mov     esi, eax
0x415BDF: add     esp, 14h
0x415BE2: test    esi, esi
0x415BE4: jz      loc_415D2A
0x415BEA: push    ebx; a2
0x415BEB: mov     ecx, edi; this
0x415BED: call    TESForm_CompareAllComponentsTo
0x415BF2: test    al, al
0x415BF4: jnz     loc_415D2A
0x415BFA: mov     eax, [edi+98h]
0x415C00: cmp     eax, [esi+98h]
0x415C06: jnz     loc_415D2A
0x415C0C: mov     ecx, [edi+58h]
0x415C0F: cmp     ecx, [esi+58h]
0x415C12: jnz     loc_415D2A
0x415C18: fld     dword ptr [edi+5Ch]
0x415C1B: fld     dword ptr [esi+5Ch]
0x415C1E: fucompp
0x415C20: fnstsw  ax
0x415C22: test    ah, 44h
0x415C25: jp      loc_415D2A
0x415C2B: mov     edx, [edi+60h]
0x415C2E: cmp     edx, [esi+60h]
0x415C31: jnz     loc_415D2A
0x415C37: mov     eax, [edi+64h]
0x415C3A: cmp     eax, [esi+64h]
0x415C3D: jnz     loc_415D2A
0x415C43: mov     ecx, [edi+68h]
0x415C46: cmp     ecx, [esi+68h]
0x415C49: jnz     loc_415D2A
0x415C4F: mov     edx, [edi+70h]
0x415C52: cmp     edx, [esi+70h]
0x415C55: jnz     loc_415D2A
0x415C5B: mov     eax, [edi+78h]
0x415C5E: cmp     eax, [esi+78h]
0x415C61: jnz     loc_415D2A
0x415C67: mov     ecx, [edi+7Ch]
0x415C6A: cmp     ecx, [esi+7Ch]
0x415C6D: jnz     loc_415D2A
0x415C73: fld     dword ptr [edi+74h]
0x415C76: fld     dword ptr [esi+74h]
0x415C79: fucompp
0x415C7B: fnstsw  ax
0x415C7D: test    ah, 44h
0x415C80: jp      loc_415D2A
0x415C86: mov     edx, [edi+80h]
0x415C8C: cmp     edx, [esi+80h]
0x415C92: jnz     loc_415D2A
0x415C98: mov     eax, [edi+84h]
0x415C9E: cmp     eax, [esi+84h]
0x415CA4: jnz     loc_415D2A
0x415CAA: mov     ecx, [edi+88h]
0x415CB0: cmp     ecx, [esi+88h]
0x415CB6: jnz     short loc_415D2A
0x415CB8: mov     edx, [edi+8Ch]
0x415CBE: cmp     edx, [esi+8Ch]
0x415CC4: jnz     short loc_415D2A
0x415CC6: fld     dword ptr [edi+90h]
0x415CCC: fld     dword ptr [esi+90h]
0x415CD2: fucompp
0x415CD4: fnstsw  ax
0x415CD6: test    ah, 44h
0x415CD9: jp      short loc_415D2A
0x415CDB: fld     dword ptr [edi+94h]
0x415CE1: fld     dword ptr [esi+94h]
0x415CE7: fucompp
0x415CE9: fnstsw  ax
0x415CEB: test    ah, 44h
0x415CEE: jp      short loc_415D2A
0x415CF0: movzx   ecx, word ptr [edi+6Ch]
0x415CF4: cmp     cx, [esi+6Ch]
0x415CF8: jnz     short loc_415D2A
0x415CFA: movsx   ecx, cx
0x415CFD: xor     eax, eax
0x415CFF: test    ecx, ecx
0x415D01: jle     short loc_415D22
0x415D03: mov     edi, [edi+9Ch]
0x415D09: mov     esi, [esi+9Ch]
0x415D0F: sub     esi, edi
0x415D11: mov     edx, [edi]
0x415D13: cmp     edx, [esi+edi]
0x415D16: jnz     short loc_415D2A
0x415D18: add     eax, 1
0x415D1B: add     edi, 4
0x415D1E: cmp     eax, ecx
0x415D20: jl      short loc_415D11
0x415D22: pop     edi
0x415D23: pop     esi
0x415D24: xor     al, al
0x415D26: pop     ebx
0x415D27: retn    4
0x415D2A: pop     edi
0x415D2B: pop     esi
0x415D2C: mov     al, 1
0x415D2E: pop     ebx
0x415D2F: retn    4
