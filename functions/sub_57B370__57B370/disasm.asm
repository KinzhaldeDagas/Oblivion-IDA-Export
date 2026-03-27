0x57B370: push    ecx
0x57B371: push    1; arg1
0x57B373: push    0; canCreate
0x57B375: call    InterfaceManager_GetSingleton
0x57B37A: add     esp, 8
0x57B37D: test    eax, eax
0x57B37F: jz      short loc_57B3FC
0x57B381: push    1; arg1
0x57B383: push    0; canCreate
0x57B385: call    InterfaceManager_GetSingleton
0x57B38A: add     esp, 8
0x57B38D: cmp     dword ptr [eax+1Ch], 0
0x57B391: jz      short loc_57B3FC
0x57B393: push    1; arg1
0x57B395: push    0; canCreate
0x57B397: call    InterfaceManager_GetSingleton
0x57B39C: add     esp, 8
0x57B39F: cmp     dword ptr [eax+68h], 0
0x57B3A3: jz      short loc_57B3FC
0x57B3A5: push    1; arg1
0x57B3A7: push    0; canCreate
0x57B3A9: call    InterfaceManager_GetSingleton
0x57B3AE: mov     eax, [eax+68h]
0x57B3B1: add     esp, 8
0x57B3B4: push    0FAEh
0x57B3B9: mov     ecx, eax
0x57B3BB: call    Tile_GetFloat
0x57B3C0: fcomp   dword ptr ds:0A379B4h
0x57B3C6: fnstsw  ax
0x57B3C8: test    ah, 44h
0x57B3CB: jp      short loc_57B3FC
0x57B3CD: mov     edx, [esp+4+arg_10]
0x57B3D1: lea     ecx, [esp+4+var_4]
0x57B3D4: push    ecx
0x57B3D5: mov     ecx, [esp+8+arg_8]
0x57B3D9: push    edx
0x57B3DA: mov     edx, [esp+0Ch+arg_4]
0x57B3DE: lea     eax, [esp+0Ch+arg_14]
0x57B3E2: mov     [esp+0Ch+var_4], eax
0x57B3E6: mov     eax, [esp+0Ch+arg_C]
0x57B3EA: push    eax
0x57B3EB: mov     eax, [esp+10h+arg_0]
0x57B3EF: push    ecx
0x57B3F0: push    edx
0x57B3F1: push    eax
0x57B3F2: call    sub_5A3FF0
0x57B3F7: add     esp, 18h
0x57B3FA: pop     ecx
0x57B3FB: retn
0x57B3FC: xor     al, al
0x57B3FE: pop     ecx
0x57B3FF: retn
