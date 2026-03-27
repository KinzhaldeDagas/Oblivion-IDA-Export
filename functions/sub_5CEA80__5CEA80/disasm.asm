0x5CEA80: sub     esp, 0Ch
0x5CEA83: push    ebx
0x5CEA84: mov     ebx, ecx
0x5CEA86: push    esi; a3
0x5CEA87: mov     esi, [ebx+30h]
0x5CEA8A: test    esi, esi
0x5CEA8C: push    edi; a3
0x5CEA8D: mov     edi, [ebx+34h]
0x5CEA90: jz      loc_5CEB46
0x5CEA96: push    0FB5h
0x5CEA9B: mov     ecx, esi
0x5CEA9D: call    Tile_GetFloat
0x5CEAA2: call    Double_To_SInt32
0x5CEAA7: push    1; arg1
0x5CEAA9: push    0; canCreate
0x5CEAAB: mov     dword ptr [esp+20h+var_8], eax
0x5CEAAF: call    InterfaceManager_GetSingleton
0x5CEAB4: fld     dword ptr [eax+38h]
0x5CEAB7: call    Double_To_SInt32
0x5CEABC: mov     ecx, eax
0x5CEABE: mov     eax, 77777777h
0x5CEAC3: imul    ecx
0x5CEAC5: sub     edx, ecx
0x5CEAC7: sar     edx, 6
0x5CEACA: mov     eax, edx
0x5CEACC: shr     eax, 1Fh
0x5CEACF: add     eax, edx
0x5CEAD1: mov     [esp+20h+var_C], eax
0x5CEAD5: add     esp, 4
0x5CEAD8: mov     ecx, edi; this
0x5CEADA: fild    [esp+1Ch+var_C]
0x5CEADE: fstp    [esp+1Ch+a2]; a3
0x5CEAE1: push    0FB7h; a2
0x5CEAE6: call    Tile_SetFloat
0x5CEAEB: fldz
0x5CEAED: push    ecx
0x5CEAEE: fstp    [esp+1Ch+a2]; a3
0x5CEAF1: push    0FB7h; a2
0x5CEAF6: mov     ecx, edi; this
0x5CEAF8: call    Tile_SetFloat
0x5CEAFD: fild    dword ptr [esp+18h+var_8]
0x5CEB01: push    0FB5h
0x5CEB06: mov     ecx, esi
0x5CEB08: fstp    [esp+1Ch+var_8]
0x5CEB0C: call    Tile_GetFloat
0x5CEB11: fld     [esp+18h+var_8]
0x5CEB15: fucompp
0x5CEB17: fnstsw  ax
0x5CEB19: test    ah, 44h
0x5CEB1C: jnp     short loc_5CEB46
0x5CEB1E: mov     eax, [esp+18h+arg_4]
0x5CEB22: mov     ecx, [esp+1Ch]
0x5CEB26: mov     edx, [ebx]
0x5CEB28: mov     edx, [edx+14h]
0x5CEB2B: push    eax
0x5CEB2C: push    ecx
0x5CEB2D: mov     ecx, ebx
0x5CEB2F: call    edx
0x5CEB31: push    0
0x5CEB33: push    1; arg1
0x5CEB35: push    0; canCreate
0x5CEB37: call    InterfaceManager_GetSingleton
0x5CEB3C: add     esp, 8
0x5CEB3F: mov     ecx, eax
0x5CEB41: call    sub_57D730
0x5CEB46: pop     edi
0x5CEB47: pop     esi
0x5CEB48: pop     ebx
0x5CEB49: add     esp, 0Ch
0x5CEB4C: retn    8
