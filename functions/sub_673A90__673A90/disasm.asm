0x673A90: push    ebx; Generic ActorProcessManager insertion. Selects process-level collection 0..3, silently returns if object->GetProcessLevel() does not match, then inserts with ordering controls. Returns void; there is no insertion-success result. Used for actors, load/resurrection paths, and projectiles.
0x673A91: mov     ebx, [esp+4+processLevel]
0x673A95: cmp     ebx, 3; switch 4 cases
0x673A98: push    esi
0x673A99: push    edi
0x673A9A: ja      short def_673A9C; jumptable 00673A9C default case
0x673A9C: jmp     ds:jpt_673A9C[ebx*4]; switch jump
0x673AA3: lea     esi, [ecx+68h]; Process-level collection mapping: level 0 -> manager+0x68; level 1 -> manager+0x00; level 2 -> manager+0x0C; level 3 -> manager+0x18.
0x673AA6: jmp     short loc_673AB8
0x673AA8: mov     esi, ecx; jumptable 00673A9C case 1
0x673AAA: jmp     short loc_673AB8
0x673AAC: lea     esi, [ecx+0Ch]; jumptable 00673A9C case 2
0x673AAF: jmp     short loc_673AB8
0x673AB1: lea     esi, [ecx+18h]; jumptable 00673A9C case 3
0x673AB4: jmp     short loc_673AB8
0x673AB6: xor     esi, esi; jumptable 00673A9C default case
0x673AB8: mov     edi, [esp+0Ch+arg_0]
0x673ABC: mov     ecx, edi; this
0x673ABE: call    Actor__GetProcessLevel; Direct call to Actor::GetProcessLevel (0x659A00), not an object virtual dispatch. A null MobileObject process yields -1; any mismatch with requested processLevel silently returns without insertion or status.
0x673AC3: cmp     eax, ebx; Reject insertion unless the MobileObject's current process level equals the requested processLevel argument.
0x673AC5: jnz     short loc_673AE2
0x673AC7: test    esi, esi
0x673AC9: jz      short loc_673AE2
0x673ACB: mov     eax, [esp+0Ch+relativeTo]
0x673ACF: mov     ecx, dword ptr [esp+0Ch+insertRelative]
0x673AD3: mov     edx, dword ptr [esp+0Ch+append]
0x673AD7: push    eax; relativeTo
0x673AD8: push    ecx; insertRelative
0x673AD9: push    edx; append
0x673ADA: push    edi; object
0x673ADB: mov     ecx, esi; this
0x673ADD: call    ProcessLevelList_InsertMobileObject; Insert the MobileObject into the selected process-level list using the requested ordering. The release path requests level 0, append=false, insertRelative=false, relativeTo=null. The helper is void and exposes no insertion-success predicate.
0x673AE2: pop     edi
0x673AE3: pop     esi
0x673AE4: pop     ebx
0x673AE5: retn    14h
