0x5053D0: push    ecx
0x5053D1: mov     eax, [esp+4+arg_8]
0x5053D5: push    esi
0x5053D6: push    0; int
0x5053D8: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5053DD: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5053E2: push    0; int
0x5053E4: push    eax; void *
0x5053E5: call    OblivionDynamicCast
0x5053EA: mov     esi, eax
0x5053EC: add     esp, 14h
0x5053EF: test    esi, esi
0x5053F1: jz      short loc_505457
0x5053F3: push    esi
0x5053F4: mov     ecx, offset ActorProcessManager_ptr
0x5053F9: call    sub_6760D0
0x5053FE: mov     edx, [esp+8+arg_18]
0x505402: movzx   ecx, al
0x505405: mov     [esp+8+var_4], ecx
0x505409: fild    [esp+8+var_4]
0x50540D: fst     qword ptr [edx]
0x50540F: cmp     byte ptr ds:0B361ACh, 0
0x505416: jz      short loc_505455
0x505418: fldz
0x50541A: mov     ecx, esi; this
0x50541C: fucompp
0x50541E: fnstsw  ax
0x505420: test    ah, 44h
0x505423: jnp     short loc_50543D
0x505425: call    TESObjectREFR_GetName
0x50542A: push    eax
0x50542B: push    offset aSIsDetected; " %s is detected"
0x505430: call    Interface_ConsolePrint
0x505435: add     esp, 8
0x505438: mov     al, 1
0x50543A: pop     esi
0x50543B: pop     ecx
0x50543C: retn
0x50543D: call    TESObjectREFR_GetName
0x505442: push    eax
0x505443: push    offset aSIsNotDetected; " %s is not detected"
0x505448: call    Interface_ConsolePrint
0x50544D: add     esp, 8
