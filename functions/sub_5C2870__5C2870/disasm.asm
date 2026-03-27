0x5C2870: push    ecx
0x5C2871: push    esi; a3
0x5C2872: mov     esi, ecx
0x5C2874: cmp     dword ptr [esi+34h], 0
0x5C2878: jz      short loc_5C28E3
0x5C287A: push    1; arg1
0x5C287C: push    0; canCreate
0x5C287E: call    InterfaceManager_GetSingleton
0x5C2883: fld     dword ptr [eax+38h]
0x5C2886: call    Double_To_SInt32
0x5C288B: mov     ecx, eax
0x5C288D: mov     eax, 77777777h
0x5C2892: imul    ecx
0x5C2894: sub     edx, ecx
0x5C2896: mov     ecx, [esi+34h]; this
0x5C2899: sar     edx, 6
0x5C289C: mov     eax, edx
0x5C289E: shr     eax, 1Fh
0x5C28A1: add     eax, edx
0x5C28A3: mov     [esp+10h+a3], eax; a3
0x5C28A7: add     esp, 4
0x5C28AA: fild    [esp+0Ch+a3]
0x5C28AE: fstp    [esp+0Ch+a2]; a3
0x5C28B1: push    0FB7h; a2
0x5C28B6: call    Tile_SetFloat
0x5C28BB: fldz
0x5C28BD: push    ecx
0x5C28BE: fstp    [esp+0Ch+a2]; a3
0x5C28C1: mov     ecx, [esi+34h]; this
0x5C28C4: push    0FB7h; a2
0x5C28C9: call    Tile_SetFloat
0x5C28CE: push    1
0x5C28D0: push    1; arg1
0x5C28D2: push    0; canCreate
0x5C28D4: call    InterfaceManager_GetSingleton
0x5C28D9: add     esp, 8
0x5C28DC: mov     ecx, eax
0x5C28DE: call    sub_57D730
0x5C28E3: pop     esi
0x5C28E4: pop     ecx
0x5C28E5: retn    8
