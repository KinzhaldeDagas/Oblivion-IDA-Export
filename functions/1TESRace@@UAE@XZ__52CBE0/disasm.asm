0x52CBE0: push    0FFFFFFFFh
0x52CBE2: push    offset ??1TESRace@@UAE@XZ_SEH
0x52CBE7: mov     eax, large fs:0
0x52CBED: push    eax
0x52CBEE: sub     esp, 10h
0x52CBF1: push    ebx
0x52CBF2: push    esi
0x52CBF3: push    edi
0x52CBF4: mov     eax, ds:0B30AACh
0x52CBF9: xor     eax, esp
0x52CBFB: push    eax
0x52CBFC: lea     eax, [esp+2Ch+var_C]
0x52CC00: mov     large fs:0, eax
0x52CC06: mov     esi, ecx
0x52CC08: mov     [esp+2Ch+var_10], esi
0x52CC0C: lea     edi, [esi+2Ch]
0x52CC0F: lea     ebx, [esi+40h]
0x52CC12: mov     dword ptr [esi], offset ??_7TESRace@@6BTESRace@@@; const TESRace::`vftable'{for `TESRace'}
0x52CC18: mov     dword ptr [esi+18h], offset ??_7TESRace@@6BTESFullName@@@; const TESRace::`vftable'{for `TESFullName'}
0x52CC1F: mov     dword ptr [esi+24h], offset ??_7TESRace@@6BTESDescription@@@; const TESRace::`vftable'{for `TESDescription'}
0x52CC26: mov     dword ptr [edi], offset ??_7TESRace@@6BTESSpellList@@@; const TESRace::`vftable'{for `TESSpellList'}
0x52CC2C: mov     dword ptr [ebx], offset ??_7TESRace@@6BTESReactionForm@@@; const TESRace::`vftable'{for `TESReactionForm'}
0x52CC32: mov     [esp+2Ch+var_4], 0Bh
0x52CC3A: call    sub_52B990
0x52CC3F: mov     eax, [esi+30Ch]
0x52CC45: push    eax
0x52CC46: mov     dword ptr [esi+308h], offset ??_7?$NiTArray@PAUFaceGenUndo@@@@6B@; const NiTArray<FaceGenUndo *>::`vftable'
0x52CC50: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52CC55: add     esp, 4
0x52CC58: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x52CC5D: push    4; int
0x52CC5F: push    18h; unsigned int
0x52CC61: lea     eax, [esi+29Ch]
0x52CC67: push    eax; void *
0x52CC68: mov     byte ptr [esp+3Ch+var_4], 9
0x52CC6D: call    $LN21
0x52CC72: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x52CC77: push    0Ah; int
0x52CC79: push    0Ch; unsigned int
0x52CC7B: lea     ecx, [esi+224h]
0x52CC81: push    ecx; void *
0x52CC82: mov     byte ptr [esp+3Ch+var_4], 8
0x52CC87: call    $LN21
0x52CC8C: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x52CC91: push    9; int
0x52CC93: push    0Ch; unsigned int
0x52CC95: lea     edx, [esi+1B8h]
0x52CC9B: push    edx; void *
0x52CC9C: mov     byte ptr [esp+3Ch+var_4], 7
0x52CCA1: call    $LN21
0x52CCA6: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x52CCAB: push    9; int
0x52CCAD: push    18h; unsigned int
0x52CCAF: lea     eax, [esi+0E0h]
0x52CCB5: push    eax; void *
0x52CCB6: mov     byte ptr [esp+3Ch+var_4], 6
0x52CCBB: call    $LN21
0x52CCC0: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x52CCC5: push    2; int
0x52CCC7: push    18h; unsigned int
0x52CCC9: lea     ecx, [esi+0B0h]
0x52CCCF: push    ecx; void *
0x52CCD0: mov     byte ptr [esp+3Ch+var_4], 5
0x52CCD5: call    $LN21
0x52CCDA: lea     ecx, [esi+80h]
0x52CCE0: mov     byte ptr [esp+2Ch+var_4], 4
0x52CCE5: call    TESAttributes_destr
0x52CCEA: lea     ecx, [esi+74h]
0x52CCED: mov     byte ptr [esp+2Ch+var_4], 3
0x52CCF2: call    TESAttributes_destr
0x52CCF7: mov     ecx, ebx
0x52CCF9: mov     byte ptr [esp+2Ch+var_4], 2
0x52CCFE: call    sub_46E5C0
0x52CD03: mov     ecx, edi
0x52CD05: mov     byte ptr [esp+2Ch+var_4], 1
0x52CD0A: call    TESSpellList_destr?
0x52CD0F: mov     eax, [esi+1Ch]
0x52CD12: push    eax
0x52CD13: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52CD18: add     esp, 4
0x52CD1B: xor     eax, eax
0x52CD1D: mov     [esi+1Ch], eax
0x52CD20: mov     [esi+22h], ax
0x52CD24: mov     [esi+20h], ax
0x52CD28: mov     ecx, esi; this
0x52CD2A: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x52CD32: call    TESForm_destr
0x52CD37: mov     ecx, [esp+2Ch+var_C]
0x52CD3B: mov     large fs:0, ecx
0x52CD42: pop     ecx
0x52CD43: pop     edi
0x52CD44: pop     esi
0x52CD45: pop     ebx
0x52CD46: add     esp, 1Ch
0x52CD49: retn
0x521CF0: mov     eax, [ecx+4]
0x521CF3: push    eax
0x521CF4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAUFaceGenUndo@@@@6B@; const NiTArray<FaceGenUndo *>::`vftable'
0x521CFA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x521CFF: pop     ecx
0x521D00: retn
0x9B85E0: mov     ecx, [ebp-10h]; this
0x9B85E3: jmp     TESForm_destr
0x9B85E8: cmp     dword ptr [ebp-10h], 0
0x9B85EC: jz      loc_9B8600
0x9B85F2: mov     eax, [ebp-10h]
0x9B85F5: add     eax, 18h
0x9B85F8: mov     [ebp-14h], eax
0x9B85FB: jmp     loc_9B8607
0x9B8600: mov     dword ptr [ebp-14h], 0
0x9B8607: mov     ecx, [ebp-14h]
0x9B860A: jmp     TESFullName_Initialize
0x9B860F: cmp     dword ptr [ebp-10h], 0
0x9B8613: jz      loc_9B8627
0x9B8619: mov     eax, [ebp-10h]
0x9B861C: add     eax, 2Ch ; ','
0x9B861F: mov     [ebp-18h], eax
0x9B8622: jmp     loc_9B862E
0x9B8627: mov     dword ptr [ebp-18h], 0
0x9B862E: mov     ecx, [ebp-18h]
0x9B8631: jmp     TESSpellList_destr?
0x9B8636: cmp     dword ptr [ebp-10h], 0
0x9B863A: jz      loc_9B864E
0x9B8640: mov     eax, [ebp-10h]
0x9B8643: add     eax, 40h ; '@'
0x9B8646: mov     [ebp-1Ch], eax
0x9B8649: jmp     loc_9B8655
0x9B864E: mov     dword ptr [ebp-1Ch], 0
0x9B8655: mov     ecx, [ebp-1Ch]
0x9B8658: jmp     sub_46E5C0
0x9B865D: mov     ecx, [ebp-10h]
0x9B8660: add     ecx, 74h ; 't'
0x9B8663: jmp     TESAttributes_destr
0x9B8668: mov     ecx, [ebp-10h]
0x9B866B: add     ecx, 80h ; '€'
0x9B8671: jmp     TESAttributes_destr
0x9B8676: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x9B867B: push    2; int
0x9B867D: push    18h; unsigned int
0x9B867F: mov     eax, [ebp-10h]
0x9B8682: add     eax, 0B0h ; '°'
0x9B8687: push    eax; void *
0x9B8688: call    $LN21
0x9B868D: retn
0x9B868E: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x9B8693: push    9; int
0x9B8695: push    18h; unsigned int
0x9B8697: mov     eax, [ebp-10h]
0x9B869A: add     eax, 0E0h ; 'à'
0x9B869F: push    eax; void *
0x9B86A0: call    $LN21
0x9B86A5: retn
0x9B86A6: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x9B86AB: push    9; int
0x9B86AD: push    0Ch; unsigned int
0x9B86AF: mov     eax, [ebp-10h]
0x9B86B2: add     eax, 1B8h
0x9B86B7: push    eax; void *
0x9B86B8: call    $LN21
0x9B86BD: retn
0x9B86BE: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x9B86C3: push    0Ah; int
0x9B86C5: push    0Ch; unsigned int
0x9B86C7: mov     eax, [ebp-10h]
0x9B86CA: add     eax, 224h
0x9B86CF: push    eax; void *
0x9B86D0: call    $LN21
0x9B86D5: retn
0x9B86D6: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B86DB: push    4; int
0x9B86DD: push    18h; unsigned int
0x9B86DF: mov     eax, [ebp-10h]
0x9B86E2: add     eax, 29Ch
0x9B86E7: push    eax; void *
0x9B86E8: call    $LN21
0x9B86ED: retn
0x9B86EE: mov     ecx, [ebp-10h]
0x9B86F1: add     ecx, 308h
0x9B86F7: jmp     loc_521CF0
0x9B86FC: mov     edx, [esp+arg_4]
0x9B8700: lea     eax, [edx-1Ch]
0x9B8703: mov     ecx, [edx-20h]
0x9B8706: xor     ecx, eax
0x9B8708: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B870D: mov     eax, offset stru_AE2C38
0x9B8712: jmp     ___CxxFrameHandler3
