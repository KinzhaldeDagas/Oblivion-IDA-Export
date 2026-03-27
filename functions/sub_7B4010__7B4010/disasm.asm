0x7B4010: sub     esp, 14h
0x7B4013: push    ebx
0x7B4014: push    ebp
0x7B4015: mov     ebp, [esp+1Ch+arg_18]
0x7B4019: push    esi
0x7B401A: movzx   eax, bp
0x7B401D: add     ds:0B42D60h, eax
0x7B4023: push    edi
0x7B4024: xor     edi, edi
0x7B4026: xor     ebx, ebx
0x7B4028: cmp     bp, di
0x7B402B: jbe     loc_7B40D4
0x7B4031: mov     ecx, [esp+24h+arg_8]
0x7B4035: mov     eax, [esp+24h+arg_0]
0x7B4039: push    ecx
0x7B403A: mov     ecx, [esp+28h+arg_C]
0x7B403E: lea     edx, [esp+28h+arg_18]
0x7B4042: push    edx
0x7B4043: push    eax
0x7B4044: push    ecx
0x7B4045: mov     [esp+34h+arg_18], edi
0x7B4049: call    sub_7B3BE0
0x7B404E: add     esp, 10h
0x7B4051: cmp     [esp+24h+arg_18], edi
0x7B4055: movzx   eax, ax
0x7B4058: jz      loc_7B413F
0x7B405E: movzx   eax, ax
0x7B4061: cmp     eax, edi
0x7B4063: mov     [esp+24h+var_14], eax
0x7B4067: jle     short loc_7B40C0
0x7B4069: mov     eax, [esp+24h+arg_10]
0x7B406D: lea     edx, [ebx+ebx*2]
0x7B4070: lea     esi, [eax+edx*4+8]
0x7B4074: test    bp, bp
0x7B4077: jbe     short loc_7B40C0
0x7B4079: fld     dword ptr [esi-8]
0x7B407C: mov     edx, [esp+24h+arg_4]
0x7B4080: mov     ecx, [esp+24h+arg_14]
0x7B4084: fstp    [esp+24h+var_10]
0x7B4088: fld     dword ptr [esi-4]
0x7B408B: push    edx
0x7B408C: fstp    [esp+28h+var_C]
0x7B4090: lea     eax, [esp+28h+var_10]
0x7B4094: fld     dword ptr [esi]
0x7B4096: push    eax
0x7B4097: fstp    [esp+2Ch+var_8]
0x7B409B: fld     dword ptr [ecx+ebx*4]
0x7B409E: mov     ecx, [esp+2Ch+arg_18]
0x7B40A2: fstp    [esp+2Ch+var_4]
0x7B40A6: call    sub_812510
0x7B40AB: add     edi, 1
0x7B40AE: add     ebp, 0FFFFh
0x7B40B4: add     ebx, 1
0x7B40B7: add     esi, 0Ch
0x7B40BA: cmp     edi, [esp+24h+var_14]
0x7B40BE: jl      short loc_7B4074
0x7B40C0: mov     ecx, [esp+24h+arg_18]
0x7B40C4: call    sub_802AE0
0x7B40C9: xor     edi, edi
0x7B40CB: cmp     bp, di
0x7B40CE: ja      loc_7B4031
0x7B40D4: mov     ecx, [esp+24h+arg_8]
0x7B40D8: mov     edx, [ecx]
0x7B40DA: mov     eax, [edx+78h]
0x7B40DD: call    eax
0x7B40DF: mov     edx, [esp+24h+arg_C]
0x7B40E3: mov     eax, [edx+8]
0x7B40E6: lea     ecx, [esp+24h+arg_18]
0x7B40EA: push    ecx
0x7B40EB: push    eax
0x7B40EC: mov     ecx, offset off_B2C33C
0x7B40F1: mov     [esp+2Ch+arg_18], edi
0x7B40F5: call    NiTMap_GetAt
0x7B40FA: mov     esi, [esp+24h+arg_18]
0x7B40FE: mov     eax, [esi+24h]
0x7B4101: cmp     eax, edi
0x7B4103: jz      short loc_7B4132
0x7B4105: mov     ebx, [esp+24h+arg_4]
0x7B4109: cmp     ebx, [eax+8]
0x7B410C: lea     ecx, [eax+8]
0x7B410F: mov     edx, eax
0x7B4111: mov     eax, [eax]
0x7B4113: jz      short loc_7B412E
0x7B4115: cmp     eax, edi
0x7B4117: jnz     short loc_7B4105
0x7B4119: lea     ecx, [esp+24h+arg_4]
0x7B411D: push    ecx
0x7B411E: lea     ecx, [esi+20h]
0x7B4121: call    sub_5B1E20
0x7B4126: pop     edi
0x7B4127: pop     esi
0x7B4128: pop     ebp
0x7B4129: pop     ebx
0x7B412A: add     esp, 14h
0x7B412D: retn
0x7B412E: cmp     edx, edi
0x7B4130: jnz     short loc_7B413F
0x7B4132: lea     ecx, [esp+24h+arg_4]
0x7B4136: push    ecx
0x7B4137: lea     ecx, [esi+20h]
0x7B413A: call    sub_5B1E20
0x7B413F: pop     edi
0x7B4140: pop     esi
0x7B4141: pop     ebp
0x7B4142: pop     ebx
0x7B4143: add     esp, 14h
0x7B4146: retn
