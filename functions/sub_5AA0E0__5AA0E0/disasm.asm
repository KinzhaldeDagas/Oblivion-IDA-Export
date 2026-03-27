0x5AA0E0: sub     esp, 0Ch
0x5AA0E3: push    esi; a3
0x5AA0E4: mov     esi, ecx
0x5AA0E6: mov     ecx, [esi+30h]
0x5AA0E9: push    0FB5h
0x5AA0EE: call    Tile_GetFloat
0x5AA0F3: call    Double_To_SInt32
0x5AA0F8: push    1; arg1
0x5AA0FA: push    0; canCreate
0x5AA0FC: mov     dword ptr [esp+18h+var_8], eax
0x5AA100: call    InterfaceManager_GetSingleton
0x5AA105: fld     dword ptr [eax+38h]
0x5AA108: call    Double_To_SInt32
0x5AA10D: mov     ecx, eax
0x5AA10F: mov     eax, 77777777h
0x5AA114: imul    ecx
0x5AA116: sub     edx, ecx
0x5AA118: mov     ecx, [esi+34h]; this
0x5AA11B: sar     edx, 6
0x5AA11E: mov     eax, edx
0x5AA120: shr     eax, 1Fh
0x5AA123: add     eax, edx
0x5AA125: mov     [esp+18h+a3], eax; a3
0x5AA129: add     esp, 4
0x5AA12C: fild    [esp+14h+a3]
0x5AA130: fstp    [esp+14h+a2]; a3
0x5AA133: push    0FB7h; a2
0x5AA138: call    Tile_SetFloat
0x5AA13D: fldz
0x5AA13F: push    ecx
0x5AA140: fstp    [esp+14h+a2]; a3
0x5AA143: mov     ecx, [esi+34h]; this
0x5AA146: push    0FB7h; a2
0x5AA14B: call    Tile_SetFloat
0x5AA150: fild    dword ptr [esp+10h+var_8]
0x5AA154: mov     ecx, [esi+30h]
0x5AA157: push    0FB5h
0x5AA15C: fstp    [esp+14h+var_8]
0x5AA160: call    Tile_GetFloat
0x5AA165: fld     [esp+10h+var_8]
0x5AA169: fucompp
0x5AA16B: fnstsw  ax
0x5AA16D: test    ah, 44h
0x5AA170: jnp     short loc_5AA19A
0x5AA172: mov     eax, [esp+10h+arg_4]
0x5AA176: mov     ecx, [esp+14h]
0x5AA17A: mov     edx, [esi]
0x5AA17C: mov     edx, [edx+14h]
0x5AA17F: push    eax
0x5AA180: push    ecx
0x5AA181: mov     ecx, esi
0x5AA183: call    edx
0x5AA185: push    0
0x5AA187: push    1; arg1
0x5AA189: push    0; canCreate
0x5AA18B: call    InterfaceManager_GetSingleton
0x5AA190: add     esp, 8
0x5AA193: mov     ecx, eax
0x5AA195: call    sub_57D730
0x5AA19A: pop     esi
0x5AA19B: add     esp, 0Ch
0x5AA19E: retn    8
