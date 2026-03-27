0x584880: push    esi
0x584881: push    edi; a3
0x584882: mov     edi, [esp+8+arg_0]
0x584886: test    edi, edi
0x584888: mov     esi, ecx
0x58488A: mov     [esi+4], edi
0x58488D: jz      Menu_SetTileMenu___Done
0x584893: push    0FA5h
0x584898: mov     ecx, edi
0x58489A: call    Tile_GetFloat
0x58489F: fcomp   qword ptr ds:0A69778h
0x5848A5: fnstsw  ax
0x5848A7: test    ah, 44h
0x5848AA: jnp     short loc_5848F7
0x5848AC: push    0FA5h
0x5848B1: mov     ecx, edi
0x5848B3: call    Tile_GetFloat
0x5848B8: fcomp   dword ptr ds:0A69770h
0x5848BE: fnstsw  ax
0x5848C0: test    ah, 44h
0x5848C3: jnp     short loc_5848F7
0x5848C5: push    0FA5h
0x5848CA: mov     ecx, edi
0x5848CC: call    Tile_GetFloat
0x5848D1: fcomp   qword ptr ds:0A69768h
0x5848D7: fnstsw  ax
0x5848D9: test    ah, 44h
0x5848DC: jnp     short loc_5848F7
0x5848DE: push    0FA5h
0x5848E3: mov     ecx, edi
0x5848E5: call    Tile_GetFloat
0x5848EA: fcomp   dword ptr ds:0A69764h
0x5848F0: fnstsw  ax
0x5848F2: test    ah, 44h
0x5848F5: jp      short Menu_SetTileMenu___Done
0x5848F7: mov     eax, [esi]
0x5848F9: mov     edx, [eax+34h]
0x5848FC: mov     ecx, esi
0x5848FE: call    edx
0x584900: push    1; arg1
0x584902: push    0; canCreate
0x584904: mov     [esi+14h], eax
0x584907: call    InterfaceManager_GetSingleton
0x58490C: mov     edi, eax
0x58490E: mov     eax, [esi]
0x584910: mov     edx, [eax+34h]
0x584913: add     esp, 8
0x584916: mov     ecx, esi
0x584918: call    edx
0x58491A: push    eax
0x58491B: mov     ecx, edi
0x58491D: call    sub_57D640
0x584922: cmp     [edi+9Ch], esi
0x584928: jz      short Menu_SetTileMenu___Done
0x58492A: mov     ecx, [edi+98h]; this
0x584930: test    ecx, ecx
0x584932: jz      short loc_584944
0x584934: fldz
0x584936: push    ecx
0x584937: fstp    [esp+0Ch+a2]; a3
0x58493A: push    0FDDh; a2
0x58493F: call    Tile_SetFloat
0x584944: mov     dword ptr [edi+98h], 0
0x58494E: mov     dword ptr [edi+9Ch], 0
