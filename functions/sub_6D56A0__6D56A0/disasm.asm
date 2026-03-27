0x6D56A0: push    0FFFFFFFFh
0x6D56A2: push    offset SEH_8C8970
0x6D56A7: mov     eax, large fs:0
0x6D56AD: push    eax
0x6D56AE: push    ecx
0x6D56AF: push    ebx
0x6D56B0: push    esi
0x6D56B1: mov     eax, ds:0B30AACh
0x6D56B6: xor     eax, esp
0x6D56B8: push    eax
0x6D56B9: lea     eax, [esp+1Ch+var_C]
0x6D56BD: mov     large fs:0, eax
0x6D56C3: push    58h ; 'X'; Size
0x6D56C5: call    FormHeapAlloc
0x6D56CA: mov     esi, eax
0x6D56CC: add     esp, 4
0x6D56CF: mov     [esp+1Ch+var_10], esi
0x6D56D3: xor     ebx, ebx
0x6D56D5: cmp     esi, ebx
0x6D56D7: mov     [esp+1Ch+var_4], ebx
0x6D56DB: jz      short loc_6D5714
0x6D56DD: mov     ecx, esi; this
0x6D56DF: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6D56E4: mov     dword ptr [esi], offset ??_7NiUVController@@6B@; const NiUVController::`vftable'
0x6D56EA: mov     [esi+50h], ebx
0x6D56ED: mov     [esi+4Ch], bx
0x6D56F1: mov     [esi+3Ch], ebx
0x6D56F4: mov     [esi+44h], ebx
0x6D56F7: mov     [esi+40h], ebx
0x6D56FA: mov     [esi+48h], ebx
0x6D56FD: mov     [esi+54h], bl
0x6D5700: mov     eax, esi
0x6D5702: mov     ecx, [esp+1Ch+var_C]
0x6D5706: mov     large fs:0, ecx
0x6D570D: pop     ecx
0x6D570E: pop     esi
0x6D570F: pop     ebx
0x6D5710: add     esp, 10h
0x6D5713: retn
0x6D5714: xor     eax, eax
0x6D5716: mov     ecx, [esp+1Ch+var_C]
0x6D571A: mov     large fs:0, ecx
0x6D5721: pop     ecx
0x6D5722: pop     esi
0x6D5723: pop     ebx
0x6D5724: add     esp, 10h
0x6D5727: retn
