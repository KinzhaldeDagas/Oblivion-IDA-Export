0x4F6350: fldz
0x4F6352: mov     eax, [esp+arg_C]
0x4F6356: push    ebp
0x4F6357: fstp    qword ptr [eax]
0x4F6359: push    esi
0x4F635A: mov     esi, [esp+8+arg_0]
0x4F635E: xor     ebp, ebp
0x4F6360: test    esi, esi
0x4F6362: push    edi
0x4F6363: jz      short loc_4F6385
0x4F6365: mov     edx, [esi]
0x4F6367: mov     eax, [edx+170h]
0x4F636D: mov     ecx, esi
0x4F636F: call    eax
0x4F6371: cmp     byte ptr [eax+4], 23h ; '#'
0x4F6375: jnz     short loc_4F6385
0x4F6377: mov     edx, [esi]
0x4F6379: mov     eax, [edx+170h]
0x4F637F: mov     ecx, esi
0x4F6381: call    eax
0x4F6383: mov     ebp, eax
0x4F6385: mov     esi, [esp+0Ch+arg_4]
0x4F6389: xor     edi, edi
0x4F638B: test    esi, esi
0x4F638D: jz      short loc_4F63AF
0x4F638F: mov     edx, [esi]
0x4F6391: mov     eax, [edx+170h]
0x4F6397: mov     ecx, esi
0x4F6399: call    eax
0x4F639B: cmp     byte ptr [eax+4], 23h ; '#'
0x4F639F: jnz     short loc_4F63AF
0x4F63A1: mov     edx, [esi]
0x4F63A3: mov     eax, [edx+170h]
0x4F63A9: mov     ecx, esi
0x4F63AB: call    eax
0x4F63AD: mov     edi, eax
0x4F63AF: test    ebp, ebp
0x4F63B1: jz      short loc_4F63D3
0x4F63B3: test    edi, edi
0x4F63B5: jz      short loc_4F63D3
0x4F63B7: mov     ecx, edi
0x4F63B9: call    TESActorBase_IsFemale
0x4F63BE: mov     ecx, ebp
0x4F63C0: mov     esi, eax
0x4F63C2: call    TESActorBase_IsFemale
0x4F63C7: cmp     eax, esi
0x4F63C9: jnz     short loc_4F63D3
0x4F63CB: fld1
0x4F63CD: mov     ecx, [esp+0Ch+arg_C]
0x4F63D1: fstp    qword ptr [ecx]
0x4F63D3: cmp     byte ptr ds:0B361ACh, 0
0x4F63DA: pop     edi
0x4F63DB: pop     esi
0x4F63DC: pop     ebp
0x4F63DD: jz      short loc_4F63F8
0x4F63DF: mov     edx, [esp+arg_C]
0x4F63E3: fld     qword ptr [edx]
0x4F63E5: sub     esp, 8
0x4F63E8: fstp    [esp+8+var_8]
0x4F63EB: push    offset aSamesex0_2f; "SameSex >> %0.2f"
0x4F63F0: call    Interface_ConsolePrint
0x4F63F5: add     esp, 0Ch
0x4F63F8: mov     al, 1
0x4F63FA: retn
