0x9577F0: sub     esp, 1Ch
0x9577F3: push    ebx
0x9577F4: mov     ebx, [esp+20h+arg_0]
0x9577F8: mov     eax, [ebx+4]
0x9577FB: push    ebp
0x9577FC: push    esi
0x9577FD: mov     esi, [esp+28h+arg_4]
0x957801: mov     edx, eax
0x957803: push    edi
0x957804: mov     edi, [ebx+8]
0x957807: add     eax, edi
0x957809: mov     ebp, ecx
0x95780B: mov     ecx, [ebx]
0x95780D: shl     edx, 4
0x957810: shl     eax, 4
0x957813: add     eax, ecx
0x957815: add     edx, ecx
0x957817: cmp     ecx, edx
0x957819: mov     [esp+2Ch+var_18], edi
0x95781D: mov     [esp+2Ch+var_8], 0
0x957825: mov     [esp+2Ch+var_10], ecx
0x957829: mov     [esp+2Ch+arg_0], edx
0x95782D: mov     [esp+2Ch+var_14], eax
0x957831: mov     [esp+2Ch+var_1C], eax
0x957835: mov     [esp+2Ch+var_4], eax
0x957839: mov     [esp+2Ch+var_C], ecx
0x95783D: jnb     short loc_9578B3
0x95783F: mov     edi, [esp+2Ch+arg_8]
0x957843: fld     dword ptr [ecx+8]
0x957846: xor     edx, edx
0x957848: fcomp   dword ptr [esi+0BCh]
0x95784E: fld     dword ptr [ecx+0Ch]
0x957851: fnstsw  ax
0x957853: fcomp   dword ptr [esi+0C0h]
0x957859: test    ah, 5
0x95785C: fnstsw  ax
0x95785E: jp      short loc_957873
0x957860: test    ah, 41h
0x957863: jp      short loc_95786C
0x957865: mov     edx, 1
0x95786A: jmp     short loc_95787D
0x95786C: mov     edx, 3
0x957871: jmp     short loc_95787D
0x957873: test    ah, 41h
0x957876: jnz     short loc_95787D
0x957878: mov     edx, 2
0x95787D: lea     eax, [esp+2Ch+var_1C]
0x957881: push    eax
0x957882: lea     ecx, [esp+30h+var_14]
0x957886: push    ecx
0x957887: lea     eax, [esp+34h+arg_0]
0x95788B: push    eax
0x95788C: lea     ecx, [esp+38h+var_C]
0x957890: push    ecx
0x957891: lea     eax, [esp+3Ch+var_8]
0x957895: push    eax
0x957896: lea     ecx, [esp+40h+var_18]
0x95789A: push    ecx
0x95789B: push    edi
0x95789C: push    esi
0x95789D: push    edx
0x95789E: mov     ecx, ebp
0x9578A0: call    sub_9571B0
0x9578A5: mov     ecx, [esp+2Ch+var_C]
0x9578A9: cmp     ecx, [esp+2Ch+arg_0]
0x9578AD: jb      short loc_957843
0x9578AF: mov     edi, [esp+2Ch+var_18]
0x9578B3: mov     edx, [esp+2Ch+var_1C]
0x9578B7: push    esi
0x9578B8: lea     eax, [esp+30h+var_4]
0x9578BC: push    eax
0x9578BD: mov     [esp+34h+arg_4], edx
0x9578C1: lea     ecx, [esp+34h+var_1C]
0x9578C5: push    ecx
0x9578C6: lea     edx, [esp+38h+arg_4]
0x9578CA: push    edx
0x9578CB: lea     eax, [esp+3Ch+var_14]
0x9578CF: push    eax
0x9578D0: lea     ecx, [esp+40h+arg_0]
0x9578D4: push    ecx
0x9578D5: lea     edx, [esp+44h+var_10]
0x9578D9: push    edx
0x9578DA: mov     ecx, ebp
0x9578DC: call    sub_9575F0
0x9578E1: mov     ebp, [esp+2Ch+arg_0]
0x9578E5: mov     ecx, [esp+2Ch+var_10]
0x9578E9: mov     esi, [esp+2Ch+arg_C]
0x9578ED: mov     eax, ebp
0x9578EF: sub     eax, ecx
0x9578F1: sar     eax, 4
0x9578F4: mov     [esp+2Ch+arg_0], eax
0x9578F8: fild    [esp+2Ch+arg_0]
0x9578FC: mov     [esi+4], eax
0x9578FF: push    ecx
0x957900: fimul   [esp+30h+var_18]
0x957904: fidiv   dword ptr [ebx+4]
0x957907: fstp    [esp+30h+var_30]
0x95790A: call    sub_8ECB30
0x95790F: mov     ebx, [esp+30h+arg_4]
0x957913: mov     ecx, [esp+30h+var_14]
0x957917: mov     [esi+8], eax
0x95791A: mov     eax, [esp+30h+arg_10]
0x95791E: mov     edx, ebx
0x957920: sub     edx, ecx
0x957922: sar     edx, 4
0x957925: mov     [eax+4], edx
0x957928: sub     edi, [esi+8]
0x95792B: mov     edx, [esp+30h+var_10]
0x95792F: mov     [eax+8], edi
0x957932: mov     [esi], edx
0x957934: mov     edx, [esi+8]
0x957937: mov     esi, [eax+8]
0x95793A: shl     edx, 4
0x95793D: add     edx, ebp
0x95793F: add     esp, 4
0x957942: test    esi, esi
0x957944: mov     [eax], edx
0x957946: jz      short loc_957974
0x957948: cmp     ecx, ebx
0x95794A: jnb     short loc_957974
0x95794C: lea     esp, [esp+0]
0x957950: mov     eax, ecx
0x957952: mov     edi, [eax]
0x957954: mov     esi, edx
0x957956: mov     [esi], edi
0x957958: mov     edi, [eax+4]
0x95795B: mov     [esi+4], edi
0x95795E: mov     edi, [eax+8]
0x957961: mov     [esi+8], edi
0x957964: mov     eax, [eax+0Ch]
0x957967: add     ecx, 10h
0x95796A: add     edx, 10h
0x95796D: cmp     ecx, ebx
0x95796F: mov     [esi+0Ch], eax
0x957972: jb      short loc_957950
0x957974: pop     edi
0x957975: pop     esi
0x957976: pop     ebp
0x957977: pop     ebx
0x957978: add     esp, 1Ch
0x95797B: retn    14h
