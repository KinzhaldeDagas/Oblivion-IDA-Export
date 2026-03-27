0x420B70: push    0FFFFFFFFh
0x420B72: push    offset SEH_787830
0x420B77: mov     eax, large fs:0
0x420B7D: push    eax
0x420B7E: push    ebx
0x420B7F: push    esi
0x420B80: push    edi
0x420B81: mov     eax, ___security_cookie
0x420B86: xor     eax, esp
0x420B88: push    eax
0x420B89: lea     eax, [esp+1Ch+var_C]
0x420B8D: mov     large fs:0, eax
0x420B93: mov     edi, ecx
0x420B95: mov     ebx, [esp+1Ch+arg_0]
0x420B99: test    ebx, ebx
0x420B9B: push    9; a2
0x420B9D: jz      short loc_420C1E
0x420B9F: call    BaseExtraList_GetExtraData
0x420BA4: mov     esi, eax
0x420BA6: test    esi, esi
0x420BA8: jz      short loc_420BD1
0x420BAA: mov     ecx, [esi+0Ch]
0x420BAD: test    ecx, ecx
0x420BAF: jz      short loc_420BB9
0x420BB1: mov     eax, [ecx]
0x420BB3: mov     edx, [eax]
0x420BB5: push    1
0x420BB7: call    edx
0x420BB9: mov     [esi+0Ch], ebx
0x420BBC: mov     ecx, [esp+1Ch+var_C]
0x420BC0: mov     large fs:0, ecx
0x420BC7: pop     ecx
0x420BC8: pop     edi
0x420BC9: pop     esi
0x420BCA: pop     ebx
0x420BCB: add     esp, 0Ch
0x420BCE: retn    4
0x420BD1: push    10h; Size
0x420BD3: call    FormHeapAlloc
0x420BD8: add     esp, 4
0x420BDB: mov     [esp+1Ch+arg_0], eax
0x420BDF: test    eax, eax
0x420BE1: mov     [esp+1Ch+var_4], 0
0x420BE9: jz      short loc_420BF4
0x420BEB: mov     ecx, eax; this
0x420BED: call    ??0ExtraSeenData@@QAE@XZ; ExtraSeenData::ExtraSeenData(void)
0x420BF2: jmp     short loc_420BF6
0x420BF4: xor     eax, eax
0x420BF6: push    eax; BSExtraData *
0x420BF7: mov     ecx, edi; ExtraDataList *
0x420BF9: mov     [esp+20h+var_4], 0FFFFFFFFh
0x420C01: mov     [eax+0Ch], ebx
0x420C04: call    BaseExtraList_AddExtra
0x420C09: mov     ecx, [esp+1Ch+var_C]
0x420C0D: mov     large fs:0, ecx
0x420C14: pop     ecx
0x420C15: pop     edi
0x420C16: pop     esi
0x420C17: pop     ebx
0x420C18: add     esp, 0Ch
0x420C1B: retn    4
0x420C1E: call    BaseExtraList_RemoveExtraByType
0x420C23: mov     ecx, [esp+1Ch+var_C]
0x420C27: mov     large fs:0, ecx
0x420C2E: pop     ecx
0x420C2F: pop     edi
0x420C30: pop     esi
0x420C31: pop     ebx
0x420C32: add     esp, 0Ch
0x420C35: retn    4
