0x5E3FC0: push    esi
0x5E3FC1: mov     esi, ecx
0x5E3FC3: push    edi
0x5E3FC4: lea     ecx, [esi+44h]
0x5E3FC7: call    ExtraDataList_GetLight; Returns the REFR_LIGHT payload from ExtraLight type 0x30; heavily used by TESObjectREF lighting and equipped-light paths.
0x5E3FCC: mov     ecx, [esi+58h]
0x5E3FCF: mov     edi, eax
0x5E3FD1: test    edi, edi
0x5E3FD3: jz      short loc_5E4003
0x5E3FD5: cmp     dword ptr [edi], 0
0x5E3FD8: jz      short loc_5E4003
0x5E3FDA: test    ecx, ecx
0x5E3FDC: jz      short loc_5E4003
0x5E3FDE: mov     eax, [ecx]
0x5E3FE0: mov     edx, [eax+0F0h]
0x5E3FE6: push    1
0x5E3FE8: call    edx
0x5E3FEA: test    eax, eax
0x5E3FEC: jz      short loc_5E4003
0x5E3FEE: mov     ecx, [eax+8]; self
0x5E3FF1: test    ecx, ecx
0x5E3FF3: jz      short loc_5E4003
0x5E3FF5: cmp     byte ptr [ecx+4], 1Ah
0x5E3FF9: jnz     short loc_5E4003
0x5E3FFB: push    0; optionalContext
0x5E3FFD: push    edi; payload
0x5E3FFE: call    TESObjectLIGH_UpdateAttachedLightPayload; Attached-light payload update with optionalContext=null; this path updates source-light state, not caster admission.
0x5E4003: pop     edi
0x5E4004: pop     esi
0x5E4005: retn
