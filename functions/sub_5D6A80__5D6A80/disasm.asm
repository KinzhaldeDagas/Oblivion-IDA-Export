0x5D6A80: mov     eax, [esp+arg_0]
0x5D6A84: cmp     eax, 5
0x5D6A87: push    esi; a3
0x5D6A88: mov     esi, ecx
0x5D6A8A: jnz     loc_5D6B57
0x5D6A90: push    1; int
0x5D6A92: call    sub_57DE50
0x5D6A97: fld1
0x5D6A99: mov     ecx, [esi+30h]; this
0x5D6A9C: fstp    [esp+8+a2]; a3
0x5D6A9F: push    0FA1h; a2
0x5D6AA4: call    Tile_SetFloat
0x5D6AA9: mov     al, [esi+4Ch]
0x5D6AAC: test    al, al
0x5D6AAE: jz      short loc_5D6ABD
0x5D6AB0: cmp     byte ptr ds:0B13218h, 0
0x5D6AB7: jnz     short loc_5D6AC6
0x5D6AB9: test    al, al
0x5D6ABB: jnz     short loc_5D6AD1
0x5D6ABD: cmp     byte ptr ds:0B13220h, 0
0x5D6AC4: jz      short loc_5D6AD1
0x5D6AC6: mov     ecx, ds:0B33B00h
0x5D6ACC: call    sub_466B70
0x5D6AD1: mov     ecx, [esi+28h]
0x5D6AD4: push    0FB5h
0x5D6AD9: call    Tile_GetFloat
0x5D6ADE: call    Double_To_SInt32
0x5D6AE3: fld1
0x5D6AE5: mov     edx, ds:0B333C4h
0x5D6AEB: mov     ds:0B3B730h, eax
0x5D6AF0: mov     cl, [esi+4Ch]
0x5D6AF3: mov     [edx+590h], eax
0x5D6AF9: mov     [edx+594h], cl
0x5D6AFF: mov     ds:0B14778h, eax
0x5D6B04: push    ecx
0x5D6B05: mov     ecx, ds:0B3A6B0h
0x5D6B0B: fstp    [esp+8+a2]; float
0x5D6B0E: push    1; int
0x5D6B10: call    sub_5732D0
0x5D6B15: fld1
0x5D6B17: fstp    dword ptr ds:0B3B724h
0x5D6B1D: push    ecx
0x5D6B1E: fld     dword ptr ds:0A379B4h
0x5D6B24: mov     ecx, [esi+40h]; this
0x5D6B27: fstp    [esp+8+a2]; a3
0x5D6B2A: mov     byte ptr ds:0B3B728h, 1
0x5D6B31: push    0FC9h; a2
0x5D6B36: call    Tile_SetFloat
0x5D6B3B: mov     eax, ds:0B333C4h
0x5D6B40: cmp     byte ptr [eax+6E5h], 0
0x5D6B47: jnz     short loc_5D6BB0
0x5D6B49: mov     ecx, offset ActorProcessManager_ptr
0x5D6B4E: call    sub_676D30
0x5D6B53: pop     esi
0x5D6B54: retn    8
0x5D6B57: cmp     eax, 6
0x5D6B5A: jnz     short loc_5D6BB0
0x5D6B5C: push    2; int
0x5D6B5E: call    sub_57DE50
0x5D6B63: fld1
0x5D6B65: mov     ecx, [esp+8+arg_4]; this
0x5D6B69: fstp    [esp+8+a2]; a3
0x5D6B6C: push    0FA1h; a2
0x5D6B71: call    Tile_SetFloat
0x5D6B76: mov     ecx, ds:0B333C4h; this
0x5D6B7C: call    PlayerCharacter__IsSleeping?
0x5D6B81: test    al, al
0x5D6B83: jz      short loc_5D6BA4
0x5D6B85: mov     eax, ds:0B333C4h
0x5D6B8A: mov     dword ptr [eax+590h], 0
0x5D6B94: mov     byte ptr [eax+594h], 0
0x5D6B9B: call    ClsoeSleepWaitMenu
0x5D6BA0: pop     esi
0x5D6BA1: retn    8
0x5D6BA4: mov     byte ptr ds:0B3B72Bh, 1
0x5D6BAB: call    ClsoeSleepWaitMenu
0x5D6BB0: pop     esi
0x5D6BB1: retn    8
