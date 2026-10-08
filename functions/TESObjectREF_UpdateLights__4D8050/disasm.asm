0x4D8050: push    ebx; For a TESObjectREFR whose base form is TESObjectLIGH, update both ordinary extra-light type 0x30 and spell-effect extra-light type 0x49 payloads from the same base LIGH data. The actor-owned transient LGHT payload uses the same type 0x49 storage but its parent base form is not TESObjectLIGH.
0x4D8051: push    ebp
0x4D8052: push    esi
0x4D8053: mov     esi, ecx
0x4D8055: lea     ebx, [esi+44h]
0x4D8058: push    edi
0x4D8059: mov     ecx, ebx
0x4D805B: call    ExtraDataList_GetLight; Returns the REFR_LIGHT payload from ExtraLight type 0x30; heavily used by TESObjectREF lighting and equipped-light paths.
0x4D8060: mov     ebp, eax
0x4D8062: mov     eax, [esi]
0x4D8064: mov     edx, [eax+170h]
0x4D806A: mov     ecx, esi
0x4D806C: xor     edi, edi
0x4D806E: call    edx
0x4D8070: cmp     byte ptr [eax+4], 1Ah
0x4D8074: jnz     short loc_4D8084
0x4D8076: mov     eax, [esi]
0x4D8078: mov     edx, [eax+170h]
0x4D807E: mov     ecx, esi
0x4D8080: call    edx
0x4D8082: mov     edi, eax
0x4D8084: test    ebp, ebp
0x4D8086: jz      short loc_4D8096
0x4D8088: test    edi, edi
0x4D808A: jz      short loc_4D8096
0x4D808C: push    0; optionalContext
0x4D808E: push    ebp; payload
0x4D808F: mov     ecx, edi; self
0x4D8091: call    TESObjectLIGH_UpdateAttachedLightPayload; Update ordinary ExtraLight type 0x30 with optionalContext=null.
0x4D8096: mov     ecx, ebx
0x4D8098: call    ExtraDataList_GetSpellEffectLight; Returns the secondary/spell-effect REFR_LIGHT payload from extra type 0x49; TESObjectREF_UpdateLights processes it separately from normal ExtraLight.
0x4D809D: test    eax, eax
0x4D809F: jz      short loc_4D80AF
0x4D80A1: test    edi, edi
0x4D80A3: jz      short loc_4D80AF
0x4D80A5: push    0; optionalContext
0x4D80A7: push    eax; payload
0x4D80A8: mov     ecx, edi; self
0x4D80AA: call    TESObjectLIGH_UpdateAttachedLightPayload; Update spell-effect ExtraLight type 0x49 with optionalContext=null.
0x4D80AF: pop     edi
0x4D80B0: pop     esi
0x4D80B1: pop     ebp
0x4D80B2: pop     ebx
0x4D80B3: retn
