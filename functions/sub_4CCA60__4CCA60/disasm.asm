0x4CCA60: push    0FFFFFFFFh
0x4CCA62: push    offset SEH_6D7780
0x4CCA67: mov     eax, large fs:0
0x4CCA6D: push    eax
0x4CCA6E: sub     esp, 8
0x4CCA71: push    ebx
0x4CCA72: push    ebp
0x4CCA73: push    esi
0x4CCA74: push    edi
0x4CCA75: mov     eax, ds:0B30AACh
0x4CCA7A: xor     eax, esp
0x4CCA7C: push    eax
0x4CCA7D: lea     eax, [esp+28h+var_C]
0x4CCA81: mov     large fs:0, eax
0x4CCA87: mov     ebx, ecx
0x4CCA89: lea     esi, [ebx+28h]
0x4CCA8C: push    0Dh; a2
0x4CCA8E: mov     ecx, esi; this
0x4CCA90: mov     [esp+2Ch+var_10], esi
0x4CCA94: call    BaseExtraList_GetExtraData
0x4CCA99: mov     ebp, eax
0x4CCA9B: test    ebp, ebp
0x4CCA9D: jnz     loc_4CCB5E
0x4CCAA3: cmp     [esp+28h+arg_0], al
0x4CCAA7: jz      loc_4CCB7F
0x4CCAAD: push    10h; Size
0x4CCAAF: call    FormHeapAlloc
0x4CCAB4: add     esp, 4
0x4CCAB7: mov     [esp+28h+var_14], eax
0x4CCABB: test    eax, eax
0x4CCABD: mov     [esp+28h+var_4], ebp
0x4CCAC1: jz      short loc_4CCACC
0x4CCAC3: mov     ecx, eax
0x4CCAC5: call    ExtraProcessMiddleLow_Constructor
0x4CCACA: jmp     short loc_4CCACE
0x4CCACC: xor     eax, eax
0x4CCACE: push    eax; BSExtraData *
0x4CCACF: mov     ecx, esi; ExtraDataList *
0x4CCAD1: mov     [esp+2Ch+var_14], eax
0x4CCAD5: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4CCADD: mov     ebp, eax
0x4CCADF: call    BaseExtraList_AddExtra
0x4CCAE4: push    ebx; a2
0x4CCAE5: mov     ecx, offset stru_B35C80; this
0x4CCAEA: call    sub_496EA0
0x4CCAEF: lea     esi, [ebx+48h]
0x4CCAF2: test    esi, esi
0x4CCAF4: jz      short loc_4CCB48
0x4CCAF6: mov     eax, [esi]
0x4CCAF8: test    eax, eax
0x4CCAFA: jz      short loc_4CCB48
0x4CCAFC: push    0; int
0x4CCAFE: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x4CCB03: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4CCB08: push    0; int
0x4CCB0A: push    eax; void *
0x4CCB0B: call    OblivionDynamicCast
0x4CCB10: mov     esi, [esi+4]
0x4CCB13: mov     edi, eax
0x4CCB15: add     esp, 14h
0x4CCB18: test    edi, edi
0x4CCB1A: jz      short loc_4CCB44
0x4CCB1C: mov     eax, [edi+8]
0x4CCB1F: shr     eax, 0Bh
0x4CCB22: test    al, 1
0x4CCB24: jnz     short loc_4CCB44
0x4CCB26: cmp     dword ptr [edi+58h], 0
0x4CCB2A: jz      short loc_4CCB44
0x4CCB2C: mov     ecx, edi; this
0x4CCB2E: call    Actor__GetProcessLevel
0x4CCB33: cmp     eax, 3
0x4CCB36: jnz     short loc_4CCB44
0x4CCB38: mov     edx, [edi]
0x4CCB3A: mov     eax, [edx+1ACh]
0x4CCB40: mov     ecx, edi
0x4CCB42: call    eax
0x4CCB44: test    esi, esi
0x4CCB46: jnz     short loc_4CCAF6
0x4CCB48: push    ebx; a2
0x4CCB49: mov     ecx, offset stru_B35C80; this
0x4CCB4E: call    sub_496F50
0x4CCB53: cmp     [esp+28h+var_14], 0
0x4CCB58: jz      short loc_4CCB7F
0x4CCB5A: mov     esi, [esp+28h+var_10]
0x4CCB5E: cmp     [esp+28h+arg_0], 0
0x4CCB63: jz      short loc_4CCB6B
0x4CCB65: add     dword ptr [ebp+0Ch], 1
0x4CCB69: jmp     short loc_4CCB6F
0x4CCB6B: add     dword ptr [ebp+0Ch], 0FFFFFFFFh
0x4CCB6F: cmp     dword ptr [ebp+0Ch], 0
0x4CCB73: jnz     short loc_4CCB7F
0x4CCB75: push    1
0x4CCB77: push    ebp
0x4CCB78: mov     ecx, esi
0x4CCB7A: call    BaseExtraList_RemoveExtraByPtr
0x4CCB7F: mov     ecx, [esp+28h+var_C]
0x4CCB83: mov     large fs:0, ecx
0x4CCB8A: pop     ecx
0x4CCB8B: pop     edi
0x4CCB8C: pop     esi
0x4CCB8D: pop     ebp
0x4CCB8E: pop     ebx
0x4CCB8F: add     esp, 14h
0x4CCB92: retn    4
