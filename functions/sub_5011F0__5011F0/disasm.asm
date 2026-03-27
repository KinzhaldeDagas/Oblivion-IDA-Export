0x5011F0: push    ecx
0x5011F1: mov     ecx, [esp+4+l]
0x5011F5: mov     edx, [esp+4+arg_10]
0x5011F9: push    esi
0x5011FA: mov     esi, [esp+8+a4]
0x5011FE: lea     eax, [esp+8+var_4]
0x501202: push    eax; UInt16
0x501203: mov     eax, [esp+0Ch+arg_C]
0x501207: push    ecx; l
0x501208: mov     ecx, [esp+10h+a3]
0x50120C: push    edx; a6
0x50120D: mov     edx, [esp+14h+arg_4]
0x501211: push    eax; a5
0x501212: mov     eax, [esp+18h+a1]
0x501216: push    esi; a4
0x501217: push    ecx; a3
0x501218: push    edx; a2
0x501219: push    eax; a1
0x50121A: mov     dword ptr [esp+28h+var_4], 0
0x501222: call    Script_ExtractArgs
0x501227: add     esp, 20h
0x50122A: test    al, al
0x50122C: jnz     short loc_501231
0x50122E: pop     esi
0x50122F: pop     ecx
0x501230: retn
0x501231: mov     eax, dword ptr [esp+8+var_4]
0x501235: test    eax, eax
0x501237: jnz     short loc_501256
0x501239: push    eax; int
0x50123A: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50123F: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x501244: push    eax; int
0x501245: push    esi; void *
0x501246: call    OblivionDynamicCast
0x50124B: add     esp, 14h
0x50124E: test    eax, eax
0x501250: mov     dword ptr [esp+8+var_4], eax
0x501254: jz      short loc_501296
0x501256: cmp     byte ptr [eax+78h], 0
0x50125A: setz    cl
0x50125D: mov     [eax+78h], cl
0x501260: cmp     byte ptr ds:0B361ACh, 0
0x501267: jz      short loc_5012DD
0x501269: mov     ecx, dword ptr [esp+8+var_4]; this
0x50126D: cmp     byte ptr [ecx+78h], 0
0x501271: mov     eax, offset aOn_0
0x501276: jnz     short loc_50127D
0x501278: mov     eax, offset aOff
0x50127D: push    eax
0x50127E: call    TESObjectREFR_GetName
0x501283: push    eax
0x501284: push    offset aSProcessingIsS; "%s processing is  %s"
0x501289: call    Interface_ConsolePrint
0x50128E: add     esp, 0Ch
0x501291: mov     al, 1
0x501293: pop     esi
0x501294: pop     ecx
0x501295: retn
0x501296: cmp     byte ptr ds:0B3BD98h, 0
0x50129D: setz    al
0x5012A0: cmp     byte ptr ds:0B361ACh, 0
0x5012A7: mov     ds:0B3BD98h, al
0x5012AC: jz      short loc_5012CF
0x5012AE: test    al, al
0x5012B0: mov     eax, offset aOn_0
0x5012B5: jnz     short loc_5012BC
0x5012B7: mov     eax, offset aOff
0x5012BC: push    eax
0x5012BD: push    offset aAllAiProcessin; "All AI Processing is  %s"
0x5012C2: call    Interface_ConsolePrint
0x5012C7: mov     al, ds:0B3BD98h
0x5012CC: add     esp, 8
0x5012CF: test    al, al
0x5012D1: jnz     short loc_5012DD
0x5012D3: mov     ecx, offset ActorProcessManager_ptr
0x5012D8: call    sub_675880
0x5012DD: mov     al, 1
0x5012DF: pop     esi
0x5012E0: pop     ecx
0x5012E1: retn
