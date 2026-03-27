0x4B8550: push    0FFFFFFFFh
0x4B8552: push    offset ??0TESObjectDOOR@@QAE@XZ_SEH
0x4B8557: mov     eax, large fs:0
0x4B855D: push    eax
0x4B855E: push    ecx
0x4B855F: push    ebx
0x4B8560: push    ebp
0x4B8561: push    esi
0x4B8562: push    edi
0x4B8563: mov     eax, ds:0B30AACh
0x4B8568: xor     eax, esp
0x4B856A: push    eax
0x4B856B: lea     eax, [esp+24h+var_C]
0x4B856F: mov     large fs:0, eax
0x4B8575: mov     esi, ecx
0x4B8577: mov     [esp+24h+var_10], esi
0x4B857B: call    TESBoundAnimObject_constr
0x4B8580: xor     ebx, ebx
0x4B8582: mov     dword ptr [esi+24h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B8589: mov     [esp+24h+var_4], ebx
0x4B858D: mov     [esi+28h], ebx
0x4B8590: mov     [esi+2Ch], bx
0x4B8594: mov     [esi+2Eh], bx
0x4B8598: lea     edi, [esi+30h]
0x4B859B: mov     ecx, edi; this
0x4B859D: mov     byte ptr [esp+24h+var_4], 1
0x4B85A2: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B85A7: lea     ebp, [esi+48h]
0x4B85AA: mov     ecx, ebp
0x4B85AC: mov     byte ptr [esp+24h+var_4], 2
0x4B85B1: call    TESScriptableForm_constr
0x4B85B6: mov     dword ptr [esi], offset ??_7TESObjectDOOR@@6BTESObjectDOOR@@@; const TESObjectDOOR::`vftable'{for `TESObjectDOOR'}
0x4B85BC: mov     dword ptr [esi+24h], offset ??_7TESObjectDOOR@@6BTESFullName@@@; const TESObjectDOOR::`vftable'{for `TESFullName'}
0x4B85C3: mov     dword ptr [edi], offset ??_7TESObjectDOOR@@6BTESModel@@@; const TESObjectDOOR::`vftable'{for `TESModel'}
0x4B85C9: mov     dword ptr [ebp+0], offset ??_7TESObjectDOOR@@6BTESScriptableForm@@@; const TESObjectDOOR::`vftable'{for `TESScriptableForm'}
0x4B85D0: mov     [esi+68h], ebx
0x4B85D3: mov     [esi+6Ch], ebx
0x4B85D6: mov     ecx, esi; this
0x4B85D8: mov     byte ptr [esi+4], 18h
0x4B85DC: mov     [esi+58h], ebx
0x4B85DF: mov     [esi+5Ch], ebx
0x4B85E2: mov     [esi+60h], ebx
0x4B85E5: mov     [esi+64h], bl
0x4B85E8: call    j_TESForm_InitializeComponents
0x4B85ED: mov     eax, esi
0x4B85EF: mov     ecx, [esp+24h+var_C]
0x4B85F3: mov     large fs:0, ecx
0x4B85FA: pop     ecx
0x4B85FB: pop     edi
0x4B85FC: pop     esi
0x4B85FD: pop     ebp
0x4B85FE: pop     ebx
0x4B85FF: add     esp, 10h
0x4B8602: retn
