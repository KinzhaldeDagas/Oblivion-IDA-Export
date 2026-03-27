0x5B7020: sub     esp, 0Ch
0x5B7023: push    esi; a3
0x5B7024: mov     esi, ecx
0x5B7026: mov     ecx, [esi+40h]
0x5B7029: push    0FB5h
0x5B702E: call    Tile_GetFloat
0x5B7033: call    Double_To_SInt32
0x5B7038: push    1; arg1
0x5B703A: push    0; canCreate
0x5B703C: mov     dword ptr [esp+18h+var_8], eax
0x5B7040: call    InterfaceManager_GetSingleton
0x5B7045: fld     dword ptr [eax+38h]
0x5B7048: call    Double_To_SInt32
0x5B704D: mov     ecx, eax
0x5B704F: mov     eax, 77777777h
0x5B7054: imul    ecx
0x5B7056: sub     edx, ecx
0x5B7058: mov     ecx, [esi+44h]; this
0x5B705B: sar     edx, 6
0x5B705E: mov     eax, edx
0x5B7060: shr     eax, 1Fh
0x5B7063: add     eax, edx
0x5B7065: mov     [esp+18h+a3], eax; a3
0x5B7069: add     esp, 4
0x5B706C: fild    [esp+14h+a3]
0x5B7070: fstp    [esp+14h+a2]; a3
0x5B7073: push    0FB7h; a2
0x5B7078: call    Tile_SetFloat
0x5B707D: fldz
0x5B707F: push    ecx
0x5B7080: fstp    [esp+14h+a2]; a3
0x5B7083: mov     ecx, [esi+44h]; this
0x5B7086: push    0FB7h; a2
0x5B708B: call    Tile_SetFloat
0x5B7090: fild    dword ptr [esp+10h+var_8]
0x5B7094: mov     ecx, [esi+40h]
0x5B7097: push    0FB5h
0x5B709C: fstp    [esp+14h+var_8]
0x5B70A0: call    Tile_GetFloat
0x5B70A5: fld     [esp+10h+var_8]
0x5B70A9: fucompp
0x5B70AB: fnstsw  ax
0x5B70AD: test    ah, 44h
0x5B70B0: jnp     short loc_5B70DA
0x5B70B2: mov     eax, [esp+10h+arg_4]
0x5B70B6: mov     ecx, [esp+14h]
0x5B70BA: mov     edx, [esi]
0x5B70BC: mov     edx, [edx+14h]
0x5B70BF: push    eax
0x5B70C0: push    ecx
0x5B70C1: mov     ecx, esi
0x5B70C3: call    edx
0x5B70C5: push    0
0x5B70C7: push    1; arg1
0x5B70C9: push    0; canCreate
0x5B70CB: call    InterfaceManager_GetSingleton
0x5B70D0: add     esp, 8
0x5B70D3: mov     ecx, eax
0x5B70D5: call    sub_57D730
0x5B70DA: pop     esi
0x5B70DB: add     esp, 0Ch
0x5B70DE: retn    8
