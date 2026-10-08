0x420920: push    0FFFFFFFFh; Set/update only ExtraHasNoRumors (0x5A), the actor-local eligibility override. This does not remove or replace an existing ExtraInfoGeneralTopic cache (0x59); disabling the gate can expose the old cache again.
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
0x42094F: mov     cl, [esp+18h+noRumors]
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
0x420983: mov     edx, dword ptr [esp+18h+noRumors]
0x420987: push    edx
0x420988: mov     ecx, eax
0x42098A: call    ExtraHasNoRumors_ctor; Constructs Oblivion ExtraHasNoRumors: type 0x5A, vtable, null next link, and boolean payload at +0x0C.
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
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
