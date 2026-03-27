0x68D1BD: cmp     byte ptr [esi+11h], 0
0x68D1C1: jnz     loc_68D272
0x68D1C7: test    edi, edi
0x68D1C9: jz      loc_68D272
0x68D1CF: mov     eax, [edi]
0x68D1D1: mov     edx, [eax+154h]
0x68D1D7: mov     ecx, edi
0x68D1D9: call    edx
0x68D1DB: test    eax, eax
0x68D1DD: jz      loc_68D272
0x68D1E3: mov     eax, [edi]
0x68D1E5: mov     edx, [eax+198h]
0x68D1EB: push    0
0x68D1ED: mov     ecx, edi
0x68D1EF: call    edx
0x68D1F1: test    al, al
0x68D1F3: jnz     short loc_68D272
0x68D1F5: test    ebp, ebp
0x68D1F7: jz      short loc_68D272
0x68D1F9: mov     eax, [ebp+0]
0x68D1FC: mov     edx, [eax+154h]
0x68D202: mov     ecx, ebp
0x68D204: call    edx
0x68D206: test    eax, eax
0x68D208: jz      short loc_68D272
0x68D20A: mov     eax, [ebp+0]
0x68D20D: mov     edx, [eax+198h]
0x68D213: push    0
0x68D215: mov     ecx, ebp
0x68D217: call    edx
0x68D219: test    al, al
0x68D21B: jnz     short loc_68D272
0x68D21D: push    0
0x68D21F: push    edi
0x68D220: mov     ecx, ebp
0x68D222: call    TesObjectREF_GetDistance
0x68D227: fstp    dword ptr [esp+8+arg_0]
0x68D22B: mov     ecx, offset unk_B37E70
0x68D230: call    GameSetting_GetSafeFloatPointer
0x68D235: fld     dword ptr [esp+8+arg_0]
0x68D239: fstp    [esp+8+arg_0]
0x68D23D: push    ecx
0x68D23E: fld     dword ptr [eax]
0x68D240: fstp    [esp+0Ch+var_C]; float
0x68D243: call    Calc_GetCombatDistance
0x68D248: fcomp   [esp+0Ch+arg_0]
0x68D24C: add     esp, 4
0x68D24F: fnstsw  ax
0x68D251: test    ah, 5
0x68D254: jnp     short loc_68D272
0x68D256: mov     ecx, [ebp+58h]
0x68D259: test    ecx, ecx
0x68D25B: jz      short loc_68D27B
0x68D25D: mov     eax, [ecx]
0x68D25F: mov     edx, [eax+3B0h]
0x68D265: push    edi
0x68D266: call    edx
0x68D268: test    eax, eax
0x68D26A: jz      short loc_68D27B
0x68D26C: cmp     byte ptr [eax+8], 0
0x68D270: jnz     short loc_68D27B
0x68D272: push    0
0x68D274: mov     ecx, esi
0x68D276: call    ActiveEffect_Base_Remove
0x68D27B: cmp     byte ptr [esi+11h], 0
0x68D27F: jnz     short loc_68D290
0x68D281: fld     [esp+0Ch+arg_8]
0x68D285: push    ecx
0x68D286: mov     ecx, esi
0x68D288: fstp    [esp+10h+var_10]; float
0x68D28B: call    sub_68CC50
0x68D290: pop     edi
0x68D291: pop     esi
0x68D292: pop     ebp
0x68D293: add     esp, 8
0x68D296: retn    4
