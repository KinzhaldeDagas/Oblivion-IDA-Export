0x8C38B0: push    0FFFFFFFFh
0x8C38B2: push    offset SEH_8C38B0
0x8C38B7: mov     eax, large fs:0
0x8C38BD: push    eax
0x8C38BE: sub     esp, 218h
0x8C38C4: mov     eax, ds:0B30AACh
0x8C38C9: xor     eax, esp
0x8C38CB: mov     [esp+224h+var_10], eax
0x8C38D2: push    ebx
0x8C38D3: push    esi
0x8C38D4: push    edi
0x8C38D5: mov     eax, ds:0B30AACh
0x8C38DA: xor     eax, esp
0x8C38DC: push    eax
0x8C38DD: lea     eax, [esp+234h+var_C]
0x8C38E4: mov     large fs:0, eax
0x8C38EA: mov     esi, [esp+234h+arg_0]
0x8C38F1: mov     ebx, ecx
0x8C38F3: mov     eax, [ebx]
0x8C38F5: mov     edx, [eax+68h]
0x8C38F8: call    edx
0x8C38FA: mov     edi, eax
0x8C38FC: mov     eax, [ebx]
0x8C38FE: mov     edx, [eax+74h]
0x8C3901: lea     ecx, [esp+234h+var_221]
0x8C3905: push    ecx
0x8C3906: mov     ecx, ebx
0x8C3908: call    edx
0x8C390A: cmp     dword ptr [esi+4], 6
0x8C390E: jnb     loc_8C39D6
0x8C3914: mov     ecx, [esi+21Ch]
0x8C391A: push    0
0x8C391C: push    0
0x8C391E: sub     edi, 4
0x8C3921: push    edi
0x8C3922: push    eax
0x8C3923: mov     eax, [ecx+4]
0x8C3926: push    ecx
0x8C3927: call    eax
0x8C3929: lea     ebx, [esi+0E0h]
0x8C392F: add     esi, 8
0x8C3932: add     esp, 14h
0x8C3935: cmp     byte ptr [esi], 0
0x8C3938: jnz     short loc_8C393F
0x8C393A: mov     esi, offset aPlease; "Please"
0x8C393F: push    ecx
0x8C3940: mov     eax, esp
0x8C3942: mov     [esp+238h+var_220], esp
0x8C3946: push    200h
0x8C394B: lea     ecx, [esp+23Ch+var_210]
0x8C394F: push    ecx
0x8C3950: lea     ecx, [esp+240h+var_21C]
0x8C3954: mov     byte ptr [eax], 1
0x8C3957: call    sub_8BBFB0
0x8C395C: push    offset aReExport; " re-export\n"
0x8C3961: push    esi
0x8C3962: push    offset aContainsAnOl_2; " contains an old bhkMoppBvTreeShape! "
0x8C3967: push    ebx
0x8C3968: push    offset aFile; "File "
0x8C396D: lea     ecx, [esp+248h+var_21C]
0x8C3971: mov     [esp+248h+var_4], 0
0x8C397C: call    sub_8BBDB0
0x8C3981: mov     ecx, eax
0x8C3983: call    sub_8BBDB0
0x8C3988: mov     ecx, eax
0x8C398A: call    sub_8BBDB0
0x8C398F: mov     ecx, eax
0x8C3991: call    sub_8BBDB0
0x8C3996: mov     ecx, eax
0x8C3998: call    sub_8BBDB0
0x8C399D: mov     ecx, ds:0BA7FB0h
0x8C39A3: mov     edx, [ecx]
0x8C39A5: mov     edx, [edx+8]
0x8C39A8: push    0D7h ; '×'
0x8C39AD: push    offset a_Bhkmoppbvtree; ".\\bhkMoppBvTreeShape.cpp"
0x8C39B2: lea     eax, [esp+23Ch+var_210]
0x8C39B6: push    eax
0x8C39B7: push    234F2250h
0x8C39BC: push    1
0x8C39BE: call    edx
0x8C39C0: lea     ecx, [esp+234h+var_21C]
0x8C39C4: mov     [esp+234h+var_4], 0FFFFFFFFh
0x8C39CF: call    sub_8BC000
0x8C39D4: jmp     short loc_8C39DE
0x8C39D6: push    esi
0x8C39D7: mov     ecx, ebx
0x8C39D9: call    sub_89D670
0x8C39DE: mov     eax, edi
0x8C39E0: mov     ecx, dword ptr [esp+234h+var_C]
0x8C39E7: mov     large fs:0, ecx
0x8C39EE: pop     ecx
0x8C39EF: pop     edi
0x8C39F0: pop     esi
0x8C39F1: pop     ebx
0x8C39F2: mov     ecx, [esp+224h+var_10]
0x8C39F9: xor     ecx, esp
0x8C39FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C3A00: add     esp, 224h
0x8C3A06: retn    4
