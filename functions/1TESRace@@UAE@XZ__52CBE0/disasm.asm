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
0x52CC50: call    FormHeapFree
0x52CC55: add     esp, 4
0x52CC58: push    offset sub_43ACE0; void (__thiscall *)(void *)
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
0x52CD13: call    FormHeapFree
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
