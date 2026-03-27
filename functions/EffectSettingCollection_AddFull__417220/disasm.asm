0x417220: push    0FFFFFFFFh
0x417222: push    offset EffectSettingCollection_AddFull_SEH
0x417227: mov     eax, large fs:0
0x41722D: push    eax
0x41722E: sub     esp, 8Ch
0x417234: push    esi
0x417235: push    edi
0x417236: mov     eax, ___security_cookie
0x41723B: xor     eax, esp
0x41723D: push    eax
0x41723E: lea     eax, [esp+0A4h+var_C]
0x417245: mov     large fs:0, eax
0x41724B: push    0A8h ; '¨'; Size
0x417250: call    FormHeapAlloc
0x417255: add     esp, 4
0x417258: mov     [esp+0A4h+var_98], eax
0x41725C: test    eax, eax
0x41725E: mov     [esp+0A4h+var_4], 0
0x417269: jz      short loc_417276
0x41726B: mov     ecx, eax; this
0x41726D: call    ??0EffectSetting@@QAE@XZ; EffectSetting::EffectSetting(void)
0x417272: mov     esi, eax
0x417274: jmp     short loc_417278
0x417276: xor     esi, esi
0x417278: mov     edi, [esp+0A4h+a2]
0x41727F: cmp     edi, 46464553h
0x417285: mov     eax, [esp+0A4h+arg_14]
0x41728C: mov     [esp+0A4h+var_4], 0FFFFFFFFh
0x417297: mov     [esi+58h], eax
0x41729A: jz      short loc_4172EB
0x41729C: mov     ecx, eax
0x41729E: shr     ecx, 17h
0x4172A1: test    cl, 1
0x4172A4: jnz     short loc_4172EB
0x4172A6: test    al, 70h
0x4172A8: jnz     short loc_4172EB
0x4172AA: push    offset aRegisteredEffe; "Registered EffectSetting does not allow"...
0x4172AF: lea     ecx, [esp+0A8h+var_28]
0x4172B6: call    sub_414750
0x4172BB: lea     edx, [esp+0A4h+var_28]
0x4172BF: push    edx
0x4172C0: lea     ecx, [esp+0A8h+var_50]
0x4172C4: mov     [esp+0A8h+var_4], 1
0x4172CF: call    sub_4146E0
0x4172D4: push    offset __TI4?AVexNoRangeFlags@EffectSettingCollection@@; throw info for 'class EffectSettingCollection::exNoRangeFlags'
0x4172D9: lea     eax, [esp+0A8h+var_50]
0x4172DD: push    eax
0x4172DE: mov     [esp+0ACh+var_50], offset ??_7exNoRangeFlags@EffectSettingCollection@@6B@; const EffectSettingCollection::exNoRangeFlags::`vftable'
0x4172E6: call    ThrowException??
0x4172EB: mov     ecx, eax
0x4172ED: shr     ecx, 14h
0x4172F0: test    cl, 1
0x4172F3: jnz     loc_417381
0x4172F9: mov     edx, eax
0x4172FB: shr     edx, 13h
0x4172FE: test    dl, 1
0x417301: jnz     short loc_417381
0x417303: mov     ecx, eax
0x417305: shr     ecx, 10h
0x417308: test    cl, 1
0x41730B: jnz     short loc_417381
0x41730D: mov     edx, eax
0x41730F: shr     edx, 11h
0x417312: test    dl, 1
0x417315: jnz     short loc_417381
0x417317: mov     ecx, eax
0x417319: shr     ecx, 12h
0x41731C: test    cl, 1
0x41731F: jnz     short loc_417381
0x417321: shr     eax, 18h
0x417324: and     eax, 1
0x417327: cmp     eax, 1
0x41732A: jle     short loc_417381
0x41732C: push    3Ch ; '<'; MaxCount
0x41732E: push    offset aRegisteredEf_0; "Registered EffectSetting contains multi"...
0x417333: lea     ecx, [esp+0ACh+var_94]
0x417337: mov     [esp+0ACh+var_7C], 0Fh
0x41733F: mov     [esp+0ACh+var_80], 0
0x417347: mov     [esp+0ACh+var_90], 0
0x41734C: call    sub_414500
0x417351: lea     edx, [esp+0A4h+var_94]
0x417355: push    edx
0x417356: lea     ecx, [esp+0A8h+var_78]
0x41735A: mov     [esp+0A8h+var_4], 2
0x417365: call    sub_4146E0
0x41736A: push    offset __TI4?AVexMultipleAssociatedFlags@EffectSettingCollection@@; throw info for 'class EffectSettingCollection::exMultipleAssociatedFlags'
0x41736F: lea     eax, [esp+0A8h+var_78]
0x417373: push    eax
0x417374: mov     [esp+0ACh+var_78], offset ??_7exMultipleAssociatedFlags@EffectSettingCollection@@6B@; const EffectSettingCollection::exMultipleAssociatedFlags::`vftable'
0x41737C: call    ThrowException??
0x417381: mov     ecx, [esp+0A4h+arg_4]
0x417388: push    ecx
0x417389: mov     ecx, esi
0x41738B: mov     [esi+98h], edi
0x417391: call    EffectSetting_SetName
0x417396: fld     [esp+0A4h+arg_C]
0x41739D: mov     eax, [esp+0A4h+arg_8]
0x4173A4: fstp    dword ptr [esi+5Ch]
0x4173A7: mov     edx, [esp+0A4h+arg_10]
0x4173AE: mov     ecx, [esp+0A4h+arg_18]
0x4173B5: mov     [esi+60h], edx
0x4173B8: mov     [esi+64h], eax
0x4173BB: mov     [esi+68h], ecx
0x4173BE: mov     eax, [esp+0A4h+arg_1C]
0x4173C5: test    ax, ax
0x4173C8: jbe     short loc_4173DA
0x4173CA: lea     edx, [esp+0A4h+arg_20]
0x4173D1: push    edx
0x4173D2: push    eax
0x4173D3: mov     ecx, esi
0x4173D5: call    EffectSetting_SetCounterEffects
0x4173DA: push    esi; a3
0x4173DB: push    edi; a2
0x4173DC: mov     ecx, offset EffectSettingCollection; this
0x4173E1: call    NiTMap_SetAt
0x4173E6: mov     ecx, dword ptr [esp+0A4h+var_C]
0x4173ED: mov     large fs:0, ecx
0x4173F4: pop     ecx
0x4173F5: pop     edi
0x4173F6: pop     esi
0x4173F7: add     esp, 98h
0x4173FD: retn
