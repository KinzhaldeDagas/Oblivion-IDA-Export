0x767520: mov     eax, [esp+arg_8]
0x767524: sub     esp, 1Ch
0x767527: test    eax, eax
0x767529: push    esi
0x76752A: mov     esi, ecx
0x76752C: jz      loc_767807
0x767532: mov     eax, [eax+0Ch]
0x767535: push    ebx
0x767536: mov     [esp+24h+var_C], eax
0x76753A: push    edi
0x76753B: mov     edi, [eax+0Ch]
0x76753E: xor     eax, eax
0x767540: cmp     [edi+22h], ax
0x767544: mov     [esp+28h+var_8], edi
0x767548: setnz   al
0x76754B: add     eax, 4
0x76754E: mov     [esp+28h+var_4], eax
0x767552: mov     eax, [esp+28h+arg_0]
0x767556: test    eax, eax
0x767558: jz      short loc_767574
0x76755A: mov     eax, [eax+0BCh]
0x767560: push    eax
0x767561: push    offset NiD3DShaderInterfaceString
0x767566: call    NiRTTI_Cast
0x76756B: mov     ebx, eax
0x76756D: add     esp, 8
0x767570: test    ebx, ebx
0x767572: jnz     short loc_76757A
0x767574: mov     ebx, [esi+0A94h]
0x76757A: mov     eax, [esp+28h+arg_C]
0x76757E: mov     ecx, [esi+10h]
0x767581: mov     edi, [edi+28h]
0x767584: mov     edx, [ebx]
0x767586: mov     edx, [edx+28h]
0x767589: push    ebp
0x76758A: mov     ebp, [esp+2Ch+arg_10]
0x76758E: push    ebp
0x76758F: push    eax
0x767590: mov     eax, [esi+0Ch]
0x767593: push    ecx
0x767594: mov     ecx, [esp+38h+arg_8]
0x767598: push    eax
0x767599: mov     eax, [esp+3Ch+arg_0]
0x76759D: push    edi
0x76759E: push    ecx
0x76759F: push    eax
0x7675A0: mov     ecx, ebx
0x7675A2: call    edx
0x7675A4: test    eax, eax
0x7675A6: jnz     loc_767804
0x7675AC: mov     ecx, [esp+2Ch+arg_C]
0x7675B0: mov     edx, [esi+10h]
0x7675B3: mov     eax, [ebx]
0x7675B5: push    ebp
0x7675B6: push    ecx
0x7675B7: mov     ecx, [esi+0Ch]
0x7675BA: push    edx
0x7675BB: mov     edx, [esp+38h+arg_8]
0x7675BF: push    ecx
0x7675C0: mov     ecx, [esp+3Ch+arg_0]
0x7675C4: push    edi
0x7675C5: push    edx
0x7675C6: mov     edx, [eax+2Ch]
0x7675C9: push    ecx
0x7675CA: mov     ecx, ebx
0x7675CC: call    edx
0x7675CE: mov     eax, [esp+20h]
0x7675D2: mov     ecx, [eax+8]
0x7675D5: mov     edx, [ebx]
0x7675D7: mov     eax, [edx+48h]
0x7675DA: mov     [esp+20h], ecx
0x7675DE: mov     ecx, ebx
0x7675E0: call    eax
0x7675E2: test    eax, eax
0x7675E4: jz      loc_7677CE
0x7675EA: lea     ebx, [ebx+0]
0x7675F0: mov     eax, [esp+20h+arg_18]
0x7675F4: mov     ecx, [esi+10h]
0x7675F7: mov     edx, [ebx]
0x7675F9: mov     edx, [edx+30h]
0x7675FC: push    ebp
0x7675FD: push    eax
0x7675FE: mov     eax, [esi+0Ch]
0x767601: push    ecx
0x767602: mov     ecx, [esp+2Ch+arg_14]
0x767606: push    eax
0x767607: mov     eax, [esp+30h+arg_C]
0x76760B: push    edi
0x76760C: push    ecx
0x76760D: push    eax
0x76760E: mov     ecx, ebx
0x767610: call    edx
0x767612: cmp     dword ptr [esp+20h], 0
0x767617: mov     eax, [ebp+0]
0x76761A: mov     [esi+658h], eax
0x767620: mov     ecx, [ebp+4]
0x767623: mov     [esi+65Ch], ecx
0x767629: mov     edx, [ebp+8]
0x76762C: mov     [esi+660h], edx
0x767632: mov     eax, [ebp+0Ch]
0x767635: mov     [esi+664h], eax
0x76763B: mov     [esp+20h+var_4], 0
0x767643: jbe     loc_7677B3
0x767649: mov     ebp, [esp+20h+arg_0]
0x76764D: lea     ecx, [ecx+0]; void *
0x767650: cmp     ebx, [esi+0A94h]
0x767656: jnz     short loc_767677
0x767658: movzx   eax, word ptr [ebp+20h]
0x76765C: cmp     eax, [esi+6D8h]
0x767662: jbe     short loc_767677
0x767664: push    eax
0x767665: push    offset aDrawskinnedpri; "DrawSkinnedPrimitive> Cannot render par"...
0x76766A: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x76766F: add     esp, 8
0x767672: jmp     loc_767797
0x767677: mov     eax, [esp+20h+arg_1C]
0x76767B: mov     ecx, [esp+20h+arg_18]
0x76767F: mov     edi, [ebp+28h]
0x767682: mov     edx, [ebx]
0x767684: mov     edx, [edx+34h]
0x767687: push    eax
0x767688: mov     eax, [esi+10h]
0x76768B: push    ecx
0x76768C: mov     ecx, [esi+0Ch]
0x76768F: push    eax
0x767690: mov     eax, [esp+2Ch+arg_14]
0x767694: push    ecx
0x767695: mov     ecx, [esp+30h+arg_C]
0x767699: push    edi
0x76769A: push    ebp
0x76769B: push    eax
0x76769C: push    ecx
0x76769D: mov     ecx, ebx
0x76769F: call    edx
0x7676A1: mov     ecx, [esi+0Ch]
0x7676A4: mov     eax, [ebx]
0x7676A6: mov     edx, [esp+2Ch+arg_0]
0x7676AA: mov     eax, [eax+3Ch]
0x7676AD: push    ecx
0x7676AE: push    edi
0x7676AF: push    ebp
0x7676B0: push    edx
0x7676B1: mov     ecx, ebx
0x7676B3: call    eax
0x7676B5: mov     edi, eax
0x7676B7: test    edi, edi
0x7676B9: jz      loc_767804
0x7676BF: mov     eax, [esp+2Ch+arg_10]
0x7676C3: mov     ecx, [esp+2Ch+arg_C]
0x7676C7: mov     edx, [ebx]
0x7676C9: mov     edx, [edx+38h]
0x7676CC: push    eax
0x7676CD: mov     eax, [esi+10h]
0x7676D0: push    ecx
0x7676D1: mov     ecx, [esi+0Ch]
0x7676D4: push    eax
0x7676D5: mov     eax, [esp+38h+arg_8]
0x7676D9: push    ecx
0x7676DA: mov     ecx, [esp+3Ch+arg_0]
0x7676DE: push    edi
0x7676DF: push    ebp
0x7676E0: push    eax
0x7676E1: push    ecx
0x7676E2: mov     ecx, ebx
0x7676E4: call    edx
0x7676E6: mov     eax, [esi+8ACh]
0x7676EC: mov     ecx, [eax+0FF0h]
0x7676F2: mov     edx, [ecx]
0x7676F4: mov     eax, [edx+4]
0x7676F7: call    eax
0x7676F9: xor     eax, eax
0x7676FB: cmp     [edi+44h], eax
0x7676FE: mov     [esp+20h+var_C], eax
0x767702: mov     [esp+20h+var_8], eax
0x767706: jbe     short loc_767770
0x767708: mov     eax, [edi+48h]
0x76770B: test    eax, eax
0x76770D: jz      short loc_767720
0x76770F: mov     ecx, [esp+20h+var_8]
0x767713: movzx   ecx, word ptr [eax+ecx*2]
0x767717: sub     ecx, 2
0x76771A: mov     [esp+20h+var_10], ecx
0x76771E: jmp     short loc_767729
0x767720: mov     edx, [edi+3Ch]
0x767723: mov     [esp+20h+var_10], edx
0x767727: mov     ecx, edx
0x767729: mov     eax, [esi+280h]
0x76772F: mov     edx, [eax]
0x767731: mov     edx, [edx+148h]
0x767737: push    ecx
0x767738: mov     ecx, [esp+24h+var_C]
0x76773C: push    ecx
0x76773D: movzx   ecx, word ptr [ebp+1Ch]
0x767741: push    ecx
0x767742: mov     ecx, [edi+34h]
0x767745: push    0
0x767747: push    ecx
0x767748: mov     ecx, [esp+34h+arg_4]
0x76774C: push    ecx
0x76774D: push    eax
0x76774E: call    edx
0x767750: mov     eax, [esp+20h+var_C]
0x767754: mov     ecx, [esp+20h+var_10]
0x767758: lea     edx, [eax+ecx+2]
0x76775C: mov     eax, [esp+20h+var_8]
0x767760: add     eax, 1
0x767763: cmp     eax, [edi+44h]
0x767766: mov     [esp+20h+var_C], edx
0x76776A: mov     [esp+20h+var_8], eax
0x76776E: jb      short loc_767708
0x767770: mov     ecx, [esp+20h+arg_1C]
0x767774: mov     edx, [esp+20h+arg_18]
0x767778: mov     eax, [ebx]
0x76777A: mov     eax, [eax+40h]
0x76777D: push    ecx
0x76777E: mov     ecx, [esi+10h]
0x767781: push    edx
0x767782: mov     edx, [esi+0Ch]
0x767785: push    ecx
0x767786: mov     ecx, [esp+2Ch+arg_14]
0x76778A: push    edx
0x76778B: mov     edx, [esp+30h+arg_C]
0x76778F: push    edi
0x767790: push    ebp
0x767791: push    ecx
0x767792: push    edx
0x767793: mov     ecx, ebx
0x767795: call    eax
0x767797: mov     eax, [esp+20h+var_4]
0x76779B: add     eax, 1
0x76779E: add     ebp, 2Ch ; ','
0x7677A1: cmp     eax, [esp+20h]
0x7677A5: mov     [esp+20h+var_4], eax
0x7677A9: jb      loc_767650
0x7677AF: mov     ebp, [esp+20h+arg_1C]
0x7677B3: mov     eax, [esp+20h+arg_10]
0x7677B7: and     word ptr [eax+2Eh], 0F000h
0x7677BD: mov     edx, [ebx]
0x7677BF: mov     eax, [edx+4Ch]
0x7677C2: mov     ecx, ebx
0x7677C4: call    eax
0x7677C6: test    eax, eax
0x7677C8: jnz     loc_7675F0
0x7677CE: mov     eax, [esp+20h+arg_18]
0x7677D2: mov     ecx, [esi+10h]
0x7677D5: mov     edx, [ebx]
0x7677D7: mov     edx, [edx+44h]
0x7677DA: push    ebp
0x7677DB: push    eax
0x7677DC: mov     eax, [esi+0Ch]
0x7677DF: push    ecx
0x7677E0: mov     ecx, [esp+2Ch+arg_14]
0x7677E4: push    eax
0x7677E5: mov     eax, [esp+30h+arg_C]
0x7677E9: push    edi
0x7677EA: push    ecx
0x7677EB: push    eax
0x7677EC: mov     ecx, ebx
0x7677EE: call    edx
0x7677F0: mov     esi, [esi+8ACh]
0x7677F6: mov     eax, [esi]
0x7677F8: mov     edx, [eax+0FCh]
0x7677FE: push    0
0x767800: mov     ecx, esi
0x767802: call    edx
0x767804: pop     ebp
0x767805: pop     edi
0x767806: pop     ebx
0x767807: pop     esi
0x767808: add     esp, 1Ch
0x76780B: retn    14h
