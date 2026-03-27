0x5981D0: sub     esp, 0Ch
0x5981D3: push    esi; a3
0x5981D4: mov     esi, ecx
0x5981D6: mov     ecx, [esi+28h]
0x5981D9: push    0FB5h
0x5981DE: call    Tile_GetFloat
0x5981E3: call    Double_To_SInt32
0x5981E8: push    1; arg1
0x5981EA: push    0; canCreate
0x5981EC: mov     dword ptr [esp+18h+var_8], eax
0x5981F0: call    InterfaceManager_GetSingleton
0x5981F5: fld     dword ptr [eax+38h]
0x5981F8: call    Double_To_SInt32
0x5981FD: mov     ecx, eax
0x5981FF: mov     eax, 77777777h
0x598204: imul    ecx
0x598206: sub     edx, ecx
0x598208: mov     ecx, [esi+2Ch]; this
0x59820B: sar     edx, 6
0x59820E: mov     eax, edx
0x598210: shr     eax, 1Fh
0x598213: add     eax, edx
0x598215: mov     [esp+18h+a3], eax; a3
0x598219: add     esp, 4
0x59821C: fild    [esp+14h+a3]
0x598220: fstp    [esp+14h+a2]; a3
0x598223: push    0FB7h; a2
0x598228: call    Tile_SetFloat
0x59822D: fldz
0x59822F: push    ecx
0x598230: fstp    [esp+14h+a2]; a3
0x598233: mov     ecx, [esi+2Ch]; this
0x598236: push    0FB7h; a2
0x59823B: call    Tile_SetFloat
0x598240: fild    dword ptr [esp+10h+var_8]
0x598244: mov     ecx, [esi+28h]
0x598247: push    0FB5h
0x59824C: fstp    [esp+14h+var_8]
0x598250: call    Tile_GetFloat
0x598255: fld     [esp+10h+var_8]
0x598259: fucompp
0x59825B: fnstsw  ax
0x59825D: test    ah, 44h
0x598260: jnp     short loc_59828A
0x598262: mov     eax, [esp+10h+arg_4]
0x598266: mov     ecx, [esp+14h]
0x59826A: mov     edx, [esi]
0x59826C: mov     edx, [edx+14h]
0x59826F: push    eax
0x598270: push    ecx
0x598271: mov     ecx, esi
0x598273: call    edx
0x598275: push    0
0x598277: push    1; arg1
0x598279: push    0; canCreate
0x59827B: call    InterfaceManager_GetSingleton
0x598280: add     esp, 8
0x598283: mov     ecx, eax
0x598285: call    sub_57D730
0x59828A: pop     esi
0x59828B: add     esp, 0Ch
0x59828E: retn    8
