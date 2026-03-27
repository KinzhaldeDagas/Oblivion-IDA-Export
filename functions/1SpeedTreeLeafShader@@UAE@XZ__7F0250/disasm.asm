0x7F0250: push    0FFFFFFFFh
0x7F0252: push    offset ??1SpeedTreeLeafShader@@UAE@XZ_SEH
0x7F0257: mov     eax, large fs:0
0x7F025D: push    eax
0x7F025E: push    ecx
0x7F025F: push    ebx
0x7F0260: push    ebp
0x7F0261: push    esi
0x7F0262: push    edi
0x7F0263: mov     eax, ds:0B30AACh
0x7F0268: xor     eax, esp
0x7F026A: push    eax
0x7F026B: lea     eax, [esp+24h+var_C]
0x7F026F: mov     large fs:0, eax
0x7F0275: mov     ebp, ecx
0x7F0277: mov     [esp+24h+var_10], ebp
0x7F027B: mov     dword ptr [ebp+0], offset ??_7SpeedTreeLeafShader@@6B@; const SpeedTreeLeafShader::`vftable'
0x7F0282: mov     [esp+24h+var_4], 3
0x7F028A: lea     edi, [ebp+37Ch]
0x7F0290: mov     ebx, 4
0x7F0295: mov     esi, [edi]
0x7F0297: test    esi, esi
0x7F0299: jz      short loc_7F02BD
0x7F029B: lea     eax, [esi+4]
0x7F029E: push    eax; lpAddend
0x7F029F: call    dword ptr ds:0A2807Ch
0x7F02A5: test    eax, eax
0x7F02A7: jnz     short loc_7F02B7
0x7F02A9: test    esi, esi
0x7F02AB: jz      short loc_7F02B7
0x7F02AD: mov     edx, [esi]
0x7F02AF: mov     eax, [edx]
0x7F02B1: push    1
0x7F02B3: mov     ecx, esi
0x7F02B5: call    eax
0x7F02B7: mov     dword ptr [edi], 0
0x7F02BD: add     edi, 4
0x7F02C0: sub     ebx, 1
0x7F02C3: jnz     short loc_7F0295
0x7F02C5: lea     edi, [ebp+38Ch]
0x7F02CB: mov     ebx, 2
0x7F02D0: mov     esi, [edi]
0x7F02D2: test    esi, esi
0x7F02D4: jz      short loc_7F02F8
0x7F02D6: lea     ecx, [esi+4]
0x7F02D9: push    ecx; lpAddend
0x7F02DA: call    dword ptr ds:0A2807Ch
0x7F02E0: test    eax, eax
0x7F02E2: jnz     short loc_7F02F2
0x7F02E4: test    esi, esi
0x7F02E6: jz      short loc_7F02F2
0x7F02E8: mov     edx, [esi]
0x7F02EA: mov     eax, [edx]
0x7F02EC: push    1
0x7F02EE: mov     ecx, esi
0x7F02F0: call    eax
0x7F02F2: mov     dword ptr [edi], 0
0x7F02F8: add     edi, 4
0x7F02FB: sub     ebx, 1
0x7F02FE: jnz     short loc_7F02D0
0x7F0300: mov     ecx, [ebp+394h]
0x7F0306: or      esi, 0FFFFFFFFh
0x7F0309: test    ecx, ecx
0x7F030B: mov     byte ptr [esp+24h+var_4], 2
0x7F0310: jz      short loc_7F031C
0x7F0312: add     [ecx+60h], esi
0x7F0315: jnz     short loc_7F031C
0x7F0317: call    sub_7604D0
0x7F031C: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7F0321: push    2; int
0x7F0323: push    4; unsigned int
0x7F0325: lea     eax, [ebp+38Ch]
0x7F032B: push    eax; void *
0x7F032C: mov     byte ptr [esp+34h+var_4], 1
0x7F0331: call    $LN21
0x7F0336: push    offset sub_7016A0; void (__thiscall *)(void *)
0x7F033B: push    4; int
0x7F033D: push    4; unsigned int
0x7F033F: lea     eax, [ebp+37Ch]
0x7F0345: push    eax; void *
0x7F0346: mov     byte ptr [esp+34h+var_4], 0
0x7F034B: call    $LN21
0x7F0350: mov     ecx, ebp; this
0x7F0352: mov     [esp+24h+var_4], esi
0x7F0356: call    ??1BSShader@@UAE@XZ; BSShader::~BSShader(void)
0x7F035B: mov     ecx, [esp+24h+var_C]
0x7F035F: mov     large fs:0, ecx
0x7F0366: pop     ecx
0x7F0367: pop     edi
0x7F0368: pop     esi
0x7F0369: pop     ebp
0x7F036A: pop     ebx
0x7F036B: add     esp, 10h
0x7F036E: retn
