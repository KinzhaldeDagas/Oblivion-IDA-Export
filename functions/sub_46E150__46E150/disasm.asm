0x46E150: mov     eax, [esp+arg_0]
0x46E154: push    esi
0x46E155: push    0; int
0x46E157: push    offset ??_R0?AVTESProduceForm@@@8; struct TypeDescriptor *
0x46E15C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E161: push    0; int
0x46E163: push    eax; void *
0x46E164: mov     esi, ecx
0x46E166: call    OblivionDynamicCast
0x46E16B: add     esp, 14h
0x46E16E: test    eax, eax
0x46E170: jnz     short loc_46E178
0x46E172: mov     al, 1
0x46E174: pop     esi
0x46E175: retn    4
0x46E178: mov     ecx, [esi+4]
0x46E17B: cmp     ecx, [eax+4]
0x46E17E: jnz     short loc_46E172
0x46E180: mov     ecx, 4
0x46E185: add     eax, 8
0x46E188: lea     edx, [esi+8]
0x46E18B: push    edi
0x46E18C: lea     esp, [esp+0]
0x46E190: mov     esi, [edx]
0x46E192: cmp     esi, [eax]
0x46E194: jnz     short loc_46E1A8
0x46E196: sub     ecx, 4
0x46E199: add     eax, 4
0x46E19C: add     edx, 4
0x46E19F: cmp     ecx, 4
0x46E1A2: jnb     short loc_46E190
0x46E1A4: test    ecx, ecx
0x46E1A6: jz      short loc_46E20D
0x46E1A8: movzx   esi, byte ptr [edx]
0x46E1AB: movzx   edi, byte ptr [eax]
0x46E1AE: sub     esi, edi
0x46E1B0: jnz     short loc_46E1F7
0x46E1B2: sub     ecx, 1
0x46E1B5: add     eax, 1
0x46E1B8: add     edx, 1
0x46E1BB: test    ecx, ecx
0x46E1BD: jz      short loc_46E20D
0x46E1BF: movzx   esi, byte ptr [edx]
0x46E1C2: movzx   edi, byte ptr [eax]
0x46E1C5: sub     esi, edi
0x46E1C7: jnz     short loc_46E1F7
0x46E1C9: sub     ecx, 1
0x46E1CC: add     eax, 1
0x46E1CF: add     edx, 1
0x46E1D2: test    ecx, ecx
0x46E1D4: jz      short loc_46E20D
0x46E1D6: movzx   esi, byte ptr [edx]
0x46E1D9: movzx   edi, byte ptr [eax]
0x46E1DC: sub     esi, edi
0x46E1DE: jnz     short loc_46E1F7
0x46E1E0: sub     ecx, 1
0x46E1E3: add     eax, 1
0x46E1E6: add     edx, 1
0x46E1E9: test    ecx, ecx
0x46E1EB: jz      short loc_46E20D
0x46E1ED: movzx   esi, byte ptr [edx]
0x46E1F0: movzx   edx, byte ptr [eax]
0x46E1F3: sub     esi, edx
0x46E1F5: jz      short loc_46E20D
0x46E1F7: test    esi, esi
0x46E1F9: mov     eax, 1
0x46E1FE: jg      short loc_46E20F
0x46E200: or      eax, 0FFFFFFFFh
0x46E203: test    eax, eax
0x46E205: pop     edi
0x46E206: setnz   al
0x46E209: pop     esi
0x46E20A: retn    4
0x46E20D: xor     eax, eax
0x46E20F: test    eax, eax
0x46E211: pop     edi
0x46E212: setnz   al
0x46E215: pop     esi
0x46E216: retn    4
