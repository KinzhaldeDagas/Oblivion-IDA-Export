0x423590: push    0FFFFFFFFh
0x423592: push    offset SEH_787830
0x423597: mov     eax, large fs:0
0x42359D: push    eax
0x42359E: push    ebx
0x42359F: push    esi
0x4235A0: push    edi
0x4235A1: mov     eax, ___security_cookie
0x4235A6: xor     eax, esp
0x4235A8: push    eax
0x4235A9: lea     eax, [esp+1Ch+var_C]
0x4235AD: mov     large fs:0, eax
0x4235B3: mov     edi, ecx
0x4235B5: push    33h ; '3'; a2
0x4235B7: call    BaseExtraList_GetExtraData
0x4235BC: mov     ebx, [esp+1Ch+arg_0]
0x4235C0: mov     esi, eax
0x4235C2: test    esi, esi
0x4235C4: jz      short loc_423607
0x4235C6: test    ebx, ebx
0x4235C8: jnz     short loc_4235EB
0x4235CA: push    1
0x4235CC: push    esi
0x4235CD: mov     ecx, edi
0x4235CF: call    BaseExtraList_RemoveExtraByPtr
0x4235D4: xor     eax, eax
0x4235D6: mov     ecx, [esp+1Ch+var_C]
0x4235DA: mov     large fs:0, ecx
0x4235E1: pop     ecx
0x4235E2: pop     edi
0x4235E3: pop     esi
0x4235E4: pop     ebx
0x4235E5: add     esp, 0Ch
0x4235E8: retn    4
0x4235EB: mov     edi, [esi+0Ch]
0x4235EE: test    edi, edi
0x4235F0: jz      short loc_423602
0x4235F2: mov     ecx, edi; this
0x4235F4: call    TESFullName_Initialize
0x4235F9: push    edi
0x4235FA: call    FormHeapFree
0x4235FF: add     esp, 4
0x423602: mov     [esi+0Ch], ebx
0x423605: jmp     short loc_423643
0x423607: test    ebx, ebx
0x423609: jz      short loc_423645
0x42360B: push    10h; Size
0x42360D: call    FormHeapAlloc
0x423612: add     esp, 4
0x423615: mov     [esp+1Ch+arg_0], eax
0x423619: test    eax, eax
0x42361B: mov     [esp+1Ch+var_4], 0
0x423623: jz      short loc_423631
0x423625: push    ebx
0x423626: mov     ecx, eax; this
0x423628: call    ??0ExtraMapMarker@@QAE@XZ; ExtraMapMarker::ExtraMapMarker(void)
0x42362D: mov     esi, eax
0x42362F: jmp     short loc_423633
0x423631: xor     esi, esi
0x423633: push    esi; BSExtraData *
0x423634: mov     ecx, edi; ExtraDataList *
0x423636: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42363E: call    BaseExtraList_AddExtra
0x423643: mov     eax, esi
0x423645: mov     ecx, [esp+1Ch+var_C]
0x423649: mov     large fs:0, ecx
0x423650: pop     ecx
0x423651: pop     edi
0x423652: pop     esi
0x423653: pop     ebx
0x423654: add     esp, 0Ch
0x423657: retn    4
