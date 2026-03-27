0x59DCE0: push    ecx
0x59DCE1: push    esi; a3
0x59DCE2: push    1; arg1
0x59DCE4: push    0; canCreate
0x59DCE6: mov     esi, ecx
0x59DCE8: call    InterfaceManager_GetSingleton
0x59DCED: fld     dword ptr [eax+38h]
0x59DCF0: call    Double_To_SInt32
0x59DCF5: mov     ecx, eax
0x59DCF7: mov     eax, 77777777h
0x59DCFC: imul    ecx
0x59DCFE: sub     edx, ecx
0x59DD00: mov     ecx, [esi+48h]; this
0x59DD03: sar     edx, 6
0x59DD06: mov     eax, edx
0x59DD08: shr     eax, 1Fh
0x59DD0B: add     eax, edx
0x59DD0D: mov     [esp+10h+a3], eax; a3
0x59DD11: add     esp, 4
0x59DD14: fild    [esp+0Ch+a3]
0x59DD18: fstp    [esp+0Ch+a2]; a3
0x59DD1B: push    0FB7h; a2
0x59DD20: call    Tile_SetFloat
0x59DD25: fldz
0x59DD27: push    ecx
0x59DD28: fstp    [esp+0Ch+a2]; a3
0x59DD2B: mov     ecx, [esi+48h]; this
0x59DD2E: push    0FB7h; a2
0x59DD33: call    Tile_SetFloat
0x59DD38: pop     esi
0x59DD39: pop     ecx
0x59DD3A: retn    8
