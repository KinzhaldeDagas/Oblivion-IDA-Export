0x5E8900: push    esi
0x5E8901: mov     esi, ecx
0x5E8903: mov     eax, [esi+58h]
0x5E8906: push    edi
0x5E8907: mov     edi, [eax+8]
0x5E890A: test    edi, edi
0x5E890C: jz      loc_5E899F
0x5E8912: mov     ecx, edi; this
0x5E8914: call    TESPackage__IsTemporaryOverrideType; Classifies the temporary/internal override package types that callers treat as superseding an underlying scheduled package. True for Combat, CombatLow, Activate, Alarm, Flee, Trespass, Dialogue, Spectator, ReactToDead, Mount/Dismount Horse, Do Nothing, Vampire Feed, Surface, Clear Mount Position, and Movement Blocked. Ambient social scans reject actors whose current package is in this set.
0x5E8919: test    al, al
0x5E891B: jz      short loc_5E8927
0x5E891D: lea     ecx, [esi+44h]
0x5E8920: call    ExtraDataList__GetExtraPackage
0x5E8925: mov     edi, eax
0x5E8927: test    edi, edi
0x5E8929: jz      short loc_5E899F
0x5E892B: test    byte ptr [edi+1Ch], 1
0x5E892F: jz      short loc_5E899F
0x5E8931: fld     dword ptr ds:0A30634h
0x5E8937: push    ecx
0x5E8938: fstp    [esp+0Ch+var_C]; float
0x5E893B: push    0; char
0x5E893D: push    esi; int
0x5E893E: mov     ecx, edi
0x5E8940: call    sub_566DC0
0x5E8945: test    al, al
0x5E8947: jnz     short loc_5E8967
0x5E8949: mov     ecx, esi; this
0x5E894B: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5E8950: test    eax, eax
0x5E8952: jz      short loc_5E899F
0x5E8954: push    esi; actor
0x5E8955: mov     ecx, esi; this
0x5E8957: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x5E895C: mov     ecx, eax; cell
0x5E895E: call    TESObjectCELL_IsOwnedByActor; Verified Oblivion owner predicate: reads the cell's XOWN and XRNK extra data; returns true for an NPC owner matching the actor's base form, or for a faction owner when the actor is an NPC whose faction rank meets the cell's required rank. Player identity is passed into faction-rank evaluation for its special handling. Called by door access/trespass policy and other ownership paths. Fallout has the analogous TESObjectCELL::IsActorBaseCellOwner; it takes TESActorBase* and uses a differently exposed faction-rank path.
0x5E8963: test    al, al
0x5E8965: jz      short loc_5E899F
0x5E8967: mov     edx, [esi]
0x5E8969: mov     eax, [edx+170h]
0x5E896F: push    ebx
0x5E8970: mov     ecx, esi
0x5E8972: xor     ebx, ebx
0x5E8974: call    eax
0x5E8976: mov     edi, eax
0x5E8978: test    edi, edi
0x5E897A: jz      short loc_5E898E
0x5E897C: mov     edx, [esi]
0x5E897E: mov     eax, [edx+190h]
0x5E8984: mov     ecx, esi
0x5E8986: call    eax
0x5E8988: test    al, al
0x5E898A: jz      short loc_5E898E
0x5E898C: mov     ebx, edi
0x5E898E: push    259Fh
0x5E8993: lea     ecx, [ebx+68h]
0x5E8996: call    TESAIForm_OffersService
0x5E899B: pop     ebx
0x5E899C: pop     edi
0x5E899D: pop     esi
0x5E899E: retn
0x5E899F: pop     edi
0x5E89A0: xor     al, al
0x5E89A2: pop     esi
0x5E89A3: retn
