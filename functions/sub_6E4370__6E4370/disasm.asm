0x6E4370: push    0FFFFFFFFh
0x6E4372: push    offset SEH_6E3250
0x6E4377: mov     eax, large fs:0
0x6E437D: push    eax
0x6E437E: push    esi
0x6E437F: push    edi
0x6E4380: mov     eax, ds:0B30AACh
0x6E4385: xor     eax, esp
0x6E4387: push    eax
0x6E4388: lea     eax, [esp+18h+var_C]
0x6E438C: mov     large fs:0, eax
0x6E4392: mov     edi, ecx
0x6E4394: mov     esi, [esp+18h+arg_0]
0x6E4398: push    esi
0x6E4399: call    sub_75E480
0x6E439E: cmp     dword ptr [esi+0D8h], 0A010068h
0x6E43A8: jnb     short loc_6E43F5
0x6E43AA: mov     ecx, esi
0x6E43AC: call    sub_7124A0
0x6E43B1: push    24h ; '$'; Size
0x6E43B3: mov     esi, eax
0x6E43B5: call    FormHeapAlloc
0x6E43BA: add     esp, 4
0x6E43BD: mov     [esp+18h+arg_0], eax
0x6E43C1: test    eax, eax
0x6E43C3: mov     [esp+18h+var_4], 0
0x6E43CB: jz      short loc_6E43D7
0x6E43CD: push    esi
0x6E43CE: mov     ecx, eax
0x6E43D0: call    sub_6E3860
0x6E43D5: jmp     short loc_6E43D9
0x6E43D7: xor     eax, eax
0x6E43D9: lea     esi, [edi+3Ch]
0x6E43DC: push    eax; a2
0x6E43DD: mov     ecx, esi; this
0x6E43DF: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6E43E7: call    NiSmartPointer_Set??
0x6E43EC: mov     ecx, [esi]
0x6E43EE: mov     eax, [ecx]
0x6E43F0: mov     edx, [eax+7Ch]
0x6E43F3: call    edx
0x6E43F5: mov     ecx, [esp+18h+var_C]
0x6E43F9: mov     large fs:0, ecx
0x6E4400: pop     ecx
0x6E4401: pop     edi
0x6E4402: pop     esi
0x6E4403: add     esp, 0Ch
0x6E4406: retn    4
