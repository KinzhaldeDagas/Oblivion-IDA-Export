0x8C3150: push    ebp
0x8C3151: mov     ebp, esp
0x8C3153: and     esp, 0FFFFFFF0h
0x8C3156: sub     esp, 64h
0x8C3159: mov     eax, ds:0B30AACh
0x8C315E: xor     eax, esp
0x8C3160: mov     [esp+64h+var_4], eax
0x8C3164: fldz
0x8C3166: push    ebx
0x8C3167: fst     [esp+68h+var_50]
0x8C316B: push    esi
0x8C316C: mov     esi, [ebp+arg_4]
0x8C316F: fst     [esp+6Ch+var_4C]
0x8C3173: fst     [esp+6Ch+var_48]
0x8C3177: mov     ebx, ecx
0x8C3179: xor     ecx, ecx
0x8C317B: fst     [esp+6Ch+var_44]
0x8C317F: cmp     esi, ecx
0x8C3181: fst     [esp+6Ch+var_40]
0x8C3185: fst     [esp+6Ch+var_3C]
0x8C3189: push    edi
0x8C318A: mov     edi, [ebp+arg_0]
0x8C318D: fst     [esp+70h+var_38]
0x8C3191: fstp    [esp+70h+var_34]
0x8C3195: mov     [esp+70h+var_60], ecx
0x8C3199: mov     [esp+70h+var_5C], ecx
0x8C319D: mov     [esp+70h+var_58], ecx
0x8C31A1: jnz     short loc_8C31BD
0x8C31A3: mov     eax, [edi+21Ch]
0x8C31A9: mov     edx, [eax+4]
0x8C31AC: push    ecx
0x8C31AD: push    ecx
0x8C31AE: lea     esi, [esp+78h+var_60]
0x8C31B2: push    30h ; '0'
0x8C31B4: mov     ecx, esi
0x8C31B6: push    ecx
0x8C31B7: push    eax
0x8C31B8: call    edx
0x8C31BA: add     esp, 14h
0x8C31BD: push    esi
0x8C31BE: push    edi
0x8C31BF: mov     ecx, ebx
0x8C31C1: call    sub_8A01F0
0x8C31C6: fld     dword ptr [esi+20h]
0x8C31C9: fstp    [esp+70h+var_20]
0x8C31CD: lea     eax, [esp+70h+var_20]
0x8C31D1: fld     dword ptr [esi+24h]
0x8C31D4: push    eax
0x8C31D5: fstp    [esp+74h+var_1C]
0x8C31D9: lea     ecx, [esp+74h+var_30]
0x8C31DD: fld     dword ptr [esi+28h]
0x8C31E0: push    ecx
0x8C31E1: mov     ecx, [ebx+4]
0x8C31E4: fstp    [esp+78h+var_18]
0x8C31E8: fld     dword ptr [esi+2Ch]
0x8C31EB: fstp    [esp+78h+var_14]
0x8C31EF: fld     dword ptr [esi+10h]
0x8C31F2: fstp    [esp+78h+var_30]
0x8C31F6: fld     dword ptr [esi+14h]
0x8C31F9: fstp    [esp+78h+var_2C]
0x8C31FD: fld     dword ptr [esi+18h]
0x8C3200: fstp    [esp+78h+var_28]
0x8C3204: fld     dword ptr [esi+1Ch]
0x8C3207: fstp    [esp+78h+var_24]
0x8C320B: call    sub_913C50
0x8C3210: mov     ecx, [esp+70h+var_4]
0x8C3214: pop     edi
0x8C3215: pop     esi
0x8C3216: pop     ebx
0x8C3217: xor     ecx, esp
0x8C3219: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C321E: mov     esp, ebp
0x8C3220: pop     ebp
0x8C3221: retn    8
