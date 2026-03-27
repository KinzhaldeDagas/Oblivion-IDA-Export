0x65AD00: push    esi
0x65AD01: mov     esi, ecx
0x65AD03: mov     ecx, ds:0B33B00h
0x65AD09: call    sub_45A500
0x65AD0E: test    al, al
0x65AD10: jnz     short loc_65AD37
0x65AD12: mov     ecx, ds:0B333C4h; this
0x65AD18: call    PlayerCharacter__IsSleeping?
0x65AD1D: test    al, al
0x65AD1F: jz      short loc_65AD37
0x65AD21: cmp     dword ptr [esi+58h], 0
0x65AD25: jz      short loc_65AD32
0x65AD27: mov     ecx, [esi+58h]
0x65AD2A: mov     eax, [ecx]
0x65AD2C: mov     edx, [eax+8]
0x65AD2F: pop     esi
0x65AD30: jmp     edx
0x65AD32: or      eax, 0FFFFFFFFh
0x65AD35: pop     esi
0x65AD36: retn
0x65AD37: push    edi
0x65AD38: mov     ecx, esi; this
0x65AD3A: call    TESObjectREFR_GetParentCell
0x65AD3F: mov     ecx, ds:0B33B00h
0x65AD45: mov     edi, eax
0x65AD47: call    sub_45A500
0x65AD4C: test    al, al
0x65AD4E: jnz     short loc_65AD66
0x65AD50: cmp     dword ptr [esi+3Ch], 0
0x65AD54: jnz     short loc_65AD66
0x65AD56: mov     ecx, ds:0B33A1Ch
0x65AD5C: push    esi
0x65AD5D: call    sub_4354F0
0x65AD62: test    al, al
0x65AD64: jz      short loc_65AD97
0x65AD66: mov     ecx, ds:0B333A0h
0x65AD6C: push    1; a2
0x65AD6E: push    edi; a1
0x65AD6F: call    TESObjectCELL_IsProcessLevel?LowHigh
0x65AD74: test    al, al
0x65AD76: jz      short loc_65AD7D
0x65AD78: pop     edi
0x65AD79: xor     eax, eax
0x65AD7B: pop     esi
0x65AD7C: retn
0x65AD7D: mov     ecx, ds:0B333A0h
0x65AD83: push    0; a2
0x65AD85: push    edi; a1
0x65AD86: call    TESObjectCELL_IsProcessLevel?LowHigh
0x65AD8B: test    al, al
0x65AD8D: jz      short loc_65AD97
0x65AD8F: pop     edi
0x65AD90: mov     eax, 1
0x65AD95: pop     esi
0x65AD96: retn
0x65AD97: test    edi, edi
0x65AD99: jz      short loc_65ADA6
0x65AD9B: mov     ecx, edi; this
0x65AD9D: call    TESObjectCELL_HasMiddleLowProcess
0x65ADA2: test    al, al
0x65ADA4: jnz     short loc_65ADB8
0x65ADA6: mov     ecx, ds:0B333A0h
0x65ADAC: push    0; a2
0x65ADAE: push    edi; a1
0x65ADAF: call    TESObjectCELL_IsProcessLevel?LowHigh
0x65ADB4: test    al, al
0x65ADB6: jz      short loc_65ADC0
0x65ADB8: pop     edi
0x65ADB9: mov     eax, 2
0x65ADBE: pop     esi
0x65ADBF: retn
0x65ADC0: pop     edi
0x65ADC1: mov     eax, 3
0x65ADC6: pop     esi
0x65ADC7: retn
