0x43B840: push    0FFFFFFFFh
0x43B842: push    offset SEH_43B840
0x43B847: mov     eax, large fs:0
0x43B84D: push    eax
0x43B84E: push    ecx
0x43B84F: push    esi
0x43B850: push    edi
0x43B851: mov     eax, ___security_cookie
0x43B856: xor     eax, esp
0x43B858: push    eax
0x43B859: lea     eax, [esp+1Ch+var_C]
0x43B85D: mov     large fs:0, eax
0x43B863: mov     ecx, [ecx+4]
0x43B866: mov     esi, [esp+1Ch+arg_0]
0x43B86A: lea     edx, [esp+1Ch+var_10]
0x43B86E: mov     [esp+1Ch+var_10], 0
0x43B876: mov     eax, [ecx]
0x43B878: mov     eax, [eax+4]
0x43B87B: push    edx
0x43B87C: push    esi
0x43B87D: call    eax
0x43B87F: test    al, al
0x43B881: jz      short loc_43B8EF
0x43B883: mov     edi, [esp+1Ch+arg_8]
0x43B887: test    edi, edi
0x43B889: jz      short loc_43B8D9
0x43B88B: push    30h ; '0'; Size
0x43B88D: call    FormHeapAlloc
0x43B892: add     esp, 4
0x43B895: test    eax, eax
0x43B897: jz      short loc_43B8AE
0x43B899: mov     ecx, [esp+1Ch+arg_4]
0x43B89D: mov     edx, [esp+1Ch+var_10]
0x43B8A1: push    ecx
0x43B8A2: push    edx
0x43B8A3: mov     ecx, eax
0x43B8A5: call    sub_437890
0x43B8AA: mov     esi, eax
0x43B8AC: jmp     short loc_43B8B0
0x43B8AE: xor     esi, esi
0x43B8B0: test    esi, esi
0x43B8B2: mov     [esp+1Ch+arg_4], esi
0x43B8B6: jz      short loc_43B8C2
0x43B8B8: lea     eax, [esi+8]
0x43B8BB: push    eax; lpAddend
0x43B8BC: call    ds:InterlockedIncrement
0x43B8C2: push    edi
0x43B8C3: mov     ecx, esi
0x43B8C5: mov     [esp+20h+var_4], 0
0x43B8CD: call    sub_43AC40
0x43B8D2: mov     edx, [esi]
0x43B8D4: mov     eax, [edx+28h]
0x43B8D7: jmp     short loc_43B947
0x43B8D9: xor     al, al
0x43B8DB: mov     ecx, [esp+1Ch+var_C]
0x43B8DF: mov     large fs:0, ecx
0x43B8E6: pop     ecx
0x43B8E7: pop     edi
0x43B8E8: pop     esi
0x43B8E9: add     esp, 10h
0x43B8EC: retn    0Ch
0x43B8EF: push    30h ; '0'; Size
0x43B8F1: call    FormHeapAlloc
0x43B8F6: add     esp, 4
0x43B8F9: mov     [esp+1Ch+arg_0], eax
0x43B8FD: test    eax, eax
0x43B8FF: mov     [esp+1Ch+var_4], 1
0x43B907: jz      short loc_43B91A
0x43B909: mov     ecx, [esp+1Ch+arg_4]
0x43B90D: push    ecx
0x43B90E: push    esi
0x43B90F: mov     ecx, eax
0x43B911: call    sub_4377D0
0x43B916: mov     esi, eax
0x43B918: jmp     short loc_43B91C
0x43B91A: xor     esi, esi
0x43B91C: test    esi, esi
0x43B91E: mov     [esp+1Ch+arg_4], esi
0x43B922: jz      short loc_43B92E
0x43B924: lea     edx, [esi+8]
0x43B927: push    edx; lpAddend
0x43B928: call    ds:InterlockedIncrement
0x43B92E: mov     eax, [esp+1Ch+arg_8]
0x43B932: push    eax
0x43B933: mov     ecx, esi
0x43B935: mov     [esp+20h+var_4], 2
0x43B93D: call    sub_43AC40
0x43B942: mov     edx, [esi]
0x43B944: mov     eax, [edx+20h]
0x43B947: mov     ecx, esi
0x43B949: call    eax
0x43B94B: lea     ecx, [esi+8]
0x43B94E: push    ecx; lpAddend
0x43B94F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x43B957: call    ds:InterlockedDecrement
0x43B95D: test    eax, eax
0x43B95F: jnz     short loc_43B96B
0x43B961: mov     edx, [esi]
0x43B963: mov     eax, [edx]
0x43B965: push    1
0x43B967: mov     ecx, esi
0x43B969: call    eax
0x43B96B: mov     al, 1
0x43B96D: mov     ecx, [esp+1Ch+var_C]
0x43B971: mov     large fs:0, ecx
0x43B978: pop     ecx
0x43B979: pop     edi
0x43B97A: pop     esi
0x43B97B: add     esp, 10h
0x43B97E: retn    0Ch
0x9ACB30: lea     ecx, [ebp+8]; void *
0x9ACB33: jmp     sub_4BDDC0
0x9ACB38: mov     eax, [ebp+4]
0x9ACB3B: push    eax
0x9ACB3C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9ACB41: pop     ecx
0x9ACB42: retn
0x9ACB43: lea     ecx, [ebp+8]; void *
0x9ACB46: jmp     sub_4BDDC0
0x9ACB4B: mov     edx, [esp+arg_4]
0x9ACB4F: lea     eax, [edx-0Ch]
0x9ACB52: mov     ecx, [edx-10h]
0x9ACB55: xor     ecx, eax
0x9ACB57: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACB5C: mov     eax, offset stru_AD9794
0x9ACB61: jmp     ___CxxFrameHandler3
