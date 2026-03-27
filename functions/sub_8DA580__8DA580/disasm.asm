0x8DA580: sub     esp, 424h
0x8DA586: mov     eax, ds:0B30AACh
0x8DA58B: push    ebx
0x8DA58C: push    ebp
0x8DA58D: mov     ebp, [esp+42Ch+arg_0]
0x8DA594: mov     edx, ecx
0x8DA596: push    esi
0x8DA597: mov     esi, [esp+430h+arg_1C]
0x8DA59E: mov     [esp+430h+var_4], eax
0x8DA5A5: mov     byte ptr [edx+1BF4h], 1
0x8DA5AC: mov     eax, [edx+1C08h]
0x8DA5B2: push    edi
0x8DA5B3: xor     edi, edi
0x8DA5B5: test    eax, eax
0x8DA5B7: mov     [esp+434h+var_414], edx
0x8DA5BB: jle     loc_8DA654
0x8DA5C1: mov     eax, [edx+1C04h]
0x8DA5C7: mov     ecx, [eax+edi*8+4]
0x8DA5CB: mov     ebx, [esp+434h+arg_8]
0x8DA5D2: cmp     ecx, ebx
0x8DA5D4: lea     eax, [eax+edi*8]
0x8DA5D7: jz      short loc_8DA5E6
0x8DA5D9: cmp     ecx, [esp+434h+arg_C]
0x8DA5E0: jnz     short loc_8DA643
0x8DA5E2: cmp     ecx, ebx
0x8DA5E4: jnz     short loc_8DA60F
0x8DA5E6: mov     eax, [eax]
0x8DA5E8: lea     ecx, [esi+1]
0x8DA5EB: push    ecx
0x8DA5EC: mov     ecx, [esp+438h+arg_18]
0x8DA5F3: push    ecx
0x8DA5F4: mov     ecx, [esp+43Ch+arg_14]
0x8DA5FB: push    ecx
0x8DA5FC: mov     ecx, [esp+440h+arg_10]
0x8DA603: push    ecx
0x8DA604: mov     ecx, [esp+444h+arg_C]
0x8DA60B: push    ecx
0x8DA60C: push    eax
0x8DA60D: jmp     short loc_8DA62F
0x8DA60F: mov     eax, [eax]
0x8DA611: lea     ecx, [esi+1]
0x8DA614: push    ecx
0x8DA615: mov     ecx, [esp+438h+arg_18]
0x8DA61C: push    ecx
0x8DA61D: mov     ecx, [esp+43Ch+arg_14]
0x8DA624: push    ecx
0x8DA625: mov     ecx, [esp+440h+arg_10]
0x8DA62C: push    ecx
0x8DA62D: push    eax
0x8DA62E: push    ebx
0x8DA62F: mov     ecx, [esp+44Ch+arg_4]
0x8DA636: push    ecx
0x8DA637: mov     ecx, edx
0x8DA639: push    ebp
0x8DA63A: call    sub_8DA580
0x8DA63F: mov     edx, [esp+434h+var_414]
0x8DA643: mov     eax, [edx+1C08h]
0x8DA649: inc     edi
0x8DA64A: cmp     edi, eax
0x8DA64C: jl      loc_8DA5C1
0x8DA652: jmp     short loc_8DA65B
0x8DA654: mov     ebx, [esp+434h+arg_8]
0x8DA65B: cmp     ebx, 0FFFFFFFFh
0x8DA65E: mov     eax, [esp+434h+arg_C]
0x8DA665: lea     edx, [eax+1]
0x8DA668: mov     [esp+434h+var_418], edx
0x8DA66C: mov     edx, esi
0x8DA66E: mov     edi, ebx
0x8DA670: mov     [esp+434h+var_410], eax
0x8DA674: lea     ecx, [ebx+1]
0x8DA677: mov     [esp+434h+var_424], edx
0x8DA67B: jnz     short loc_8DA68E
0x8DA67D: inc     esi
0x8DA67E: mov     edi, 1
0x8DA683: mov     ecx, 20h ; ' '
0x8DA688: mov     [esp+434h+var_424], esi
0x8DA68C: mov     edx, esi
0x8DA68E: cmp     eax, 0FFFFFFFFh
0x8DA691: jnz     short loc_8DA6A8
0x8DA693: inc     edx
0x8DA694: mov     [esp+434h+var_410], 1
0x8DA69C: mov     [esp+434h+var_418], 20h ; ' '
0x8DA6A4: mov     [esp+434h+var_424], edx
0x8DA6A8: cmp     edi, ecx
0x8DA6AA: jge     loc_8DA7DB
0x8DA6B0: mov     eax, edi
0x8DA6B2: shl     eax, 5
0x8DA6B5: lea     esi, [eax+ebp]
0x8DA6B8: mov     ebp, [esp+434h+arg_18]
0x8DA6BF: mov     [esp+434h+var_41C], esi
0x8DA6C3: mov     esi, [esp+434h+var_410]
0x8DA6C7: add     eax, esi
0x8DA6C9: lea     ebp, [ebp+eax*2+0]
0x8DA6CD: lea     eax, [eax+ebp+1]
0x8DA6D1: sub     ecx, edi
0x8DA6D3: mov     [esp+434h+var_420], eax
0x8DA6D7: mov     [esp+434h+var_408], ecx
0x8DA6DB: jmp     short loc_8DA6E0
0x8DA6DD: align 10h
0x8DA6E0: cmp     esi, [esp+434h+var_418]
0x8DA6E4: mov     eax, esi
0x8DA6E6: mov     [esp+434h+var_40C], eax
0x8DA6EA: jge     loc_8DA7B6
0x8DA6F0: mov     esi, [esp+434h+var_420]
0x8DA6F4: jmp     short loc_8DA700
0x8DA6F6: align 10h
0x8DA700: mov     cl, byte ptr [esp+434h+arg_4]
0x8DA707: mov     edi, [esp+434h+var_41C]
0x8DA70B: mov     [edi+eax], cl
0x8DA70E: mov     ecx, [esp+434h+arg_18]
0x8DA715: test    ecx, ecx
0x8DA717: jz      loc_8DA79E
0x8DA71D: mov     ecx, [esp+434h+var_414]
0x8DA721: cmp     byte ptr [ecx+1C00h], 0
0x8DA728: jz      short loc_8DA788
0x8DA72A: movsx   ecx, byte ptr [esi+1]
0x8DA72E: cmp     edx, ecx
0x8DA730: jle     short loc_8DA788
0x8DA732: movsx   edx, byte ptr [esi-1]
0x8DA736: push    edx
0x8DA737: call    sub_90BA40
0x8DA73C: mov     edi, eax
0x8DA73E: movsx   eax, byte ptr [esi]
0x8DA741: push    eax
0x8DA742: call    sub_90BA40
0x8DA747: push    ebx
0x8DA748: mov     ebp, eax
0x8DA74A: call    sub_90BA40
0x8DA74F: mov     ecx, [esp+440h+arg_C]
0x8DA756: push    ecx
0x8DA757: mov     ebx, eax
0x8DA759: call    sub_90BA40
0x8DA75E: push    ebp
0x8DA75F: push    edi
0x8DA760: push    eax
0x8DA761: push    ebx; Args
0x8DA762: push    offset aAgentHandlingT; "Agent handling types <%s-%s> would over"...
0x8DA767: lea     edx, [esp+458h+Dest]
0x8DA76B: push    3E8h; Count
0x8DA770: push    edx; Dest
0x8DA771: call    sub_8B1730
0x8DA776: mov     ebx, [esp+460h+arg_8]
0x8DA77D: mov     edx, [esp+460h+var_424]
0x8DA781: mov     eax, [esp+460h+var_40C]
0x8DA785: add     esp, 2Ch
0x8DA788: mov     cl, byte ptr [esp+434h+arg_10]
0x8DA78F: mov     [esi-1], cl
0x8DA792: mov     cl, byte ptr [esp+434h+arg_14]
0x8DA799: mov     [esi+1], dl
0x8DA79C: mov     [esi], cl
0x8DA79E: mov     ecx, [esp+434h+var_418]
0x8DA7A2: inc     eax
0x8DA7A3: add     esi, 3
0x8DA7A6: cmp     eax, ecx
0x8DA7A8: mov     [esp+434h+var_40C], eax
0x8DA7AC: jl      loc_8DA700
0x8DA7B2: mov     esi, [esp+434h+var_410]
0x8DA7B6: mov     edi, [esp+434h+var_420]
0x8DA7BA: mov     ecx, [esp+434h+var_41C]
0x8DA7BE: mov     eax, [esp+434h+var_408]
0x8DA7C2: add     edi, 60h ; '`'
0x8DA7C5: add     ecx, 20h ; ' '
0x8DA7C8: dec     eax
0x8DA7C9: mov     [esp+434h+var_420], edi
0x8DA7CD: mov     [esp+434h+var_41C], ecx
0x8DA7D1: mov     [esp+434h+var_408], eax
0x8DA7D5: jnz     loc_8DA6E0
0x8DA7DB: mov     ecx, [esp+434h+var_4]
0x8DA7E2: pop     edi
0x8DA7E3: pop     esi
0x8DA7E4: pop     ebp
0x8DA7E5: pop     ebx
0x8DA7E6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8DA7EB: add     esp, 424h
0x8DA7F1: retn    20h ; ' '
