0x420100: push    0FFFFFFFFh
0x420102: push    offset SEH_8C8970
0x420107: mov     eax, large fs:0
0x42010D: push    eax
0x42010E: push    ecx
0x42010F: push    esi
0x420110: push    edi
0x420111: mov     eax, ___security_cookie
0x420116: xor     eax, esp
0x420118: push    eax
0x420119: lea     eax, [esp+1Ch+var_C]
0x42011D: mov     large fs:0, eax
0x420123: mov     edi, ecx
0x420125: push    18h; a2
0x420127: call    BaseExtraList_GetExtraData
0x42012C: mov     esi, eax
0x42012E: test    esi, esi
0x420130: jnz     short loc_420165
0x420132: push    18h; Size
0x420134: call    FormHeapAlloc
0x420139: add     esp, 4
0x42013C: mov     [esp+1Ch+var_10], eax
0x420140: test    eax, eax
0x420142: mov     [esp+1Ch+var_4], esi
0x420146: jz      short loc_420151
0x420148: mov     ecx, eax
0x42014A: call    sub_42A4C0
0x42014F: jmp     short loc_420153
0x420151: xor     eax, eax
0x420153: push    eax; BSExtraData *
0x420154: mov     ecx, edi; ExtraDataList *
0x420156: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42015E: mov     esi, eax
0x420160: call    BaseExtraList_AddExtra
0x420165: mov     eax, [esp+1Ch+arg_0]
0x420169: mov     ecx, [eax]
0x42016B: mov     [esi+0Ch], ecx
0x42016E: mov     edx, [eax+4]
0x420171: mov     [esi+10h], edx
0x420174: mov     eax, [eax+8]
0x420177: mov     [esi+14h], eax
0x42017A: mov     ecx, [esp+1Ch+var_C]
0x42017E: mov     large fs:0, ecx
0x420185: pop     ecx
0x420186: pop     edi
0x420187: pop     esi
0x420188: add     esp, 10h
0x42018B: retn    4
