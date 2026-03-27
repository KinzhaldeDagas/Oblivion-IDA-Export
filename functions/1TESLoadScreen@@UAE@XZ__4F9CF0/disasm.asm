0x4F9CF0: push    0FFFFFFFFh
0x4F9CF2: push    offset ??1TESLoadScreen@@UAE@XZ_SEH
0x4F9CF7: mov     eax, large fs:0
0x4F9CFD: push    eax
0x4F9CFE: sub     esp, 8
0x4F9D01: push    esi
0x4F9D02: push    edi
0x4F9D03: mov     eax, ds:0B30AACh
0x4F9D08: xor     eax, esp
0x4F9D0A: push    eax
0x4F9D0B: lea     eax, [esp+20h+var_C]
0x4F9D0F: mov     large fs:0, eax
0x4F9D15: mov     esi, ecx
0x4F9D17: mov     [esp+20h+var_10], esi
0x4F9D1B: lea     edi, [esi+18h]
0x4F9D1E: mov     dword ptr [esi], offset ??_7TESLoadScreen@@6BTESLoadScreen@@@; const TESLoadScreen::`vftable'{for `TESLoadScreen'}
0x4F9D24: mov     dword ptr [edi], offset ??_7TESLoadScreen@@6BTESTexture@@@; const TESLoadScreen::`vftable'{for `TESTexture'}
0x4F9D2A: mov     dword ptr [esi+24h], offset ??_7TESLoadScreen@@6BTESDescription@@@; const TESLoadScreen::`vftable'{for `TESDescription'}
0x4F9D31: mov     [esp+20h+var_4], 2
0x4F9D39: call    sub_4F99C0
0x4F9D3E: mov     ecx, esi
0x4F9D40: call    j_TESForm_ClearComponentReferences
0x4F9D45: mov     eax, [esi+34h]
0x4F9D48: push    eax
0x4F9D49: call    FormHeapFree
0x4F9D4E: xor     eax, eax
0x4F9D50: add     esp, 4
0x4F9D53: mov     ecx, edi; void *
0x4F9D55: mov     [esi+34h], eax
0x4F9D58: mov     [esi+3Ah], ax
0x4F9D5C: mov     [esi+38h], ax
0x4F9D60: mov     byte ptr [esp+20h+var_4], al
0x4F9D64: call    TESTexture_destr
0x4F9D69: mov     ecx, esi; this
0x4F9D6B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4F9D73: call    TESForm_destr
0x4F9D78: mov     ecx, [esp+20h+var_C]
0x4F9D7C: mov     large fs:0, ecx
0x4F9D83: pop     ecx
0x4F9D84: pop     edi
0x4F9D85: pop     esi
0x4F9D86: add     esp, 14h
0x4F9D89: retn
