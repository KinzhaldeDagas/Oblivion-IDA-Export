0x422C70: push    0FFFFFFFFh; Create the actor-owned ExtraInfoGeneralTopic (extra type 0x59) or replace its raw MenuTopic pointer. The extra-data destructor owns and frees the stored 0x28-byte MenuTopic object.
0x422C72: push    offset SEH_8C62B0
0x422C77: mov     eax, large fs:0
0x422C7D: push    eax
0x422C7E: push    ecx
0x422C7F: push    esi
0x422C80: mov     eax, ___security_cookie
0x422C85: xor     eax, esp
0x422C87: push    eax
0x422C88: lea     eax, [esp+18h+var_C]
0x422C8C: mov     large fs:0, eax
0x422C92: mov     esi, ecx
0x422C94: push    59h ; 'Y'; a2
0x422C96: call    BaseExtraList_GetExtraData
0x422C9B: test    eax, eax
0x422C9D: jnz     short loc_422CEC
0x422C9F: push    10h; Size
0x422CA1: call    FormHeapAlloc
0x422CA6: add     esp, 4
0x422CA9: mov     [esp+18h+var_10], eax
0x422CAD: test    eax, eax
0x422CAF: mov     [esp+18h+var_4], 0
0x422CB7: jz      short loc_422CC7
0x422CB9: mov     ecx, [esp+18h+arg_0]
0x422CBD: push    ecx; menuTopic
0x422CBE: mov     ecx, eax; this
0x422CC0: call    ExtraInfoGeneralTopic__Constructor; Construct the actor's type-0x59 cache entry and transfer ownership of the supplied MenuTopic pointer to it.
0x422CC5: jmp     short loc_422CC9
0x422CC7: xor     eax, eax
0x422CC9: push    eax; BSExtraData *
0x422CCA: mov     ecx, esi; ExtraDataList *
0x422CCC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x422CD4: call    BaseExtraList_AddExtra
0x422CD9: mov     ecx, [esp+18h+var_C]
0x422CDD: mov     large fs:0, ecx
0x422CE4: pop     ecx
0x422CE5: pop     esi
0x422CE6: add     esp, 10h
0x422CE9: retn    4
0x422CEC: mov     edx, [esp+18h+arg_0]
0x422CF0: mov     [eax+0Ch], edx; On an existing ExtraInfoGeneralTopic, Oblivion replaces the cached MenuTopic pointer without destroying the prior object. Fallout's analogous setter (x4y6:0x82276370) performs the same raw pointer assignment; this is a shared pattern, not a version-specific behavior change.
0x422CF3: mov     ecx, [esp+18h+var_C]
0x422CF7: mov     large fs:0, ecx
0x422CFE: pop     ecx
0x422CFF: pop     esi
0x422D00: add     esp, 10h
0x422D03: retn    4
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
