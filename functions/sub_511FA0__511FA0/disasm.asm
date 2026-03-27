0x511FA0: mov     eax, [esp+arg_8]
0x511FA4: push    ebx
0x511FA5: push    ebp
0x511FA6: push    esi
0x511FA7: push    edi
0x511FA8: push    0; int
0x511FAA: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x511FAF: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x511FB4: push    0; int
0x511FB6: push    eax; void *
0x511FB7: call    OblivionDynamicCast
0x511FBC: mov     ebp, eax
0x511FBE: add     esp, 14h
0x511FC1: test    ebp, ebp
0x511FC3: jz      loc_512091
0x511FC9: mov     ecx, [ebp+58h]
0x511FCC: test    ecx, ecx
0x511FCE: jz      loc_512091
0x511FD4: mov     edx, [ecx]
0x511FD6: mov     eax, [edx+0CCh]
0x511FDC: call    eax
0x511FDE: mov     ecx, ds:0B362C0h
0x511FE4: push    eax
0x511FE5: push    ebp
0x511FE6: call    sub_521450
0x511FEB: mov     esi, eax
0x511FED: test    esi, esi
0x511FEF: jz      loc_512091
0x511FF5: mov     edx, [ebp+0]
0x511FF8: mov     eax, [edx+164h]
0x511FFE: mov     ecx, ebp
0x512000: call    eax
0x512002: mov     edi, eax
0x512004: test    edi, edi
0x512006: jz      loc_512091
0x51200C: mov     ecx, edi
0x51200E: xor     bl, bl
0x512010: call    sub_472EA0
0x512015: test    al, al
0x512017: jnz     short loc_51201B
0x512019: mov     bl, 1
0x51201B: mov     eax, [edi+0D0h]
0x512021: test    eax, eax
0x512023: jz      short loc_51202A
0x512025: cmp     [eax+24h], esi
0x512028: jz      short loc_512091
0x51202A: test    bl, bl
0x51202C: jz      short loc_51204B
0x51202E: mov     eax, [edi+0CCh]
0x512034: test    eax, eax
0x512036: jz      short loc_512091
0x512038: cmp     dword ptr [eax+4], 3
0x51203C: jnz     short loc_51204B
0x51203E: mov     eax, [eax+10h]
0x512041: test    eax, eax
0x512043: jz      short loc_512091
0x512045: cmp     dword ptr [eax+24h], 0
0x512049: jnz     short loc_512091
0x51204B: push    3; int
0x51204D: mov     ecx, esi
0x51204F: call    sub_520200
0x512054: push    eax; int
0x512055: push    ebp; int
0x512056: push    esi; int
0x512057: mov     ecx, edi; this
0x512059: call    sub_477DB0
0x51205E: cmp     byte ptr ds:0B361ACh, 0
0x512065: jz      short loc_512091
0x512067: mov     edx, [esi+18h]
0x51206A: mov     eax, [edx+14h]
0x51206D: mov     edi, [esi+0Ch]
0x512070: lea     ecx, [esi+18h]
0x512073: call    eax
0x512075: mov     edx, [esi]
0x512077: push    eax
0x512078: mov     eax, [edx+0D4h]
0x51207E: push    edi
0x51207F: mov     ecx, esi
0x512081: call    eax
0x512083: push    eax
0x512084: push    offset aPickedIdleS08x; "Picked Idle '%s' (%08X) file: %s"
0x512089: call    Interface_ConsolePrint
0x51208E: add     esp, 10h
0x512091: pop     edi
0x512092: pop     esi
0x512093: pop     ebp
0x512094: mov     al, 1
0x512096: pop     ebx
0x512097: retn
