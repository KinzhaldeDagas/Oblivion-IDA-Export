0x5932B0: push    edi
0x5932B1: push    410h
0x5932B6: call    Menu_GetOpenMenuTile
0x5932BB: mov     edi, eax
0x5932BD: add     esp, 4
0x5932C0: test    edi, edi
0x5932C2: jz      loc_59336B
0x5932C8: push    esi; a3
0x5932C9: mov     ecx, edi
0x5932CB: call    Tile_GetParentMenu
0x5932D0: mov     esi, eax
0x5932D2: test    esi, esi
0x5932D4: jz      loc_59336A
0x5932DA: fld     dword ptr ds:0A379B4h
0x5932E0: push    ecx
0x5932E1: fstp    [esp+0Ch+a2]; value
0x5932E4: push    1772h; propertyCode
0x5932E9: mov     ecx, edi; this
0x5932EB: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5932F0: mov     edi, [esi+78h]
0x5932F3: test    edi, edi
0x5932F5: jz      short loc_593307
0x5932F7: mov     ecx, edi
0x5932F9: call    ContainerEntryExtraData_DestroyDataTable
0x5932FE: push    edi
0x5932FF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x593304: add     esp, 4
0x593307: mov     edi, [esi+80h]
0x59330D: test    edi, edi
0x59330F: jz      short loc_593321
0x593311: mov     ecx, edi
0x593313: call    ContainerEntryExtraData_DestroyDataTable
0x593318: push    edi
0x593319: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x59331E: add     esp, 4
0x593321: mov     edi, [esi+7Ch]
0x593324: test    edi, edi
0x593326: jz      short loc_593338
0x593328: mov     ecx, edi
0x59332A: call    ContainerEntryExtraData_DestroyDataTable
0x59332F: push    edi
0x593330: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x593335: add     esp, 4
0x593338: mov     edi, [esi+84h]
0x59333E: test    edi, edi
0x593340: jz      short loc_593352
0x593342: mov     ecx, edi
0x593344: call    ContainerEntryExtraData_DestroyDataTable
0x593349: push    edi
0x59334A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x59334F: add     esp, 4
0x593352: mov     ecx, esi; int
0x593354: call    Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x593359: call    sub_578FE0
0x59335E: cmp     eax, 1
0x593361: jnz     short loc_59336A
0x593363: pop     esi
0x593364: pop     edi
0x593365: jmp     sub_57CAC0
0x59336A: pop     esi
0x59336B: pop     edi
0x59336C: retn
