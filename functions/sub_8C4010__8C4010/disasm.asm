0x8C4010: push    ebp
0x8C4011: mov     ebp, esp
0x8C4013: and     esp, 0FFFFFFF0h
0x8C4016: sub     esp, 44h
0x8C4019: mov     eax, ds:0B30AACh
0x8C401E: xor     eax, esp
0x8C4020: mov     [esp+44h+var_4], eax
0x8C4024: push    ebx
0x8C4025: push    esi
0x8C4026: mov     esi, [ebp+arg_0]
0x8C4029: test    esi, esi
0x8C402B: push    edi
0x8C402C: mov     ebx, ecx
0x8C402E: jz      loc_8C4119
0x8C4034: mov     ecx, ds:0BA7D98h
0x8C403A: mov     eax, [ecx]
0x8C403C: mov     edx, [eax+10h]
0x8C403F: push    24h ; '$'
0x8C4041: push    40h ; '@'
0x8C4043: call    edx
0x8C4045: mov     edi, eax
0x8C4047: mov     word ptr [edi+4], 40h ; '@'
0x8C404D: fld     dword ptr [esi+30h]
0x8C4050: fstp    dword ptr [esp+50h+var_28+8]
0x8C4054: push    edi
0x8C4055: fld     dword ptr [esi+34h]
0x8C4058: mov     ecx, ebx
0x8C405A: fstp    dword ptr [esp+54h+var_28+0Ch]
0x8C405E: fld     dword ptr [esi+38h]
0x8C4061: fstp    [esp+54h+var_18]
0x8C4065: fld     dword ptr [esi+3Ch]
0x8C4068: fstp    [esp+54h+var_14]
0x8C406C: fld     dword ptr [esi+20h]
0x8C406F: fstp    dword ptr [esp+54h+var_38+8]
0x8C4073: fld     dword ptr [esi+24h]
0x8C4076: fstp    dword ptr [esp+54h+var_38+0Ch]
0x8C407A: fld     dword ptr [esi+28h]
0x8C407D: fstp    dword ptr [esp+54h+var_28]
0x8C4081: fld     dword ptr [esi+2Ch]
0x8C4084: fstp    dword ptr [esp+54h+var_28+4]
0x8C4088: fld     dword ptr [esi+10h]
0x8C408B: fstp    dword ptr [esp+54h+var_48+8]
0x8C408F: fld     dword ptr [esi+14h]
0x8C4092: fstp    dword ptr [esp+54h+var_48+0Ch]
0x8C4096: fld     dword ptr [esi+18h]
0x8C4099: fstp    dword ptr [esp+54h+var_38]
0x8C409D: fld     dword ptr [esi+1Ch]
0x8C40A0: fstp    dword ptr [esp+54h+var_38+4]
0x8C40A4: movaps  xmm0, [esp+54h+var_48+8]
0x8C40A9: fld     dword ptr ds:0B2FFE4h
0x8C40AF: movaps  xmmword ptr [edi+10h], xmm0
0x8C40B3: movaps  xmm0, [esp+54h+var_38+8]
0x8C40B8: fstp    dword ptr [esp+54h+var_48+4]
0x8C40BC: fld     dword ptr [esp+54h+var_48+4]
0x8C40C0: movaps  xmmword ptr [edi+20h], xmm0
0x8C40C4: movaps  xmm0, [esp+54h+var_28+8]
0x8C40C9: fstp    dword ptr [edi+0Ch]
0x8C40CC: mov     word ptr [edi+6], 1
0x8C40D2: mov     dword ptr [edi+8], 0
0x8C40D9: mov     dword ptr [edi], offset ??_7hkTriangleShape@@6B@; const hkTriangleShape::`vftable'
0x8C40DF: movaps  xmmword ptr [edi+30h], xmm0
0x8C40E3: fld     dword ptr [esi+4]
0x8C40E6: fstp    dword ptr [edi+0Ch]
0x8C40E9: mov     eax, [ebx]
0x8C40EB: mov     edx, [eax+4Ch]
0x8C40EE: call    edx
0x8C40F0: cmp     word ptr [edi+4], 0
0x8C40F5: jz      short loc_8C410F
0x8C40F7: add     word ptr [edi+6], 0FFFFh
0x8C40FC: movzx   eax, word ptr [edi+6]
0x8C4100: test    ax, ax
0x8C4103: jnz     short loc_8C410F
0x8C4105: mov     eax, [edi]
0x8C4107: mov     edx, [eax]
0x8C4109: push    1
0x8C410B: mov     ecx, edi
0x8C410D: call    edx
0x8C410F: mov     eax, [ebx]
0x8C4111: mov     edx, [eax+7Ch]
0x8C4114: push    esi
0x8C4115: mov     ecx, ebx
0x8C4117: call    edx
0x8C4119: mov     ecx, [esp+50h+var_4]
0x8C411D: pop     edi
0x8C411E: pop     esi
0x8C411F: pop     ebx
0x8C4120: xor     ecx, esp
0x8C4122: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C4127: mov     esp, ebp
0x8C4129: pop     ebp
0x8C412A: retn    4
