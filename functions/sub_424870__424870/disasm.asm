0x424870: push    0FFFFFFFFh
0x424872: push    offset SEH_6ACAB0
0x424877: mov     eax, large fs:0
0x42487D: push    eax
0x42487E: push    ebp
0x42487F: push    esi
0x424880: push    edi
0x424881: mov     eax, ___security_cookie
0x424886: xor     eax, esp
0x424888: push    eax
0x424889: lea     eax, [esp+1Ch+var_C]
0x42488D: mov     large fs:0, eax
0x424893: mov     edi, ecx
0x424895: push    19h; a2
0x424897: call    BaseExtraList_GetExtraData
0x42489C: xor     esi, esi
0x42489E: cmp     eax, esi
0x4248A0: jz      short loc_4248E7
0x4248A2: mov     ecx, [esp+1Ch+arg_0]
0x4248A6: cmp     ecx, esi
0x4248A8: jnz     short loc_4248C9
0x4248AA: push    1
0x4248AC: push    eax
0x4248AD: mov     ecx, edi
0x4248AF: call    BaseExtraList_RemoveExtraByPtr
0x4248B4: mov     ecx, [esp+1Ch+var_C]
0x4248B8: mov     large fs:0, ecx
0x4248BF: pop     ecx
0x4248C0: pop     edi
0x4248C1: pop     esi
0x4248C2: pop     ebp
0x4248C3: add     esp, 0Ch
0x4248C6: retn    4
0x4248C9: push    ecx
0x4248CA: mov     ecx, [eax+0Ch]
0x4248CD: call    sub_497950
0x4248D2: mov     ecx, [esp+1Ch+var_C]
0x4248D6: mov     large fs:0, ecx
0x4248DD: pop     ecx
0x4248DE: pop     edi
0x4248DF: pop     esi
0x4248E0: pop     ebp
0x4248E1: add     esp, 0Ch
0x4248E4: retn    4
0x4248E7: mov     ebp, [esp+1Ch+arg_0]
0x4248EB: cmp     ebp, esi
0x4248ED: jz      short loc_424956
0x4248EF: push    10h; Size
0x4248F1: call    FormHeapAlloc
0x4248F6: add     esp, 4
0x4248F9: mov     [esp+1Ch+arg_0], eax
0x4248FD: cmp     eax, esi
0x4248FF: mov     [esp+1Ch+var_4], esi
0x424903: jz      short loc_42490E
0x424905: mov     ecx, eax; this
0x424907: call    ??0ExtraRagDollData@@QAE@XZ; ExtraRagDollData::ExtraRagDollData(void)
0x42490C: mov     esi, eax
0x42490E: push    8; Size
0x424910: mov     [esp+20h+var_4], 0FFFFFFFFh
0x424918: call    FormHeapAlloc
0x42491D: add     esp, 4
0x424920: mov     [esp+1Ch+arg_0], eax
0x424924: test    eax, eax
0x424926: mov     [esp+1Ch+var_4], 1
0x42492E: jz      short loc_424939
0x424930: mov     ecx, eax
0x424932: call    sub_497210
0x424937: jmp     short loc_42493B
0x424939: xor     eax, eax
0x42493B: push    ebp
0x42493C: mov     ecx, eax
0x42493E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x424946: mov     [esi+0Ch], eax
0x424949: call    sub_497950
0x42494E: push    esi; BSExtraData *
0x42494F: mov     ecx, edi; ExtraDataList *
0x424951: call    BaseExtraList_AddExtra
0x424956: mov     ecx, [esp+1Ch+var_C]
0x42495A: mov     large fs:0, ecx
0x424961: pop     ecx
0x424962: pop     edi
0x424963: pop     esi
0x424964: pop     ebp
0x424965: add     esp, 0Ch
0x424968: retn    4
