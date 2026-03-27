0x424440: push    0FFFFFFFFh
0x424442: push    offset SEH_787830
0x424447: mov     eax, large fs:0
0x42444D: push    eax
0x42444E: push    ebx
0x42444F: push    esi
0x424450: push    edi
0x424451: mov     eax, ___security_cookie
0x424456: xor     eax, esp
0x424458: push    eax
0x424459: lea     eax, [esp+1Ch+var_C]
0x42445D: mov     large fs:0, eax
0x424463: mov     edi, ecx
0x424465: push    0Fh; a2
0x424467: call    BaseExtraList_GetExtraData
0x42446C: mov     ebx, [esp+1Ch+arg_0]
0x424470: test    ebx, ebx
0x424472: mov     esi, eax
0x424474: jnz     short loc_424499
0x424476: test    esi, esi
0x424478: jz      short loc_4244F1
0x42447A: push    1
0x42447C: push    esi
0x42447D: mov     ecx, edi
0x42447F: call    BaseExtraList_RemoveExtraByPtr
0x424484: mov     ecx, [esp+1Ch+var_C]
0x424488: mov     large fs:0, ecx
0x42448F: pop     ecx
0x424490: pop     edi
0x424491: pop     esi
0x424492: pop     ebx
0x424493: add     esp, 0Ch
0x424496: retn    0Ch
0x424499: test    esi, esi
0x42449B: jnz     short loc_4244D8
0x42449D: push    1Ch; Size
0x42449F: call    FormHeapAlloc
0x4244A4: add     esp, 4
0x4244A7: mov     [esp+1Ch+arg_0], eax
0x4244AB: test    eax, eax
0x4244AD: mov     [esp+1Ch+var_4], esi
0x4244B1: jz      short loc_4244C2
0x4244B3: mov     ecx, [esp+1Ch+a2]
0x4244B7: push    ecx
0x4244B8: push    ebx
0x4244B9: mov     ecx, eax; this
0x4244BB: call    ??0ExtraCellCanopyShadowMask@@QAE@XZ; ExtraCellCanopyShadowMask::ExtraCellCanopyShadowMask(void)
0x4244C0: jmp     short loc_4244C4
0x4244C2: xor     eax, eax
0x4244C4: push    eax; BSExtraData *
0x4244C5: mov     ecx, edi; ExtraDataList *
0x4244C7: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4244CF: mov     esi, eax
0x4244D1: call    BaseExtraList_AddExtra
0x4244D6: jmp     short loc_4244E8
0x4244D8: mov     edx, [esp+1Ch+a2]
0x4244DC: push    edx; a2
0x4244DD: lea     ecx, [esi+10h]; this
0x4244E0: mov     [esi+0Ch], ebx
0x4244E3: call    NiSmartPointer_Set??
0x4244E8: mov     eax, [esp+1Ch+arg_8]
0x4244EC: add     esi, 14h
0x4244EF: mov     [eax], esi
0x4244F1: mov     ecx, [esp+1Ch+var_C]
0x4244F5: mov     large fs:0, ecx
0x4244FC: pop     ecx
0x4244FD: pop     edi
0x4244FE: pop     esi
0x4244FF: pop     ebx
0x424500: add     esp, 0Ch
0x424503: retn    0Ch
