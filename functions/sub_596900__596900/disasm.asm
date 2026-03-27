0x596900: push    ecx
0x596901: cmp     dword ptr [ecx+2Ch], 0
0x596905: push    esi; a3
0x596906: mov     esi, [ecx+30h]
0x596909: jz      short loc_596972
0x59690B: push    1; arg1
0x59690D: push    0; canCreate
0x59690F: call    InterfaceManager_GetSingleton
0x596914: fld     dword ptr [eax+38h]
0x596917: call    Double_To_SInt32
0x59691C: mov     ecx, eax
0x59691E: mov     eax, 77777777h
0x596923: imul    ecx
0x596925: sub     edx, ecx
0x596927: sar     edx, 6
0x59692A: mov     eax, edx
0x59692C: shr     eax, 1Fh
0x59692F: add     eax, edx
0x596931: mov     [esp+10h+a3], eax; a3
0x596935: add     esp, 4
0x596938: mov     ecx, esi; this
0x59693A: fild    [esp+0Ch+a3]
0x59693E: fstp    [esp+0Ch+a2]; a3
0x596941: push    0FB7h; a2
0x596946: call    Tile_SetFloat
0x59694B: fldz
0x59694D: push    ecx
0x59694E: fstp    [esp+0Ch+a2]; a3
0x596951: push    0FB7h; a2
0x596956: mov     ecx, esi; this
0x596958: call    Tile_SetFloat
0x59695D: push    1
0x59695F: push    1; arg1
0x596961: push    0; canCreate
0x596963: call    InterfaceManager_GetSingleton
0x596968: add     esp, 8
0x59696B: mov     ecx, eax
0x59696D: call    sub_57D730
0x596972: pop     esi
0x596973: pop     ecx
0x596974: retn    8
