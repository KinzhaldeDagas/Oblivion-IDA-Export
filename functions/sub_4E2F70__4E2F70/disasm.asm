0x4E2F70: sub     esp, 10h
0x4E2F73: push    ebx
0x4E2F74: push    ebp
0x4E2F75: push    esi
0x4E2F76: mov     esi, ecx
0x4E2F78: mov     ebp, [esi+3Ch]
0x4E2F7B: push    edi
0x4E2F7C: xor     ebx, ebx
0x4E2F7E: xor     edi, edi
0x4E2F80: test    ebp, ebp
0x4E2F82: mov     [esp+20h+var_4], esi
0x4E2F86: mov     [esp+20h+var_C], ebx
0x4E2F8A: jz      loc_4E30C5
0x4E2F90: cmp     [ebp+0B6h], bx
0x4E2F97: jbe     loc_4E30C5
0x4E2F9D: mov     eax, [ebp+0B0h]
0x4E2FA3: mov     eax, [eax]
0x4E2FA5: test    eax, eax
0x4E2FA7: jz      loc_4E30C5
0x4E2FAD: cmp     [eax+0Ch], ebx
0x4E2FB0: jz      loc_4E30C5
0x4E2FB6: mov     eax, [eax+0Ch]
0x4E2FB9: push    eax
0x4E2FBA: push    offset stru_B3CAC0
0x4E2FBF: call    NiRTTI_Cast
0x4E2FC4: mov     edi, eax
0x4E2FC6: add     esp, 8
0x4E2FC9: test    edi, edi
0x4E2FCB: jz      loc_4E30C5
0x4E2FD1: lea     ecx, [esi+44h]
0x4E2FD4: call    sub_420FD0
0x4E2FD9: mov     edx, eax
0x4E2FDB: test    edx, edx
0x4E2FDD: mov     [esp+20h+var_8], edx
0x4E2FE1: jz      loc_4E30C5
0x4E2FE7: movzx   ecx, word ptr [edi+46h]
0x4E2FEB: xor     eax, eax
0x4E2FED: test    ecx, ecx
0x4E2FEF: jbe     loc_4E30C5
0x4E2FF5: mov     ecx, [edi+40h]
0x4E2FF8: mov     [esp+20h+var_10], ecx
0x4E2FFC: lea     esp, [esp+0]
0x4E3000: mov     ecx, [esp+20h+var_10]
0x4E3004: mov     esi, [ecx]
0x4E3006: test    esi, esi
0x4E3008: jz      short loc_4E3041
0x4E300A: mov     ecx, [esi+8]
0x4E300D: lea     ecx, [ecx+0]
0x4E3010: mov     bl, [ecx]
0x4E3012: cmp     bl, [edx]
0x4E3014: jnz     short loc_4E3030
0x4E3016: test    bl, bl
0x4E3018: jz      short loc_4E302C
0x4E301A: mov     bl, [ecx+1]
0x4E301D: cmp     bl, [edx+1]
0x4E3020: jnz     short loc_4E3030
0x4E3022: add     ecx, 2
0x4E3025: add     edx, 2
0x4E3028: test    bl, bl
0x4E302A: jnz     short loc_4E3010
0x4E302C: xor     ecx, ecx
0x4E302E: jmp     short loc_4E3035
0x4E3030: sbb     ecx, ecx
0x4E3032: sbb     ecx, 0FFFFFFFFh
0x4E3035: test    ecx, ecx
0x4E3037: jz      short loc_4E3053
0x4E3039: mov     ebx, [esp+20h+var_C]
0x4E303D: mov     edx, [esp+20h+var_8]
0x4E3041: movzx   ecx, word ptr [edi+46h]
0x4E3045: add     [esp+20h+var_10], 4
0x4E304A: add     eax, 1
0x4E304D: cmp     eax, ecx
0x4E304F: jb      short loc_4E3000
0x4E3051: jmp     short loc_4E30C5
0x4E3053: fldz
0x4E3055: push    ecx
0x4E3056: mov     ecx, edi
0x4E3058: fstp    [esp+24h+var_24]; float
0x4E305B: call    sub_4715C0
0x4E3060: or      word ptr [edi+8], 8
0x4E3065: cmp     dword ptr [esi+44h], 0
0x4E3069: mov     [esp+20h+var_C], esi
0x4E306D: jnz     short loc_4E308C
0x4E306F: fldz
0x4E3071: push    0; int
0x4E3073: push    0; int
0x4E3075: sub     esp, 8
0x4E3078: fstp    [esp+30h+var_2C]; float
0x4E307C: mov     ecx, esi
0x4E307E: fld1
0x4E3080: fstp    [esp+30h+var_30]; float
0x4E3083: push    0; char
0x4E3085: push    0; int
0x4E3087: call    sub_6C9BA0
0x4E308C: fld     dword ptr [esi+30h]
0x4E308F: push    1; a3
0x4E3091: fstp    dword ptr [esi+48h]
0x4E3094: push    ecx
0x4E3095: fld     dword ptr [esi+30h]
0x4E3098: mov     ecx, ebp; this
0x4E309A: fstp    [esp+28h+a2]; a2
0x4E309D: call    NiAVObject_UpdateNiAVObject
0x4E30A2: mov     ecx, [esp+20h+var_4]
0x4E30A6: push    esi
0x4E30A7: call    sub_4E0D90
0x4E30AC: fldz
0x4E30AE: push    0; char
0x4E30B0: push    ecx
0x4E30B1: mov     ecx, esi
0x4E30B3: fstp    [esp+28h+a2]; float
0x4E30B6: call    sub_6C9CB0
0x4E30BB: and     word ptr [edi+8], 0FFF7h
0x4E30C1: mov     ebx, [esp+20h+var_C]
0x4E30C5: cmp     [esp+20h+arg_0], 0
0x4E30CA: jnz     short loc_4E314B
0x4E30CC: test    edi, edi
0x4E30CE: jz      short loc_4E30DD
0x4E30D0: fldz
0x4E30D2: push    ecx
0x4E30D3: mov     ecx, edi
0x4E30D5: fstp    [esp+24h+var_24]; float
0x4E30D8: call    sub_4715C0
0x4E30DD: fld     dword ptr ds:0A30634h
0x4E30E3: push    ecx
0x4E30E4: fstp    [esp+24h+var_24]; float
0x4E30E7: push    ebp; int
0x4E30E8: push    edi; int
0x4E30E9: call    sub_4DA8F0
0x4E30EE: add     esp, 0Ch
0x4E30F1: test    ebp, ebp
0x4E30F3: jz      short loc_4E30FC
0x4E30F5: mov     esi, [ebp+0Ch]
0x4E30F8: test    esi, esi
0x4E30FA: jnz     short loc_4E3100
0x4E30FC: xor     esi, esi
0x4E30FE: jmp     short loc_4E3137
0x4E3100: mov     edx, [esi]
0x4E3102: mov     eax, [edx+4]
0x4E3105: mov     ecx, esi
0x4E3107: call    eax
0x4E3109: test    eax, eax
0x4E310B: jz      short loc_4E311E
0x4E310D: lea     ecx, [ecx+0]
0x4E3110: cmp     eax, offset stru_B3CAC0
0x4E3115: jz      short loc_4E3170
0x4E3117: mov     eax, [eax+4]
0x4E311A: test    eax, eax
0x4E311C: jnz     short loc_4E3110
0x4E311E: xor     al, al
0x4E3120: neg     al
0x4E3122: sbb     eax, eax
0x4E3124: and     eax, esi
0x4E3126: mov     esi, eax
0x4E3128: jz      short loc_4E3137
0x4E312A: fldz
0x4E312C: push    ecx
0x4E312D: mov     ecx, esi
0x4E312F: fstp    [esp+24h+var_24]; float
0x4E3132: call    sub_4715C0
0x4E3137: fld     dword ptr ds:0A30634h
0x4E313D: push    ecx
0x4E313E: fstp    [esp+24h+var_24]; float
0x4E3141: push    ebp; int
0x4E3142: push    esi; int
0x4E3143: call    sub_4DA8F0
0x4E3148: add     esp, 0Ch
0x4E314B: test    ebx, ebx
0x4E314D: jz      short loc_4E31CA
0x4E314F: push    ebp
0x4E3150: call    sub_480820
0x4E3155: add     esp, 4
0x4E3158: test    al, al
0x4E315A: jz      short loc_4E31CA
0x4E315C: cmp     dword ptr [ebx+44h], 0
0x4E3160: jnz     short loc_4E31CA
0x4E3162: cmp     word ptr [ebp+0B6h], 0
0x4E316A: ja      short loc_4E3174
0x4E316C: xor     eax, eax
0x4E316E: jmp     short loc_4E317C
0x4E3170: mov     al, 1
0x4E3172: jmp     short loc_4E3120
0x4E3174: mov     ecx, [ebp+0B0h]
0x4E317A: mov     eax, [ecx]
0x4E317C: mov     eax, [eax+0Ch]
0x4E317F: push    eax
0x4E3180: push    offset stru_B3CAC0
0x4E3185: call    NiRTTI_Cast
0x4E318A: fldz
0x4E318C: add     esp, 8
0x4E318F: push    0; int
0x4E3191: push    0; int
0x4E3193: sub     esp, 8
0x4E3196: fstp    [esp+30h+var_2C]; float
0x4E319A: mov     ecx, ebx
0x4E319C: fld1
0x4E319E: mov     esi, eax
0x4E31A0: fstp    [esp+30h+var_30]; float
0x4E31A3: push    0; char
0x4E31A5: push    0; int
0x4E31A7: call    sub_6C9BA0
0x4E31AC: or      word ptr [esi+8], 8
0x4E31B1: fld     dword ptr [ebx+30h]
0x4E31B4: push    1; a3
0x4E31B6: push    ecx
0x4E31B7: mov     ecx, ebp; this
0x4E31B9: fstp    [esp+28h+a2]; a2
0x4E31BC: call    NiAVObject_UpdateNiAVObject
0x4E31C1: push    ebp
0x4E31C2: call    sub_480930
0x4E31C7: add     esp, 4
0x4E31CA: pop     edi
0x4E31CB: pop     esi
0x4E31CC: pop     ebp
0x4E31CD: pop     ebx
0x4E31CE: add     esp, 10h
0x4E31D1: retn    4
