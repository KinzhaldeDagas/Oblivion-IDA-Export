0x8B2F00: push    ebp
0x8B2F01: mov     ebp, esp
0x8B2F03: and     esp, 0FFFFFFF0h
0x8B2F06: sub     esp, 0A4h
0x8B2F0C: push    ebx
0x8B2F0D: push    esi
0x8B2F0E: push    edi
0x8B2F0F: mov     edi, ecx
0x8B2F11: lea     ecx, [esp+0B0h+var_90]
0x8B2F15: call    sub_8B2D60
0x8B2F1A: mov     esi, [ebp+arg_4]
0x8B2F1D: test    esi, esi
0x8B2F1F: mov     ebx, [ebp+arg_0]
0x8B2F22: jnz     short loc_8B2F43
0x8B2F24: mov     eax, [ebx+21Ch]
0x8B2F2A: mov     edx, [eax+4]
0x8B2F2D: push    0
0x8B2F2F: push    0
0x8B2F31: lea     esi, [esp+0B8h+var_90]
0x8B2F35: push    90h
0x8B2F3A: mov     ecx, esi
0x8B2F3C: push    ecx
0x8B2F3D: push    eax
0x8B2F3E: call    edx
0x8B2F40: add     esp, 14h
0x8B2F43: push    esi
0x8B2F44: push    ebx
0x8B2F45: mov     ecx, edi
0x8B2F47: call    sub_8A01F0
0x8B2F4C: fld     dword ptr [esi+14h]
0x8B2F4F: fstp    [esp+0B0h+var_94]
0x8B2F53: mov     eax, [edi+4]
0x8B2F56: fld     dword ptr [esi+18h]
0x8B2F59: fstp    [esp+0B0h+var_9C]
0x8B2F5D: fld     dword ptr [esi+1Ch]
0x8B2F60: fstp    [esp+0B0h+var_98]
0x8B2F64: fld     dword ptr [esi+10h]
0x8B2F67: fstp    dword ptr [eax+20h]
0x8B2F6A: fld     [esp+0B0h+var_94]
0x8B2F6E: fstp    dword ptr [eax+24h]
0x8B2F71: fld     [esp+0B0h+var_9C]
0x8B2F75: fstp    dword ptr [eax+28h]
0x8B2F78: fld     [esp+0B0h+var_98]
0x8B2F7C: fstp    dword ptr [eax+2Ch]
0x8B2F7F: fld     dword ptr [esi+34h]
0x8B2F82: fstp    [esp+0B0h+var_98]
0x8B2F86: fld     dword ptr [esi+38h]
0x8B2F89: fstp    [esp+0B0h+var_9C]
0x8B2F8D: fld     dword ptr [esi+3Ch]
0x8B2F90: fstp    [esp+0B0h+var_94]
0x8B2F94: fld     dword ptr [esi+30h]
0x8B2F97: fstp    dword ptr [eax+30h]
0x8B2F9A: fld     [esp+0B0h+var_98]
0x8B2F9E: fstp    dword ptr [eax+34h]
0x8B2FA1: fld     [esp+0B0h+var_9C]
0x8B2FA5: fstp    dword ptr [eax+38h]
0x8B2FA8: fld     [esp+0B0h+var_94]
0x8B2FAC: fstp    dword ptr [eax+3Ch]
0x8B2FAF: fld     dword ptr [esi+54h]
0x8B2FB2: fstp    [esp+0B0h+var_98]
0x8B2FB6: fld     dword ptr [esi+58h]
0x8B2FB9: fstp    [esp+0B0h+var_9C]
0x8B2FBD: fld     dword ptr [esi+5Ch]
0x8B2FC0: fstp    [esp+0B0h+var_94]
0x8B2FC4: fld     dword ptr [esi+50h]
0x8B2FC7: fstp    dword ptr [eax+40h]
0x8B2FCA: fld     [esp+0B0h+var_98]
0x8B2FCE: fstp    dword ptr [eax+44h]
0x8B2FD1: fld     [esp+0B0h+var_9C]
0x8B2FD5: fstp    dword ptr [eax+48h]
0x8B2FD8: fld     [esp+0B0h+var_94]
0x8B2FDC: fstp    dword ptr [eax+4Ch]
0x8B2FDF: fld     dword ptr [esi+64h]
0x8B2FE2: fstp    [esp+0B0h+var_98]
0x8B2FE6: fld     dword ptr [esi+68h]
0x8B2FE9: fstp    [esp+0B0h+var_9C]
0x8B2FED: fld     dword ptr [esi+6Ch]
0x8B2FF0: fstp    [esp+0B0h+var_94]
0x8B2FF4: fld     dword ptr [esi+60h]
0x8B2FF7: fstp    dword ptr [eax+50h]
0x8B2FFA: fld     [esp+0B0h+var_98]
0x8B2FFE: fstp    dword ptr [eax+54h]
0x8B3001: fld     [esp+0B0h+var_9C]
0x8B3005: fstp    dword ptr [eax+58h]
0x8B3008: fld     [esp+0B0h+var_94]
0x8B300C: fstp    dword ptr [eax+5Ch]
0x8B300F: fld     dword ptr [esi+24h]
0x8B3012: fstp    [esp+0B0h+var_98]
0x8B3016: fld     dword ptr [esi+28h]
0x8B3019: fstp    [esp+0B0h+var_9C]
0x8B301D: fld     dword ptr [esi+2Ch]
0x8B3020: fstp    [esp+0B0h+var_94]
0x8B3024: fld     dword ptr [esi+20h]
0x8B3027: fstp    dword ptr [eax+60h]
0x8B302A: fld     [esp+0B0h+var_98]
0x8B302E: fstp    dword ptr [eax+64h]
0x8B3031: fld     [esp+0B0h+var_9C]
0x8B3035: fstp    dword ptr [eax+68h]
0x8B3038: fld     [esp+0B0h+var_94]
0x8B303C: fstp    dword ptr [eax+6Ch]
0x8B303F: fld     dword ptr [esi+44h]
0x8B3042: fstp    [esp+0B0h+var_98]
0x8B3046: fld     dword ptr [esi+48h]
0x8B3049: fstp    [esp+0B0h+var_9C]
0x8B304D: fld     dword ptr [esi+4Ch]
0x8B3050: fstp    [esp+0B0h+var_94]
0x8B3054: fld     dword ptr [esi+40h]
0x8B3057: pop     edi
0x8B3058: fstp    dword ptr [eax+70h]
0x8B305B: fld     [esp+0ACh+var_98]
0x8B305F: fstp    dword ptr [eax+74h]
0x8B3062: fld     [esp+0ACh+var_9C]
0x8B3066: fstp    dword ptr [eax+78h]
0x8B3069: fld     [esp+0ACh+var_94]
0x8B306D: fstp    dword ptr [eax+7Ch]
0x8B3070: fld     dword ptr [esi+74h]
0x8B3073: fstp    [esp+0ACh+var_98]
0x8B3077: fld     dword ptr [esi+78h]
0x8B307A: fstp    [esp+0ACh+var_9C]
0x8B307E: fld     dword ptr [esi+7Ch]
0x8B3081: fstp    [esp+0ACh+var_94]
0x8B3085: fld     dword ptr [esi+70h]
0x8B3088: fstp    dword ptr [eax+80h]
0x8B308E: fld     [esp+0ACh+var_98]
0x8B3092: fstp    dword ptr [eax+84h]
0x8B3098: fld     [esp+0ACh+var_9C]
0x8B309C: fstp    dword ptr [eax+88h]
0x8B30A2: fld     [esp+0ACh+var_94]
0x8B30A6: fstp    dword ptr [eax+8Ch]
0x8B30AC: fld     dword ptr [esi+80h]
0x8B30B2: fstp    dword ptr [eax+0Ch]
0x8B30B5: fld     dword ptr [esi+84h]
0x8B30BB: fstp    dword ptr [eax+10h]
0x8B30BE: fld     dword ptr [esi+88h]
0x8B30C4: pop     esi
0x8B30C5: fstp    dword ptr [eax+14h]
0x8B30C8: pop     ebx
0x8B30C9: mov     esp, ebp
0x8B30CB: pop     ebp
0x8B30CC: retn    8
