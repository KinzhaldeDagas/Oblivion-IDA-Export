0x5E06C0: sub     esp, 8
0x5E06C3: push    ebx
0x5E06C4: push    esi
0x5E06C5: mov     esi, [esp+10h+arg_4]
0x5E06C9: xor     bl, bl
0x5E06CB: test    esi, esi
0x5E06CD: jz      short loc_5E06FF
0x5E06CF: call    sub_5E0660
0x5E06D4: fmul    [esp+10h+arg_8]
0x5E06D8: mov     eax, [esp+10h+arg_0]
0x5E06DC: mov     ecx, esi
0x5E06DE: fstp    [esp+10h+arg_4]
0x5E06E2: fld     dword ptr [eax+8]
0x5E06E5: fadd    [esp+10h+arg_4]
0x5E06E9: fstp    [esp+10h+var_8]
0x5E06ED: call    TESObjectCELL_GetWaterHeight
0x5E06F2: fcomp   [esp+10h+var_8]
0x5E06F6: fnstsw  ax
0x5E06F8: mov     al, 1
0x5E06FA: test    ah, 41h
0x5E06FD: jz      short loc_5E0701
0x5E06FF: mov     al, bl
0x5E0701: pop     esi
0x5E0702: pop     ebx
0x5E0703: add     esp, 8
0x5E0706: retn    0Ch
