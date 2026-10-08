0x5DD340: push    esi; Native TrainingMenu close routine.
0x5DD341: push    404h
0x5DD346: call    Menu_GetOpenMenuTile
0x5DD34B: mov     esi, eax
0x5DD34D: add     esp, 4
0x5DD350: test    esi, esi
0x5DD352: jz      loc_5DD3DC
0x5DD358: push    edi; a3
0x5DD359: mov     ecx, esi
0x5DD35B: call    Tile_GetParentMenu
0x5DD360: mov     edi, eax
0x5DD362: test    edi, edi
0x5DD364: jz      short loc_5DD3DB
0x5DD366: fld     dword ptr ds:0A379B4h
0x5DD36C: push    ecx
0x5DD36D: fstp    [esp+0Ch+var_C]; value
0x5DD370: push    1772h; propertyCode
0x5DD375: mov     ecx, esi; this
0x5DD377: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5DD37C: mov     ecx, edi; int
0x5DD37E: call    Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x5DD383: mov     eax, ds:0B33398h
0x5DD388: mov     ecx, [eax+24h]
0x5DD38B: call    sub_6AC3D0
0x5DD390: push    3F1h
0x5DD395: call    Menu_GetOpenMenuTile
0x5DD39A: mov     esi, eax
0x5DD39C: add     esp, 4
0x5DD39F: test    esi, esi
0x5DD3A1: jz      short loc_5DD3DB
0x5DD3A3: mov     ecx, esi
0x5DD3A5: call    Tile_GetParentMenu
0x5DD3AA: push    0; float
0x5DD3AC: mov     ecx, esi
0x5DD3AE: mov     edi, eax
0x5DD3B0: call    sub_58FBA0
0x5DD3B5: fld     dword ptr ds:0A379B4h
0x5DD3BB: push    ecx
0x5DD3BC: fstp    [esp+0Ch+var_C]; value
0x5DD3BF: push    0FA1h; propertyCode
0x5DD3C4: mov     ecx, esi; this
0x5DD3C6: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5DD3CB: mov     byte ptr [edi+96h], 1
0x5DD3D2: mov     ecx, edi
0x5DD3D4: pop     edi
0x5DD3D5: pop     esi
0x5DD3D6: jmp     loc_59E100
0x5DD3DB: pop     edi
0x5DD3DC: pop     esi
0x5DD3DD: retn
0x59E100: push    ecx
0x59E101: push    ebx
0x59E102: push    esi
0x59E103: push    0Dh; index
0x59E105: push    5; topicType
0x59E107: mov     esi, ecx
0x59E109: call    TESTopic__GetTopic; Direct fixed-registry lookup: bounds-checks index against g_dialogueTopicBucketCounts[topicType], then returns g_dialogueTopicBuckets[topicType][index].topic. This is not an EDID/name search.
0x59E10E: mov     ecx, ds:0B333C4h
0x59E114: mov     edx, [esi+60h]
0x59E117: add     esp, 8
0x59E11A: push    0; conversation
0x59E11C: push    0; previousTopic
0x59E11E: push    ecx; target
0x59E11F: push    edx; speaker
0x59E120: mov     ecx, eax; this
0x59E122: call    TESTopic__CreateDialogueItem; Selects a matching TESTopicInfo and wraps it as a 0x1C DialogueItem containing response list/cursor, INFO, topic, owner quest, and speaker.
0x59E127: mov     ebx, eax
0x59E129: test    ebx, ebx
0x59E12B: jz      loc_59E1CB
0x59E131: mov     ecx, ebx; this
0x59E133: call    DialogueItem__FirstResponse
0x59E138: test    al, al
0x59E13A: jz      short loc_59E1BB
0x59E13C: push    edi
0x59E13D: mov     ecx, ebx; this
0x59E13F: call    DialogueListCursor__GetCurrent; Compiler-folded cursor getter shared by DialogueItem.response list and Conversation.item list because both begin with the same head/next/cursor layout.
0x59E144: fldz
0x59E146: mov     ecx, [esi+60h]
0x59E149: mov     edi, eax
0x59E14B: mov     eax, [ecx]
0x59E14D: mov     edx, [eax+304h]
0x59E153: push    edi; a3
0x59E154: push    ecx
0x59E155: fstp    [esp+18h+var_18]; a3
0x59E158: call    edx
0x59E15A: fld     dword ptr ds:0A379B4h
0x59E160: xor     eax, eax
0x59E162: fstp    dword ptr [esi+84h]
0x59E168: mov     dword ptr [esi+80h], 2
0x59E172: cmp     ds:0B13200h, al
0x59E178: push    ecx
0x59E179: mov     ecx, [esi+2Ch]; this
0x59E17C: setnz   al
0x59E17F: add     eax, 1
0x59E182: mov     [esp+1Ch+var_C], eax
0x59E186: fild    [esp+1Ch+var_C]
0x59E18A: fstp    [esp+1Ch+value]; value
0x59E18D: push    0FA1h; propertyCode
0x59E192: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59E197: mov     ecx, [edi]
0x59E199: push    ecx
0x59E19A: mov     ecx, [esi+2Ch]
0x59E19D: push    0FDEh
0x59E1A2: call    Tile_SetString
0x59E1A7: fld1
0x59E1A9: push    ecx
0x59E1AA: fstp    [esp+1Ch+value]; value
0x59E1AD: mov     ecx, [esi+3Ch]; this
0x59E1B0: push    0FA1h; propertyCode
0x59E1B5: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59E1BA: pop     edi
0x59E1BB: mov     ecx, ebx; this
0x59E1BD: call    DialogueItem__Destroy
0x59E1C2: push    ebx
0x59E1C3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x59E1C8: add     esp, 4
0x59E1CB: pop     esi
0x59E1CC: pop     ebx
0x59E1CD: pop     ecx
0x59E1CE: retn
