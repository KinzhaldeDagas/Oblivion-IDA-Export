0x5061B0: sub     esp, 8
0x5061B3: mov     edx, [esp+8+l]
0x5061B7: fld     dword ptr ds:0A30634h
0x5061BD: push    esi
0x5061BE: fstp    [esp+0Ch+var_4]
0x5061C2: mov     esi, [esp+0Ch+arg_8]
0x5061C6: lea     eax, [esp+0Ch+var_4]
0x5061CA: push    eax
0x5061CB: mov     eax, [esp+10h+arg_10]
0x5061CF: lea     ecx, [esp+10h+var_8]
0x5061D3: push    ecx; UInt16
0x5061D4: mov     ecx, [esp+14h+arg_C]
0x5061D8: push    edx; l
0x5061D9: mov     edx, [esp+18h+a3]
0x5061DD: push    eax; a6
0x5061DE: mov     eax, [esp+1Ch+arg_4]
0x5061E2: push    ecx; a5
0x5061E3: mov     ecx, [esp+20h+a1]
0x5061E7: push    esi; a4
0x5061E8: push    edx; a3
0x5061E9: push    eax; a2
0x5061EA: push    ecx; a1
0x5061EB: mov     dword ptr [esp+30h+var_8], 0
0x5061F3: call    Script_ExtractArgs
0x5061F8: add     esp, 24h
0x5061FB: test    al, al
0x5061FD: jnz     short loc_506204
0x5061FF: pop     esi
0x506200: add     esp, 8
0x506203: retn
0x506204: test    esi, esi
0x506206: jnz     short loc_50620E
0x506208: mov     esi, ds:0B333C4h
0x50620E: mov     edx, dword ptr [esp+0Ch+var_8]
0x506212: push    edx
0x506213: push    esi
0x506214: mov     ecx, offset ActorProcessManager_ptr
0x506219: call    sub_678E70
0x50621E: mov     ecx, esi; this
0x506220: call    TESObjectREFR_GetName
0x506225: test    eax, eax
0x506227: jz      short loc_506245
0x506229: mov     ecx, esi; this
0x50622B: call    TESObjectREFR_GetName
0x506230: push    eax
0x506231: push    offset aShaderEffect_2; "Shader effect has been removed from %s"
0x506236: call    Interface_ConsolePrint
0x50623B: add     esp, 8
0x50623E: mov     al, 1
0x506240: pop     esi
0x506241: add     esp, 8
0x506244: retn
0x506245: push    offset aShaderEffect_3; "Shader effect has been removed from ref"...
0x50624A: call    Interface_ConsolePrint
0x50624F: add     esp, 4
0x506252: mov     al, 1
0x506254: pop     esi
0x506255: add     esp, 8
0x506258: retn
