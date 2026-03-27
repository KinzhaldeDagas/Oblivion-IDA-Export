0x5084A0: sub     esp, 8
0x5084A3: mov     edx, [esp+8+l]
0x5084A7: lea     eax, [esp+8+var_8]
0x5084AA: push    eax
0x5084AB: mov     eax, [esp+0Ch+arg_10]
0x5084AF: lea     ecx, [esp+0Ch+ArgList]
0x5084B3: push    ecx; UInt16
0x5084B4: mov     ecx, [esp+10h+arg_C]
0x5084B8: push    edx; l
0x5084B9: mov     edx, [esp+14h+a4]
0x5084BD: push    eax; a6
0x5084BE: mov     eax, [esp+18h+a3]
0x5084C2: push    ecx; a5
0x5084C3: mov     ecx, [esp+1Ch+arg_4]
0x5084C7: push    edx; a4
0x5084C8: mov     edx, [esp+20h+a1]
0x5084CC: push    eax; a3
0x5084CD: push    ecx; a2
0x5084CE: push    edx; a1
0x5084CF: mov     dword ptr [esp+2Ch+ArgList], 0
0x5084D7: mov     [esp+2Ch+var_8], 0
0x5084DF: call    Script_ExtractArgs
0x5084E4: add     esp, 24h
0x5084E7: test    al, al
0x5084E9: jnz     short loc_5084EF
0x5084EB: add     esp, 8
0x5084EE: retn
0x5084EF: mov     ecx, ds:0B333A0h
0x5084F5: push    edi
0x5084F6: call    TES__GetCurrentWorldspace
0x5084FB: mov     edi, eax
0x5084FD: test    edi, edi
0x5084FF: jnz     short loc_508514
0x508501: mov     eax, ds:0B33A98h
0x508506: mov     edi, [eax+0Ch]
0x508509: test    edi, edi
0x50850B: jnz     short loc_508514
0x50850D: xor     al, al
0x50850F: pop     edi
0x508510: add     esp, 8
0x508513: retn
0x508514: mov     ecx, ds:0B35B90h
0x50851A: test    ecx, ecx
0x50851C: jz      short loc_508523
0x50851E: call    sub_4BE5A0
0x508523: mov     ecx, ds:0B35B8Ch
0x508529: test    ecx, ecx
0x50852B: jz      short loc_508532
0x50852D: call    sub_4BD980
0x508532: mov     ecx, [esp+0Ch+var_8]
0x508536: mov     edx, dword ptr [esp+0Ch+ArgList]
0x50853A: push    esi
0x50853B: push    ecx; signed int
0x50853C: push    edx; signed int
0x50853D: mov     ecx, edi; this
0x50853F: call    TESWorldSpace__GetCellAtCellCoord
0x508544: mov     esi, eax
0x508546: test    esi, esi
0x508548: jnz     short loc_50857E
0x50854A: mov     eax, [esp+10h+var_8]
0x50854E: mov     ecx, dword ptr [esp+10h+ArgList]
0x508552: push    eax; int
0x508553: push    ecx; ArgList
0x508554: mov     ecx, edi
0x508556: call    sub_4F1630
0x50855B: mov     esi, eax
0x50855D: test    esi, esi
0x50855F: jnz     short loc_50857E
0x508561: mov     edx, [esp+10h+var_8]
0x508565: mov     eax, dword ptr [esp+10h+ArgList]
0x508569: mov     ecx, ds:0B33A98h
0x50856F: push    edi
0x508570: push    edx
0x508571: push    eax
0x508572: push    esi
0x508573: call    sub_4471D0
0x508578: mov     esi, eax
0x50857A: test    esi, esi
0x50857C: jz      short loc_5085BA
0x50857E: push    1
0x508580: call    GetGlobalScriptStateObj??
0x508585: add     esp, 4
0x508588: cmp     byte ptr [eax+31h], 0
0x50858C: jle     short loc_5085AC
0x50858E: mov     ecx, eax
0x508590: call    sub_5859C0
0x508595: push    0
0x508597: push    3
0x508599: push    1; arg1
0x50859B: push    0; canCreate
0x50859D: call    InterfaceManager_GetSingleton
0x5085A2: add     esp, 8
0x5085A5: mov     ecx, eax
0x5085A7: call    sub_57CFE0
0x5085AC: mov     ecx, ds:0B333C4h; int
0x5085B2: push    esi; int
0x5085B3: push    0; ArgList
0x5085B5: call    sub_66FD90
0x5085BA: mov     ecx, ds:0B333C4h
0x5085C0: pop     esi
0x5085C1: mov     byte ptr [ecx+117h], 1
0x5085C8: mov     al, 1
0x5085CA: pop     edi
0x5085CB: add     esp, 8
0x5085CE: retn
