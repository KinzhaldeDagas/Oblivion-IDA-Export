0x50C390: push    ecx
0x50C391: push    esi
0x50C392: push    edi
0x50C393: mov     edi, [esp+0Ch+a4]
0x50C397: push    0; int
0x50C399: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C39E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C3A3: push    0; int
0x50C3A5: push    edi; void *
0x50C3A6: call    OblivionDynamicCast
0x50C3AB: mov     esi, eax
0x50C3AD: add     esp, 14h
0x50C3B0: test    esi, esi
0x50C3B2: jz      short loc_50C41E
0x50C3B4: fld1
0x50C3B6: mov     eax, [esp+0Ch+arg_18]
0x50C3BA: mov     edx, [esp+0Ch+l]
0x50C3BE: fstp    qword ptr [eax]
0x50C3C0: mov     eax, [esp+0Ch+arg_10]
0x50C3C4: lea     ecx, [esp+0Ch+var_4]
0x50C3C8: push    ecx; UInt16
0x50C3C9: mov     ecx, [esp+10h+arg_C]
0x50C3CD: push    edx; l
0x50C3CE: mov     edx, [esp+14h+a3]
0x50C3D2: push    eax; a6
0x50C3D3: mov     eax, [esp+18h+arg_4]
0x50C3D7: push    ecx; a5
0x50C3D8: mov     ecx, [esp+1Ch+a1]
0x50C3DC: push    edi; a4
0x50C3DD: push    edx; a3
0x50C3DE: push    eax; a2
0x50C3DF: push    ecx; a1
0x50C3E0: mov     dword ptr [esp+2Ch+var_4], 0
0x50C3E8: call    Script_ExtractArgs
0x50C3ED: add     esp, 20h
0x50C3F0: test    al, al
0x50C3F2: jnz     short loc_50C3F8
0x50C3F4: pop     edi
0x50C3F5: pop     esi
0x50C3F6: pop     ecx
0x50C3F7: retn
0x50C3F8: mov     eax, dword ptr [esp+0Ch+var_4]
0x50C3FC: test    eax, eax
0x50C3FE: setnz   dl
0x50C401: mov     [esi+0C9h], dl
0x50C407: cmp     byte ptr ds:0B361ACh, 0
0x50C40E: jz      short loc_50C41E
0x50C410: push    eax
0x50C411: push    offset aSetforcesneak0; "SetForceSneak >> %0.2f"
0x50C416: call    Interface_ConsolePrint
0x50C41B: add     esp, 8
0x50C41E: pop     edi
0x50C41F: mov     al, 1
0x50C421: pop     esi
0x50C422: pop     ecx
0x50C423: retn
