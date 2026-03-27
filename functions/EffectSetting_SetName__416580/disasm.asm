0x416580: sub     esp, 8
0x416583: push    ebx
0x416584: push    esi
0x416585: push    edi
0x416586: lea     eax, [esp+14h+var_8]
0x41658A: push    eax
0x41658B: mov     ebx, ecx
0x41658D: call    EffectSetting_GetName
0x416592: mov     esi, [esp+14h+Str2]
0x416596: test    esi, esi
0x416598: jz      short loc_4165AE
0x41659A: mov     eax, [eax]
0x41659C: test    eax, eax
0x41659E: jz      short loc_4165AE
0x4165A0: push    esi; Str2
0x4165A1: push    eax; Str1
0x4165A2: call    __strcmp
0x4165A7: add     esp, 8
0x4165AA: mov     edi, eax
0x4165AC: jmp     short loc_4165BB
0x4165AE: xor     ecx, ecx
0x4165B0: test    esi, esi
0x4165B2: setz    cl
0x4165B5: lea     ecx, [ecx+ecx-1]
0x4165B9: mov     edi, ecx
0x4165BB: mov     edx, [esp+14h+var_8.m_data]
0x4165BF: push    edx
0x4165C0: call    FormHeapFree
0x4165C5: add     esp, 4
0x4165C8: test    edi, edi
0x4165CA: jz      short loc_4165D7
0x4165CC: push    0; a3
0x4165CE: push    esi; a2
0x4165CF: lea     ecx, [ebx+3Ch]; this
0x4165D2: call    BSStringT_Set
0x4165D7: pop     edi
0x4165D8: pop     esi
0x4165D9: pop     ebx
0x4165DA: add     esp, 8
0x4165DD: retn    4
