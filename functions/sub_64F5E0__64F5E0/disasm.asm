0x64F5E0: push    esi; Caches exact-name ArrowBone from ActorAnimData->RootNode. Ordinary/third-person results go to MiddleHighProcess+0x110; player first-person ActorAnimData (+0x5CC) selects global cache 0xB3BA98. Returns true unconditionally, including null input and lookup failure. This function takes ActorAnimData, unlike the +0x128/+0x12C accessors that take ActorSkinInfo.
0x64F5E1: mov     esi, [esp+4+animData]
0x64F5E5: test    esi, esi
0x64F5E7: push    edi
0x64F5E8: mov     edi, ecx
0x64F5EA: jz      short loc_64F638
0x64F5EC: cmp     dword ptr [edi+0E4h], 0
0x64F5F3: jz      short loc_64F638
0x64F5F5: mov     ecx, ds:0B333C4h; this
0x64F5FB: push    1; firstPerson
0x64F5FD: call    PlayerCharacter_GetAnimDataByPerspective; PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
0x64F602: cmp     esi, eax
0x64F604: mov     esi, [esi+4]
0x64F607: push    offset aArrowbone; "ArrowBone"
0x64F60C: push    esi; a1
0x64F60D: jnz     short loc_64F623; Begin recursive exact-name ArrowBone lookup from ActorAnimData->RootNode. The cached node may be model-local beneath attached weapon geometry; native code requires only the exact name.
0x64F60F: call    NiObjectNET_LookupObjectByName
0x64F614: add     esp, 8
0x64F617: pop     edi
0x64F618: mov     ds:0B3BA98h, eax; Cache the player first-person ActorAnimData ArrowBone lookup in global 0xB3BA98; non-first-person contexts store the result at MiddleHighProcess+0x110.
0x64F61D: mov     al, 1
0x64F61F: pop     esi
0x64F620: retn    4
0x64F623: call    NiObjectNET_LookupObjectByName
0x64F628: add     esp, 8
0x64F62B: mov     [edi+110h], eax
0x64F631: pop     edi
0x64F632: mov     al, 1
0x64F634: pop     esi
0x64F635: retn    4
0x64F638: mov     dword ptr [edi+110h], 0
0x64F642: pop     edi
0x64F643: mov     al, 1
0x64F645: pop     esi
0x64F646: retn    4
