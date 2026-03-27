0x690A00: push    esi
0x690A01: mov     esi, ecx
0x690A03: mov     ecx, [esi+20h]; this
0x690A06: test    ecx, ecx
0x690A08: jz      short loc_690A11
0x690A0A: call    MagicTarget_GetParentActor
0x690A0F: jmp     short loc_690A13
0x690A11: xor     eax, eax
0x690A13: cmp     dword ptr [esi+38h], 0
0x690A17: jz      loc_690ADA
0x690A1D: test    eax, eax
0x690A1F: jz      loc_690ADA
0x690A25: mov     ecx, [esi+8]
0x690A28: test    ecx, ecx
0x690A2A: jz      loc_690AD8
0x690A30: cmp     dword ptr [esi+0Ch], 0
0x690A34: jz      loc_690AD8
0x690A3A: push    ebp
0x690A3B: push    edi
0x690A3C: push    0
0x690A3E: call    MagicItem_GetFXEffect
0x690A43: mov     ecx, [esi+8]
0x690A46: mov     edi, eax
0x690A48: mov     eax, [esi+0Ch]
0x690A4B: mov     eax, [eax+10h]
0x690A4E: push    0
0x690A50: push    eax
0x690A51: add     ecx, 0Ch
0x690A54: call    EffectItemList_GetStrongestItem
0x690A59: add     edi, 18h
0x690A5C: mov     ecx, edi
0x690A5E: mov     ebp, eax
0x690A60: call    sub_449190
0x690A65: test    eax, eax
0x690A67: jbe     short loc_690AD6
0x690A69: mov     edx, [edi]
0x690A6B: mov     eax, [edx+14h]
0x690A6E: push    ebx
0x690A6F: push    1
0x690A71: push    0
0x690A73: push    0
0x690A75: mov     ecx, edi
0x690A77: call    eax
0x690A79: mov     ecx, ds:0B33A1Ch
0x690A7F: push    eax
0x690A80: call    sub_439EB0
0x690A85: mov     ecx, [esi+8]
0x690A88: mov     edx, [ecx]
0x690A8A: mov     ebx, eax
0x690A8C: mov     eax, [edx+18h]
0x690A8F: call    eax
0x690A91: cmp     eax, 4
0x690A94: jz      short loc_690AAF
0x690A96: test    ebx, ebx
0x690A98: jz      short loc_690AB7
0x690A9A: push    offset aHit; Str2
0x690A9F: push    offset aSpecialidle_hi; "SpecialIdle_HitEffect"
0x690AA4: push    ebx; int
0x690AA5: call    sub_480B00
0x690AAA: add     esp, 0Ch
0x690AAD: jmp     short loc_690AB1
0x690AAF: fldz
0x690AB1: fstp    dword ptr [esi+80h]
0x690AB7: cmp     [esi+0Ch], ebp
0x690ABA: pop     ebx
0x690ABB: jz      short loc_690AD6
0x690ABD: mov     edx, [edi]
0x690ABF: mov     eax, [edx+14h]
0x690AC2: push    1
0x690AC4: push    0
0x690AC6: mov     ecx, edi
0x690AC8: call    eax
0x690ACA: mov     ecx, ds:0B33A1Ch
0x690AD0: push    eax
0x690AD1: call    QueuedModelLoader_RemoveModel
0x690AD6: pop     edi
0x690AD7: pop     ebp
0x690AD8: pop     esi
0x690AD9: retn
0x690ADA: push    0
0x690ADC: mov     ecx, esi
0x690ADE: call    ActiveEffect_Base_Remove
0x690AE3: pop     esi
0x690AE4: retn
