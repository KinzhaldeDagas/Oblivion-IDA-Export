0x4406A0: sub     esp, 0Ch
0x4406A3: push    ebx
0x4406A4: push    ebp
0x4406A5: push    esi
0x4406A6: push    edi
0x4406A7: mov     edi, ecx
0x4406A9: mov     ecx, [esp+1Ch+arg_0]
0x4406AD: fld     dword ptr [ecx]
0x4406AF: fstp    [esp+1Ch+var_8]
0x4406B3: fld     [esp+1Ch+var_8]
0x4406B7: fistp   [esp+1Ch+var_C]
0x4406BB: fld     dword ptr [ecx+4]
0x4406BE: mov     ebx, [esp+1Ch+var_C]
0x4406C2: fstp    [esp+1Ch+var_4]
0x4406C6: fld     [esp+1Ch+var_4]
0x4406CA: fistp   [esp+1Ch+var_8]
0x4406CE: mov     ebp, [esp+1Ch+var_8]
0x4406D2: mov     eax, ebx
0x4406D4: and     eax, 80000FFFh
0x4406D9: jns     short loc_4406E2
0x4406DB: dec     eax
0x4406DC: or      eax, 0FFFFF000h
0x4406E1: inc     eax
0x4406E2: jnz     short loc_4406F6
0x4406E4: fld     dword ptr [ecx]
0x4406E6: fild    [esp+1Ch+var_C]
0x4406EA: fcompp
0x4406EC: fnstsw  ax
0x4406EE: test    ah, 41h
0x4406F1: jnz     short loc_4406F6
0x4406F3: add     ebx, 0FFFFFFFFh
0x4406F6: mov     edx, ebp
0x4406F8: and     edx, 80000FFFh
0x4406FE: jns     short loc_440708
0x440700: dec     edx
0x440701: or      edx, 0FFFFF000h
0x440707: inc     edx
0x440708: jnz     short loc_44071D
0x44070A: fld     dword ptr [ecx+4]
0x44070D: fild    [esp+1Ch+var_8]
0x440711: fcompp
0x440713: fnstsw  ax
0x440715: test    ah, 41h
0x440718: jnz     short loc_44071D
0x44071A: add     ebp, 0FFFFFFFFh
0x44071D: mov     eax, ds:0B3F9A8h
0x440722: fld1
0x440724: mov     esi, [esp+1Ch+arg_4]
0x440728: mov     [esi], eax
0x44072A: mov     ecx, ds:0B3F9ACh
0x440730: mov     [esi+4], ecx
0x440733: fstp    dword ptr [esi+8]
0x440736: mov     ecx, [edi+30h]; this
0x440739: sar     ebx, 0Ch
0x44073C: sar     ebp, 0Ch
0x44073F: test    ecx, ecx
0x440741: jz      short loc_440758
0x440743: call    TESObjectCELL_GetXCoordinate
0x440748: cmp     eax, ebx
0x44074A: jnz     short loc_440758
0x44074C: mov     ecx, [edi+30h]; this
0x44074F: call    TESObjectCELL_GetYCoordinate
0x440754: cmp     eax, ebp
0x440756: jz      short loc_440764
0x440758: push    ebp; a3
0x440759: push    ebx; a2
0x44075A: mov     ecx, edi; this
0x44075C: call    TES_GetCellFromCoords
0x440761: mov     [edi+30h], eax
0x440764: mov     ecx, [edi+30h]; this
0x440767: test    ecx, ecx
0x440769: jz      short loc_44078C
0x44076B: mov     eax, [esp+1Ch+arg_8]
0x44076F: mov     edx, [esp+1Ch+arg_0]
0x440773: push    eax
0x440774: push    esi
0x440775: push    edx
0x440776: call    sub_4CE3C0
0x44077B: mov     ecx, eax
0x44077D: call    sub_4C3C00
0x440782: pop     edi
0x440783: pop     esi
0x440784: pop     ebp
0x440785: pop     ebx
0x440786: add     esp, 0Ch
0x440789: retn    0Ch
0x44078C: pop     edi
0x44078D: pop     esi
0x44078E: pop     ebp
0x44078F: xor     al, al
0x440791: pop     ebx
0x440792: add     esp, 0Ch
0x440795: retn    0Ch
