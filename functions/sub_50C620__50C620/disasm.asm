0x50C620: push    ecx
0x50C621: mov     ecx, [esp+4+l]
0x50C625: mov     edx, [esp+4+arg_10]
0x50C629: push    esi
0x50C62A: mov     esi, [esp+8+a4]
0x50C62E: lea     eax, [esp+8+var_4]
0x50C632: push    eax; UInt16
0x50C633: mov     eax, [esp+0Ch+arg_C]
0x50C637: push    ecx; l
0x50C638: mov     ecx, [esp+10h+a3]
0x50C63C: push    edx; a6
0x50C63D: mov     edx, [esp+14h+arg_4]
0x50C641: push    eax; a5
0x50C642: mov     eax, [esp+18h+a1]
0x50C646: push    esi; a4
0x50C647: push    ecx; a3
0x50C648: push    edx; a2
0x50C649: push    eax; a1
0x50C64A: mov     dword ptr [esp+28h+var_4], 0
0x50C652: call    Script_ExtractArgs
0x50C657: add     esp, 20h
0x50C65A: test    al, al
0x50C65C: jnz     short loc_50C661
0x50C65E: pop     esi
0x50C65F: pop     ecx
0x50C660: retn
0x50C661: test    esi, esi
0x50C663: jz      short loc_50C6D2
0x50C665: push    edi
0x50C666: push    0; int
0x50C668: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C66D: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C672: push    0; int
0x50C674: push    esi; void *
0x50C675: call    OblivionDynamicCast
0x50C67A: mov     ecx, dword ptr [esp+20h+var_4]
0x50C67E: add     esp, 14h
0x50C681: test    ecx, ecx
0x50C683: mov     edi, eax
0x50C685: jz      short loc_50C6D1
0x50C687: call    sub_5E0F30
0x50C68C: test    al, al
0x50C68E: jz      short loc_50C6D1
0x50C690: mov     ecx, dword ptr [esp+0Ch+var_4]
0x50C694: mov     esi, [ecx+58h]
0x50C697: mov     edx, [esi]
0x50C699: mov     eax, [edx+37Ch]
0x50C69F: push    ebx
0x50C6A0: mov     ebx, [edi]
0x50C6A2: mov     ecx, esi
0x50C6A4: call    eax
0x50C6A6: mov     edx, [esi]
0x50C6A8: push    eax
0x50C6A9: mov     eax, [edx+380h]
0x50C6AF: mov     ecx, esi
0x50C6B1: call    eax
0x50C6B3: mov     edx, [esi]
0x50C6B5: push    eax
0x50C6B6: mov     eax, [edx+378h]
0x50C6BC: mov     ecx, esi
0x50C6BE: call    eax
0x50C6C0: mov     ecx, [esp+10h+a1]
0x50C6C4: mov     edx, [ebx+300h]
0x50C6CA: push    eax
0x50C6CB: push    ecx
0x50C6CC: mov     ecx, edi
0x50C6CE: call    edx
0x50C6D0: pop     ebx
0x50C6D1: pop     edi
0x50C6D2: mov     al, 1
0x50C6D4: pop     esi
0x50C6D5: pop     ecx
0x50C6D6: retn
