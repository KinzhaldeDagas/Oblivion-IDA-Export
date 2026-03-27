0x979300: sub     esp, 38h
0x979303: push    ebx
0x979304: push    ebp
0x979305: mov     ebp, [esp+40h+arg_10]
0x979309: push    esi
0x97930A: mov     esi, [esp+44h+arg_14]
0x97930E: push    edi
0x97930F: mov     edi, ecx
0x979311: cmp     esi, [edi+88h]
0x979317: jz      short loc_97932B
0x979319: lea     eax, [ebp+64h]
0x97931C: push    eax
0x97931D: lea     ecx, [edi+4]
0x979320: call    sub_97AEC0
0x979325: mov     [edi+88h], esi
0x97932B: mov     ebx, [esp+48h+arg_8]
0x97932F: mov     cl, [ebx+10h]
0x979332: mov     byte ptr [esp+48h+arg_14], cl
0x979336: lea     edx, [esp+48h+var_38]
0x97933A: push    edx
0x97933B: lea     eax, [esp+4Ch+var_34]
0x97933F: push    eax
0x979340: mov     eax, [esp+50h+arg_14]
0x979344: lea     ecx, [esp+50h+arg_10]
0x979348: push    ecx
0x979349: mov     ecx, [edi+94h]
0x97934F: lea     edx, [esp+54h+var_C]
0x979353: push    edx
0x979354: mov     edx, [edi+90h]
0x97935A: push    eax
0x97935B: mov     eax, [edi+8Ch]
0x979361: push    ecx
0x979362: mov     ecx, [esp+60h+arg_4]
0x979366: push    edx
0x979367: mov     edx, [esp+64h+arg_0]
0x97936B: push    eax
0x97936C: push    ecx
0x97936D: push    edx
0x97936E: call    sub_96E5E0
0x979373: mov     ecx, [esp+70h+arg_C]
0x97937A: add     esp, 28h
0x97937D: test    al, al
0x97937F: mov     [ecx], al
0x979381: jz      loc_97948F
0x979387: push    44h ; 'D'; Size
0x979389: call    FormHeapAlloc
0x97938E: add     esp, 4
0x979391: test    eax, eax
0x979393: jz      short loc_9793A1
0x979395: push    ebp
0x979396: mov     ecx, eax
0x979398: call    sub_95A2D0
0x97939D: mov     esi, eax
0x97939F: jmp     short loc_9793A3
0x9793A1: xor     esi, esi
0x9793A3: mov     edx, [esp+48h+var_C]
0x9793A7: mov     [esi+8], edx
0x9793AA: mov     eax, [esp+48h+var_8]
0x9793AE: mov     [esi+0Ch], eax
0x9793B1: mov     ecx, [esp+48h+var_4]
0x9793B5: mov     [esi+10h], ecx
0x9793B8: fld     [esp+48h+arg_10]
0x9793BC: fstp    dword ptr [esi+14h]
0x9793BF: cmp     byte ptr [ebx+2Dh], 0
0x9793C3: jz      loc_97947B
0x9793C9: mov     eax, [edi+8Ch]
0x9793CF: mov     ecx, [edi+90h]
0x9793D5: fld     dword ptr [ecx]
0x9793D7: mov     edi, [edi+94h]
0x9793DD: fsub    dword ptr [eax]
0x9793DF: fstp    [esp+48h+var_18]
0x9793E3: fld     dword ptr [ecx+4]
0x9793E6: fsub    dword ptr [eax+4]
0x9793E9: fstp    [esp+48h+var_14]
0x9793ED: fld     dword ptr [ecx+8]
0x9793F0: lea     ecx, [esp+48h+var_30]
0x9793F4: fsub    dword ptr [eax+8]
0x9793F7: fstp    [esp+48h+var_10]
0x9793FB: fld     dword ptr [edi]
0x9793FD: fsub    dword ptr [eax]
0x9793FF: fstp    [esp+48h+var_24]
0x979403: fld     dword ptr [edi+4]
0x979406: fsub    dword ptr [eax+4]
0x979409: fstp    [esp+48h+var_20]
0x97940D: fld     dword ptr [edi+8]
0x979410: fsub    dword ptr [eax+8]
0x979413: fstp    [esp+48h+var_1C]
0x979417: fld     [esp+48h+var_1C]
0x97941B: fld     st
0x97941D: fld     [esp+48h+var_14]
0x979421: fld     st
0x979423: fmulp   st(2), st
0x979425: fld     [esp+48h+var_20]
0x979429: fld     st
0x97942B: fld     [esp+48h+var_10]
0x97942F: fld     st
0x979431: fmulp   st(2), st
0x979433: fxch    st(4)
0x979435: fsubrp  st(1), st
0x979437: fstp    [esp+48h+var_30]
0x97943B: fld     [esp+48h+var_24]
0x97943F: fld     st
0x979441: fmulp   st(4), st
0x979443: fld     [esp+48h+var_18]
0x979447: fld     st
0x979449: fmulp   st(6), st
0x97944B: fxch    st(4)
0x97944D: fsubrp  st(5), st
0x97944F: fxch    st(4)
0x979451: fstp    [esp+48h+var_2C]
0x979455: fmulp   st(2), st
0x979457: fmulp   st(2), st
0x979459: fsubrp  st(1), st
0x97945B: fstp    [esp+48h+var_28]
0x97945F: call    sub_43F350
0x979464: mov     edx, [esp+48h+var_30]
0x979468: fstp    st
0x97946A: mov     eax, [esp+48h+var_2C]
0x97946E: mov     ecx, [esp+48h+var_28]
0x979472: mov     [esi+28h], edx
0x979475: mov     [esi+2Ch], eax
0x979478: mov     [esi+30h], ecx
0x97947B: lea     edx, [esp+48h+arg_14]
0x97947F: push    edx
0x979480: lea     ecx, [ebx+18h]
0x979483: mov     [esp+4Ch+arg_14], esi
0x979487: mov     [ebx+28h], esi
0x97948A: call    sub_4BACA0
0x97948F: pop     edi
0x979490: pop     esi
0x979491: pop     ebp
0x979492: xor     eax, eax
0x979494: pop     ebx
0x979495: add     esp, 38h
0x979498: retn    18h
