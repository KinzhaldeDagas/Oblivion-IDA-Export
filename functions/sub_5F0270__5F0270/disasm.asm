0x5F0270: sub     esp, 1Ch
0x5F0273: push    ebx
0x5F0274: push    esi
0x5F0275: push    edi
0x5F0276: mov     esi, ecx
0x5F0278: mov     bl, 1
0x5F027A: call    MobileObject_GetCharProxy
0x5F027F: mov     edi, eax
0x5F0281: test    edi, edi
0x5F0283: jz      short loc_5F02F8
0x5F0285: mov     ecx, [esi+3Ch]
0x5F0288: test    ecx, ecx
0x5F028A: jz      short loc_5F02F8
0x5F028C: mov     eax, [ecx]
0x5F028E: mov     edx, [eax+58h]
0x5F0291: push    offset aBip01Nonaccum; "Bip01 NonAccum"
0x5F0296: call    edx
0x5F0298: test    eax, eax
0x5F029A: jz      short loc_5F02F8
0x5F029C: mov     ecx, [eax+88h]
0x5F02A2: mov     edx, [eax+8Ch]
0x5F02A8: mov     eax, [eax+90h]
0x5F02AE: mov     [esp+28h+var_18], ecx
0x5F02B2: lea     ecx, [esp+28h+var_C]
0x5F02B6: push    ecx
0x5F02B7: mov     ecx, edi
0x5F02B9: mov     [esp+2Ch+var_14], edx
0x5F02BD: mov     dword ptr [esp+2Ch+var_10], eax
0x5F02C1: call    sub_5E1500
0x5F02C6: fld     dword ptr [esp+28h+var_10]
0x5F02CA: fsub    [esp+28h+var_4]
0x5F02CE: fstp    [esp+28h+var_1C]
0x5F02D2: fld     [esp+28h+var_1C]
0x5F02D6: fld     [esp+28h+arg_0]
0x5F02DA: fcompp
0x5F02DC: fnstsw  ax
0x5F02DE: test    bl, ah
0x5F02E0: jnz     short loc_5F02ED
0x5F02E2: pop     edi
0x5F02E3: pop     esi
0x5F02E4: mov     al, bl
0x5F02E6: pop     ebx
0x5F02E7: add     esp, 1Ch
0x5F02EA: retn    4
0x5F02ED: pop     edi
0x5F02EE: pop     esi
0x5F02EF: xor     al, al
0x5F02F1: pop     ebx
0x5F02F2: add     esp, 1Ch
0x5F02F5: retn    4
0x5F02F8: pop     edi
0x5F02F9: pop     esi
0x5F02FA: mov     al, bl
0x5F02FC: pop     ebx
0x5F02FD: add     esp, 1Ch
0x5F0300: retn    4
