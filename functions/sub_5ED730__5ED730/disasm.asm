0x5ED730: sub     esp, 8; Oblivion social eligibility predicate used only by the two random-conversation scans. Requires a process; in interiors requires |Z(this)-Z(other)| <= 90; rejects process current-package flag 0x1000, dead actors, process mode 9, sub_5E6FA0 state, sleep states other than None/Sitting, and package types accepted by sub_567770; final process metric at vslot +0x15C must be <= 0.
0x5ED733: push    ebx
0x5ED734: push    esi
0x5ED735: mov     esi, ecx
0x5ED737: xor     bl, bl
0x5ED739: cmp     dword ptr [esi+58h], 0
0x5ED73D: jnz     short loc_5ED749
0x5ED73F: pop     esi
0x5ED740: xor     al, al
0x5ED742: pop     ebx
0x5ED743: add     esp, 8
0x5ED746: retn    4
0x5ED749: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5ED74E: test    eax, eax
0x5ED750: jz      short loc_5ED7AB
0x5ED752: mov     ecx, esi; this
0x5ED754: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5ED759: mov     ecx, eax; this
0x5ED75B: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x5ED760: test    al, al
0x5ED762: jz      short loc_5ED7AB
0x5ED764: mov     eax, [esi]
0x5ED766: mov     edx, [eax+174h]
0x5ED76C: mov     ecx, esi
0x5ED76E: call    edx
0x5ED770: fld     dword ptr [eax+8]
0x5ED773: mov     ecx, [esp+10h+other]
0x5ED777: fstp    [esp+10h+var_8]
0x5ED77B: mov     eax, [ecx]
0x5ED77D: mov     edx, [eax+174h]
0x5ED783: call    edx
0x5ED785: fld     dword ptr [eax+8]
0x5ED788: fsubr   [esp+10h+var_8]
0x5ED78C: fstp    [esp+10h+other]
0x5ED790: fld     [esp+10h+other]
0x5ED794: fabs
0x5ED796: fstp    [esp+10h+other]
0x5ED79A: fld     [esp+10h+other]
0x5ED79E: fcomp   dword ptr ds:0A430CCh
0x5ED7A4: fnstsw  ax
0x5ED7A6: test    ah, 41h
0x5ED7A9: jz      short loc_5ED73F
0x5ED7AB: mov     eax, [esi+58h]
0x5ED7AE: test    eax, eax
0x5ED7B0: jz      short loc_5ED7C7
0x5ED7B2: mov     eax, [eax+8]
0x5ED7B5: test    eax, eax
0x5ED7B7: jz      short loc_5ED7C7
0x5ED7B9: mov     eax, [eax+1Ch]
0x5ED7BC: shr     eax, 0Ch
0x5ED7BF: test    al, 1
0x5ED7C1: jnz     loc_5ED73F
0x5ED7C7: mov     edx, [esi]
0x5ED7C9: mov     eax, [edx+198h]
0x5ED7CF: push    0
0x5ED7D1: mov     ecx, esi
0x5ED7D3: call    eax
0x5ED7D5: test    al, al
0x5ED7D7: jnz     short loc_5ED856
0x5ED7D9: cmp     dword ptr [esi+58h], 0
0x5ED7DD: jz      short loc_5ED7F1
0x5ED7DF: mov     ecx, [esi+58h]
0x5ED7E2: mov     edx, [ecx]
0x5ED7E4: mov     eax, [edx+36Ch]
0x5ED7EA: call    eax
0x5ED7EC: cmp     eax, 9
0x5ED7EF: jz      short loc_5ED856
0x5ED7F1: mov     ecx, esi
0x5ED7F3: call    sub_5E6FA0
0x5ED7F8: test    al, al
0x5ED7FA: jnz     short loc_5ED856
0x5ED7FC: mov     edx, [esi]
0x5ED7FE: mov     eax, [edx+18Ch]
0x5ED804: mov     ecx, esi
0x5ED806: call    eax
0x5ED808: cmp     eax, 4
0x5ED80B: jz      short loc_5ED81D
0x5ED80D: mov     edx, [esi]
0x5ED80F: mov     eax, [edx+18Ch]
0x5ED815: mov     ecx, esi
0x5ED817: call    eax
0x5ED819: test    eax, eax
0x5ED81B: jnz     short loc_5ED856
0x5ED81D: mov     ecx, esi; this
0x5ED81F: call    Actor__GetCurrentPackage; Returns Actor.process->GetCurrentPackage when a process exists. Random-conversation setup uses it to share the newly created DialoguePackage with the partner actor.
0x5ED824: test    eax, eax
0x5ED826: jz      short loc_5ED83A
0x5ED828: mov     ecx, esi; this
0x5ED82A: call    Actor__GetCurrentPackage; Returns Actor.process->GetCurrentPackage when a process exists. Random-conversation setup uses it to share the newly created DialoguePackage with the partner actor.
0x5ED82F: mov     ecx, eax; this
0x5ED831: call    TESPackage__IsTemporaryOverrideType; Classifies the temporary/internal override package types that callers treat as superseding an underlying scheduled package. True for Combat, CombatLow, Activate, Alarm, Flee, Trespass, Dialogue, Spectator, ReactToDead, Mount/Dismount Horse, Do Nothing, Vampire Feed, Surface, Clear Mount Position, and Movement Blocked. Ambient social scans reject actors whose current package is in this set.
0x5ED836: test    al, al
0x5ED838: jnz     short loc_5ED856
0x5ED83A: mov     ecx, [esi+58h]
0x5ED83D: mov     edx, [ecx]
0x5ED83F: mov     eax, [edx+15Ch]
0x5ED845: call    eax
0x5ED847: fcomp   dword ptr ds:0A2FAA8h
0x5ED84D: fnstsw  ax
0x5ED84F: test    ah, 41h
0x5ED852: jp      short loc_5ED856
0x5ED854: mov     bl, 1
0x5ED856: pop     esi
0x5ED857: mov     al, bl
0x5ED859: pop     ebx
0x5ED85A: add     esp, 8
0x5ED85D: retn    4
