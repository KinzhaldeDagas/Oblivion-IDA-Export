0x5050B0: push    ecx
0x5050B1: mov     ecx, [esp+4+l]
0x5050B5: mov     edx, [esp+4+arg_10]
0x5050B9: push    esi
0x5050BA: mov     esi, [esp+8+a4]
0x5050BE: lea     eax, [esp+8+var_4]
0x5050C2: push    eax; UInt16
0x5050C3: mov     eax, [esp+0Ch+arg_C]
0x5050C7: push    ecx; l
0x5050C8: mov     ecx, [esp+10h+a3]
0x5050CC: push    edx; a6
0x5050CD: mov     edx, [esp+14h+arg_4]
0x5050D1: push    eax; a5
0x5050D2: mov     eax, [esp+18h+a1]
0x5050D6: push    esi; a4
0x5050D7: push    ecx; a3
0x5050D8: push    edx; a2
0x5050D9: push    eax; a1
0x5050DA: mov     dword ptr [esp+28h+var_4], 0
0x5050E2: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x5050E7: add     esp, 20h
0x5050EA: test    al, al
0x5050EC: jnz     short loc_5050F1
0x5050EE: pop     esi
0x5050EF: pop     ecx
0x5050F0: retn
0x5050F1: test    esi, esi
0x5050F3: jz      short loc_505111
0x5050F5: mov     eax, dword ptr [esp+8+var_4]
0x5050F9: test    eax, eax
0x5050FB: jz      short loc_505111
0x5050FD: mov     ecx, [esp+8+value]
0x505101: push    ecx; value
0x505102: push    0; param2
0x505104: push    eax; package
0x505105: push    esi; subject
0x505106: call    GetIsCurrentPackage_Eval; GetIsCurrentPackage_Eval requires an actor subject and Package parameter (form type 0x3D). It reads the subject's current package; for a temporary-override package it prefers the actor's ExtraPackage when present, then pointer-compares against the parameter.
0x50510B: add     esp, 10h
0x50510E: pop     esi
0x50510F: pop     ecx
0x505110: retn
0x505111: mov     al, 1
0x505113: pop     esi
0x505114: pop     ecx
0x505115: retn
