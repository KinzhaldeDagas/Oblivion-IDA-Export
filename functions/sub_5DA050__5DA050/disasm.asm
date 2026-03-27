0x5DA050: sub     esp, 8
0x5DA053: push    esi; a3
0x5DA054: push    edi; a3
0x5DA055: mov     edi, ecx
0x5DA057: mov     ecx, [edi+30h]
0x5DA05A: push    0FA1h
0x5DA05F: call    Tile_GetFloat
0x5DA064: fcomp   dword ptr ds:0A2F948h
0x5DA06A: fnstsw  ax
0x5DA06C: test    ah, 44h
0x5DA06F: jnp     short loc_5DA076
0x5DA071: mov     esi, [edi+40h]
0x5DA074: jmp     short loc_5DA0B6
0x5DA076: mov     ecx, [edi+34h]
0x5DA079: push    0FA1h
0x5DA07E: call    Tile_GetFloat
0x5DA083: fcomp   dword ptr ds:0A2F948h
0x5DA089: fnstsw  ax
0x5DA08B: test    ah, 44h
0x5DA08E: jnp     short loc_5DA095
0x5DA090: mov     esi, [edi+48h]
0x5DA093: jmp     short loc_5DA0B6
0x5DA095: mov     ecx, [edi+38h]
0x5DA098: push    0FA1h
0x5DA09D: call    Tile_GetFloat
0x5DA0A2: fcomp   dword ptr ds:0A2F948h
0x5DA0A8: fnstsw  ax
0x5DA0AA: test    ah, 44h
0x5DA0AD: jnp     loc_5DA16E
0x5DA0B3: mov     esi, [edi+50h]
0x5DA0B6: test    esi, esi
0x5DA0B8: jz      loc_5DA16E
0x5DA0BE: push    0FB5h
0x5DA0C3: mov     ecx, esi
0x5DA0C5: call    Tile_GetFloat
0x5DA0CA: call    Double_To_SInt32
0x5DA0CF: push    1; arg1
0x5DA0D1: push    0; canCreate
0x5DA0D3: mov     [esp+18h+var_4], eax
0x5DA0D7: call    InterfaceManager_GetSingleton
0x5DA0DC: fld     dword ptr [eax+38h]
0x5DA0DF: call    Double_To_SInt32
0x5DA0E4: mov     ecx, eax
0x5DA0E6: mov     eax, 77777777h
0x5DA0EB: imul    ecx
0x5DA0ED: sub     edx, ecx
0x5DA0EF: sar     edx, 6
0x5DA0F2: mov     eax, edx
0x5DA0F4: shr     eax, 1Fh
0x5DA0F7: add     eax, edx
0x5DA0F9: mov     [esp+18h+var_8], eax
0x5DA0FD: add     esp, 4
0x5DA100: mov     ecx, esi; this
0x5DA102: fild    [esp+14h+var_8]
0x5DA106: fstp    [esp+14h+a2]; a3
0x5DA109: push    0FB3h; a2
0x5DA10E: call    Tile_SetFloat
0x5DA113: fldz
0x5DA115: push    ecx
0x5DA116: fstp    [esp+14h+a2]; a3
0x5DA119: push    0FB3h; a2
0x5DA11E: mov     ecx, esi; this
0x5DA120: call    Tile_SetFloat
0x5DA125: fild    [esp+10h+var_4]
0x5DA129: push    0FB5h
0x5DA12E: mov     ecx, esi
0x5DA130: fstp    [esp+14h+var_4]
0x5DA134: call    Tile_GetFloat
0x5DA139: fld     [esp+10h+var_4]
0x5DA13D: fucompp
0x5DA13F: fnstsw  ax
0x5DA141: test    ah, 44h
0x5DA144: jnp     short loc_5DA16E
0x5DA146: mov     eax, [esp+10h+arg_4]
0x5DA14A: mov     ecx, [esp+10h+arg_0]
0x5DA14E: mov     edx, [edi]
0x5DA150: mov     edx, [edx+14h]
0x5DA153: push    eax
0x5DA154: push    ecx
0x5DA155: mov     ecx, edi
0x5DA157: call    edx
0x5DA159: push    0
0x5DA15B: push    1; arg1
0x5DA15D: push    0; canCreate
0x5DA15F: call    InterfaceManager_GetSingleton
0x5DA164: add     esp, 8
0x5DA167: mov     ecx, eax
0x5DA169: call    sub_57D730
0x5DA16E: pop     edi
0x5DA16F: pop     esi
0x5DA170: add     esp, 8
0x5DA173: retn    8
