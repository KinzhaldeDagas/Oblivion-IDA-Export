0x61D6B0: sub     esp, 8
0x61D6B3: push    ebp
0x61D6B4: mov     ebp, [esp+0Ch+arg_0]
0x61D6B8: test    ebp, ebp
0x61D6BA: push    esi
0x61D6BB: mov     esi, ecx
0x61D6BD: jz      loc_61D7D8
0x61D6C3: push    ebx
0x61D6C4: mov     ebx, 8
0x61D6C9: cmp     [esi+70h], ebx
0x61D6CC: jz      loc_61D7D7
0x61D6D2: push    edi
0x61D6D3: call    sub_6135F0
0x61D6D8: test    eax, eax
0x61D6DA: jz      loc_61D798
0x61D6E0: mov     ecx, [esi+3Ch]
0x61D6E3: call    sub_5E0F50
0x61D6E8: mov     edx, [eax]
0x61D6EA: mov     ecx, eax
0x61D6EC: mov     eax, [edx+154h]
0x61D6F2: call    eax
0x61D6F4: fcomp   dword ptr ds:0A2FAA8h
0x61D6FA: fnstsw  ax
0x61D6FC: test    ah, 41h
0x61D6FF: jnz     loc_61D798
0x61D705: mov     ecx, [esi+3Ch]
0x61D708: call    sub_5E0F50
0x61D70D: mov     ecx, esi
0x61D70F: mov     edi, eax
0x61D711: call    sub_615980
0x61D716: fstp    [esp+18h+var_8]
0x61D71A: mov     edx, [edi]
0x61D71C: mov     eax, [edx+154h]
0x61D722: mov     ecx, edi
0x61D724: call    eax
0x61D726: fcomp   [esp+18h+var_8]
0x61D72A: fnstsw  ax
0x61D72C: test    ah, 41h
0x61D72F: jnz     short loc_61D756
0x61D731: cmp     ebp, [esi+94h]
0x61D737: jz      short loc_61D798
0x61D739: cmp     ebp, [esi+98h]
0x61D73F: jz      short loc_61D798
0x61D741: cmp     ebp, [esi+9Ch]
0x61D747: jz      short loc_61D798
0x61D749: cmp     byte ptr [esi+1ADh], 0
0x61D750: jnz     loc_61D7D6
0x61D756: mov     ecx, [esi+3Ch]
0x61D759: call    sub_5E0F50
0x61D75E: mov     ecx, offset unk_B37298
0x61D763: mov     edi, eax
0x61D765: call    GameSetting_GetSafeFloatPointer
0x61D76A: mov     edx, [edi]
0x61D76C: mov     ebx, eax
0x61D76E: mov     eax, [edx+154h]
0x61D774: mov     ecx, edi
0x61D776: call    eax
0x61D778: sub     esp, 8
0x61D77B: fstp    [esp+20h+var_1C]; float
0x61D77F: mov     ecx, esi
0x61D781: fld     dword ptr [ebx]
0x61D783: fstp    [esp+20h+var_20]; float
0x61D786: call    sub_6135F0
0x61D78B: push    eax; int
0x61D78C: mov     ecx, esi
0x61D78E: call    sub_61CAA0
0x61D793: mov     ebx, 8
0x61D798: cmp     [esi+70h], ebx
0x61D79B: mov     [esi+8Ch], ebp
0x61D7A1: jz      short loc_61D7D3
0x61D7A3: cmp     byte ptr ds:0B3B908h, 0
0x61D7AA: jz      short loc_61D7C7
0x61D7AC: mov     ecx, [esi+3Ch]; this
0x61D7AF: push    offset a___justKindaSt; "...just kinda stand around"
0x61D7B4: call    TESObjectREFR_GetName
0x61D7B9: push    eax
0x61D7BA: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x61D7BF: call    Interface_ConsolePrint
0x61D7C4: add     esp, 0Ch
0x61D7C7: fld     dword ptr ds:0A30634h
0x61D7CD: fstp    dword ptr [esi+188h]
0x61D7D3: mov     [esi+70h], ebx
0x61D7D6: pop     edi
0x61D7D7: pop     ebx
0x61D7D8: pop     esi
0x61D7D9: pop     ebp
0x61D7DA: add     esp, 8
0x61D7DD: retn    4
