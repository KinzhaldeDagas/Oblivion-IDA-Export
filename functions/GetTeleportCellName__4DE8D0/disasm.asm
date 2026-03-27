0x4DE8D0: push    ebx
0x4DE8D1: push    esi
0x4DE8D2: mov     esi, ecx
0x4DE8D4: push    edi
0x4DE8D5: mov     edi, [esi+40h]
0x4DE8D8: test    edi, edi
0x4DE8DA: jz      short loc_4DE905
0x4DE8DC: mov     ecx, edi; this
0x4DE8DE: call    TESObjectCELL_IsInterior
0x4DE8E3: test    al, al
0x4DE8E5: jz      short loc_4DE905
0x4DE8E7: mov     edi, [edi+1Ch]
0x4DE8EA: test    edi, edi
0x4DE8EC: jnz     short loc_4DE8F3
0x4DE8EE: mov     edi, offset EmptyString
0x4DE8F3: mov     ecx, [esp+0Ch+arg_0]; this
0x4DE8F7: push    0; a3
0x4DE8F9: push    edi; a2
0x4DE8FA: call    BSStringT_Set
0x4DE8FF: pop     edi
0x4DE900: pop     esi
0x4DE901: pop     ebx
0x4DE902: retn    4
0x4DE905: mov     eax, [esi+40h]
0x4DE908: test    eax, eax
0x4DE90A: jnz     short loc_4DE91A
0x4DE90C: mov     eax, [esi+18h]
0x4DE90F: mov     edx, [eax]
0x4DE911: lea     ecx, [esi+18h]
0x4DE914: call    edx
0x4DE916: test    eax, eax
0x4DE918: jz      short loc_4DE961
0x4DE91A: mov     ecx, eax; this
0x4DE91C: call    TESObjectCELL_GetWorldSpace
0x4DE921: mov     ebx, eax
0x4DE923: test    ebx, ebx
0x4DE925: jz      short loc_4DE961
0x4DE927: mov     eax, [esi]
0x4DE929: mov     edi, [ebx]
0x4DE92B: mov     edx, [eax+174h]
0x4DE931: mov     ecx, esi
0x4DE933: add     edi, 0DCh ; 'Ü'
0x4DE939: call    edx
0x4DE93B: mov     edx, [eax]
0x4DE93D: sub     esp, 0Ch
0x4DE940: mov     ecx, esp
0x4DE942: mov     [ecx], edx
0x4DE944: mov     edx, [eax+4]
0x4DE947: mov     eax, [eax+8]
0x4DE94A: mov     [ecx+4], edx
0x4DE94D: mov     edx, [edi]
0x4DE94F: mov     [ecx+8], eax
0x4DE952: mov     ecx, [esp+18h+arg_0]
0x4DE956: push    ecx
0x4DE957: mov     ecx, ebx
0x4DE959: call    edx
0x4DE95B: pop     edi
0x4DE95C: pop     esi
0x4DE95D: pop     ebx
0x4DE95E: retn    4
0x4DE961: mov     ecx, [esp+0Ch+arg_0]; this
0x4DE965: push    0; a3
0x4DE967: push    offset EmptyString; a2
0x4DE96C: call    BSStringT_Set
0x4DE971: pop     edi
0x4DE972: pop     esi
0x4DE973: pop     ebx
0x4DE974: retn    4
