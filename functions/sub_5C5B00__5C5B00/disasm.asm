0x5C5B00: push    0FFFFFFFFh
0x5C5B02: push    offset SEH_5C9980
0x5C5B07: mov     eax, large fs:0
0x5C5B0D: push    eax
0x5C5B0E: sub     esp, 0Ch
0x5C5B11: push    esi
0x5C5B12: push    edi
0x5C5B13: mov     eax, ds:0B30AACh
0x5C5B18: xor     eax, esp
0x5C5B1A: push    eax
0x5C5B1B: lea     eax, [esp+24h+var_C]
0x5C5B1F: mov     large fs:0, eax
0x5C5B25: mov     esi, ecx
0x5C5B27: push    1
0x5C5B29: call    sub_5C50A0
0x5C5B2E: test    al, al
0x5C5B30: jz      loc_5C5C11
0x5C5B36: mov     eax, ds:0B38FB8h
0x5C5B3B: push    0FAEh
0x5C5B40: sub     esp, 8
0x5C5B43: mov     ecx, esp; this
0x5C5B45: xor     edi, edi
0x5C5B47: mov     [esp+30h+var_18], esp
0x5C5B4B: push    edi; a3
0x5C5B4C: push    eax; categoryName
0x5C5B4D: mov     [ecx], edi
0x5C5B4F: mov     [ecx+4], di
0x5C5B53: mov     [ecx+6], di
0x5C5B57: call    BSStringT_Set
0x5C5B5C: mov     eax, ds:0B38F88h
0x5C5B61: sub     esp, 8
0x5C5B64: mov     ecx, esp; this
0x5C5B66: mov     dword ptr [esp+38h+var_14], esp
0x5C5B6A: push    edi; a3
0x5C5B6B: push    eax; a2
0x5C5B6C: mov     [esp+40h+var_4], edi
0x5C5B70: mov     [ecx], edi
0x5C5B72: mov     [ecx+4], di
0x5C5B76: mov     [ecx+6], di
0x5C5B7A: call    BSStringT_Set
0x5C5B7F: mov     ecx, esi; this
0x5C5B81: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5C5B89: call    RaceSexMenu_FindControlTile; Consume category/control strings, resolve a category tile, then recursively find the control. The category result is passed to Tile_FindDescendantByName without a null check.
0x5C5B8E: fild    dword ptr [esi+870h]
0x5C5B94: mov     ecx, eax
0x5C5B96: fstp    [esp+28h+var_14]
0x5C5B9A: call    Tile_GetFloat
0x5C5B9F: fcomp   [esp+24h+var_14]
0x5C5BA3: fnstsw  ax
0x5C5BA5: test    ah, 44h
0x5C5BA8: jnp     short loc_5C5C11
0x5C5BAA: fild    dword ptr [esi+870h]
0x5C5BB0: mov     eax, ds:0B38FB8h
0x5C5BB5: sub     esp, 0Ch
0x5C5BB8: mov     ecx, esp; this
0x5C5BBA: fstp    [esp+30h+var_28]; float
0x5C5BBE: mov     dword ptr [esp+30h+var_14], esp
0x5C5BC2: push    edi; a3
0x5C5BC3: push    eax; categoryName
0x5C5BC4: mov     [ecx], edi
0x5C5BC6: mov     [ecx+4], di
0x5C5BCA: mov     [ecx+6], di
0x5C5BCE: call    BSStringT_Set
0x5C5BD3: mov     eax, ds:0B38F88h
0x5C5BD8: sub     esp, 8
0x5C5BDB: mov     ecx, esp; this
0x5C5BDD: mov     [esp+38h+var_18], esp
0x5C5BE1: push    edi; a3
0x5C5BE2: push    eax; a2
0x5C5BE3: mov     [esp+40h+var_4], 1
0x5C5BEB: mov     [ecx], edi
0x5C5BED: mov     [ecx+4], di
0x5C5BF1: mov     [ecx+6], di
0x5C5BF5: call    BSStringT_Set
0x5C5BFA: mov     ecx, esi; this
0x5C5BFC: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5C5C04: call    RaceSexMenu_FindControlTile; Consume category/control strings, resolve a category tile, then recursively find the control. The category result is passed to Tile_FindDescendantByName without a null check.
0x5C5C09: push    eax; int
0x5C5C0A: mov     ecx, esi
0x5C5C0C: call    sub_5C2B50
0x5C5C11: mov     ecx, [esp+24h+var_C]
0x5C5C15: mov     large fs:0, ecx
0x5C5C1C: pop     ecx
0x5C5C1D: pop     edi
0x5C5C1E: pop     esi
0x5C5C1F: add     esp, 18h
0x5C5C22: retn
0x9C1800: mov     ecx, [ebp-18h]; void *
0x9C1803: jmp     BSStringT_Clear
0x9C1808: mov     ecx, [ebp-14h]; void *
0x9C180B: jmp     BSStringT_Clear
0x9C1810: mov     edx, [esp+arg_4]
0x9C1814: lea     eax, [edx-14h]
0x9C1817: mov     ecx, [edx-18h]
0x9C181A: xor     ecx, eax
0x9C181C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1821: mov     eax, offset stru_AEA838
0x9C1826: jmp     ___CxxFrameHandler3
