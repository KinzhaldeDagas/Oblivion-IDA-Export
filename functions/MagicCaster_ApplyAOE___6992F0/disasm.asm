0x6992F0: sub     esp, 8
0x6992F3: cmp     [esp+8+arg_8], 0
0x6992F8: push    ebx
0x6992F9: push    ebp
0x6992FA: push    esi
0x6992FB: mov     esi, ecx
0x6992FD: push    edi
0x6992FE: mov     [esp+18h+var_4], esi
0x699302: jz      loc_6994F1
0x699308: mov     eax, [esp+18h+arg_4]
0x69930C: mov     ecx, [eax+0Ch]
0x69930F: call    EffectItem_GetArea
0x699314: test    eax, eax
0x699316: mov     [esp+18h+var_8], eax
0x69931A: jle     loc_6994F1
0x699320: fld     dword ptr ds:0B37DB8h
0x699326: fmul    [esp+18h+arg_28]
0x69932A: fimul   [esp+18h+var_8]
0x69932E: call    Double_To_SInt32
0x699333: mov     edx, [esi]
0x699335: mov     [esp+18h+var_8], eax
0x699339: mov     eax, [edx+20h]
0x69933C: mov     ecx, esi
0x69933E: call    eax
0x699340: test    eax, eax
0x699342: jz      short loc_69935D
0x699344: mov     edx, [eax]
0x699346: mov     ecx, eax
0x699348: mov     eax, [edx+190h]
0x69934E: call    eax
0x699350: test    al, al
0x699352: jz      short loc_69935D
0x699354: add     esi, 0FFFFFFA4h
0x699357: mov     [esp+18h+arg_28], esi
0x69935B: jmp     short loc_699365
0x69935D: mov     [esp+18h+arg_28], 0
0x699365: mov     ecx, [esp+18h+arg_24]
0x699369: mov     eax, [esp+18h+arg_20]
0x69936D: test    eax, eax
0x69936F: mov     dl, [ecx]
0x699371: mov     byte ptr [esp+18h+arg_8], dl
0x699375: mov     [esp+18h+arg_20], eax
0x699379: jz      loc_6994F1
0x69937F: nop
0x699380: mov     eax, [esp+18h+arg_20]
0x699384: mov     edi, [eax]
0x699386: test    edi, edi
0x699388: jz      loc_6994F1
0x69938E: mov     edx, [edi]
0x699390: mov     eax, [edx+124h]
0x699396: mov     ecx, edi
0x699398: call    eax
0x69939A: mov     esi, eax
0x69939C: xor     bl, bl
0x69939E: test    esi, esi
0x6993A0: jz      short loc_6993AD
0x6993A2: mov     ecx, esi; this
0x6993A4: call    MagicTarget_GetParentActor
0x6993A9: mov     ebp, eax
0x6993AB: jmp     short loc_6993AF
0x6993AD: xor     ebp, ebp
0x6993AF: mov     eax, [esp+18h+arg_28]
0x6993B3: test    eax, eax
0x6993B5: jz      short loc_6993BC
0x6993B7: cmp     ebp, eax
0x6993B9: setz    bl
0x6993BC: test    esi, esi
0x6993BE: jz      loc_6994DE
0x6993C4: test    bl, bl
0x6993C6: jnz     loc_6994DE
0x6993CC: cmp     esi, [esp+18h+arg_18]
0x6993D0: jz      loc_6994DE
0x6993D6: mov     edx, [edi]
0x6993D8: mov     eax, [edx+154h]
0x6993DE: mov     ecx, edi
0x6993E0: call    eax
0x6993E2: test    eax, eax
0x6993E4: jz      loc_6994DE
0x6993EA: lea     ecx, [esp+18h+arg_C]
0x6993EE: push    ecx
0x6993EF: mov     ecx, edi
0x6993F1: call    sub_4D7E30
0x6993F6: fild    [esp+18h+var_8]
0x6993FA: fcompp
0x6993FC: fnstsw  ax
0x6993FE: test    ah, 1
0x699401: jnz     loc_6994DE
0x699407: test    ebp, ebp
0x699409: jz      short loc_69941A
0x69940B: mov     ecx, ebp; this
0x69940D: call    Actor_IsGhost
0x699412: test    al, al
0x699414: jnz     loc_6994DE
0x69941A: mov     edi, [esp+18h+arg_1C]
0x69941E: test    edi, edi
0x699420: mov     ebx, [esp+18h+arg_4]
0x699424: jz      short loc_69943C
0x699426: mov     edx, [edi]
0x699428: mov     eax, [edx+21Ch]
0x69942E: push    ebx
0x69942F: push    esi
0x699430: mov     ecx, edi
0x699432: call    eax
0x699434: test    al, al
0x699436: jz      loc_6994DE
0x69943C: mov     ebp, [esp+18h+arg_0]
0x699440: mov     ecx, [esp+18h+arg_C]
0x699444: mov     edx, [esp+18h+arg_10]
0x699448: push    1
0x69944A: push    ebx
0x69944B: push    ebp
0x69944C: sub     esp, 0Ch
0x69944F: mov     eax, esp
0x699451: mov     [eax], ecx
0x699453: mov     ecx, [esp+30h+arg_14]
0x699457: mov     [eax+4], edx
0x69945A: mov     [eax+8], ecx
0x69945D: mov     ecx, [esp+30h+var_4]
0x699461: push    esi
0x699462: call    sub_6990B0
0x699467: test    al, al
0x699469: jz      short loc_6994DE
0x69946B: test    edi, edi
0x69946D: jz      short loc_69947D
0x69946F: mov     edx, [edi]
0x699471: mov     eax, [edx+20Ch]
0x699477: push    ebx
0x699478: push    esi
0x699479: mov     ecx, edi
0x69947B: call    eax
0x69947D: cmp     [esp+18h+arg_18], 0
0x699482: jnz     short loc_6994DE
0x699484: cmp     byte ptr [esp+18h+arg_8], 0
0x699489: jnz     short loc_6994DE
0x69948B: cmp     [esp+18h+arg_28], 0
0x699490: jz      short loc_6994DE
0x699492: mov     edx, [ebp+0]
0x699495: mov     eax, [edx+18h]
0x699498: mov     ecx, ebp
0x69949A: call    eax
0x69949C: test    eax, eax
0x69949E: jz      short loc_6994AF
0x6994A0: mov     edx, [ebp+0]
0x6994A3: mov     eax, [edx+18h]
0x6994A6: mov     ecx, ebp
0x6994A8: call    eax
0x6994AA: cmp     eax, 5
0x6994AD: jnz     short loc_6994DE
0x6994AF: mov     ecx, [esp+18h+arg_24]
0x6994B3: fldz
0x6994B5: mov     edi, [esp+18h+arg_28]
0x6994B9: push    ecx
0x6994BA: mov     byte ptr [ecx], 1
0x6994BD: fstp    [esp+1Ch+var_1C]
0x6994C0: mov     esi, [edi]
0x6994C2: push    1
0x6994C4: lea     ecx, [ebp+0Ch]
0x6994C7: mov     byte ptr [esp+20h+arg_8], 1
0x6994CC: add     esi, 39Ch
0x6994D2: call    EffectItemList_GetSchoolAV
0x6994D7: mov     edx, [esi]
0x6994D9: push    eax
0x6994DA: mov     ecx, edi
0x6994DC: call    edx
0x6994DE: mov     eax, [esp+18h+arg_20]
0x6994E2: mov     eax, [eax+4]
0x6994E5: test    eax, eax
0x6994E7: mov     [esp+18h+arg_20], eax
0x6994EB: jnz     loc_699380
0x6994F1: pop     edi
0x6994F2: pop     esi
0x6994F3: pop     ebp
0x6994F4: pop     ebx
0x6994F5: add     esp, 8
0x6994F8: retn    2Ch ; ','
