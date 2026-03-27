0x5085D0: sub     esp, 0Ch
0x5085D3: lea     eax, [esp+0Ch+var_8]
0x5085D7: push    eax
0x5085D8: mov     eax, [esp+10h+l]
0x5085DC: lea     ecx, [esp+10h+ArgList]
0x5085E0: push    ecx
0x5085E1: mov     ecx, [esp+14h+arg_10]
0x5085E5: lea     edx, [esp+14h+var_C]
0x5085E9: push    edx; UInt16
0x5085EA: mov     edx, [esp+18h+arg_C]
0x5085EE: push    eax; l
0x5085EF: mov     eax, [esp+1Ch+a4]
0x5085F3: push    ecx; a6
0x5085F4: mov     ecx, [esp+20h+a3]
0x5085F8: push    edx; a5
0x5085F9: mov     edx, [esp+24h+arg_4]
0x5085FD: push    eax; a4
0x5085FE: mov     eax, [esp+28h+a1]
0x508602: push    ecx; a3
0x508603: push    edx; a2
0x508604: push    eax; a1
0x508605: mov     dword ptr [esp+34h+var_C], 0
0x50860D: mov     dword ptr [esp+34h+ArgList], 0
0x508615: mov     [esp+34h+var_8], 0
0x50861D: call    Script_ExtractArgs
0x508622: add     esp, 28h
0x508625: test    al, al
0x508627: jnz     short loc_50862F
0x508629: xor     al, al
0x50862B: add     esp, 0Ch
0x50862E: retn
0x50862F: cmp     dword ptr [esp+0Ch+var_C], 0
0x508633: jz      short loc_508629
0x508635: mov     ecx, ds:0B35B90h
0x50863B: test    ecx, ecx
0x50863D: jz      short loc_508644
0x50863F: call    sub_4BE5A0
0x508644: mov     ecx, ds:0B35B8Ch
0x50864A: test    ecx, ecx
0x50864C: jz      short loc_508653
0x50864E: call    sub_4BD980
0x508653: mov     ecx, [esp+0Ch+var_8]
0x508657: mov     edx, dword ptr [esp+0Ch+ArgList]
0x50865B: push    esi
0x50865C: push    ecx; signed int
0x50865D: mov     ecx, dword ptr [esp+14h+var_C]; this
0x508661: push    edx; signed int
0x508662: call    TESWorldSpace__GetCellAtCellCoord
0x508667: mov     esi, eax
0x508669: test    esi, esi
0x50866B: jnz     short loc_5086A7
0x50866D: mov     eax, [esp+10h+var_8]
0x508671: mov     ecx, dword ptr [esp+10h+ArgList]
0x508675: push    eax; int
0x508676: push    ecx; ArgList
0x508677: mov     ecx, dword ptr [esp+18h+var_C]
0x50867B: call    sub_4F1630
0x508680: mov     esi, eax
0x508682: test    esi, esi
0x508684: jnz     short loc_5086A7
0x508686: mov     edx, dword ptr [esp+10h+var_C]
0x50868A: mov     eax, [esp+10h+var_8]
0x50868E: mov     ecx, dword ptr [esp+10h+ArgList]
0x508692: push    edx
0x508693: push    eax
0x508694: push    ecx
0x508695: mov     ecx, ds:0B33A98h
0x50869B: push    esi
0x50869C: call    sub_4471D0
0x5086A1: mov     esi, eax
0x5086A3: test    esi, esi
0x5086A5: jz      short loc_5086E3
0x5086A7: push    1
0x5086A9: call    GetGlobalScriptStateObj??
0x5086AE: add     esp, 4
0x5086B1: cmp     byte ptr [eax+31h], 0
0x5086B5: jle     short loc_5086D5
0x5086B7: mov     ecx, eax
0x5086B9: call    sub_5859C0
0x5086BE: push    0
0x5086C0: push    3
0x5086C2: push    1; arg1
0x5086C4: push    0; canCreate
0x5086C6: call    InterfaceManager_GetSingleton
0x5086CB: add     esp, 8
0x5086CE: mov     ecx, eax
0x5086D0: call    sub_57CFE0
0x5086D5: mov     ecx, ds:0B333C4h; int
0x5086DB: push    esi; int
0x5086DC: push    0; ArgList
0x5086DE: call    sub_66FD90
0x5086E3: mov     edx, ds:0B333C4h
0x5086E9: mov     byte ptr [edx+117h], 1
0x5086F0: mov     al, 1
0x5086F2: pop     esi
0x5086F3: add     esp, 0Ch
0x5086F6: retn
