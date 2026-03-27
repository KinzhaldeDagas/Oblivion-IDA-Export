0x505FE0: push    0FFFFFFFFh
0x505FE2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x505FE7: mov     eax, large fs:0
0x505FED: push    eax
0x505FEE: sub     esp, 0Ch
0x505FF1: push    esi
0x505FF2: push    edi
0x505FF3: mov     eax, ds:0B30AACh
0x505FF8: xor     eax, esp
0x505FFA: push    eax
0x505FFB: lea     eax, [esp+24h+var_C]
0x505FFF: mov     large fs:0, eax
0x506005: mov     edx, [esp+24h+l]
0x506009: fld     dword ptr ds:0A30634h
0x50600F: mov     edi, [esp+24h+arg_8]
0x506013: fstp    [esp+24h+var_18]
0x506017: lea     eax, [esp+24h+var_18]
0x50601B: push    eax
0x50601C: mov     eax, [esp+28h+arg_10]
0x506020: lea     ecx, [esp+28h+var_14]
0x506024: push    ecx; UInt16
0x506025: mov     ecx, [esp+2Ch+arg_C]
0x506029: push    edx; l
0x50602A: mov     edx, [esp+30h+a3]
0x50602E: push    eax; a6
0x50602F: mov     eax, [esp+34h+arg_4]
0x506033: push    ecx; a5
0x506034: mov     ecx, [esp+38h+a1]
0x506038: push    edi; a4
0x506039: push    edx; a3
0x50603A: push    eax; a2
0x50603B: push    ecx; a1
0x50603C: mov     dword ptr [esp+48h+var_14], 0
0x506044: call    Script_ExtractArgs
0x506049: add     esp, 24h
0x50604C: test    al, al
0x50604E: jnz     short loc_506062
0x506050: mov     ecx, [esp+24h+var_C]
0x506054: mov     large fs:0, ecx
0x50605B: pop     ecx
0x50605C: pop     edi
0x50605D: pop     esi
0x50605E: add     esp, 18h
0x506061: retn
0x506062: test    edi, edi
0x506064: jnz     short loc_50606C
0x506066: mov     edi, ds:0B333C4h
0x50606C: mov     ecx, edi; this
0x50606E: call    TESObjectREFR_GetParentCell
0x506073: mov     ecx, ds:0B333A0h
0x506079: push    0; a2
0x50607B: push    eax; a1
0x50607C: call    TESObjectCELL_IsProcessLevel?LowHigh
0x506081: test    al, al
0x506083: jz      loc_50618E
0x506089: mov     edx, [edi]
0x50608B: mov     eax, [edx+154h]
0x506091: mov     ecx, edi
0x506093: call    eax
0x506095: test    eax, eax
0x506097: jz      loc_50618E
0x50609D: push    4Ch ; 'L'; Size
0x50609F: call    FormHeapAlloc
0x5060A4: add     esp, 4
0x5060A7: mov     [esp+24h+var_10], eax
0x5060AB: test    eax, eax
0x5060AD: mov     [esp+24h+var_4], 0
0x5060B5: jz      short loc_5060D0
0x5060B7: fld     [esp+24h+var_18]
0x5060BB: push    ecx
0x5060BC: mov     ecx, dword ptr [esp+28h+var_14]
0x5060C0: fstp    [esp+28h+var_28]; float
0x5060C3: push    ecx; int
0x5060C4: push    edi; int
0x5060C5: mov     ecx, eax
0x5060C7: call    MagicShaderHitEffect_constr_args2
0x5060CC: mov     esi, eax
0x5060CE: jmp     short loc_5060D2
0x5060D0: xor     esi, esi
0x5060D2: mov     edx, [esi]
0x5060D4: mov     eax, [edx+68h]
0x5060D7: mov     ecx, esi
0x5060D9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5060E1: call    eax
0x5060E3: test    al, al
0x5060E5: jz      short loc_50613A
0x5060E7: push    esi
0x5060E8: mov     ecx, offset ActorProcessManager_ptr
0x5060ED: call    sub_678D30
0x5060F2: cmp     byte ptr ds:0B361ACh, 0
0x5060F9: jz      loc_50618E
0x5060FF: mov     ecx, edi; this
0x506101: call    TESObjectREFR_GetName
0x506106: test    eax, eax
0x506108: jz      short loc_506133
0x50610A: mov     ecx, edi; this
0x50610C: call    TESObjectREFR_GetName
0x506111: push    eax
0x506112: push    offset aShaderEffectHa; "Shader effect has been applied to %s"
0x506117: call    Interface_ConsolePrint
0x50611C: add     esp, 8
0x50611F: mov     al, 1
0x506121: mov     ecx, [esp+24h+var_C]
0x506125: mov     large fs:0, ecx
0x50612C: pop     ecx
0x50612D: pop     edi
0x50612E: pop     esi
0x50612F: add     esp, 18h
0x506132: retn
0x506133: push    offset aShaderEffect_0; "Shader effect has been applied to refer"...
0x506138: jmp     short loc_506186
0x50613A: mov     edx, [esi]
0x50613C: mov     eax, [edx]
0x50613E: push    1
0x506140: mov     ecx, esi
0x506142: call    eax
0x506144: cmp     byte ptr ds:0B361ACh, 0
0x50614B: jz      short loc_50618E
0x50614D: mov     ecx, edi; this
0x50614F: call    TESObjectREFR_GetName
0x506154: test    eax, eax
0x506156: jz      short loc_506181
0x506158: mov     ecx, edi; this
0x50615A: call    TESObjectREFR_GetName
0x50615F: push    eax
0x506160: push    offset aShaderEffectIn; "Shader effect initialization failed for"...
0x506165: call    Interface_ConsolePrint
0x50616A: add     esp, 8
0x50616D: mov     al, 1
0x50616F: mov     ecx, [esp+24h+var_C]
0x506173: mov     large fs:0, ecx
0x50617A: pop     ecx
0x50617B: pop     edi
0x50617C: pop     esi
0x50617D: add     esp, 18h
0x506180: retn
0x506181: push    offset aShaderEffect_1; "Shader effect initialization failed for"...
0x506186: call    Interface_ConsolePrint
0x50618B: add     esp, 4
0x50618E: mov     al, 1
0x506190: mov     ecx, [esp+24h+var_C]
0x506194: mov     large fs:0, ecx
0x50619B: pop     ecx
0x50619C: pop     edi
0x50619D: pop     esi
0x50619E: add     esp, 18h
0x5061A1: retn
