0x526A70: push    0FFFFFFFFh
0x526A72: push    offset ??1TESNPC@@UAE@XZ_SEH
0x526A77: mov     eax, large fs:0
0x526A7D: push    eax
0x526A7E: push    ecx
0x526A7F: push    ebx
0x526A80: push    esi
0x526A81: push    edi
0x526A82: mov     eax, ds:0B30AACh
0x526A87: xor     eax, esp
0x526A89: push    eax
0x526A8A: lea     eax, [esp+20h+var_C]
0x526A8E: mov     large fs:0, eax
0x526A94: mov     esi, ecx
0x526A96: mov     [esp+20h+var_10], esi
0x526A9A: mov     dword ptr [esi], offset ??_7TESNPC@@6BTESNPC@@@; const TESNPC::`vftable'{for `TESNPC'}
0x526AA0: mov     dword ptr [esi+24h], offset ??_7TESNPC@@6BTESActorBaseData@@@; const TESNPC::`vftable'{for `TESActorBaseData'}
0x526AA7: mov     dword ptr [esi+44h], offset ??_7TESNPC@@6BTESContainer@@@; const TESNPC::`vftable'{for `TESContainer'}
0x526AAE: mov     dword ptr [esi+54h], offset ??_7TESNPC@@6BTESSpellList@@@; const TESNPC::`vftable'{for `TESSpellList'}
0x526AB5: mov     dword ptr [esi+68h], offset ??_7TESNPC@@6BTESAIForm@@@; const TESNPC::`vftable'{for `TESAIForm'}
0x526ABC: mov     dword ptr [esi+80h], offset ??_7TESNPC@@6BTESHealthForm@@@; const TESNPC::`vftable'{for `TESHealthForm'}
0x526AC6: mov     dword ptr [esi+88h], offset ??_7TESNPC@@6BTESAttributes@@@; const TESNPC::`vftable'{for `TESAttributes'}
0x526AD0: mov     dword ptr [esi+94h], offset ??_7TESNPC@@6BTESAnimation@@@; const TESNPC::`vftable'{for `TESAnimation'}
0x526ADA: mov     dword ptr [esi+0A0h], offset ??_7TESNPC@@6BTESFullName@@@; const TESNPC::`vftable'{for `TESFullName'}
0x526AE4: mov     dword ptr [esi+0ACh], offset ??_7TESNPC@@6BTESModel@@@; const TESNPC::`vftable'{for `TESModel'}
0x526AEE: mov     dword ptr [esi+0C4h], offset ??_7TESNPC@@6BTESScriptableForm@@@; const TESNPC::`vftable'{for `TESScriptableForm'}
0x526AF8: mov     dword ptr [esi+0E4h], offset ??_7TESNPC@@6BTESRaceForm@@@; const TESNPC::`vftable'{for `TESRaceForm'}
0x526B02: mov     [esp+20h+var_4], 6
0x526B0A: call    sub_521DA0
0x526B0F: mov     eax, [esi+1F4h]
0x526B15: push    eax
0x526B16: mov     dword ptr [esi+1F0h], offset ??_7?$NiTArray@PAUFaceGenUndo@@@@6B@; const NiTArray<FaceGenUndo *>::`vftable'
0x526B20: call    FormHeapFree
0x526B25: mov     edi, [esi+1DCh]
0x526B2B: mov     ebx, ds:0A2807Ch
0x526B31: add     esp, 4
0x526B34: test    edi, edi
0x526B36: mov     byte ptr [esp+20h+var_4], 4
0x526B3B: jz      short loc_526B55
0x526B3D: lea     eax, [edi+4]
0x526B40: push    eax; lpAddend
0x526B41: call    ebx ; InterlockedDecrement
0x526B43: test    eax, eax
0x526B45: jnz     short loc_526B55
0x526B47: test    edi, edi
0x526B49: jz      short loc_526B55
0x526B4B: mov     edx, [edi]
0x526B4D: mov     eax, [edx]
0x526B4F: push    1
0x526B51: mov     ecx, edi
0x526B53: call    eax
0x526B55: mov     edi, [esi+1D8h]
0x526B5B: test    edi, edi
0x526B5D: mov     byte ptr [esp+20h+var_4], 3
0x526B62: jz      short loc_526B7C
0x526B64: lea     ecx, [edi+4]
0x526B67: push    ecx; lpAddend
0x526B68: call    ebx ; InterlockedDecrement
0x526B6A: test    eax, eax
0x526B6C: jnz     short loc_526B7C
0x526B6E: test    edi, edi
0x526B70: jz      short loc_526B7C
0x526B72: mov     edx, [edi]
0x526B74: mov     eax, [edx]
0x526B76: push    1
0x526B78: mov     ecx, edi
0x526B7A: call    eax
0x526B7C: mov     edi, [esi+1D4h]
0x526B82: test    edi, edi
0x526B84: mov     byte ptr [esp+20h+var_4], 2
0x526B89: jz      short loc_526BA3
0x526B8B: lea     ecx, [edi+4]
0x526B8E: push    ecx; lpAddend
0x526B8F: call    ebx ; InterlockedDecrement
0x526B91: test    eax, eax
0x526B93: jnz     short loc_526BA3
0x526B95: test    edi, edi
0x526B97: jz      short loc_526BA3
0x526B99: mov     edx, [edi]
0x526B9B: mov     eax, [edx]
0x526B9D: push    1
0x526B9F: mov     ecx, edi
0x526BA1: call    eax
0x526BA3: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x526BA8: push    4; int
0x526BAA: push    18h; unsigned int
0x526BAC: lea     ecx, [esi+168h]
0x526BB2: push    ecx; void *
0x526BB3: mov     byte ptr [esp+30h+var_4], 1
0x526BB8: call    $LN21
0x526BBD: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x526BC2: push    4; int
0x526BC4: push    18h; unsigned int
0x526BC6: lea     edx, [esi+108h]
0x526BCC: push    edx; void *
0x526BCD: mov     byte ptr [esp+30h+var_4], 0
0x526BD2: call    $LN21
0x526BD7: mov     ecx, esi; this
0x526BD9: mov     [esp+20h+var_4], 0FFFFFFFFh
0x526BE1: call    ??1TESActorBase@@UAE@XZ; TESActorBase::~TESActorBase(void)
0x526BE6: mov     ecx, dword ptr [esp+20h+var_C]
0x526BEA: mov     large fs:0, ecx
0x526BF1: pop     ecx
0x526BF2: pop     edi
0x526BF3: pop     esi
0x526BF4: pop     ebx
0x526BF5: add     esp, 10h
0x526BF8: retn
