0x6D2150: push    0FFFFFFFFh
0x6D2152: push    offset SEH_8C8970
0x6D2157: mov     eax, large fs:0
0x6D215D: push    eax
0x6D215E: push    ecx
0x6D215F: push    esi
0x6D2160: push    edi
0x6D2161: mov     eax, ds:0B30AACh
0x6D2166: xor     eax, esp
0x6D2168: push    eax
0x6D2169: lea     eax, [esp+1Ch+var_C]
0x6D216D: mov     large fs:0, eax
0x6D2173: mov     edi, ecx
0x6D2175: push    5Ch ; '\'; Size
0x6D2177: call    FormHeapAlloc
0x6D217C: add     esp, 4
0x6D217F: mov     [esp+1Ch+var_10], eax
0x6D2183: xor     esi, esi
0x6D2185: cmp     eax, esi
0x6D2187: mov     [esp+1Ch+var_4], esi
0x6D218B: jz      short loc_6D2196
0x6D218D: mov     ecx, eax; this
0x6D218F: call    ??0NiFlipController@@QAE@XZ; NiFlipController::NiFlipController(void)
0x6D2194: mov     esi, eax
0x6D2196: mov     eax, [esp+1Ch+arg_0]
0x6D219A: push    eax
0x6D219B: push    esi
0x6D219C: mov     ecx, edi
0x6D219E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D21A6: call    sub_6D1C80
0x6D21AB: mov     eax, esi
0x6D21AD: mov     ecx, [esp+1Ch+var_C]
0x6D21B1: mov     large fs:0, ecx
0x6D21B8: pop     ecx
0x6D21B9: pop     edi
0x6D21BA: pop     esi
0x6D21BB: add     esp, 10h
0x6D21BE: retn    4
