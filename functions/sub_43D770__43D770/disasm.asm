0x43D770: push    0FFFFFFFFh
0x43D772: push    offset SEH_43D770
0x43D777: mov     eax, large fs:0
0x43D77D: push    eax
0x43D77E: sub     esp, 2Ch
0x43D781: push    ebx
0x43D782: push    ebp
0x43D783: push    esi
0x43D784: push    edi
0x43D785: mov     eax, ___security_cookie
0x43D78A: xor     eax, esp
0x43D78C: push    eax
0x43D78D: lea     eax, [esp+4Ch+var_C]
0x43D791: mov     large fs:0, eax
0x43D797: mov     esi, ecx
0x43D799: mov     ecx, [esi+24h]
0x43D79C: movzx   eax, word ptr [ecx+20h]
0x43D7A0: cmp     ax, 0FFFFh
0x43D7A4: mov     [esp+4Ch+var_35], 0
0x43D7A9: jnz     short loc_43D7BE
0x43D7AB: mov     eax, [ecx+1Ch]
0x43D7AE: lea     edi, [eax+1]
0x43D7B1: mov     dl, [eax]
0x43D7B3: add     eax, 1
0x43D7B6: test    dl, dl
0x43D7B8: jnz     short loc_43D7B1
0x43D7BA: sub     eax, edi
0x43D7BC: jmp     short loc_43D7C1
0x43D7BE: movzx   eax, ax
0x43D7C1: test    eax, eax
0x43D7C3: jbe     short loc_43D832
0x43D7C5: call    EffectSetting_IsUnkA0Negative
0x43D7CA: test    al, al
0x43D7CC: jnz     short loc_43D832
0x43D7CE: mov     eax, [esi+24h]
0x43D7D1: test    eax, eax
0x43D7D3: jz      short loc_43D7DA
0x43D7D5: lea     edi, [eax+18h]
0x43D7D8: jmp     short loc_43D7DC
0x43D7DA: xor     edi, edi
0x43D7DC: mov     eax, [esi+10h]
0x43D7DF: mov     edx, [esi+14h]
0x43D7E2: mov     cl, 10h
0x43D7E4: call    __allshr
0x43D7E9: mov     ecx, ModelLoaderPtr
0x43D7EF: push    0
0x43D7F1: push    1
0x43D7F3: push    0
0x43D7F5: push    0
0x43D7F7: movzx   eax, al
0x43D7FA: push    esi
0x43D7FB: push    eax
0x43D7FC: push    edi
0x43D7FD: lea     eax, [esp+68h+var_30]
0x43D801: push    eax
0x43D802: call    sub_43B280
0x43D807: mov     eax, [esp+4Ch+var_30]
0x43D80B: test    eax, eax
0x43D80D: jz      short loc_43D82D
0x43D80F: mov     edi, eax
0x43D811: add     eax, 8
0x43D814: push    eax; lpAddend
0x43D815: call    ds:InterlockedDecrement
0x43D81B: test    eax, eax
0x43D81D: jnz     short loc_43D82D
0x43D81F: test    edi, edi
0x43D821: jz      short loc_43D82D
0x43D823: mov     edx, [edi]
0x43D825: mov     eax, [edx]
0x43D827: push    1
0x43D829: mov     ecx, edi
0x43D82B: call    eax
0x43D82D: mov     [esp+4Ch+var_35], 1
0x43D832: mov     ecx, [esi+24h]
0x43D835: call    sub_415EB0
0x43D83A: mov     eax, [esi+20h]
0x43D83D: test    eax, eax
0x43D83F: jz      short loc_43D84A
0x43D841: add     eax, 0Ch
0x43D844: mov     [esp+4Ch+var_34], eax
0x43D848: jmp     short loc_43D852
0x43D84A: mov     [esp+4Ch+var_34], 0
0x43D852: mov     eax, [esp+4Ch+var_34]
0x43D856: cmp     dword ptr [eax+8], 0
0x43D85A: jnz     short loc_43D866
0x43D85C: cmp     dword ptr [eax+4], 0
0x43D860: jz      loc_43DBDB
0x43D866: test    eax, eax
0x43D868: jz      loc_43DBDB
0x43D86E: mov     ecx, [esp+4Ch+var_34]
0x43D872: mov     eax, [ecx+4]
0x43D875: mov     ebp, [eax+1Ch]
0x43D878: test    dword ptr [ebp+58h], 70000h
0x43D87F: mov     [esp+4Ch+var_30], ebp
0x43D883: jz      loc_43DBC3
0x43D889: cmp     [esp+4Ch+var_35], 0
0x43D88E: jz      short loc_43D89F
0x43D890: mov     ecx, ebp
0x43D892: call    EffectSetting_IsUnkA4Negative
0x43D897: test    al, al
0x43D899: jnz     loc_43DBC3
0x43D89F: mov     eax, [ebp+60h]
0x43D8A2: push    eax; a1
0x43D8A3: call    TESForm_LookupByFormID
0x43D8A8: mov     edi, eax
0x43D8AA: add     esp, 4
0x43D8AD: test    edi, edi
0x43D8AF: jz      loc_43DB95
0x43D8B5: mov     eax, [ebp+58h]
0x43D8B8: mov     edx, eax
0x43D8BA: shr     edx, 10h
0x43D8BD: test    dl, 1
0x43D8C0: jz      loc_43D965
0x43D8C6: cmp     byte ptr [edi+4], 21h ; '!'
0x43D8CA: jnz     loc_43DB95
0x43D8D0: movzx   eax, word ptr [edi+38h]
0x43D8D4: cmp     ax, 0FFFFh
0x43D8D8: jnz     short loc_43D8ED
0x43D8DA: mov     eax, [edi+34h]
0x43D8DD: lea     edx, [eax+1]
0x43D8E0: mov     cl, [eax]
0x43D8E2: add     eax, 1
0x43D8E5: test    cl, cl
0x43D8E7: jnz     short loc_43D8E0
0x43D8E9: sub     eax, edx
0x43D8EB: jmp     short loc_43D8F0
0x43D8ED: movzx   eax, ax
0x43D8F0: test    eax, eax
0x43D8F2: jbe     loc_43DB95
0x43D8F8: mov     eax, [esi+10h]
0x43D8FB: mov     edx, [esi+14h]
0x43D8FE: mov     cl, 10h
0x43D900: call    __allshr
0x43D905: push    0
0x43D907: push    1
0x43D909: push    0
0x43D90B: push    edi
0x43D90C: movzx   ebx, al
0x43D90F: call    sub_4A2A30
0x43D914: mov     ecx, ModelLoaderPtr
0x43D91A: add     esp, 4
0x43D91D: push    eax
0x43D91E: push    esi
0x43D91F: push    ebx
0x43D920: add     edi, 30h ; '0'
0x43D923: push    edi
0x43D924: lea     eax, [esp+68h+var_2C]
0x43D928: push    eax
0x43D929: call    sub_43B280
0x43D92E: mov     eax, [esp+4Ch+var_2C]
0x43D932: test    eax, eax
0x43D934: jz      loc_43DB95
0x43D93A: mov     edi, eax
0x43D93C: add     eax, 8
0x43D93F: push    eax; lpAddend
0x43D940: call    ds:InterlockedDecrement
0x43D946: test    eax, eax
0x43D948: jnz     loc_43DB95
0x43D94E: test    edi, edi
0x43D950: jz      loc_43DB95
0x43D956: mov     edx, [edi]
0x43D958: mov     eax, [edx]
0x43D95A: push    1
0x43D95C: mov     ecx, edi
0x43D95E: call    eax
0x43D960: jmp     loc_43DB95
0x43D965: mov     ecx, eax
0x43D967: shr     ecx, 11h
0x43D96A: test    cl, 1
0x43D96D: jz      loc_43DA55
0x43D973: cmp     byte ptr [edi+4], 14h
0x43D977: jnz     loc_43DB95
0x43D97D: mov     eax, [esi+10h]
0x43D980: mov     edx, [esi+14h]
0x43D983: mov     cl, 10h
0x43D985: call    __allshr
0x43D98A: push    0
0x43D98C: push    1
0x43D98E: push    0
0x43D990: push    edi
0x43D991: movzx   ebx, al
0x43D994: lea     ebp, [edi+64h]
0x43D997: call    sub_4A2A30
0x43D99C: add     esp, 4
0x43D99F: push    eax
0x43D9A0: push    esi
0x43D9A1: push    ebx
0x43D9A2: push    0
0x43D9A4: mov     ecx, ebp
0x43D9A6: call    TESBipedModelForm_GetBipedModel
0x43D9AB: mov     ecx, ModelLoaderPtr
0x43D9B1: push    eax
0x43D9B2: lea     edx, [esp+68h+var_28]
0x43D9B6: push    edx
0x43D9B7: call    sub_43B280
0x43D9BC: mov     eax, [esp+4Ch+var_28]
0x43D9C0: test    eax, eax
0x43D9C2: jz      short loc_43D9E2
0x43D9C4: mov     ebx, eax
0x43D9C6: add     eax, 8
0x43D9C9: push    eax; lpAddend
0x43D9CA: call    ds:InterlockedDecrement
0x43D9D0: test    eax, eax
0x43D9D2: jnz     short loc_43D9E2
0x43D9D4: test    ebx, ebx
0x43D9D6: jz      short loc_43D9E2
0x43D9D8: mov     eax, [ebx]
0x43D9DA: mov     edx, [eax]
0x43D9DC: push    1
0x43D9DE: mov     ecx, ebx
0x43D9E0: call    edx
0x43D9E2: mov     eax, [esi+10h]
0x43D9E5: mov     edx, [esi+14h]
0x43D9E8: mov     cl, 10h
0x43D9EA: call    __allshr
0x43D9EF: push    0
0x43D9F1: push    1
0x43D9F3: push    0
0x43D9F5: push    edi
0x43D9F6: movzx   ebx, al
0x43D9F9: call    sub_4A2A30
0x43D9FE: add     esp, 4
0x43DA01: push    eax
0x43DA02: push    esi
0x43DA03: push    ebx
0x43DA04: push    1
0x43DA06: mov     ecx, ebp
0x43DA08: call    TESBipedModelForm_GetBipedModel
0x43DA0D: mov     ecx, ModelLoaderPtr
0x43DA13: push    eax
0x43DA14: lea     eax, [esp+68h+var_24]
0x43DA18: push    eax
0x43DA19: call    sub_43B280
0x43DA1E: mov     eax, [esp+4Ch+var_24]
0x43DA22: test    eax, eax
0x43DA24: jz      loc_43DB91
0x43DA2A: mov     edi, eax
0x43DA2C: add     eax, 8
0x43DA2F: push    eax; lpAddend
0x43DA30: call    ds:InterlockedDecrement
0x43DA36: test    eax, eax
0x43DA38: jnz     loc_43DB91
0x43DA3E: test    edi, edi
0x43DA40: jz      loc_43DB91
0x43DA46: mov     edx, [edi]
0x43DA48: mov     eax, [edx]
0x43DA4A: push    1
0x43DA4C: mov     ecx, edi
0x43DA4E: call    eax
0x43DA50: jmp     loc_43DB91
0x43DA55: shr     eax, 12h
0x43DA58: test    al, 1
0x43DA5A: jz      loc_43DB95
0x43DA60: cmp     byte ptr [edi+4], 25h ; '%'
0x43DA64: jnz     short loc_43DAB0
0x43DA66: lea     ecx, [esp+4Ch+var_1C]
0x43DA6A: call    TESContainer_constr
0x43DA6F: lea     ecx, [esp+4Ch+var_1C]
0x43DA73: push    ecx; int
0x43DA74: mov     ecx, TESDataHandler_g_PlayerRef
0x43DA7A: push    1
0x43DA7C: mov     [esp+54h+var_4], 0
0x43DA84: call    Actor_GetLevel
0x43DA89: lea     ecx, [edi+24h]; this
0x43DA8C: push    eax; int
0x43DA8D: call    TESLeveledList_CalcLeveledForm
0x43DA92: push    0
0x43DA94: lea     ecx, [esp+50h+var_1C]
0x43DA98: call    TESContainer_GetNthForm
0x43DA9D: lea     ecx, [esp+4Ch+var_1C]
0x43DAA1: mov     edi, eax
0x43DAA3: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x43DAAB: call    TESContainer_destr
0x43DAB0: test    edi, edi
0x43DAB2: jz      loc_43DB95
0x43DAB8: mov     al, [edi+4]
0x43DABB: cmp     al, 23h ; '#'
0x43DABD: jnz     short loc_43DB03
0x43DABF: push    1
0x43DAC1: push    1
0x43DAC3: mov     ecx, edi
0x43DAC5: call    sub_5234F0
0x43DACA: mov     edx, [esi+14h]
0x43DACD: push    0
0x43DACF: mov     edi, eax
0x43DAD1: mov     eax, [esi+10h]
0x43DAD4: push    esi
0x43DAD5: mov     cl, 10h
0x43DAD7: call    __allshr
0x43DADC: mov     ecx, ModelLoaderPtr
0x43DAE2: movzx   edx, al
0x43DAE5: push    edx
0x43DAE6: push    0
0x43DAE8: push    edi
0x43DAE9: call    sub_43BC20
0x43DAEE: mov     ecx, edi
0x43DAF0: call    BSSimpleList_Clear
0x43DAF5: push    edi
0x43DAF6: call    FormHeapFree
0x43DAFB: add     esp, 4
0x43DAFE: jmp     loc_43DB95
0x43DB03: cmp     al, 24h ; '$'
0x43DB05: jnz     loc_43DB95
0x43DB0B: mov     eax, [esi+10h]
0x43DB0E: mov     edx, [esi+14h]
0x43DB11: push    1
0x43DB13: push    1
0x43DB15: push    0
0x43DB17: push    esi
0x43DB18: mov     cl, 10h
0x43DB1A: lea     ebp, [edi+0ACh]
0x43DB20: call    __allshr
0x43DB25: mov     ecx, ModelLoaderPtr
0x43DB2B: movzx   eax, al
0x43DB2E: push    eax
0x43DB2F: push    ebp
0x43DB30: call    sub_43D000
0x43DB35: mov     eax, [esi+10h]
0x43DB38: mov     edx, [esi+14h]
0x43DB3B: mov     cl, 10h
0x43DB3D: call    __allshr
0x43DB42: push    0
0x43DB44: push    1
0x43DB46: push    1
0x43DB48: push    edi
0x43DB49: movzx   ebx, al
0x43DB4C: call    sub_4A2A30
0x43DB51: add     esp, 4
0x43DB54: push    eax
0x43DB55: push    esi
0x43DB56: push    ebx
0x43DB57: push    ebp
0x43DB58: lea     ecx, [esp+68h+var_20]
0x43DB5C: push    ecx
0x43DB5D: mov     ecx, ModelLoaderPtr
0x43DB63: call    sub_43B280
0x43DB68: lea     ecx, [esp+4Ch+var_20]; void *
0x43DB6C: call    sub_4BDDC0
0x43DB71: mov     eax, [esi+10h]
0x43DB74: mov     edx, [esi+14h]
0x43DB77: push    0
0x43DB79: push    esi
0x43DB7A: mov     cl, 10h
0x43DB7C: call    __allshr
0x43DB81: mov     ecx, ModelLoaderPtr
0x43DB87: movzx   edx, al
0x43DB8A: push    edx
0x43DB8B: push    ebp
0x43DB8C: call    sub_43CDE0
0x43DB91: mov     ebp, [esp+4Ch+var_30]
0x43DB95: mov     ecx, ebp
0x43DB97: call    EffectSetting_IsUnkA4Positive
0x43DB9C: test    al, al
0x43DB9E: jnz     short loc_43DBBC
0x43DBA0: mov     ecx, ebp
0x43DBA2: call    EffectSetting_IsUnkA4Negative
0x43DBA7: test    al, al
0x43DBA9: jnz     short loc_43DBBC
0x43DBAB: mov     eax, [ebp+58h]
0x43DBAE: shr     eax, 12h
0x43DBB1: test    al, 1
0x43DBB3: jz      short loc_43DBBC
0x43DBB5: add     dword_B33518, 1
0x43DBBC: mov     ecx, ebp
0x43DBBE: call    sub_415E50
0x43DBC3: mov     ecx, [esp+4Ch+var_34]
0x43DBC7: mov     eax, [ecx+8]
0x43DBCA: test    eax, eax
0x43DBCC: jz      short loc_43DBDB
0x43DBCE: add     eax, 0FFFFFFFCh
0x43DBD1: mov     [esp+4Ch+var_34], eax
0x43DBD5: jnz     loc_43D86E
0x43DBDB: mov     edx, [esi]
0x43DBDD: mov     eax, [edx+28h]
0x43DBE0: mov     ecx, esi
0x43DBE2: mov     dword ptr [esi+0Ch], 5
0x43DBE9: call    eax
0x43DBEB: mov     ecx, dword ptr [esp+4Ch+var_C]
0x43DBEF: mov     large fs:0, ecx
0x43DBF6: pop     ecx
0x43DBF7: pop     edi
0x43DBF8: pop     esi
0x43DBF9: pop     ebp
0x43DBFA: pop     ebx
0x43DBFB: add     esp, 38h
0x43DBFE: retn
