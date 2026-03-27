0x6E42F0: push    0FFFFFFFFh
0x6E42F2: push    offset SEH_8C8970
0x6E42F7: mov     eax, large fs:0
0x6E42FD: push    eax
0x6E42FE: push    ecx
0x6E42FF: push    esi
0x6E4300: push    edi
0x6E4301: mov     eax, ds:0B30AACh
0x6E4306: xor     eax, esp
0x6E4308: push    eax
0x6E4309: lea     eax, [esp+1Ch+var_C]
0x6E430D: mov     large fs:0, eax
0x6E4313: mov     edi, ecx
0x6E4315: push    48h ; 'H'; Size
0x6E4317: call    FormHeapAlloc
0x6E431C: mov     esi, eax
0x6E431E: add     esp, 4
0x6E4321: mov     [esp+1Ch+var_10], esi
0x6E4325: test    esi, esi
0x6E4327: mov     [esp+1Ch+var_4], 0
0x6E432F: jz      short loc_6E4340
0x6E4331: mov     ecx, esi; this
0x6E4333: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E4338: mov     dword ptr [esi], offset ??_7NiColorExtraDataController@@6B@; const NiColorExtraDataController::`vftable'
0x6E433E: jmp     short loc_6E4342
0x6E4340: xor     esi, esi
0x6E4342: mov     eax, [esp+1Ch+arg_0]
0x6E4346: push    eax
0x6E4347: push    esi
0x6E4348: mov     ecx, edi
0x6E434A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E4352: call    sub_75E410
0x6E4357: mov     eax, esi
0x6E4359: mov     ecx, [esp+1Ch+var_C]
0x6E435D: mov     large fs:0, ecx
0x6E4364: pop     ecx
0x6E4365: pop     edi
0x6E4366: pop     esi
0x6E4367: add     esp, 10h
0x6E436A: retn    4
