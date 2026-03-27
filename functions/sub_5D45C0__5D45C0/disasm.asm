0x5D45C0: sub     esp, 8
0x5D45C3: push    ebx
0x5D45C4: push    ebp
0x5D45C5: mov     ebp, [esp+14h]
0x5D45C9: cmp     ebp, 3E8h
0x5D45CF: push    esi; a3
0x5D45D0: push    edi; a3
0x5D45D1: mov     ebx, ecx
0x5D45D3: jl      short loc_5D45E5
0x5D45D5: cmp     ebp, 0BB8h
0x5D45DB: jge     short loc_5D45F1
0x5D45DD: mov     edi, [ebx+44h]
0x5D45E0: mov     esi, [ebx+48h]
0x5D45E3: jmp     short loc_5D45F7
0x5D45E5: cmp     ebp, 0BB8h
0x5D45EB: jl      loc_5D46B0
0x5D45F1: mov     edi, [ebx+4Ch]
0x5D45F4: mov     esi, [ebx+50h]
0x5D45F7: test    edi, edi
0x5D45F9: jz      loc_5D46B0
0x5D45FF: push    0FB5h
0x5D4604: mov     ecx, edi
0x5D4606: call    Tile_GetFloat
0x5D460B: call    Double_To_SInt32
0x5D4610: push    1; arg1
0x5D4612: push    0; canCreate
0x5D4614: mov     dword ptr [esp+20h+var_8], eax
0x5D4618: call    InterfaceManager_GetSingleton
0x5D461D: add     esp, 8
0x5D4620: test    esi, esi
0x5D4622: jz      short loc_5D466B
0x5D4624: fld     dword ptr [eax+38h]
0x5D4627: call    Double_To_SInt32
0x5D462C: mov     ecx, eax
0x5D462E: mov     eax, 77777777h
0x5D4633: imul    ecx
0x5D4635: sub     edx, ecx
0x5D4637: sar     edx, 6
0x5D463A: mov     eax, edx
0x5D463C: shr     eax, 1Fh
0x5D463F: add     eax, edx
0x5D4641: mov     [esp+1Ch], eax
0x5D4645: push    ecx
0x5D4646: mov     ecx, esi; this
0x5D4648: fild    dword ptr [esp+20h]
0x5D464C: fstp    [esp+1Ch+a2]; a3
0x5D464F: push    0FB7h; a2
0x5D4654: call    Tile_SetFloat
0x5D4659: fldz
0x5D465B: push    ecx
0x5D465C: fstp    [esp+1Ch+a2]; a3
0x5D465F: push    0FB7h; a2
0x5D4664: mov     ecx, esi; this
0x5D4666: call    Tile_SetFloat
0x5D466B: fild    dword ptr [esp+18h+var_8]
0x5D466F: push    0FB5h
0x5D4674: mov     ecx, edi
0x5D4676: fstp    [esp+1Ch+var_8]
0x5D467A: call    Tile_GetFloat
0x5D467F: fld     [esp+18h+var_8]
0x5D4683: fucompp
0x5D4685: fnstsw  ax
0x5D4687: test    ah, 44h
0x5D468A: jnp     short loc_5D46B0
0x5D468C: mov     eax, [esp+18h+arg_4]
0x5D4690: mov     edx, [ebx]
0x5D4692: mov     edx, [edx+14h]
0x5D4695: push    eax
0x5D4696: push    ebp
0x5D4697: mov     ecx, ebx
0x5D4699: call    edx
0x5D469B: push    0
0x5D469D: push    1; arg1
0x5D469F: push    0; canCreate
0x5D46A1: call    InterfaceManager_GetSingleton
0x5D46A6: add     esp, 8
0x5D46A9: mov     ecx, eax
0x5D46AB: call    sub_57D730
0x5D46B0: pop     edi
0x5D46B1: pop     esi
0x5D46B2: pop     ebp
0x5D46B3: pop     ebx
0x5D46B4: add     esp, 8
0x5D46B7: retn    8
