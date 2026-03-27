0x440880: sub     esp, 8
0x440883: push    ebx
0x440884: push    ebp
0x440885: mov     ebp, [esp+10h+arg_0]
0x440889: fld     dword ptr [ebp+0]
0x44088C: push    esi
0x44088D: fstp    [esp+14h+var_8]
0x440891: push    edi
0x440892: mov     esi, ecx
0x440894: fld     [esp+18h+var_8]
0x440898: fistp   [esp+18h+arg_0]
0x44089C: fld     dword ptr [ebp+4]
0x44089F: mov     edi, [esp+18h+arg_0]
0x4408A3: fstp    [esp+18h+var_4]
0x4408A7: fld     [esp+18h+var_4]
0x4408AB: fistp   [esp+18h+var_8]
0x4408AF: mov     ebx, [esp+18h+var_8]
0x4408B3: mov     eax, edi
0x4408B5: and     eax, 80000FFFh
0x4408BA: jns     short loc_4408C3
0x4408BC: dec     eax
0x4408BD: or      eax, 0FFFFF000h
0x4408C2: inc     eax
0x4408C3: jnz     short loc_4408D8
0x4408C5: fld     dword ptr [ebp+0]
0x4408C8: fild    [esp+18h+arg_0]
0x4408CC: fcompp
0x4408CE: fnstsw  ax
0x4408D0: test    ah, 41h
0x4408D3: jnz     short loc_4408D8
0x4408D5: add     edi, 0FFFFFFFFh
0x4408D8: mov     ecx, ebx
0x4408DA: and     ecx, 80000FFFh
0x4408E0: jns     short loc_4408EA
0x4408E2: dec     ecx
0x4408E3: or      ecx, 0FFFFF000h
0x4408E9: inc     ecx
0x4408EA: jnz     short loc_4408FF
0x4408EC: fld     dword ptr [ebp+4]
0x4408EF: fild    [esp+18h+var_8]
0x4408F3: fcompp
0x4408F5: fnstsw  ax
0x4408F7: test    ah, 41h
0x4408FA: jnz     short loc_4408FF
0x4408FC: add     ebx, 0FFFFFFFFh
0x4408FF: mov     ecx, [esi+30h]; this
0x440902: sar     edi, 0Ch
0x440905: sar     ebx, 0Ch
0x440908: test    ecx, ecx
0x44090A: jz      short loc_440921
0x44090C: call    TESObjectCELL_GetXCoordinate
0x440911: cmp     eax, edi
0x440913: jnz     short loc_440921
0x440915: mov     ecx, [esi+30h]; this
0x440918: call    TESObjectCELL_GetYCoordinate
0x44091D: cmp     eax, ebx
0x44091F: jz      short loc_44092D
0x440921: push    ebx; a3
0x440922: push    edi; a2
0x440923: mov     ecx, esi; this
0x440925: call    TES_GetCellFromCoords
0x44092A: mov     [esi+30h], eax
0x44092D: mov     ecx, [esi+30h]; this
0x440930: test    ecx, ecx
0x440932: jz      short loc_440962
0x440934: call    TESObjectCELL_IsInterior
0x440939: test    al, al
0x44093B: jnz     short loc_440962
0x44093D: mov     ecx, [esi+30h]; this
0x440940: mov     al, [ecx+26h]
0x440943: cmp     al, 3
0x440945: jz      short loc_44094B
0x440947: cmp     al, 6
0x440949: jnz     short loc_440962
0x44094B: push    ebp
0x44094C: call    sub_4CE3C0
0x440951: mov     ecx, eax
0x440953: call    sub_4C5AF0
0x440958: pop     edi
0x440959: pop     esi
0x44095A: pop     ebp
0x44095B: pop     ebx
0x44095C: add     esp, 8
0x44095F: retn    4
0x440962: pop     edi
0x440963: pop     esi
0x440964: pop     ebp
0x440965: xor     eax, eax
0x440967: pop     ebx
0x440968: add     esp, 8
0x44096B: retn    4
