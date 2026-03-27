0x5DE280: push    ecx
0x5DE281: push    esi; a3
0x5DE282: push    1; arg1
0x5DE284: push    0; canCreate
0x5DE286: mov     esi, ecx
0x5DE288: call    InterfaceManager_GetSingleton
0x5DE28D: fld     dword ptr [eax+38h]
0x5DE290: call    Double_To_SInt32
0x5DE295: mov     ecx, eax
0x5DE297: mov     eax, 77777777h
0x5DE29C: imul    ecx
0x5DE29E: sub     edx, ecx
0x5DE2A0: mov     ecx, [esi+30h]; this
0x5DE2A3: sar     edx, 6
0x5DE2A6: mov     eax, edx
0x5DE2A8: shr     eax, 1Fh
0x5DE2AB: add     eax, edx
0x5DE2AD: mov     [esp+10h+a3], eax; a3
0x5DE2B1: add     esp, 4
0x5DE2B4: fild    [esp+0Ch+a3]
0x5DE2B8: fstp    [esp+0Ch+a2]; a3
0x5DE2BB: push    0FB7h; a2
0x5DE2C0: call    Tile_SetFloat
0x5DE2C5: fldz
0x5DE2C7: push    ecx
0x5DE2C8: fstp    [esp+0Ch+a2]; a3
0x5DE2CB: mov     ecx, [esi+30h]; this
0x5DE2CE: push    0FB7h; a2
0x5DE2D3: call    Tile_SetFloat
0x5DE2D8: pop     esi
0x5DE2D9: pop     ecx
0x5DE2DA: retn    8
