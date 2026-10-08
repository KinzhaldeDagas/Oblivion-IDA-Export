0x5200F0: push    0FFFFFFFFh
0x5200F2: push    offset ??0TESHair@@QAE@XZ_SEH
0x5200F7: mov     eax, large fs:0
0x5200FD: push    eax
0x5200FE: push    ecx
0x5200FF: push    ebx
0x520100: push    ebp
0x520101: push    esi
0x520102: push    edi
0x520103: mov     eax, ds:0B30AACh
0x520108: xor     eax, esp
0x52010A: push    eax
0x52010B: lea     eax, [esp+24h+var_C]
0x52010F: mov     large fs:0, eax
0x520115: mov     esi, ecx
0x520117: mov     [esp+24h+var_10], esi
0x52011B: call    TESForm_constr
0x520120: xor     ebx, ebx
0x520122: mov     dword ptr [esi+18h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x520129: mov     [esp+24h+var_4], ebx
0x52012D: mov     [esi+1Ch], ebx
0x520130: mov     [esi+20h], bx
0x520134: mov     [esi+22h], bx
0x520138: lea     edi, [esi+24h]
0x52013B: mov     ecx, edi; this
0x52013D: mov     byte ptr [esp+24h+var_4], 1
0x520142: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x520147: lea     ebp, [esi+3Ch]
0x52014A: mov     ecx, ebp
0x52014C: mov     byte ptr [esp+24h+var_4], 2
0x520151: call    TESTexture_constr
0x520156: mov     ecx, esi; this
0x520158: mov     byte ptr [esp+24h+var_4], 3
0x52015D: mov     dword ptr [esi], offset ??_7TESHair@@6BTESHair@@@; const TESHair::`vftable'{for `TESHair'}
0x520163: mov     dword ptr [esi+18h], offset ??_7TESHair@@6BTESFullName@@@; const TESHair::`vftable'{for `TESFullName'}
0x52016A: mov     dword ptr [edi], offset ??_7TESHair@@6BTESModel@@@; const TESHair::`vftable'{for `TESModel'}
0x520170: mov     dword ptr [ebp+0], offset ??_7TESHair@@6BTESTexture@@@; const TESHair::`vftable'{for `TESTexture'}
0x520177: mov     byte ptr [esi+4], 7
0x52017B: mov     [esi+48h], bl
0x52017E: call    j_TESForm_InitializeComponents
0x520183: mov     eax, esi
0x520185: mov     ecx, [esp+24h+var_C]
0x520189: mov     large fs:0, ecx
0x520190: pop     ecx
0x520191: pop     edi
0x520192: pop     esi
0x520193: pop     ebp
0x520194: pop     ebx
0x520195: add     esp, 10h
0x520198: retn
0x9B7D40: mov     ecx, [ebp-10h]; this
0x9B7D43: jmp     TESForm_destr
0x9B7D48: mov     ecx, [ebp-10h]
0x9B7D4B: add     ecx, 18h
0x9B7D4E: jmp     TESFullName_Initialize
0x9B7D53: mov     ecx, [ebp-10h]
0x9B7D56: add     ecx, 24h ; '$'; this
0x9B7D59: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B7D5E: mov     ecx, [ebp-10h]
0x9B7D61: add     ecx, 3Ch ; '<'; void *
0x9B7D64: jmp     TESTexture_destr
0x9B7D69: mov     edx, [esp+arg_4]
0x9B7D6D: lea     eax, [edx-14h]
0x9B7D70: mov     ecx, [edx-18h]
0x9B7D73: xor     ecx, eax
0x9B7D75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7D7A: mov     eax, offset stru_AE25C0
0x9B7D7F: jmp     ___CxxFrameHandler3
