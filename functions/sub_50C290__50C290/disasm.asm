0x50C290: push    ecx
0x50C291: push    esi
0x50C292: push    edi
0x50C293: mov     edi, [esp+0Ch+a4]
0x50C297: push    0; int
0x50C299: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C29E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C2A3: push    0; int
0x50C2A5: push    edi; void *
0x50C2A6: call    OblivionDynamicCast
0x50C2AB: mov     esi, eax
0x50C2AD: add     esp, 14h
0x50C2B0: test    esi, esi
0x50C2B2: jz      short loc_50C31E
0x50C2B4: fld1
0x50C2B6: mov     eax, [esp+0Ch+arg_18]
0x50C2BA: mov     edx, [esp+0Ch+l]
0x50C2BE: fstp    qword ptr [eax]
0x50C2C0: mov     eax, [esp+0Ch+arg_10]
0x50C2C4: lea     ecx, [esp+0Ch+var_4]
0x50C2C8: push    ecx; UInt16
0x50C2C9: mov     ecx, [esp+10h+arg_C]
0x50C2CD: push    edx; l
0x50C2CE: mov     edx, [esp+14h+a3]
0x50C2D2: push    eax; a6
0x50C2D3: mov     eax, [esp+18h+arg_4]
0x50C2D7: push    ecx; a5
0x50C2D8: mov     ecx, [esp+1Ch+a1]
0x50C2DC: push    edi; a4
0x50C2DD: push    edx; a3
0x50C2DE: push    eax; a2
0x50C2DF: push    ecx; a1
0x50C2E0: mov     dword ptr [esp+2Ch+var_4], 0
0x50C2E8: call    Script_ExtractArgs
0x50C2ED: add     esp, 20h
0x50C2F0: test    al, al
0x50C2F2: jnz     short loc_50C2F8
0x50C2F4: pop     edi
0x50C2F5: pop     esi
0x50C2F6: pop     ecx
0x50C2F7: retn
0x50C2F8: mov     eax, dword ptr [esp+0Ch+var_4]
0x50C2FC: test    eax, eax
0x50C2FE: setnz   dl
0x50C301: mov     [esi+0C8h], dl
0x50C307: cmp     byte ptr ds:0B361ACh, 0
0x50C30E: jz      short loc_50C31E
0x50C310: push    eax
0x50C311: push    offset aSetforcerun0_2; "SetForceRun >> %0.2f"
0x50C316: call    Interface_ConsolePrint
0x50C31B: add     esp, 8
0x50C31E: pop     edi
0x50C31F: mov     al, 1
0x50C321: pop     esi
0x50C322: pop     ecx
0x50C323: retn
