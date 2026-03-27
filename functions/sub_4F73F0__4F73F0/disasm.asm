0x4F73F0: fldz
0x4F73F2: push    esi
0x4F73F3: mov     esi, [esp+4+arg_0]
0x4F73F7: test    esi, esi
0x4F73F9: push    edi
0x4F73FA: mov     edi, [esp+8+arg_C]
0x4F73FE: fstp    qword ptr [edi]
0x4F7400: jz      short loc_4F7463
0x4F7402: mov     eax, [esi]
0x4F7404: mov     edx, [eax+190h]
0x4F740A: mov     ecx, esi
0x4F740C: call    edx
0x4F740E: test    al, al
0x4F7410: jz      short loc_4F7463
0x4F7412: mov     ecx, esi; this
0x4F7414: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x4F7419: cmp     eax, 5
0x4F741C: jnz     short loc_4F7422
0x4F741E: fld1
0x4F7420: fstp    qword ptr [edi]
0x4F7422: cmp     byte ptr ds:0B361ACh, 0
0x4F7429: jz      short loc_4F7463
0x4F742B: fldz
0x4F742D: mov     ecx, esi; this
0x4F742F: fcomp   qword ptr [edi]
0x4F7431: fnstsw  ax
0x4F7433: test    ah, 44h
0x4F7436: jnp     short loc_4F7450
0x4F7438: call    TESObjectREFR_GetName
0x4F743D: push    eax
0x4F743E: push    offset aSIsRestrained; "%s is restrained"
0x4F7443: call    Interface_ConsolePrint
0x4F7448: add     esp, 8
0x4F744B: pop     edi
0x4F744C: mov     al, 1
0x4F744E: pop     esi
0x4F744F: retn
0x4F7450: call    TESObjectREFR_GetName
0x4F7455: push    eax
0x4F7456: push    offset aSIsNotRestrain; "%s is not restrained"
0x4F745B: call    Interface_ConsolePrint
0x4F7460: add     esp, 8
0x4F7463: pop     edi
0x4F7464: mov     al, 1
0x4F7466: pop     esi
0x4F7467: retn
