0x6E31D0: push    0FFFFFFFFh
0x6E31D2: push    offset SEH_8C8970
0x6E31D7: mov     eax, large fs:0
0x6E31DD: push    eax
0x6E31DE: push    ecx
0x6E31DF: push    esi
0x6E31E0: push    edi
0x6E31E1: mov     eax, ds:0B30AACh
0x6E31E6: xor     eax, esp
0x6E31E8: push    eax
0x6E31E9: lea     eax, [esp+1Ch+var_C]
0x6E31ED: mov     large fs:0, eax
0x6E31F3: mov     edi, ecx
0x6E31F5: push    48h ; 'H'; Size
0x6E31F7: call    FormHeapAlloc
0x6E31FC: mov     esi, eax
0x6E31FE: add     esp, 4
0x6E3201: mov     [esp+1Ch+var_10], esi
0x6E3205: test    esi, esi
0x6E3207: mov     [esp+1Ch+var_4], 0
0x6E320F: jz      short loc_6E3220
0x6E3211: mov     ecx, esi; this
0x6E3213: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E3218: mov     dword ptr [esi], offset ??_7NiFloatExtraDataController@@6B@; const NiFloatExtraDataController::`vftable'
0x6E321E: jmp     short loc_6E3222
0x6E3220: xor     esi, esi
0x6E3222: mov     eax, [esp+1Ch+arg_0]
0x6E3226: push    eax
0x6E3227: push    esi
0x6E3228: mov     ecx, edi
0x6E322A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E3232: call    sub_75E410
0x6E3237: mov     eax, esi
0x6E3239: mov     ecx, [esp+1Ch+var_C]
0x6E323D: mov     large fs:0, ecx
0x6E3244: pop     ecx
0x6E3245: pop     edi
0x6E3246: pop     esi
0x6E3247: add     esp, 10h
0x6E324A: retn    4
