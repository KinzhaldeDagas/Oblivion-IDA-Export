0x463D70: sub     esp, 30h
0x463D73: push    ebx
0x463D74: push    ebp
0x463D75: mov     ebp, [esp+38h+referenceID]
0x463D79: lea     eax, [esp+38h+var_30]
0x463D7D: mov     ebx, ecx
0x463D7F: mov     ecx, [ebx]
0x463D81: push    eax
0x463D82: push    ebp
0x463D83: mov     [esp+40h+var_30], 0
0x463D8B: call    NiTMap_GetAt
0x463D90: mov     eax, [esp+38h+var_30]
0x463D94: test    eax, eax
0x463D96: jz      loc_463EB2
0x463D9C: mov     ecx, [eax]
0x463D9E: test    cl, 2
0x463DA1: push    esi
0x463DA2: push    edi; ArgList
0x463DA3: jz      loc_463E3E
0x463DA9: mov     esi, [eax+4]
0x463DAC: test    esi, esi
0x463DAE: jz      loc_463EB0
0x463DB4: add     esi, 4
0x463DB7: mov     ecx, 9
0x463DBC: lea     edi, [esp+40h+data]
0x463DC0: rep movsd
0x463DC2: mov     ecx, dword ptr [esp+40h+data+4]; Verified: kind value tested at +0; branch 1 allocates ArrowProjectile, 2 selects a MagicProjectile subtype, 0/3 feed standard TESObjectREFR construction/reuse at 4603E0.
0x463DC6: push    ecx
0x463DC7: mov     ecx, ebx
0x463DC9: call    sub_459950
0x463DCE: mov     edx, dword ptr [esp+40h+data+8]; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x463DD2: push    edx
0x463DD3: mov     ecx, ebx
0x463DD5: mov     dword ptr [esp+44h+data+4], eax; Verified: kind value tested at +0; branch 1 allocates ArrowProjectile, 2 selects a MagicProjectile subtype, 0/3 feed standard TESObjectREFR construction/reuse at 4603E0.
0x463DD9: call    sub_459950
0x463DDE: mov     dword ptr [esp+40h+data+8], eax; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x463DE2: lea     eax, [esp+40h+data]
0x463DE6: push    eax; data
0x463DE7: push    ebp; referenceID
0x463DE8: mov     ecx, ebx; self
0x463DEA: call    TESSaveLoadGame_CreateReferenceFromInitialData;  Verified created-reference branch behavior from Oblivion RTTI/allocation evidence: kind=1 allocates ArrowProjectile; kind=2 selects MagicBall/Bolt/Fog class; kinds=0/3 use TESBoundObject lookup and standard TESObjectREFR construction or compatible existing REFR reuse. Fallout CreatedReferenceInitialData is 31 bytes and uses a compact 3-byte BoundIDIndex; Oblivion payload is 36 bytes with dword IDs.
0x463DEF: mov     esi, eax
0x463DF1: test    esi, esi
0x463DF3: jz      loc_463EB0
0x463DF9: push    0; int
0x463DFB: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x463E00: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x463E05: push    0; int
0x463E07: push    esi; void *
0x463E08: call    OblivionDynamicCast
0x463E0D: add     esp, 14h
0x463E10: test    eax, eax
0x463E12: jz      short loc_463E2C
0x463E14: mov     edx, [eax]
0x463E16: pop     edi
0x463E17: pop     esi
0x463E18: pop     ebp
0x463E19: pop     ebx
0x463E1A: add     esp, 30h
0x463E1D: mov     [esp+referenceID], 1
0x463E25: mov     ecx, eax
0x463E27: mov     eax, [edx+10h]
0x463E2A: jmp     eax
0x463E2C: push    esi
0x463E2D: mov     ecx, ebx
0x463E2F: call    TESSaveLoadGame_LoadForm
0x463E34: pop     edi
0x463E35: pop     esi
0x463E36: pop     ebp
0x463E37: pop     ebx
0x463E38: add     esp, 30h
0x463E3B: retn    4
0x463E3E: test    ecx, ecx
0x463E40: jns     short loc_463EA3
0x463E42: mov     esi, [eax+4]
0x463E45: test    esi, esi
0x463E47: jz      short loc_463EB0
0x463E49: add     esi, 4
0x463E4C: mov     ecx, 0Bh
0x463E51: lea     edi, [esp+40h+data]
0x463E55: rep movsd; Verified: moved data copy size 44 bytes from saved buffer+4. Payload structure attached as OblivionMovedReferenceInitialData.
0x463E57: mov     ecx, dword ptr [esp+40h+data]; Verified: 36-byte payload read by LoadGame at 465EB1..465ED6.
0x463E5B: push    ecx
0x463E5C: mov     ecx, ebx
0x463E5E: call    sub_459950
0x463E63: mov     edx, dword ptr [esp+40h+data+10h]; Verified: +0xC,+0x10,+0x14 are finite-checked as a NiPoint3 and X/Y select a worldspace cell at 465F47..465F92.
0x463E67: push    edx
0x463E68: mov     ecx, ebx
0x463E6A: mov     dword ptr [esp+44h+data], eax; Verified: 36-byte payload read by LoadGame at 465EB1..465ED6.
0x463E6E: call    sub_459950
0x463E73: mov     dword ptr [esp+40h+data+10h], eax; Verified: +0xC,+0x10,+0x14 are finite-checked as a NiPoint3 and X/Y select a worldspace cell at 465F47..465F92.
0x463E77: lea     eax, [esp+40h+data]
0x463E7B: push    eax; data
0x463E7C: push    ebp; referenceID
0x463E7D: mov     ecx, ebx
0x463E7F: call    TESSaveLoadGame_RebuildReferenceFromLocationOverrides;  Verified: moved-reference rebuild. Resolves primary location ID at +0 (fallback ID +0x10 when zero), casts it to TESObjectCELL or TESWorldSpace, scans its override files for the requested referenceID, loads matching reference records, runs PostFixup, and restores actor/REFR starting location data. Worldspace path quantizes X/Y by >>12 to find the owning cell. Probable role homolog: Fallout ReferenceInitialData::GetOriginalLocationCellAndWorld / LoadChangedReference; Oblivion implementation searches local override files directly. Verified: a2 uses 44-byte moved-reference payload; +0 and +0x10 are remapped FormIDs before call. X/Y at +4/+8 are consumed on the worldspace path. Remaining fields Unknown. Verified cross-reference divergence: Fallout MovedReferenceInitialData is 34 bytes (27-byte location data + compact original-location index and int16 cell XY); Oblivion restore reads 44 bytes and supports primary/fallback full FormIDs at +0/+0x10 plus world XY at +4/+8. Confidence label Probable applies only to s
0x463E84: test    eax, eax
0x463E86: jz      short loc_463E90
0x463E88: push    eax
0x463E89: mov     ecx, ebx
0x463E8B: call    TESSaveLoadGame_LoadForm
0x463E90: push    ebp
0x463E91: lea     ecx, [ebx+20h]
0x463E94: call    BSSimpleList_Remove
0x463E99: pop     edi
0x463E9A: pop     esi
0x463E9B: pop     ebp
0x463E9C: pop     ebx
0x463E9D: add     esp, 30h
0x463EA0: retn    4
0x463EA3: push    offset aReferenceInCel; "Reference in cell map has neither requi"...
0x463EA8: call    PrintError
0x463EAD: add     esp, 4
0x463EB0: pop     edi
0x463EB1: pop     esi
0x463EB2: pop     ebp
0x463EB3: pop     ebx
0x463EB4: add     esp, 30h
0x463EB7: retn    4
