0x6AB540: sub     esp, 18h
0x6AB543: push    esi
0x6AB544: push    edi
0x6AB545: mov     edi, ecx
0x6AB547: mov     ecx, [esp+20h+arg_0]
0x6AB54B: lea     eax, [esp+20h+var_18]
0x6AB54F: push    eax
0x6AB550: push    ecx
0x6AB551: mov     ecx, [edi+300h]
0x6AB557: mov     dword ptr [esp+28h+var_18], 0
0x6AB55F: call    NiTMap_GetAt
0x6AB564: mov     esi, dword ptr [esp+20h+var_18]
0x6AB568: test    esi, esi
0x6AB56A: jz      loc_6AB6E4
0x6AB570: cmp     byte ptr ds:0B16178h, 0
0x6AB577: jz      loc_6AB6E4
0x6AB57D: mov     ecx, esi
0x6AB57F: call    sub_6B7050
0x6AB584: test    al, al
0x6AB586: jnz     short loc_6AB595
0x6AB588: pop     edi
0x6AB589: mov     eax, 80004005h
0x6AB58E: pop     esi
0x6AB58F: add     esp, 18h
0x6AB592: retn    8
0x6AB595: fld     dword ptr [esi+3Ch]
0x6AB598: push    ecx
0x6AB599: mov     ecx, esi
0x6AB59B: fstp    [esp+24h+var_24]; float
0x6AB59E: call    sub_6B6F20
0x6AB5A3: cmp     byte ptr [edi+0A4h], 0
0x6AB5AA: jz      short loc_6AB5D4
0x6AB5AC: mov     eax, [esi]
0x6AB5AE: mov     edx, eax
0x6AB5B0: and     edx, 21h
0x6AB5B3: or      dl, 4
0x6AB5B6: jnz     short loc_6AB5D4
0x6AB5B8: cmp     [esp+20h+arg_4], 0
0x6AB5BD: jz      short loc_6AB5C4
0x6AB5BF: or      eax, 10h
0x6AB5C2: mov     [esi], eax
0x6AB5C4: or      dword ptr [esi], 200h
0x6AB5CA: pop     edi
0x6AB5CB: xor     eax, eax
0x6AB5CD: pop     esi
0x6AB5CE: add     esp, 18h
0x6AB5D1: retn    8
0x6AB5D4: cmp     byte ptr [edi+0A5h], 0
0x6AB5DB: jz      short loc_6AB61C
0x6AB5DD: test    byte ptr [esi], 20h
0x6AB5E0: jnz     short loc_6AB61C
0x6AB5E2: mov     ecx, esi
0x6AB5E4: call    sub_6B6B90
0x6AB5E9: fstp    [esp+20h+var_18]
0x6AB5ED: mov     ecx, offset flt_B161B8
0x6AB5F2: call    GameSetting_GetSafeFloatPointer
0x6AB5F7: fld     dword ptr [eax]
0x6AB5F9: fsubr   [esp+20h+var_18]
0x6AB5FD: push    ecx
0x6AB5FE: mov     ecx, esi
0x6AB600: fstp    [esp+24h+arg_0]
0x6AB604: fld     [esp+24h+arg_0]
0x6AB608: fstp    [esp+24h+var_24]; float
0x6AB60B: call    sub_6B6B20
0x6AB610: test    dword ptr [esi], 1000h
0x6AB616: jnz     loc_6AB6E4
0x6AB61C: test    byte ptr [esi], 2
0x6AB61F: jz      loc_6AB6BC
0x6AB625: mov     eax, [esi+20h]
0x6AB628: mov     ecx, [esi+24h]
0x6AB62B: mov     edx, [esi+28h]
0x6AB62E: mov     dword ptr [esp+20h+var_18], eax
0x6AB632: fld     dword ptr [esp+20h+var_18]
0x6AB636: fsub    dword ptr [edi+80h]
0x6AB63C: mov     dword ptr [esp+20h+var_18+4], ecx
0x6AB640: mov     [esp+20h+var_10], edx
0x6AB644: fstp    [esp+20h+var_C]
0x6AB648: fld     dword ptr [esp+20h+var_18+4]
0x6AB64C: fsub    dword ptr [edi+84h]
0x6AB652: fstp    [esp+20h+var_8]
0x6AB656: fld     [esp+20h+var_10]
0x6AB65A: fsub    dword ptr [edi+88h]
0x6AB660: fstp    [esp+20h+var_4]
0x6AB664: fld     [esp+20h+var_8]
0x6AB668: fld     [esp+20h+var_C]
0x6AB66C: fld     [esp+20h+var_4]
0x6AB670: fld     st(1)
0x6AB672: fmulp   st(2), st
0x6AB674: fld     st(2)
0x6AB676: fmulp   st(3), st
0x6AB678: fxch    st(1)
0x6AB67A: faddp   st(2), st
0x6AB67C: fmul    st, st
0x6AB67E: faddp   st(1), st
0x6AB680: fstp    [esp+20h+arg_0]
0x6AB684: fld     [esp+20h+arg_0]
0x6AB688: call    __CIsqrt
0x6AB68D: fstp    [esp+20h+arg_0]
0x6AB691: mov     eax, [esi+38h]
0x6AB694: fld     [esp+20h+arg_0]
0x6AB698: test    eax, eax
0x6AB69A: fild    dword ptr [esi+38h]
0x6AB69D: jge     short loc_6AB6A5
0x6AB69F: fadd    dword ptr ds:0A2FC78h
0x6AB6A5: fcompp
0x6AB6A7: fnstsw  ax
0x6AB6A9: test    ah, 5
0x6AB6AC: jp      short loc_6AB6B2
0x6AB6AE: mov     al, 1
0x6AB6B0: jmp     short loc_6AB6B4
0x6AB6B2: xor     al, al
0x6AB6B4: push    eax
0x6AB6B5: mov     ecx, esi
0x6AB6B7: call    sub_6B7130
0x6AB6BC: test    byte ptr [esi], 10h
0x6AB6BF: jnz     short loc_6AB6DB
0x6AB6C1: cmp     [esp+20h+arg_4], 0
0x6AB6C6: jnz     short loc_6AB6DB
0x6AB6C8: push    0
0x6AB6CA: mov     ecx, esi
0x6AB6CC: call    sub_6B6E60
0x6AB6D1: pop     edi
0x6AB6D2: xor     eax, eax
0x6AB6D4: pop     esi
0x6AB6D5: add     esp, 18h
0x6AB6D8: retn    8
0x6AB6DB: push    1
0x6AB6DD: mov     ecx, esi
0x6AB6DF: call    sub_6B6E60
0x6AB6E4: pop     edi
0x6AB6E5: xor     eax, eax
0x6AB6E7: pop     esi
0x6AB6E8: add     esp, 18h
0x6AB6EB: retn    8
