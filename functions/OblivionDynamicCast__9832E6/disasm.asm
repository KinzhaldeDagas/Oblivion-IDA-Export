0x9832E6: push    18h
0x9832E8: push    offset stru_AFFA18
0x9832ED: call    __SEH_prolog4
0x9832F2: mov     esi, [ebp+arg_0]
0x9832F5: test    esi, esi
0x9832F7: jnz     short loc_983301
0x9832F9: xor     eax, eax
0x9832FB: call    __SEH_epilog4
0x983300: retn
0x983301: and     [ebp+ms_exc.registration.TryLevel], 0
0x983305: mov     ecx, esi
0x983307: call    ?FindCompleteObject@@YAPAXPAPAX@Z; FindCompleteObject(void * *)
0x98330C: mov     edi, eax
0x98330E: mov     eax, [esi]
0x983310: mov     eax, [eax-4]
0x983313: sub     esi, [ebp+arg_4]
0x983316: sub     esi, edi
0x983318: mov     ecx, [eax+10h]
0x98331B: mov     ecx, [ecx+4]
0x98331E: push    [ebp+arg_C]; int
0x983321: test    cl, 1
0x983324: jnz     short loc_983332
0x983326: push    [ebp+arg_8]; struct _s_RTTICompleteObjectLocator *
0x983329: call    ?FindSITargetTypeInstance@@YAPBU_s_RTTIBaseClassDescriptor@@PBU_s_RTTICompleteObjectLocator@@PAUTypeDescriptor@@1@Z; FindSITargetTypeInstance(_s_RTTICompleteObjectLocator const *,TypeDescriptor *,TypeDescriptor *)
0x98332E: pop     ecx
0x98332F: pop     ecx
0x983330: jmp     short loc_98334B
0x983332: push    esi; struct TypeDescriptor *
0x983333: push    [ebp+arg_8]; struct _s_RTTICompleteObjectLocator *
0x983336: push    edi; void *
0x983337: test    cl, 2
0x98333A: jnz     short loc_983343
0x98333C: call    ?FindMITargetTypeInstance@@YAPBU_s_RTTIBaseClassDescriptor@@PAXPBU_s_RTTICompleteObjectLocator@@PAUTypeDescriptor@@H2@Z; FindMITargetTypeInstance(void *,_s_RTTICompleteObjectLocator const *,TypeDescriptor *,int,TypeDescriptor *)
0x983341: jmp     short loc_983348
0x983343: call    ?FindVITargetTypeInstance@@YAPBU_s_RTTIBaseClassDescriptor@@PAXPBU_s_RTTICompleteObjectLocator@@PAUTypeDescriptor@@H2@Z; FindVITargetTypeInstance(void *,_s_RTTICompleteObjectLocator const *,TypeDescriptor *,int,TypeDescriptor *)
0x983348: add     esp, 10h
0x98334B: test    eax, eax
0x98334D: jz      short loc_983367
0x98334F: add     eax, 8
0x983352: push    edi; void *
0x983353: call    ?PMDtoOffset@@YAHPAXABUPMD@@@Z; PMDtoOffset(void *,PMD const &)
0x983358: pop     ecx
0x983359: add     eax, edi
0x98335B: mov     [ebp+var_1C], eax
0x98335E: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x983365: jmp     short loc_9832FB
0x983367: xor     eax, eax
0x983369: mov     [ebp+var_1C], eax
0x98336C: cmp     [ebp+arg_10], eax
0x98336F: jz      short loc_98335E
0x983371: push    offset aBadDynamic_cas; "Bad dynamic_cast!"
0x983376: lea     ecx, [ebp+var_28]; this
0x983379: call    ??0bad_cast@std@@QAE@PBD@Z; std::bad_cast::bad_cast(char const *)
0x98337E: push    offset __TI2?AVbad_cast@std@@; throw info for 'class std::bad_cast'
0x983383: lea     eax, [ebp+var_28]
0x983386: push    eax
0x983387: call    ThrowException??
0x98338C: mov     eax, [ebp+ms_exc.exc_ptr]
0x98338F: mov     eax, [eax]
0x983391: mov     eax, [eax]
0x983393: xor     ecx, ecx
0x983395: cmp     eax, 0C0000005h
0x98339A: setz    cl
0x98339D: mov     eax, ecx
0x98339F: retn
0x9833A0: mov     esp, [ebp+ms_exc.old_esp]
0x9833A3: and     [ebp+var_1C], 0
0x9833A7: push    offset aAccessViolatio; "Access violation - no RTTI data!"
0x9833AC: lea     ecx, [ebp+var_28]; this
0x9833AF: call    ??0__non_rtti_object@std@@QAE@PBD@Z; std::__non_rtti_object::__non_rtti_object(char const *)
0x9833B4: push    offset __TI3?AV__non_rtti_object@std@@; throw info for 'class std::__non_rtti_object'
0x9833B9: jmp     short loc_983383
