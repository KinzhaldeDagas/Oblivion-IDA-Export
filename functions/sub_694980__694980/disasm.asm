0x694980: mov     ecx, [esp+target]; Enumerate a MagicTarget's active, non-terminated LGHT effects, keep the greatest-magnitude LightEffect, tear down every losing candidate, then create/retain the winner's single transient point light.
0x694984: test    ecx, ecx
0x694986: jz      locret_694A20
0x69498C: mov     eax, [ecx]
0x69498E: mov     edx, [eax+8]
0x694991: push    ebx
0x694992: push    edi
0x694993: xor     ebx, ebx
0x694995: call    edx
0x694997: mov     edi, eax
0x694999: test    edi, edi
0x69499B: jz      loc_694A1E
0x6949A1: push    esi
0x6949A2: cmp     dword ptr [edi+4], 0
0x6949A6: jnz     short loc_6949AD
0x6949A8: cmp     dword ptr [edi], 0
0x6949AB: jz      short loc_694A10
0x6949AD: mov     eax, [edi]
0x6949AF: test    eax, eax
0x6949B1: jz      short loc_694A09
0x6949B3: mov     ecx, [eax+0Ch]
0x6949B6: mov     edx, [ecx+1Ch]
0x6949B9: cmp     dword ptr [edx+98h], 5448474Ch; Filter active effects by the Oblivion magic-effect code 'LGHT' before the LightEffect RTTI cast.
0x6949C3: jnz     short loc_694A09
0x6949C5: cmp     byte ptr [eax+11h], 0; Exclude terminated ActiveEffect entries from strongest-LightEffect selection.
0x6949C9: jnz     short loc_694A09
0x6949CB: push    0; int
0x6949CD: push    offset ??_R0?AVLightEffect@@@8; struct TypeDescriptor *
0x6949D2: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6949D7: push    0; int
0x6949D9: push    eax; void *
0x6949DA: call    OblivionDynamicCast
0x6949DF: add     esp, 14h
0x6949E2: test    ebx, ebx
0x6949E4: mov     esi, eax
0x6949E6: jz      short loc_694A07
0x6949E8: fld     dword ptr [ebx+18h]; Compare ActiveEffect magnitude at +0x18; the greater-magnitude LightEffect survives and the other transient light is torn down.
0x6949EB: fld     dword ptr [esi+18h]
0x6949EE: fcompp
0x6949F0: fnstsw  ax
0x6949F2: test    ah, 41h
0x6949F5: jz      short loc_694A00
0x6949F7: mov     ecx, esi; self
0x6949F9: call    LightEffect_TeardownTransientPointLight; Tear down a LightEffect transient point light by backing-light identity: remove its full-list ShadowSceneLight, detach it from the actor scene graph, clear actor extra-data type 0x49, release the LightEffect smart pointer, and decrement the active magic-light count.
0x6949FE: jmp     short loc_694A09
0x694A00: mov     ecx, ebx; self
0x694A02: call    LightEffect_TeardownTransientPointLight; Tear down a LightEffect transient point light by backing-light identity: remove its full-list ShadowSceneLight, detach it from the actor scene graph, clear actor extra-data type 0x49, release the LightEffect smart pointer, and decrement the active magic-light count.
0x694A07: mov     ebx, esi
0x694A09: mov     edi, [edi+4]
0x694A0C: test    edi, edi
0x694A0E: jnz     short loc_6949A2
0x694A10: test    ebx, ebx
0x694A12: pop     esi
0x694A13: jz      short loc_694A1E
0x694A15: pop     edi
0x694A16: mov     ecx, ebx
0x694A18: pop     ebx
0x694A19: jmp     loc_694600; Tail-jump into the native transient-point-light creation block for the selected strongest LightEffect.
0x694A1E: pop     edi
0x694A1F: pop     ebx
0x694A20: retn
0x694600: push    0FFFFFFFFh; Shared creation tail for the strongest active LightEffect selected at 0x00694980: create/configure a transient NiPointLight, register it in the native full-light list, attach it to the actor, and store it in extra-data type 0x49.
0x694602: push    offset loc_9C5853
0x694607: mov     eax, large fs:0
0x69460D: push    eax
0x69460E: sub     esp, 20h
0x694611: push    ebx
0x694612: push    ebp
0x694613: push    esi
0x694614: push    edi
0x694615: mov     eax, ds:0B30AACh
0x69461A: xor     eax, esp
0x69461C: push    eax; ArgList
0x69461D: lea     eax, [esp+40h+var_C]
0x694621: mov     large fs:0, eax
0x694627: mov     ebp, ecx
0x694629: mov     ecx, [ebp+20h]; this
0x69462C: test    ecx, ecx
0x69462E: jz      short loc_694639
0x694630: call    MagicTarget_GetParentActor
0x694635: mov     esi, eax
0x694637: jmp     short loc_69463B
0x694639: xor     esi, esi
0x69463B: cmp     dword ptr [ebp+38h], 0
0x69463F: lea     edi, [ebp+38h]
0x694642: jnz     loc_694899
0x694648: test    esi, esi
0x69464A: jz      loc_694899
0x694650: mov     ecx, esi; self
0x694652: call    TESObjectREFR_GetSpellEffectLightPayload; Do not create another transient magic light while the parent actor already has spell-effect light payload type 0x49.
0x694657: test    eax, eax
0x694659: jnz     loc_694899
0x69465F: mov     eax, ds:0B3C0B4h; Gate transient magic-light creation by current active count versus the native iMagicLightMaxCount setting.
0x694664: cmp     eax, ds:0B38008h
0x69466A: jg      loc_694899
0x694670: mov     ecx, [ebp+0Ch]
0x694673: mov     eax, [ecx+1Ch]
0x694676: mov     ebx, [eax+70h]; Fetch the TESObjectLIGH assigned to the LGHT magic-effect definition; report an editor-data error when absent.
0x694679: test    ebx, ebx
0x69467B: jnz     short loc_69469E
0x69467D: push    offset aLightEffectHas; "Light Effect has no Light object associ"...
0x694682: call    PrintError
0x694687: add     esp, 4
0x69468A: mov     ecx, [esp+40h+var_C]
0x69468E: mov     large fs:0, ecx
0x694695: pop     ecx
0x694696: pop     edi
0x694697: pop     esi
0x694698: pop     ebp
0x694699: pop     ebx
0x69469A: add     esp, 2Ch
0x69469D: retn
0x69469E: push    114h; Size
0x6946A3: call    FormHeapAlloc
0x6946A8: add     esp, 4
0x6946AB: mov     dword ptr [esp+40h+var_28+4], eax
0x6946AF: test    eax, eax
0x6946B1: mov     [esp+40h+var_4], 0
0x6946B9: jz      short loc_6946C4
0x6946BB: mov     ecx, eax
0x6946BD: call    sub_4B0BF0
0x6946C2: jmp     short loc_6946C6
0x6946C4: xor     eax, eax
0x6946C6: push    eax; a2
0x6946C7: mov     ecx, edi; this
0x6946C9: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6946D1: call    NiSmartPointer_Set??
0x6946D6: mov     eax, [ebx+78h]
0x6946D9: movzx   edx, al
0x6946DC: mov     [esp+40h+slot+4], edx
0x6946E0: movzx   ecx, ah
0x6946E3: fild    [esp+40h+slot+4]
0x6946E7: mov     [esp+40h+slot+4], ecx
0x6946EB: fstp    dword ptr [esp+40h+var_28+4]
0x6946EF: shr     eax, 10h
0x6946F2: fild    [esp+40h+slot+4]
0x6946F6: movzx   edx, al
0x6946F9: fstp    [esp+40h+var_20]
0x6946FD: mov     [esp+40h+slot+4], edx
0x694701: mov     ecx, [edi]
0x694703: fild    [esp+40h+slot+4]
0x694707: lea     eax, [esp+40h+var_28+4]
0x69470B: push    eax
0x69470C: fstp    [esp+44h+var_1C]
0x694710: fld     dword ptr [esp+44h+var_28+4]
0x694714: fld     qword ptr ds:0A3DDD8h
0x69471A: fdiv    st(1), st
0x69471C: fxch    st(1)
0x69471E: fstp    dword ptr [esp+44h+var_28+4]
0x694722: fld     [esp+44h+var_20]
0x694726: fdiv    st, st(1)
0x694728: fstp    [esp+44h+var_20]
0x69472C: fdivr   [esp+44h+var_1C]
0x694730: fstp    [esp+44h+var_1C]
0x694734: call    sub_482120
0x694739: fld     dword ptr [ebp+18h]
0x69473C: mov     ecx, (offset flt_B37ED0+150h)
0x694741: fstp    [esp+40h+slot+4]
0x694745: call    GameSetting_GetSafeFloatPointer
0x69474A: fld     dword ptr [eax]
0x69474C: fadd    [esp+40h+slot+4]
0x694750: mov     ecx, 0B37DB8h
0x694755: fstp    [esp+40h+var_28+4]
0x694759: call    GameSetting_GetSafeFloatPointer
0x69475E: fld     dword ptr [eax]
0x694760: mov     ecx, [edi]
0x694762: fmul    [esp+40h+var_28+4]
0x694766: lea     edx, [esp+40h+var_28+4]
0x69476A: push    edx
0x69476B: fstp    dword ptr [esp+44h+var_28+4]
0x69476F: fldz
0x694771: fst     [esp+44h+var_20]
0x694775: fstp    [esp+44h+var_1C]
0x694779: call    sub_4B0BC0
0x69477E: fld     dword ptr [ebx+88h]
0x694784: mov     eax, [edi]
0x694786: fstp    [esp+40h+slot+4]
0x69478A: fld     [esp+40h+slot+4]
0x69478E: mov     ebp, 1
0x694793: add     [eax+0B8h], ebp
0x694799: fstp    dword ptr [eax+0DCh]
0x69479F: push    0
0x6947A1: call    GetShadowSceneNode
0x6947A6: add     esp, 4
0x6947A9: test    eax, eax
0x6947AB: jz      short loc_6947B8
0x6947AD: mov     ecx, [edi]
0x6947AF: push    ebp; trackBackingPosition
0x6947B0: push    ecx; backingLight
0x6947B1: mov     ecx, eax; self
0x6947B3: call    ShadowSceneNode_FindOrCreateFullLightForSource; Register the transient LightEffect NiPointLight as a native full-list source with trackBackingPosition=true.
0x6947B8: mov     eax, [esi]
0x6947BA: mov     edx, [eax+15Ch]
0x6947C0: lea     ecx, [esp+40h+var_18]
0x6947C4: push    ecx
0x6947C5: mov     ecx, esi
0x6947C7: call    edx
0x6947C9: fld     dword ptr [eax+4]
0x6947CC: mov     ecx, (offset flt_B37ED0+140h)
0x6947D1: fstp    [esp+40h+var_28+4]
0x6947D5: call    GameSetting_GetSafeFloatPointer
0x6947DA: fld     dword ptr [eax]
0x6947DC: fadd    [esp+40h+var_28+4]
0x6947E0: mov     eax, [esi]
0x6947E2: mov     edx, [eax+0ECh]
0x6947E8: mov     ecx, esi
0x6947EA: fstp    [esp+40h+var_28+4]
0x6947EE: call    edx
0x6947F0: fmul    [esp+40h+var_28+4]
0x6947F4: mov     ebx, [edi]
0x6947F6: mov     ecx, esi
0x6947F8: fstp    dword ptr [esp+40h+var_28+4]
0x6947FC: call    Actor_GetScaledCollisionHeight; Returns (localBoundMax.z - localBoundMin.z) * reference scale.
0x694801: mov     ecx, (offset flt_B37ED0+148h)
0x694806: fstp    qword ptr [esp+40h+slot+4]
0x69480A: call    GameSetting_GetSafeFloatPointer
0x69480F: fld     dword ptr [eax]
0x694811: fadd    qword ptr [esp+40h+slot+4]
0x694815: mov     eax, [esi]
0x694817: mov     edx, [eax+0ECh]
0x69481D: mov     ecx, esi
0x69481F: fstp    qword ptr [esp+40h+slot+4]
0x694823: call    edx
0x694825: fmul    qword ptr [esp+40h+slot+4]
0x694829: sub     esp, 0Ch
0x69482C: mov     ecx, ebx
0x69482E: fstp    [esp+4Ch+slot+4]
0x694832: fld     [esp+4Ch+slot+4]
0x694836: fstp    [esp+4Ch+var_44]; float
0x69483A: fld     dword ptr [esp+4Ch+var_28+4]
0x69483E: fstp    [esp+4Ch+var_48]; float
0x694842: fldz
0x694844: fstp    [esp+4Ch+var_4C]; float
0x694847: call    sub_404CF0
0x69484C: mov     eax, [esi]
0x69484E: mov     edx, [eax+154h]
0x694854: mov     ecx, esi
0x694856: call    edx
0x694858: push    eax
0x694859: lea     ecx, [esp+44h+slot+4]
0x69485D: call    sub_405070
0x694862: mov     eax, [edi]
0x694864: mov     ecx, [esp+40h+slot+4]
0x694868: mov     edx, [ecx]
0x69486A: push    ebp
0x69486B: push    eax
0x69486C: mov     eax, [edx+84h]
0x694872: mov     [esp+48h+var_4], ebp
0x694876: call    eax; Attach the transient point light to an actor-relative scene node after computing native forward/height offsets.
0x694878: mov     edi, [edi]
0x69487A: push    edi; backingLight
0x69487B: mov     ecx, esi; self
0x69487D: call    TESObjectREFR_SetSpellEffectExtraLight; Store the same transient point light on the parent actor as spell-effect attached-light extra-data type 0x49.
0x694882: add     ds:0B3C0B4h, ebp
0x694888: lea     ecx, [esp+40h+slot+4]; slot
0x69488C: mov     [esp+40h+var_4], 0FFFFFFFFh
0x694894: call    NiPointerSlot_Release
0x694899: mov     ecx, [esp+40h+var_C]
0x69489D: mov     large fs:0, ecx
0x6948A4: pop     ecx
0x6948A5: pop     edi
0x6948A6: pop     esi
0x6948A7: pop     ebp
0x6948A8: pop     ebx
0x6948A9: add     esp, 2Ch
0x6948AC: retn
0x9C5840: mov     eax, [ebp-24h]
0x9C5843: push    eax
0x9C5844: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C5849: pop     ecx
0x9C584A: retn
0x9C584B: lea     ecx, [ebp-2Ch]; slot
0x9C584E: jmp     NiPointerSlot_Release
0x9C5853: mov     edx, [esp+arg_4]
0x9C5857: lea     eax, [edx-30h]
0x9C585A: mov     ecx, [edx-34h]
0x9C585D: xor     ecx, eax
0x9C585F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5864: mov     eax, offset stru_AEDFD4
0x9C5869: jmp     ___CxxFrameHandler3
