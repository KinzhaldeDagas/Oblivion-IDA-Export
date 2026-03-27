0x4407A0: sub     esp, 8
0x4407A3: push    ebx
0x4407A4: push    ebp
0x4407A5: mov     ebp, [esp+10h+arg_0]
0x4407A9: fld     dword ptr [ebp+0]
0x4407AC: push    esi
0x4407AD: fstp    [esp+14h+var_8]
0x4407B1: push    edi
0x4407B2: mov     esi, ecx
0x4407B4: fld     [esp+18h+var_8]
0x4407B8: fistp   [esp+18h+arg_0]
0x4407BC: fld     dword ptr [ebp+4]
0x4407BF: mov     edi, [esp+18h+arg_0]
0x4407C3: fstp    [esp+18h+var_4]
0x4407C7: fld     [esp+18h+var_4]
0x4407CB: fistp   [esp+18h+var_8]
0x4407CF: mov     ebx, [esp+18h+var_8]
0x4407D3: mov     eax, edi
0x4407D5: and     eax, 80000FFFh
0x4407DA: jns     short loc_4407E3
0x4407DC: dec     eax
0x4407DD: or      eax, 0FFFFF000h
0x4407E2: inc     eax
0x4407E3: jnz     short loc_4407F8
0x4407E5: fld     dword ptr [ebp+0]
0x4407E8: fild    [esp+18h+arg_0]
0x4407EC: fcompp
0x4407EE: fnstsw  ax
0x4407F0: test    ah, 41h
0x4407F3: jnz     short loc_4407F8
0x4407F5: add     edi, 0FFFFFFFFh
0x4407F8: mov     ecx, ebx
0x4407FA: and     ecx, 80000FFFh
0x440800: jns     short loc_44080A
0x440802: dec     ecx
0x440803: or      ecx, 0FFFFF000h
0x440809: inc     ecx
0x44080A: jnz     short loc_44081F
0x44080C: fld     dword ptr [ebp+4]
0x44080F: fild    [esp+18h+var_8]
0x440813: fcompp
0x440815: fnstsw  ax
0x440817: test    ah, 41h
0x44081A: jnz     short loc_44081F
0x44081C: add     ebx, 0FFFFFFFFh
0x44081F: mov     ecx, [esi+30h]; this
0x440822: sar     edi, 0Ch
0x440825: sar     ebx, 0Ch
0x440828: test    ecx, ecx
0x44082A: jz      short loc_440841
0x44082C: call    TESObjectCELL_GetXCoordinate
0x440831: cmp     eax, edi
0x440833: jnz     short loc_440841
0x440835: mov     ecx, [esi+30h]; this
0x440838: call    TESObjectCELL_GetYCoordinate
0x44083D: cmp     eax, ebx
0x44083F: jz      short loc_44084D
0x440841: push    ebx; a3
0x440842: push    edi; a2
0x440843: mov     ecx, esi; this
0x440845: call    TES_GetCellFromCoords
0x44084A: mov     [esi+30h], eax
0x44084D: mov     ecx, [esi+30h]; this
0x440850: test    ecx, ecx
0x440852: jnz     short loc_440860
0x440854: pop     edi
0x440855: pop     esi
0x440856: pop     ebp
0x440857: xor     al, al
0x440859: pop     ebx
0x44085A: add     esp, 8
0x44085D: retn    8
0x440860: mov     edx, [esp+18h+arg_4]
0x440864: push    edx
0x440865: push    ebp
0x440866: call    sub_4CE3C0
0x44086B: mov     ecx, eax
0x44086D: call    sub_4C4790
0x440872: pop     edi
0x440873: pop     esi
0x440874: pop     ebp
0x440875: pop     ebx
0x440876: add     esp, 8
0x440879: retn    8
