0x52D100: push    0FFFFFFFFh
0x52D102: push    offset ??0TESRace@@QAE@XZ_SEH
0x52D107: mov     eax, large fs:0
0x52D10D: push    eax
0x52D10E: push    ecx
0x52D10F: push    ebx
0x52D110: push    ebp
0x52D111: push    esi
0x52D112: push    edi
0x52D113: mov     eax, ds:0B30AACh
0x52D118: xor     eax, esp
0x52D11A: push    eax
0x52D11B: lea     eax, [esp+24h+var_C]
0x52D11F: mov     large fs:0, eax
0x52D125: mov     esi, ecx
0x52D127: mov     [esp+24h+var_10], esi
0x52D12B: call    TESForm_constr
0x52D130: xor     edi, edi
0x52D132: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x52D139: mov     [esp+24h+var_4], edi
0x52D13D: mov     [esi+1Ch], edi
0x52D140: mov     [esi+20h], di
0x52D144: mov     [esi+22h], di
0x52D148: lea     ebp, [esi+24h]
0x52D14B: mov     ecx, ebp
0x52D14D: mov     byte ptr [esp+24h+var_4], 1
0x52D152: call    TESDescription_constr
0x52D157: lea     ebx, [esi+2Ch]
0x52D15A: mov     ecx, ebx
0x52D15C: call    TESSpellList_constr
0x52D161: lea     ecx, [esi+40h]
0x52D164: mov     byte ptr [esp+24h+var_4], 2
0x52D169: call    sub_46E5E0
0x52D16E: lea     ecx, [esi+74h]
0x52D171: mov     byte ptr [esp+24h+var_4], 3
0x52D176: mov     dword ptr [esi], offset ??_7TESRace@@6BTESRace@@@; const TESRace::`vftable'{for `TESRace'}
0x52D17C: mov     dword ptr [esi+18h], offset ??_7TESRace@@6BTESFullName@@@; const TESRace::`vftable'{for `TESFullName'}
0x52D183: mov     dword ptr [ebp+0], offset ??_7TESRace@@6BTESDescription@@@; const TESRace::`vftable'{for `TESDescription'}
0x52D18A: mov     dword ptr [ebx], offset ??_7TESRace@@6BTESSpellList@@@; const TESRace::`vftable'{for `TESSpellList'}
0x52D190: mov     dword ptr [esi+40h], offset ??_7TESRace@@6BTESReactionForm@@@; const TESRace::`vftable'{for `TESReactionForm'}
0x52D197: call    TESAttributes_constr
0x52D19C: lea     ecx, [esi+80h]
0x52D1A2: mov     byte ptr [esp+24h+var_4], 4
0x52D1A7: call    TESAttributes_constr
0x52D1AC: push    offset ??1TESModel@@UAE@XZ; a5
0x52D1B1: push    offset ??0TESModel@@QAE@XZ; a4
0x52D1B6: push    2; size
0x52D1B8: push    18h; a2
0x52D1BA: lea     eax, [esi+0B0h]
0x52D1C0: mov     [esi+8Ch], edi
0x52D1C6: mov     [esi+90h], edi
0x52D1CC: push    eax; a1
0x52D1CD: mov     byte ptr [esp+38h+var_4], 5
0x52D1D2: mov     [esi+0A8h], edi
0x52D1D8: mov     [esi+0ACh], edi
0x52D1DE: call    ArrayConstructor
0x52D1E3: push    offset ??1TESModel@@UAE@XZ; a5
0x52D1E8: push    offset ??0TESModel@@QAE@XZ; a4
0x52D1ED: mov     ebx, 9
0x52D1F2: push    ebx; size
0x52D1F3: push    18h; a2
0x52D1F5: lea     ecx, [esi+0E0h]
0x52D1FB: push    ecx; a1
0x52D1FC: mov     byte ptr [esp+38h+var_4], 6
0x52D201: call    ArrayConstructor
0x52D206: push    offset TESTexture_destr; a5
0x52D20B: push    offset TESTexture_constr; a4
0x52D210: push    ebx; size
0x52D211: push    0Ch; a2
0x52D213: lea     edx, [esi+1B8h]
0x52D219: push    edx; a1
0x52D21A: mov     byte ptr [esp+38h+var_4], 7
0x52D21F: call    ArrayConstructor
0x52D224: push    offset TESTexture_destr; a5
0x52D229: push    offset TESTexture_constr; a4
0x52D22E: push    0Ah; size
0x52D230: push    0Ch; a2
0x52D232: lea     eax, [esi+224h]
0x52D238: push    eax; a1
0x52D239: mov     byte ptr [esp+38h+var_4], 8
0x52D23E: call    ArrayConstructor
0x52D243: push    offset FaceGenMatrix_Destruct; a5
0x52D248: push    offset FaceGenMatrix_Construct; a4
0x52D24D: push    4; size
0x52D24F: mov     byte ptr [esp+30h+var_4], bl
0x52D253: push    18h; a2
0x52D255: lea     ecx, [esi+29Ch]
0x52D25B: push    ecx; a1
0x52D25C: call    ArrayConstructor
0x52D261: mov     dword ptr [esi+308h], offset ??_7?$NiTArray@PAUFaceGenUndo@@@@6B@; const NiTArray<FaceGenUndo *>::`vftable'
0x52D26B: mov     [esi+310h], di
0x52D272: mov     word ptr [esi+316h], 1
0x52D27B: mov     [esi+312h], di
0x52D282: mov     [esi+314h], di
0x52D289: mov     [esi+30Ch], edi
0x52D28F: mov     ecx, esi
0x52D291: mov     byte ptr [esp+24h+var_4], 0Bh
0x52D296: mov     [esi+4], bl
0x52D299: call    sub_52B840
0x52D29E: mov     eax, esi
0x52D2A0: mov     ecx, [esp+24h+var_C]
0x52D2A4: mov     large fs:0, ecx
0x52D2AB: pop     ecx
0x52D2AC: pop     edi
0x52D2AD: pop     esi
0x52D2AE: pop     ebp
0x52D2AF: pop     ebx
0x52D2B0: add     esp, 10h
0x52D2B3: retn
0x521CF0: mov     eax, [ecx+4]
0x521CF3: push    eax
0x521CF4: mov     dword ptr [ecx], offset ??_7?$NiTArray@PAUFaceGenUndo@@@@6B@; const NiTArray<FaceGenUndo *>::`vftable'
0x521CFA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x521CFF: pop     ecx
0x521D00: retn
0x9B8720: mov     ecx, [ebp-10h]; this
0x9B8723: jmp     TESForm_destr
0x9B8728: mov     ecx, [ebp-10h]
0x9B872B: add     ecx, 18h
0x9B872E: jmp     TESFullName_Initialize
0x9B8733: mov     ecx, [ebp-10h]
0x9B8736: add     ecx, 2Ch ; ','
0x9B8739: jmp     TESSpellList_destr?
0x9B873E: mov     ecx, [ebp-10h]
0x9B8741: add     ecx, 40h ; '@'
0x9B8744: jmp     sub_46E5C0
0x9B8749: mov     ecx, [ebp-10h]
0x9B874C: add     ecx, 74h ; 't'
0x9B874F: jmp     TESAttributes_destr
0x9B8754: mov     ecx, [ebp-10h]
0x9B8757: add     ecx, 80h ; '€'
0x9B875D: jmp     TESAttributes_destr
0x9B8762: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x9B8767: push    2; int
0x9B8769: push    18h; unsigned int
0x9B876B: mov     eax, [ebp-10h]
0x9B876E: add     eax, 0B0h ; '°'
0x9B8773: push    eax; void *
0x9B8774: call    $LN21
0x9B8779: retn
0x9B877A: push    offset ??1TESModel@@UAE@XZ; void (__thiscall *)(void *)
0x9B877F: push    9; int
0x9B8781: push    18h; unsigned int
0x9B8783: mov     eax, [ebp-10h]
0x9B8786: add     eax, 0E0h ; 'à'
0x9B878B: push    eax; void *
0x9B878C: call    $LN21
0x9B8791: retn
0x9B8792: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x9B8797: push    9; int
0x9B8799: push    0Ch; unsigned int
0x9B879B: mov     eax, [ebp-10h]
0x9B879E: add     eax, 1B8h
0x9B87A3: push    eax; void *
0x9B87A4: call    $LN21
0x9B87A9: retn
0x9B87AA: push    offset TESTexture_destr; void (__thiscall *)(void *)
0x9B87AF: push    0Ah; int
0x9B87B1: push    0Ch; unsigned int
0x9B87B3: mov     eax, [ebp-10h]
0x9B87B6: add     eax, 224h
0x9B87BB: push    eax; void *
0x9B87BC: call    $LN21
0x9B87C1: retn
0x9B87C2: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B87C7: push    4; int
0x9B87C9: push    18h; unsigned int
0x9B87CB: mov     eax, [ebp-10h]
0x9B87CE: add     eax, 29Ch
0x9B87D3: push    eax; void *
0x9B87D4: call    $LN21
0x9B87D9: retn
0x9B87DA: mov     ecx, [ebp-10h]
0x9B87DD: add     ecx, 308h
0x9B87E3: jmp     loc_521CF0
0x9B87E8: mov     edx, [esp+arg_4]
0x9B87EC: lea     eax, [edx-14h]
0x9B87EF: mov     ecx, [edx-18h]
0x9B87F2: xor     ecx, eax
0x9B87F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B87F9: mov     eax, offset stru_AE2CBC
0x9B87FE: jmp     ___CxxFrameHandler3
