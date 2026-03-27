0x6D9280: push    0FFFFFFFFh
0x6D9282: push    offset SEH_8C8970
0x6D9287: mov     eax, large fs:0
0x6D928D: push    eax
0x6D928E: push    ecx
0x6D928F: push    ebx
0x6D9290: push    esi
0x6D9291: mov     eax, ds:0B30AACh
0x6D9296: xor     eax, esp
0x6D9298: push    eax
0x6D9299: lea     eax, [esp+1Ch+var_C]
0x6D929D: mov     large fs:0, eax
0x6D92A3: mov     ebx, ecx
0x6D92A5: push    44h ; 'D'; Size
0x6D92A7: call    FormHeapAlloc
0x6D92AC: mov     esi, eax
0x6D92AE: add     esp, 4
0x6D92B1: mov     [esp+1Ch+var_10], esi
0x6D92B5: test    esi, esi
0x6D92B7: mov     [esp+1Ch+var_4], 0
0x6D92BF: jz      short loc_6D92DE
0x6D92C1: mov     ecx, esi; this
0x6D92C3: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6D92C8: mov     dword ptr [esi+40h], 0
0x6D92CF: mov     dword ptr [esi+3Ch], 0
0x6D92D6: mov     dword ptr [esi], offset ??_7NiRollController@@6B@; const NiRollController::`vftable'
0x6D92DC: jmp     short loc_6D92E0
0x6D92DE: xor     esi, esi
0x6D92E0: mov     eax, [esp+1Ch+arg_0]
0x6D92E4: push    eax
0x6D92E5: push    esi
0x6D92E6: mov     ecx, ebx
0x6D92E8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D92F0: call    sub_6EC910
0x6D92F5: mov     eax, esi
0x6D92F7: mov     ecx, [esp+1Ch+var_C]
0x6D92FB: mov     large fs:0, ecx
0x6D9302: pop     ecx
0x6D9303: pop     esi
0x6D9304: pop     ebx
0x6D9305: add     esp, 10h
0x6D9308: retn    4
