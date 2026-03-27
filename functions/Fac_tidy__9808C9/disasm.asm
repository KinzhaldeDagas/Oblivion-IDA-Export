0x9808C9: push    ebp
0x9808CA: mov     ebp, esp
0x9808CC: push    ecx
0x9808CD: push    0; int
0x9808CF: lea     ecx, [ebp+var_4]; this
0x9808D2: call    ??0_Lockit@std@@QAE@H@Z
0x9808D7: mov     eax, ds:0BA9B54h
0x9808DC: test    eax, eax
0x9808DE: jz      short loc_980902
0x9808E0: push    esi
0x9808E1: mov     esi, eax
0x9808E3: mov     eax, [eax]
0x9808E5: mov     ecx, esi; this
0x9808E7: mov     ds:0BA9B54h, eax
0x9808EC: call    ??1_Fac_node@std@@QAE@XZ
0x9808F1: push    esi
0x9808F2: call    FormHeapFree
0x9808F7: mov     eax, ds:0BA9B54h
0x9808FC: test    eax, eax
0x9808FE: pop     ecx
0x9808FF: jnz     short loc_9808E1
0x980901: pop     esi
0x980902: lea     ecx, [ebp+var_4]; this
0x980905: call    ??1_Lockit@std@@QAE@XZ
0x98090A: leave
0x98090B: retn
