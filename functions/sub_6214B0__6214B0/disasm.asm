0x6214B0: sub     esp, 18h
0x6214B3: push    esi
0x6214B4: push    edi
0x6214B5: mov     esi, ecx
0x6214B7: mov     edi, 2
0x6214BC: cmp     [esi+6Ch], edi
0x6214BF: jnz     loc_621842
0x6214C5: fld     dword ptr [esi+44h]
0x6214C8: lea     eax, [esp+20h+var_15]
0x6214CC: push    eax; int
0x6214CD: push    ecx
0x6214CE: lea     ecx, [esi+0D4h]
0x6214D4: fstp    [esp+28h+var_28]; float
0x6214D7: mov     byte ptr [esp+28h+var_15], 1
0x6214DC: call    sub_612790
0x6214E1: test    al, al
0x6214E3: jz      short loc_621532
0x6214E5: mov     ecx, esi
0x6214E7: call    sub_6160B0
0x6214EC: push    0
0x6214EE: mov     ecx, esi
0x6214F0: call    sub_619920
0x6214F5: mov     eax, [esi+6Ch]
0x6214F8: cmp     eax, 4
0x6214FB: jz      loc_621842
0x621501: cmp     eax, 7
0x621504: jz      loc_621842
0x62150A: cmp     eax, 9
0x62150D: jz      loc_621842
0x621513: cmp     eax, 8
0x621516: jz      loc_621842
0x62151C: cmp     eax, 0Ch
0x62151F: jz      loc_621842
0x621525: pop     edi
0x621526: mov     byte ptr [esi+191h], 1
0x62152D: pop     esi
0x62152E: add     esp, 18h
0x621531: retn
0x621532: mov     ecx, [esi+3Ch]
0x621535: mov     ecx, [ecx+58h]
0x621538: mov     edx, [ecx]
0x62153A: mov     eax, [edx+2C0h]
0x621540: push    ebx
0x621541: call    eax
0x621543: mov     ecx, [esi+3Ch]
0x621546: movzx   ebx, ax
0x621549: call    sub_5E05B0
0x62154E: test    al, al
0x621550: jz      loc_621682
0x621556: cmp     byte ptr ds:0B333B8h, 0
0x62155D: jnz     short loc_6215D2
0x62155F: mov     ecx, [esi+3Ch]
0x621562: mov     edx, [ecx]
0x621564: mov     eax, [edx+174h]
0x62156A: call    eax
0x62156C: fld     dword ptr [esi+198h]
0x621572: fsub    dword ptr [eax]
0x621574: fstp    [esp+24h+var_C]
0x621578: fld     dword ptr [esi+19Ch]
0x62157E: fsub    dword ptr [eax+4]
0x621581: fstp    [esp+24h+var_8]
0x621585: fld     dword ptr [esi+1A0h]
0x62158B: fsub    dword ptr [eax+8]
0x62158E: fstp    [esp+24h+var_4]
0x621592: fld     [esp+24h+var_8]
0x621596: fld     [esp+24h+var_C]
0x62159A: fld     [esp+24h+var_4]
0x62159E: fld     dword ptr ds:0B372C8h
0x6215A4: fld     st(2)
0x6215A6: fmulp   st(3), st
0x6215A8: fld     st(3)
0x6215AA: fmulp   st(4), st
0x6215AC: fxch    st(2)
0x6215AE: faddp   st(3), st
0x6215B0: fmul    st, st
0x6215B2: faddp   st(2), st
0x6215B4: fxch    st(1)
0x6215B6: fstp    [esp+24h+var_15+1]
0x6215BA: fld     [esp+24h+var_15+1]
0x6215BE: fld     st(1)
0x6215C0: fmulp   st(2), st
0x6215C2: fcompp
0x6215C4: fnstsw  ax
0x6215C6: test    ah, 1
0x6215C9: jnz     short loc_6215D2
0x6215CB: mov     ecx, esi
0x6215CD: call    sub_614BB0
0x6215D2: mov     ecx, esi
0x6215D4: call    sub_6135F0
0x6215D9: test    eax, eax
0x6215DB: jz      short loc_621605
0x6215DD: mov     ecx, esi
0x6215DF: call    sub_6135F0
0x6215E4: mov     ecx, eax
0x6215E6: call    Actor_GetCurrentAction
0x6215EB: cmp     eax, edi
0x6215ED: jnz     short loc_621605
0x6215EF: cmp     [esi+74h], edi
0x6215F2: jnz     short loc_621605
0x6215F4: mov     ecx, esi
0x6215F6: mov     [esi+78h], edi
0x6215F9: mov     dword ptr [esi+74h], 3
0x621600: call    sub_6213D0
0x621605: test    [esi+192h], bx
0x62160C: jz      short loc_62162F
0x62160E: cmp     byte ptr ds:0B3B908h, 0
0x621615: jz      short loc_62167B
0x621617: mov     ecx, [esi+3Ch]; this
0x62161A: call    TESObjectREFR_GetName
0x62161F: push    eax
0x621620: push    offset a_20sHasRunOutO; "%.20s has run out of room to dodge."
0x621625: call    Interface_ConsolePrint
0x62162A: add     esp, 8
0x62162D: jmp     short loc_62167B
0x62162F: mov     ecx, esi
0x621631: call    sub_615980
0x621636: fstp    [esp+24h+var_15+1]
0x62163A: mov     ecx, esi
0x62163C: call    sub_615520
0x621641: fstp    [esp+24h+var_10]
0x621645: test    bl, 0Ch
0x621648: jnz     short loc_621692
0x62164A: test    bl, 1
0x62164D: jz      loc_621751
0x621653: mov     ecx, offset fCombatMinEngageDistance
0x621658: call    GameSetting_GetSafeFloatPointer
0x62165D: fld     [esp+24h+var_15+1]
0x621661: fld     dword ptr [eax]
0x621663: fcompp
0x621665: fnstsw  ax
0x621667: test    ah, 1
0x62166A: jnz     loc_621751
0x621670: cmp     byte ptr [esp+24h+var_15], 0
0x621675: jz      loc_621751
0x62167B: mov     ecx, esi
0x62167D: call    sub_6160B0
0x621682: push    0
0x621684: mov     ecx, esi
0x621686: call    sub_619920
0x62168B: pop     ebx
0x62168C: pop     edi
0x62168D: pop     esi
0x62168E: add     esp, 18h
0x621691: retn
0x621692: fld     [esp+24h+var_15+1]
0x621696: fld     [esp+24h+var_10]
0x62169A: fcom    st(1)
0x62169C: fnstsw  ax
0x62169E: test    ah, 5
0x6216A1: jp      short loc_62171B
0x6216A3: push    0; int
0x6216A5: sub     esp, 8
0x6216A8: fstp    [esp+30h+var_2C]; float
0x6216AC: mov     ecx, esi
0x6216AE: fstp    [esp+30h+var_30]; float
0x6216B1: call    sub_613440
0x6216B6: test    al, al
0x6216B8: jnz     short loc_621705
0x6216BA: cmp     byte ptr [esp+24h+var_15], al
0x6216BE: jz      loc_621751
0x6216C4: mov     ecx, [esi+70h]
0x6216C7: push    ecx
0x6216C8: call    sub_612690
0x6216CD: add     esp, 4
0x6216D0: test    al, al
0x6216D2: mov     ecx, esi
0x6216D4: jz      short loc_6216F7
0x6216D6: call    sub_614290
0x6216DB: test    al, al
0x6216DD: jnz     short loc_6216EF
0x6216DF: mov     ecx, esi
0x6216E1: call    sub_6160B0
0x6216E6: mov     ecx, esi
0x6216E8: call    sub_61FE90
0x6216ED: jmp     short loc_621751
0x6216EF: cmp     dword ptr [esi+74h], 0
0x6216F3: jz      short loc_621751
0x6216F5: mov     ecx, esi
0x6216F7: call    sub_6160B0
0x6216FC: mov     ecx, esi
0x6216FE: call    sub_61D320
0x621703: jmp     short loc_621751
0x621705: mov     edx, [esi+3Ch]
0x621708: mov     ecx, [edx+58h]
0x62170B: mov     eax, [ecx]
0x62170D: mov     edx, [eax+2C4h]
0x621713: push    1
0x621715: push    1
0x621717: call    edx
0x621719: jmp     short loc_621751
0x62171B: fstp    st(1)
0x62171D: mov     ecx, offset fCombatMinEngageDistance
0x621722: fstp    st
0x621724: call    GameSetting_GetSafeFloatPointer
0x621729: fld     [esp+24h+var_15+1]
0x62172D: fld     dword ptr [eax]
0x62172F: fcompp
0x621731: fnstsw  ax
0x621733: test    ah, 41h
0x621736: jnz     short loc_621751
0x621738: test    bl, 1
0x62173B: jz      short loc_621751
0x62173D: mov     eax, [esi+3Ch]
0x621740: mov     ecx, [eax+58h]
0x621743: mov     edx, [ecx]
0x621745: mov     eax, [edx+2C4h]
0x62174B: push    0
0x62174D: push    1
0x62174F: call    eax
0x621751: mov     ecx, esi
0x621753: call    sub_6135F0
0x621758: test    eax, eax
0x62175A: jz      short loc_6217D0
0x62175C: mov     ecx, esi
0x62175E: call    sub_6135F0
0x621763: mov     ecx, eax
0x621765: call    Actor_GetCurrentAction
0x62176A: cmp     eax, edi
0x62176C: jnz     short loc_6217D0
0x62176E: push    0; Seed
0x621770: call    GetRandomLargeInteger?
0x621775: cdq
0x621776: mov     ecx, 64h ; 'd'
0x62177B: idiv    ecx
0x62177D: add     esp, 4
0x621780: mov     [esp+24h+var_10], edx
0x621784: mov     edx, [esi+3Ch]
0x621787: fild    [esp+24h+var_10]
0x62178B: mov     ecx, [edx+58h]
0x62178E: mov     eax, [ecx]
0x621790: mov     edx, [eax+2C0h]
0x621796: fstp    [esp+24h+var_10]
0x62179A: call    edx
0x62179C: test    ax, 100h
0x6217A0: jz      short loc_6217FD
0x6217A2: cmp     byte ptr [esi+49h], 0
0x6217A6: jnz     short loc_6217FD
0x6217A8: mov     ecx, offset unk_B36D90
0x6217AD: call    GameSetting_GetSafeFloatPointer
0x6217B2: fld     [esp+24h+var_10]
0x6217B6: fld     dword ptr [eax]
0x6217B8: fcompp
0x6217BA: fnstsw  ax
0x6217BC: test    ah, 5
0x6217BF: jp      short loc_6217FD
0x6217C1: mov     eax, [esi+3Ch]
0x6217C4: mov     ecx, [eax+58h]
0x6217C7: push    1
0x6217C9: push    200h
0x6217CE: jmp     short loc_6217F3
0x6217D0: mov     ecx, [esi+3Ch]
0x6217D3: mov     ecx, [ecx+58h]
0x6217D6: mov     edx, [ecx]
0x6217D8: mov     eax, [edx+2C0h]
0x6217DE: call    eax
0x6217E0: test    ax, 200h
0x6217E4: jz      short loc_6217FD
0x6217E6: mov     ecx, [esi+3Ch]
0x6217E9: mov     ecx, [ecx+58h]
0x6217EC: push    1
0x6217EE: push    100h
0x6217F3: mov     edx, [ecx]
0x6217F5: mov     eax, [edx+2C4h]
0x6217FB: call    eax
0x6217FD: push    0; Seed
0x6217FF: call    GetRandomLargeInteger?
0x621804: mov     [esp+28h+var_10], eax
0x621808: fild    [esp+28h+var_10]
0x62180C: add     esp, 4
0x62180F: fdiv    qword ptr ds:0A3D5A8h
0x621815: fld     dword ptr ds:0B36F48h
0x62181B: fcompp
0x62181D: fnstsw  ax
0x62181F: test    ah, 1
0x621822: jnz     short loc_621841
0x621824: mov     ebx, [esi+3Ch]
0x621827: mov     edi, [ebx]
0x621829: push    0
0x62182B: push    0
0x62182D: mov     ecx, esi
0x62182F: add     edi, 308h
0x621835: call    sub_6135F0
0x62183A: mov     edx, [edi]
0x62183C: push    eax
0x62183D: mov     ecx, ebx
0x62183F: call    edx
0x621841: pop     ebx
0x621842: pop     edi
0x621843: pop     esi
0x621844: add     esp, 18h
0x621847: retn
