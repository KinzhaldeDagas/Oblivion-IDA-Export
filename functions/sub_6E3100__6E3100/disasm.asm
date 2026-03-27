0x6E3100: push    esi
0x6E3101: mov     esi, [esp+4+arg_0]
0x6E3105: test    esi, esi
0x6E3107: push    edi
0x6E3108: mov     edi, ecx
0x6E310A: jnz     short loc_6E3110
0x6E310C: xor     eax, eax
0x6E310E: jmp     short loc_6E3136
0x6E3110: mov     eax, [esi]
0x6E3112: mov     edx, [eax+4]
0x6E3115: mov     ecx, esi
0x6E3117: call    edx
0x6E3119: test    eax, eax
0x6E311B: jz      short loc_6E312E
0x6E311D: lea     ecx, [ecx+0]
0x6E3120: cmp     eax, offset dword_B3CFBC
0x6E3125: jz      short loc_6E314C
0x6E3127: mov     eax, [eax+4]
0x6E312A: test    eax, eax
0x6E312C: jnz     short loc_6E3120
0x6E312E: xor     al, al
0x6E3130: neg     al
0x6E3132: sbb     eax, eax
0x6E3134: and     eax, esi
0x6E3136: mov     ecx, [edi+44h]
0x6E3139: fld     dword ptr [ecx+0Ch]
0x6E313C: push    ecx
0x6E313D: mov     ecx, eax
0x6E313F: fstp    [esp+0Ch+var_C]; float
0x6E3142: call    sub_6D2B70
0x6E3147: pop     edi
0x6E3148: pop     esi
0x6E3149: retn    8
0x6E314C: mov     al, 1
0x6E314E: jmp     short loc_6E3130
