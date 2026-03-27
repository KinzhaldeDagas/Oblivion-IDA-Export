0x5935C0: sub     esp, 0Ch
0x5935C3: push    ebx
0x5935C4: mov     ebx, ecx
0x5935C6: push    esi; a3
0x5935C7: mov     esi, [ebx+60h]
0x5935CA: test    esi, esi
0x5935CC: push    edi; a3
0x5935CD: mov     edi, [ebx+64h]
0x5935D0: jz      loc_593686
0x5935D6: push    0FB5h
0x5935DB: mov     ecx, esi
0x5935DD: call    Tile_GetFloat
0x5935E2: call    Double_To_SInt32
0x5935E7: push    1; arg1
0x5935E9: push    0; canCreate
0x5935EB: mov     dword ptr [esp+20h+var_8], eax
0x5935EF: call    InterfaceManager_GetSingleton
0x5935F4: fld     dword ptr [eax+38h]
0x5935F7: call    Double_To_SInt32
0x5935FC: mov     ecx, eax
0x5935FE: mov     eax, 77777777h
0x593603: imul    ecx
0x593605: sub     edx, ecx
0x593607: sar     edx, 6
0x59360A: mov     eax, edx
0x59360C: shr     eax, 1Fh
0x59360F: add     eax, edx
0x593611: mov     [esp+20h+var_C], eax
0x593615: add     esp, 4
0x593618: mov     ecx, edi; this
0x59361A: fild    [esp+1Ch+var_C]
0x59361E: fstp    [esp+1Ch+a2]; a3
0x593621: push    0FB7h; a2
0x593626: call    Tile_SetFloat
0x59362B: fldz
0x59362D: push    ecx
0x59362E: fstp    [esp+1Ch+a2]; a3
0x593631: push    0FB7h; a2
0x593636: mov     ecx, edi; this
0x593638: call    Tile_SetFloat
0x59363D: fild    dword ptr [esp+18h+var_8]
0x593641: push    0FB5h
0x593646: mov     ecx, esi
0x593648: fstp    [esp+1Ch+var_8]
0x59364C: call    Tile_GetFloat
0x593651: fld     [esp+18h+var_8]
0x593655: fucompp
0x593657: fnstsw  ax
0x593659: test    ah, 44h
0x59365C: jnp     short loc_593686
0x59365E: mov     eax, [esp+18h+arg_4]
0x593662: mov     ecx, [esp+1Ch]
0x593666: mov     edx, [ebx]
0x593668: mov     edx, [edx+14h]
0x59366B: push    eax
0x59366C: push    ecx
0x59366D: mov     ecx, ebx
0x59366F: call    edx
0x593671: push    0
0x593673: push    1; arg1
0x593675: push    0; canCreate
0x593677: call    InterfaceManager_GetSingleton
0x59367C: add     esp, 8
0x59367F: mov     ecx, eax
0x593681: call    sub_57D730
0x593686: pop     edi
0x593687: pop     esi
0x593688: pop     ebx
0x593689: add     esp, 0Ch
0x59368C: retn    8
