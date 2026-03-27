0x568640: push    0FFFFFFFFh
0x568642: push    offset ??1TESPackage@@UAE@XZ_SEH
0x568647: mov     eax, large fs:0
0x56864D: push    eax
0x56864E: push    ecx
0x56864F: push    esi
0x568650: push    edi
0x568651: mov     eax, ds:0B30AACh
0x568656: xor     eax, esp
0x568658: push    eax
0x568659: lea     eax, [esp+1Ch+var_C]
0x56865D: mov     large fs:0, eax
0x568663: mov     esi, ecx
0x568665: mov     [esp+1Ch+var_10], esi
0x568669: mov     dword ptr [esi], offset ??_7TESPackage@@6B@; const TESPackage::`vftable'
0x56866F: mov     eax, ds:0B33A98h
0x568674: mov     al, [eax+0CD4h]
0x56867A: test    al, al
0x56867C: mov     [esp+1Ch+var_4], 2
0x568684: jnz     short loc_568691
0x568686: push    esi
0x568687: mov     ecx, offset ActorProcessManager_ptr
0x56868C: call    sub_675090
0x568691: mov     eax, [esi+0Ch]
0x568694: mov     ecx, ds:0B33A98h
0x56869A: push    eax; _DWORD
0x56869B: call    TESDataHandler_IsFormIDCreated?
0x5686A0: test    al, al
0x5686A2: jz      short loc_5686AB
0x5686A4: and     dword ptr [esi+1Ch], 0FFFFF7FFh
0x5686AB: mov     edi, [esi+24h]
0x5686AE: test    edi, edi
0x5686B0: jz      short loc_5686C2
0x5686B2: mov     ecx, edi
0x5686B4: call    TESPackage_LocationData_destr
0x5686B9: push    edi
0x5686BA: call    FormHeapFree
0x5686BF: add     esp, 4
0x5686C2: mov     edi, [esi+28h]
0x5686C5: test    edi, edi
0x5686C7: jz      short loc_5686D9
0x5686C9: mov     ecx, edi; void *
0x5686CB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5686D0: push    edi
0x5686D1: call    FormHeapFree
0x5686D6: add     esp, 4
0x5686D9: lea     edi, [esi+34h]
0x5686DC: mov     ecx, edi
0x5686DE: call    sub_56A750
0x5686E3: mov     ecx, esi
0x5686E5: call    j_TESForm_ClearComponentReferences
0x5686EA: mov     ecx, edi
0x5686EC: mov     byte ptr [esp+1Ch+var_4], 1
0x5686F1: call    sub_56A7A0
0x5686F6: lea     ecx, [esi+2Ch]; void *
0x5686F9: mov     byte ptr [esp+1Ch+var_4], 0
0x5686FE: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x568703: mov     ecx, esi; this
0x568705: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x56870D: call    TESForm_destr
0x568712: mov     ecx, [esp+1Ch+var_C]
0x568716: mov     large fs:0, ecx
0x56871D: pop     ecx
0x56871E: pop     edi
0x56871F: pop     esi
0x568720: add     esp, 10h
0x568723: retn
