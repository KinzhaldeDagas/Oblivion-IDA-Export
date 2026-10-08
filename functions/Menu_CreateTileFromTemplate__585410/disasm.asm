0x585410: push    0FFFFFFFFh; Verified lifecycle relationship: DialogMenu::LoadTopicsList calls this RenderTemplate to instantiate topic_template. Template records survive row deletion and are owned by Menu; produced Tile/Value/action objects have separate per-row lifetimes.
0x585412: push    offset SEH_71BE30
0x585417: mov     eax, large fs:0
0x58541D: push    eax
0x58541E: push    ebx
0x58541F: push    ebp
0x585420: push    esi
0x585421: push    edi
0x585422: mov     eax, ds:0B30AACh
0x585427: xor     eax, esp
0x585429: push    eax
0x58542A: lea     eax, [esp+20h+var_C]
0x58542E: mov     large fs:0, eax
0x585434: mov     eax, [esp+20h+lastTile]
0x585438: xor     ebp, ebp
0x58543A: test    eax, eax
0x58543C: jz      short loc_585441
0x58543E: mov     [ecx+10h], eax
0x585441: lea     edi, [ecx+8]
0x585444: test    edi, edi
0x585446: jz      loc_58551A
0x58544C: mov     ebx, [esp+20h+Str2]
0x585450: mov     esi, [edi]
0x585452: test    esi, esi
0x585454: jz      short loc_58547B
0x585456: test    ebx, ebx
0x585458: jz      short loc_58546C
0x58545A: mov     eax, [esi]
0x58545C: test    eax, eax
0x58545E: jz      short loc_58546C
0x585460: push    ebx; right
0x585461: push    eax; left
0x585462: call    CRT_StricmpLocaleDispatch
0x585467: add     esp, 8
0x58546A: jmp     short loc_585477
0x58546C: xor     eax, eax
0x58546E: test    ebx, ebx
0x585470: setz    al
0x585473: lea     eax, [eax+eax-1]
0x585477: test    eax, eax
0x585479: jz      short loc_585482
0x58547B: mov     edi, [edi+4]
0x58547E: test    edi, edi
0x585480: jnz     short loc_585450
0x585482: test    esi, esi
0x585484: jz      loc_58551A
0x58548A: mov     ebp, ds:0B3B0A8h
0x585490: push    14h; Size
0x585492: call    FormHeapAlloc
0x585497: add     esp, 4
0x58549A: mov     [esp+20h+lastTile], eax
0x58549E: xor     edi, edi
0x5854A0: cmp     eax, edi
0x5854A2: mov     [esp+20h+var_4], edi
0x5854A6: jz      short loc_5854B1
0x5854A8: mov     ecx, eax; this
0x5854AA: call    Tile__BuildStorage__Initialize; Verified: BuildStorage0x14 layout: mainTemplate+0,embedded subtemplate list+4/+8,currentTemplate+0xC,ownsSubTemplates+0x10. Creates main template with name main and back-pointer. Fallout0x827DECA0 shares storage offsets but allocates smaller template.
0x5854AF: mov     edi, eax
0x5854B1: mov     ds:0B3B0A8h, edi
0x5854B7: mov     ebx, [edi]
0x5854B9: test    ebx, ebx
0x5854BB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5854C3: jz      short loc_5854D5
0x5854C5: mov     ecx, ebx; this
0x5854C7: call    Tile__TileTemplate__Destroy; Verified: invokes TileTemplate::Clear, list destructor, then releases template name buffer. Caller frees template object separately.
0x5854CC: push    ebx
0x5854CD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5854D2: add     esp, 4
0x5854D5: mov     ecx, [esp+20h+parent]; this
0x5854D9: push    esi; tileTemplate
0x5854DA: mov     [edi], esi
0x5854DC: call    Tile__BuildAndNameTree; Verified: token 0x28 creates tile, calls virtual Init(newTile,currentParent,NULL,NULL), names it, records pointer in token +0x10, and descends. Token 0x2D ascends through Tile.parent +0x10. Returns FIRST created tile. No automatic wrapper tile and no duplicate-name/id check in this routine. Fallout analogue 0x827E2320 uses different token numbers.
0x5854E1: mov     edi, eax
0x5854E3: push    esi; tileTemplate
0x5854E4: mov     ecx, edi; this
0x5854E6: call    Tile__ConnectTraitsToTree; Verified: second pass over template tokens. On tile-close token 0x2D, traverses current Tile value list and calls Value::CalculateValue(value,true) for every trait except class 0xFA2, then ascends parent. ReadFile therefore initializes properties natively; never call CalculateValue with Tile*. Fallout analogue 0x827E0B28; Fallout adds a critical section and uses other token numbers.
0x5854EB: mov     eax, ds:0B3B0A8h
0x5854F0: mov     dword ptr [eax], 0
0x5854F6: mov     ecx, ds:0B3B0A8h; this
0x5854FC: test    ecx, ecx
0x5854FE: mov     esi, ecx
0x585500: jz      short loc_585510
0x585502: call    Tile__BuildStorage__Destroy; Verified: destroys main template unconditionally; subtemplate objects only when ownsSubTemplates is true; always frees subtemplate list links. ReadFile transfers subtemplate ownership to Menu before destroying storage. No savegame serialization in this teardown path.
0x585507: push    esi
0x585508: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x58550D: add     esp, 4
0x585510: mov     ds:0B3B0A8h, ebp
0x585516: mov     eax, edi
0x585518: jmp     short loc_58551C
0x58551A: mov     eax, ebp
0x58551C: mov     ecx, [esp+20h+var_C]
0x585520: mov     large fs:0, ecx
0x585527: pop     ecx
0x585528: pop     edi
0x585529: pop     esi
0x58552A: pop     ebp
0x58552B: pop     ebx
0x58552C: add     esp, 0Ch
0x58552F: retn    0Ch
0x9CA5A0: mov     eax, [ebp+0Ch]
0x9CA5A3: push    eax
0x9CA5A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA5A9: pop     ecx
0x9CA5AA: retn
0x9CA5AB: mov     edx, [esp+quadY]
0x9CA5AF: lea     eax, [edx-10h]
0x9CA5B2: mov     ecx, [edx-14h]
0x9CA5B5: xor     ecx, eax
0x9CA5B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA5BC: mov     eax, offset stru_AF2C94
0x9CA5C1: jmp     ___CxxFrameHandler3
