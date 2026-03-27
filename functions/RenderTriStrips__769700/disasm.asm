0x769700: sub     esp, 24h
0x769703: push    ebp
0x769704: mov     ebp, ecx
0x769706: cmp     byte ptr [ebp+6F0h], 0
0x76970D: jnz     loc_76994F
0x769713: push    esi
0x769714: mov     esi, [esp+2Ch+arg_0]
0x769718: mov     ecx, [esi+0B4h]
0x76971E: mov     eax, [ecx]
0x769720: mov     edx, [eax+50h]
0x769723: mov     [esp+2Ch+var_14], ecx
0x769727: call    edx
0x769729: test    ax, ax
0x76972C: jz      loc_76994E
0x769732: mov     eax, [esi+0B8h]
0x769738: mov     ecx, [esi+24h]
0x76973B: mov     edx, [esi+28h]
0x76973E: push    ebx
0x76973F: mov     ebx, [esi+20h]
0x769742: push    edi
0x769743: mov     [esp+34h+var_20], eax
0x769747: mov     eax, [esi+2Ch]
0x76974A: push    0
0x76974C: mov     [esp+38h+var_C], ecx
0x769750: push    esi
0x769751: mov     ecx, ebp
0x769753: mov     [esp+3Ch+var_8], edx
0x769757: mov     [esp+3Ch+var_4], eax
0x76975B: call    sub_768890
0x769760: mov     ecx, [esi+0B4h]
0x769766: mov     esi, [esi+0BCh]
0x76976C: mov     edi, [ecx+38h]
0x76976F: push    esi
0x769770: push    offset NiD3DShaderInterfaceString
0x769775: mov     byte ptr [esp+3Ch+arg_0], al
0x769779: call    NiRTTI_Cast
0x76977E: mov     esi, eax
0x769780: mov     edx, [esi]
0x769782: mov     eax, [edx+48h]
0x769785: add     esp, 8
0x769788: mov     ecx, esi
0x76978A: mov     [esp+34h+var_18], esi
0x76978E: call    eax
0x769790: mov     ecx, [esp+34h+var_C]
0x769794: mov     edx, [esp+34h+var_8]
0x769798: mov     eax, [esp+34h+var_4]
0x76979C: mov     [ebp+658h], ebx
0x7697A2: mov     [ebp+65Ch], ecx
0x7697A8: mov     ecx, [ebp+8ACh]
0x7697AE: mov     [ebp+660h], edx
0x7697B4: mov     [ebp+664h], eax
0x7697BA: mov     ecx, [ecx+0FF0h]
0x7697C0: mov     edx, [ecx]
0x7697C2: mov     eax, [edx+4]
0x7697C5: call    eax
0x7697C7: cmp     byte ptr [esp+34h+arg_0], 0
0x7697CC: jz      loc_7698B3
0x7697D2: mov     ecx, [esp+34h+var_20]
0x7697D6: mov     eax, [ecx+0Ch]
0x7697D9: mov     ecx, [eax+8]; void *
0x7697DC: mov     eax, [eax+0Ch]
0x7697DF: xor     edx, edx
0x7697E1: cmp     [eax+22h], dx
0x7697E5: setnz   dl
0x7697E8: add     edx, 4
0x7697EB: test    ecx, ecx
0x7697ED: mov     [esp+34h+var_1C], edx
0x7697F1: jbe     loc_769942
0x7697F7: lea     edx, [eax+20h]
0x7697FA: mov     [esp+34h+var_24], edx
0x7697FE: mov     [esp+34h+var_20], ecx
0x769802: cmp     esi, [ebp+0A94h]
0x769808: jnz     short loc_769825
0x76980A: movzx   eax, word ptr [edx]
0x76980D: cmp     eax, [ebp+6D8h]
0x769813: jbe     short loc_769825
0x769815: push    eax
0x769816: push    offset aDrawskinnedpri; "DrawSkinnedPrimitive> Cannot render par"...
0x76981B: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x769820: add     esp, 8
0x769823: jmp     short loc_769889
0x769825: mov     ebx, [edx+8]
0x769828: xor     edi, edi
0x76982A: cmp     [ebx+44h], edi
0x76982D: mov     [esp+34h+arg_0], edi
0x769831: jbe     short loc_769889
0x769833: mov     eax, [ebx+48h]
0x769836: test    eax, eax
0x769838: jz      short loc_769847
0x76983A: mov     ecx, [esp+34h+arg_0]
0x76983E: movzx   esi, word ptr [eax+ecx*2]
0x769842: sub     esi, 2
0x769845: jmp     short loc_76984A
0x769847: mov     esi, [ebx+3Ch]
0x76984A: mov     ecx, [esp+34h+var_24]
0x76984E: movzx   ecx, word ptr [ecx-4]
0x769852: mov     eax, [ebp+280h]
0x769858: mov     edx, [eax]
0x76985A: mov     edx, [edx+148h]
0x769860: push    esi
0x769861: push    edi
0x769862: push    ecx
0x769863: mov     ecx, [ebx+34h]
0x769866: push    0
0x769868: push    ecx
0x769869: mov     ecx, [esp+48h+var_1C]
0x76986D: push    ecx
0x76986E: push    eax
0x76986F: call    edx
0x769871: mov     eax, [esp+34h+arg_0]
0x769875: add     eax, 1
0x769878: cmp     eax, [ebx+44h]
0x76987B: lea     edi, [edi+esi+2]
0x76987F: mov     [esp+34h+arg_0], eax
0x769883: jb      short loc_769833
0x769885: mov     esi, [esp+34h+var_18]
0x769889: mov     edx, [esp+34h+var_24]
0x76988D: add     edx, 2Ch ; ','
0x769890: sub     [esp+34h+var_20], 1
0x769895: mov     [esp+34h+var_24], edx
0x769899: jnz     loc_769802
0x76989F: mov     eax, [esp+34h+var_14]
0x7698A3: and     word ptr [eax+2Eh], 0F000h
0x7698A9: pop     edi
0x7698AA: pop     ebx
0x7698AB: pop     esi
0x7698AC: pop     ebp
0x7698AD: add     esp, 24h
0x7698B0: retn    4
0x7698B3: cmp     dword ptr [edi+30h], 0
0x7698B7: jz      short loc_769924
0x7698B9: xor     ebx, ebx
0x7698BB: cmp     [edi+44h], ebx
0x7698BE: mov     [esp+34h+arg_0], ebx
0x7698C2: jbe     short loc_769942
0x7698C4: mov     eax, [edi+48h]
0x7698C7: test    eax, eax
0x7698C9: jz      short loc_7698D8
0x7698CB: mov     ecx, [esp+34h+arg_0]
0x7698CF: movzx   esi, word ptr [eax+ecx*2]
0x7698D3: sub     esi, 2
0x7698D6: jmp     short loc_7698DB
0x7698D8: mov     esi, [edi+3Ch]
0x7698DB: mov     ecx, [edi+14h]
0x7698DE: mov     eax, [ebp+280h]
0x7698E4: mov     edx, [eax]
0x7698E6: mov     edx, [edx+148h]
0x7698EC: push    esi
0x7698ED: push    ebx
0x7698EE: push    ecx
0x7698EF: mov     ecx, [edi+34h]
0x7698F2: push    0
0x7698F4: push    ecx
0x7698F5: mov     ecx, [edi+38h]
0x7698F8: push    ecx
0x7698F9: push    eax
0x7698FA: call    edx
0x7698FC: mov     eax, [esp+34h+arg_0]
0x769900: add     eax, 1
0x769903: cmp     eax, [edi+44h]
0x769906: lea     ebx, [ebx+esi+2]
0x76990A: mov     [esp+34h+arg_0], eax
0x76990E: jb      short loc_7698C4
0x769910: mov     eax, [esp+34h+var_14]
0x769914: and     word ptr [eax+2Eh], 0F000h
0x76991A: pop     edi
0x76991B: pop     ebx
0x76991C: pop     esi
0x76991D: pop     ebp
0x76991E: add     esp, 24h
0x769921: retn    4
0x769924: mov     ecx, [edi+3Ch]
0x769927: mov     edx, [edi+34h]
0x76992A: mov     ebp, [ebp+280h]
0x769930: mov     eax, [ebp+0]
0x769933: push    ecx
0x769934: mov     ecx, [edi+38h]
0x769937: push    edx
0x769938: mov     edx, [eax+144h]
0x76993E: push    ecx
0x76993F: push    ebp
0x769940: call    edx
0x769942: mov     eax, [esp+34h+var_14]
0x769946: and     word ptr [eax+2Eh], 0F000h
0x76994C: pop     edi
0x76994D: pop     ebx
0x76994E: pop     esi
0x76994F: pop     ebp
0x769950: add     esp, 24h
0x769953: retn    4
