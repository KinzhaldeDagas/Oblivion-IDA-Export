0x6191B0: sub     esp, 0Ch
0x6191B3: push    esi
0x6191B4: mov     esi, ecx
0x6191B6: mov     ecx, [esi+3Ch]
0x6191B9: mov     eax, [ecx]
0x6191BB: mov     edx, [eax+164h]
0x6191C1: push    edi
0x6191C2: call    edx
0x6191C4: test    eax, eax
0x6191C6: mov     edi, 1
0x6191CB: jz      short loc_619204
0x6191CD: mov     ecx, [esi+3Ch]
0x6191D0: mov     eax, [ecx]
0x6191D2: mov     edx, [eax+164h]
0x6191D8: push    edi; slotSelector
0x6191D9: call    edx
0x6191DB: mov     ecx, eax; this
0x6191DD: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x6191E2: test    eax, eax
0x6191E4: jz      short loc_619204
0x6191E6: mov     ecx, [esi+3Ch]
0x6191E9: mov     eax, [ecx]
0x6191EB: mov     edx, [eax+164h]
0x6191F1: push    edi; slotSelector
0x6191F2: call    edx
0x6191F4: mov     ecx, eax; this
0x6191F6: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x6191FB: cmp     [eax+44h], edi
0x6191FE: jnz     loc_619396
0x619204: cmp     byte ptr [esi+49h], 0
0x619208: jnz     short loc_619213
0x61920A: cmp     [esi+74h], edi
0x61920D: jnz     loc_619396
0x619213: mov     ecx, esi
0x619215: call    CombatController_GetCurrentTarget
0x61921A: test    eax, eax
0x61921C: jz      loc_61939C
0x619222: cmp     dword ptr [esi+70h], 0Bh
0x619226: jz      loc_61939C
0x61922C: push    ebx
0x61922D: mov     ecx, esi
0x61922F: call    CombatController_GetCurrentTarget
0x619234: mov     ecx, eax
0x619236: call    Actor_IsCurrentActionInRange2To5; Process vfunc +0x2D0 in range 2..5 guard used by Player_OnInput jump gate with Acrobatics mastery. Treat as an action/movement lock signal when deciding climb eligibility.
0x61923B: mov     ecx, esi
0x61923D: mov     [esp+18h+var_A], al
0x619241: call    CombatController_GetCurrentTarget
0x619246: mov     ecx, eax
0x619248: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x61924D: cmp     eax, 3
0x619250: setz    [esp+18h+var_B]
0x619255: mov     ecx, esi
0x619257: xor     bl, bl
0x619259: call    CombatController_GetCurrentTarget
0x61925E: mov     edx, [eax]
0x619260: mov     ecx, eax
0x619262: mov     eax, [edx+330h]
0x619268: call    eax
0x61926A: test    eax, eax
0x61926C: jz      short loc_619284
0x61926E: mov     ecx, esi
0x619270: call    CombatController_GetCurrentTarget
0x619275: mov     edx, [eax]
0x619277: mov     ecx, eax
0x619279: mov     eax, [edx+330h]
0x61927F: call    eax
0x619281: mov     bl, [eax+49h]
0x619284: mov     ecx, esi
0x619286: call    CombatController_GetCachedTargetSurfaceDistance; Returns CombatController cached target surface distance at +0x184, computing it once when negative. The inherited EDI low-byte input belongs to this private compiler ABI and is deliberately retained.
0x61928B: fstp    [esp+18h+var_8]
0x61928F: mov     ecx, esi; this
0x619291: call    CombatController_GetDesiredCombatDistance; Caches desired combat distance based on active combat mode and ranged/melee data.
0x619296: fstp    [esp+18h+var_4]
0x61929A: mov     ecx, esi
0x61929C: call    CombatController_GetCurrentTarget
0x6192A1: mov     ecx, [eax+58h]
0x6192A4: mov     edx, [ecx]
0x6192A6: mov     eax, [edx+138h]
0x6192AC: call    eax
0x6192AE: mov     ecx, esi
0x6192B0: mov     [esp+18h+var_9], al
0x6192B4: call    CombatController_GetCurrentTarget
0x6192B9: mov     edx, [eax]
0x6192BB: mov     ecx, eax
0x6192BD: mov     eax, [edx+1A0h]
0x6192C3: call    eax
0x6192C5: test    al, al
0x6192C7: jnz     short loc_61931C
0x6192C9: mov     ecx, esi
0x6192CB: call    CombatController_GetCurrentTarget
0x6192D0: mov     edx, [eax]
0x6192D2: mov     ecx, eax
0x6192D4: mov     eax, [edx+19Ch]
0x6192DA: call    eax
0x6192DC: test    al, al
0x6192DE: jnz     short loc_61931C
0x6192E0: mov     ecx, esi
0x6192E2: call    CombatController_GetCurrentTarget
0x6192E7: mov     ecx, eax; this
0x6192E9: call    Actor__GetDeadState; Exact Actor accessor: returns Actor.members.DeadState at absolute Actor+0xB0. The social-conversation scans reject value 3. This corrects a false Microsoft Concurrency symbol collision.
0x6192EE: cmp     eax, 3
0x6192F1: jz      short loc_61931C
0x6192F3: mov     ecx, esi
0x6192F5: call    CombatController_GetCurrentTarget
0x6192FA: mov     ecx, eax; this
0x6192FC: call    Actor__IsSleeping; Returns true exactly when Actor.process exists and GetSleepState() == kSitSleep_Sleeping (9). This is a SitSleep-state test, not a combat/procedure test.
0x619301: test    al, al
0x619303: jnz     short loc_61931C
0x619305: mov     ecx, esi
0x619307: call    CombatController_GetCurrentTarget
0x61930C: mov     ecx, eax; this
0x61930E: call    Actor__GetDeadState; Exact Actor accessor: returns Actor.members.DeadState at absolute Actor+0xB0. The social-conversation scans reject value 3. This corrects a false Microsoft Concurrency symbol collision.
0x619313: cmp     eax, 5
0x619316: jz      short loc_61931C
0x619318: xor     cl, cl
0x61931A: jmp     short loc_61931E
0x61931C: mov     cl, 1
0x61931E: fld     [esp+18h+var_8]
0x619322: fld     [esp+18h+var_4]
0x619326: fcompp
0x619328: fnstsw  ax
0x61932A: test    ah, 5
0x61932D: jnp     short loc_61936C
0x61932F: test    cl, cl
0x619331: jnz     short loc_61936C
0x619333: cmp     [esp+18h+var_B], cl
0x619337: jnz     short loc_61936C
0x619339: test    bl, bl
0x61933B: jnz     short loc_61936C
0x61933D: push    0; Seed
0x61933F: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x619344: cdq
0x619345: mov     ecx, 64h ; 'd'
0x61934A: idiv    ecx
0x61934C: add     esp, 4
0x61934F: cmp     edx, 5
0x619352: jge     short loc_619360
0x619354: cmp     [esp+18h+var_A], bl
0x619358: jz      short loc_61936C
0x61935A: cmp     [esp+18h+var_9], bl
0x61935E: jnz     short loc_61936C
0x619360: mov     ecx, [esi+3Ch]
0x619363: call    Actor_IsBlocking; Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
0x619368: test    al, al
0x61936A: jnz     short loc_619395
0x61936C: mov     ecx, [esi+3Ch]
0x61936F: call    Actor_IsBlocking; Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
0x619374: test    al, al
0x619376: jz      short loc_619382
0x619378: mov     ecx, [esi+3Ch]; this
0x61937B: push    0; shouldBlock
0x61937D: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x619382: cmp     [esi+74h], edi
0x619385: mov     byte ptr [esi+49h], 0
0x619389: jnz     short loc_619395
0x61938B: mov     [esi+78h], edi
0x61938E: mov     dword ptr [esi+74h], 3
0x619395: pop     ebx
0x619396: pop     edi
0x619397: pop     esi
0x619398: add     esp, 0Ch
0x61939B: retn
0x61939C: mov     ecx, [esi+3Ch]
0x61939F: call    Actor_IsBlocking; Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
0x6193A4: test    al, al
0x6193A6: jz      short loc_6193B2
0x6193A8: mov     ecx, [esi+3Ch]; this
0x6193AB: push    0; shouldBlock
0x6193AD: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x6193B2: cmp     [esi+74h], edi
0x6193B5: mov     byte ptr [esi+49h], 0
0x6193B9: jnz     short loc_619396
0x6193BB: mov     [esi+78h], edi
0x6193BE: pop     edi
0x6193BF: mov     dword ptr [esi+74h], 3
0x6193C6: pop     esi
0x6193C7: add     esp, 0Ch
0x6193CA: retn
