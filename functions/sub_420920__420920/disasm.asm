0x420920: push    0FFFFFFFFh
0x420922: push    offset SEH_8C62B0
0x420927: mov     eax, large fs:0
0x42092D: push    eax
0x42092E: push    ecx
0x42092F: push    esi
0x420930: mov     eax, ___security_cookie
0x420935: xor     eax, esp
0x420937: push    eax
0x420938: lea     eax, [esp+18h+var_C]
0x42093C: mov     large fs:0, eax
0x420942: mov     esi, ecx
0x420944: push    5Ah ; 'Z'; a2
0x420946: call    BaseExtraList_GetExtraData
0x42094B: test    eax, eax
0x42094D: jz      short loc_420969
0x42094F: mov     cl, byte ptr [esp+18h+arg_0]
0x420953: mov     [eax+0Ch], cl
0x420956: mov     ecx, [esp+18h+var_C]
0x42095A: mov     large fs:0, ecx
0x420961: pop     ecx
0x420962: pop     esi
0x420963: add     esp, 10h
0x420966: retn    4
0x420969: push    10h; Size
0x42096B: call    FormHeapAlloc
0x420970: add     esp, 4
0x420973: mov     [esp+18h+var_10], eax
0x420977: test    eax, eax
0x420979: mov     [esp+18h+var_4], 0
0x420981: jz      short loc_420991
0x420983: mov     edx, [esp+18h+arg_0]
0x420987: push    edx
0x420988: mov     ecx, eax
0x42098A: call    sub_42AB50
0x42098F: jmp     short loc_420993
0x420991: xor     eax, eax
0x420993: push    eax; BSExtraData *
0x420994: mov     ecx, esi; ExtraDataList *
0x420996: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42099E: call    BaseExtraList_AddExtra
0x4209A3: mov     ecx, [esp+18h+var_C]
0x4209A7: mov     large fs:0, ecx
0x4209AE: pop     ecx
0x4209AF: pop     esi
0x4209B0: add     esp, 10h
0x4209B3: retn    4
