0x4F9010: fldz
0x4F9012: push    esi
0x4F9013: mov     esi, [esp+4+arg_0]
0x4F9017: test    esi, esi
0x4F9019: push    edi
0x4F901A: mov     edi, [esp+8+arg_C]
0x4F901E: fstp    qword ptr [edi]
0x4F9020: jz      short loc_4F9043
0x4F9022: mov     ecx, esi; this
0x4F9024: call    TESObjectREFR_GetParentCell
0x4F9029: test    eax, eax
0x4F902B: jz      short loc_4F9043
0x4F902D: mov     ecx, esi; this
0x4F902F: call    TESObjectREFR_GetParentCell
0x4F9034: mov     ecx, eax; this
0x4F9036: call    TESObjectCELL_IsInterior
0x4F903B: test    al, al
0x4F903D: jz      short loc_4F9043
0x4F903F: fld1
0x4F9041: fstp    qword ptr [edi]
0x4F9043: cmp     byte ptr ds:0B361ACh, 0
0x4F904A: jz      short loc_4F90B7
0x4F904C: fldz
0x4F904E: push    0; int
0x4F9050: fcomp   qword ptr [edi]
0x4F9052: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F9057: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F905C: push    0; int
0x4F905E: push    esi; void *
0x4F905F: fnstsw  ax
0x4F9061: test    ah, 44h
0x4F9064: jnp     short loc_4F9091
0x4F9066: call    OblivionDynamicCast
0x4F906B: add     esp, 14h
0x4F906E: test    eax, eax
0x4F9070: jz      short loc_4F9079
0x4F9072: mov     eax, [eax+4]
0x4F9075: test    eax, eax
0x4F9077: jnz     short loc_4F907E
0x4F9079: mov     eax, offset EmptyString
0x4F907E: push    eax
0x4F907F: push    offset aSIsInAnInterio; "%s is in an Interior"
0x4F9084: call    Interface_ConsolePrint
0x4F9089: add     esp, 8
0x4F908C: pop     edi
0x4F908D: mov     al, 1
0x4F908F: pop     esi
0x4F9090: retn
0x4F9091: call    OblivionDynamicCast
0x4F9096: add     esp, 14h
0x4F9099: test    eax, eax
0x4F909B: jz      short loc_4F90A4
0x4F909D: mov     eax, [eax+4]
0x4F90A0: test    eax, eax
0x4F90A2: jnz     short loc_4F90A9
0x4F90A4: mov     eax, offset EmptyString
0x4F90A9: push    eax
0x4F90AA: push    offset aSIsNotAnInteri; "%s is not an Interior"
0x4F90AF: call    Interface_ConsolePrint
0x4F90B4: add     esp, 8
0x4F90B7: pop     edi
0x4F90B8: mov     al, 1
0x4F90BA: pop     esi
0x4F90BB: retn
