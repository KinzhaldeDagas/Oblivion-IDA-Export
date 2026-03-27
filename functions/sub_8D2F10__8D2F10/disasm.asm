0x8D2F10: push    ebp
0x8D2F11: mov     ebp, esp
0x8D2F13: and     esp, 0FFFFFFF0h
0x8D2F16: sub     esp, 44h
0x8D2F19: mov     eax, [ebp+arg_4]
0x8D2F1C: push    ebx
0x8D2F1D: mov     ebx, [eax+0Ch]
0x8D2F20: push    esi
0x8D2F21: mov     esi, [eax+4]
0x8D2F24: mov     ecx, [esi+50h]
0x8D2F27: push    edi
0x8D2F28: mov     edi, [eax+8]
0x8D2F2B: mov     edx, [edi+50h]
0x8D2F2E: movaps  xmm0, xmmword ptr [eax+30h]
0x8D2F32: mov     [esp+50h+var_18], ebx
0x8D2F36: mov     ebx, [ebp+arg_0]
0x8D2F39: mov     ebx, [ebx+0B0h]
0x8D2F3F: mov     [esp+50h+var_10], ebx
0x8D2F43: movzx   ebx, word ptr [eax+14h]
0x8D2F47: mov     [esp+50h+var_40], ebx
0x8D2F4B: movzx   ebx, byte ptr [eax+16h]
0x8D2F4F: fild    [esp+50h+var_40]
0x8D2F53: mov     [esp+50h+var_40], ebx
0x8D2F57: lea     ebx, [esp+50h+var_3C]
0x8D2F5B: fmul    dword ptr ds:0A9A028h
0x8D2F61: push    ebx; int
0x8D2F62: push    edx; int
0x8D2F63: mov     edx, [eax]
0x8D2F65: fstp    [esp+58h+var_20]
0x8D2F69: push    ecx; int
0x8D2F6A: fild    [esp+5Ch+var_40]
0x8D2F6E: lea     ecx, [esp+5Ch+var_30]
0x8D2F72: push    ecx; int
0x8D2F73: push    edx; float
0x8D2F74: fmul    dword ptr ds:0A9A02Ch
0x8D2F7A: add     eax, 20h ; ' '
0x8D2F7D: push    eax; int
0x8D2F7E: movaps  [esp+68h+var_30], xmm0
0x8D2F83: fstp    [esp+68h+var_1C]
0x8D2F87: mov     [esp+68h+var_14], 3DCCCCCDh
0x8D2F8F: call    sub_91F770
0x8D2F94: fld     [esp+68h+var_38]
0x8D2F98: add     esp, 18h
0x8D2F9B: fcomp   dword ptr ds:0A2FAA8h
0x8D2FA1: fnstsw  ax
0x8D2FA3: test    ah, 5
0x8D2FA6: jp      short loc_8D3018
0x8D2FA8: fld     [esp+50h+var_34]
0x8D2FAC: fcomp   dword ptr ds:0A2FAA8h
0x8D2FB2: fnstsw  ax
0x8D2FB4: test    ah, 5
0x8D2FB7: jp      short loc_8D2FE4
0x8D2FB9: mov     al, [esi+92h]
0x8D2FBF: test    al, al
0x8D2FC1: mov     eax, [ebp+arg_8]
0x8D2FC4: jnz     short loc_8D2FD1
0x8D2FC6: mov     ecx, [eax+4]
0x8D2FC9: mov     edx, [eax]
0x8D2FCB: mov     [edx+ecx*4], esi
0x8D2FCE: inc     dword ptr [eax+4]
0x8D2FD1: mov     cl, [edi+92h]
0x8D2FD7: test    cl, cl
0x8D2FD9: jnz     loc_8D309F
0x8D2FDF: jmp     loc_8D3094
0x8D2FE4: fld     [esp+50h+var_34]
0x8D2FE8: fcomp   dword ptr ds:0A2FAA8h
0x8D2FEE: fnstsw  ax
0x8D2FF0: test    ah, 1
0x8D2FF3: jnz     short loc_8D3018
0x8D2FF5: mov     al, [esi+92h]
0x8D2FFB: test    al, al
0x8D2FFD: mov     eax, [ebp+arg_8]
0x8D3000: mov     edx, [eax]
0x8D3002: mov     ecx, [eax+4]
0x8D3005: jnz     loc_8D3099
0x8D300B: mov     [edx+ecx*4], esi
0x8D300E: inc     dword ptr [eax+4]
0x8D3011: pop     edi
0x8D3012: pop     esi
0x8D3013: pop     ebx
0x8D3014: mov     esp, ebp
0x8D3016: pop     ebp
0x8D3017: retn
0x8D3018: fld     [esp+50h+var_38]
0x8D301C: fcomp   dword ptr ds:0A2FAA8h
0x8D3022: fnstsw  ax
0x8D3024: test    ah, 1
0x8D3027: jnz     short loc_8D3059
0x8D3029: fld     [esp+50h+var_34]
0x8D302D: fcomp   dword ptr ds:0A2FAA8h
0x8D3033: fnstsw  ax
0x8D3035: test    ah, 5
0x8D3038: jp      short loc_8D3059
0x8D303A: mov     al, [edi+92h]
0x8D3040: test    al, al
0x8D3042: mov     eax, [ebp+arg_8]
0x8D3045: mov     edx, [eax]
0x8D3047: mov     ecx, [eax+4]
0x8D304A: jz      short loc_8D3099
0x8D304C: mov     [edx+ecx*4], esi
0x8D304F: inc     dword ptr [eax+4]
0x8D3052: pop     edi
0x8D3053: pop     esi
0x8D3054: pop     ebx
0x8D3055: mov     esp, ebp
0x8D3057: pop     ebp
0x8D3058: retn
0x8D3059: mov     al, [esi+92h]
0x8D305F: test    al, al
0x8D3061: jnz     short loc_8D3091
0x8D3063: mov     al, [edi+92h]
0x8D3069: test    al, al
0x8D306B: jnz     short loc_8D307C
0x8D306D: fld     [esp+50h+var_38]
0x8D3071: fcomp   [esp+50h+var_34]
0x8D3075: fnstsw  ax
0x8D3077: test    ah, 41h
0x8D307A: jz      short loc_8D3091
0x8D307C: mov     eax, [ebp+arg_8]
0x8D307F: mov     ecx, [eax+4]
0x8D3082: mov     edx, [eax]
0x8D3084: mov     [edx+ecx*4], esi
0x8D3087: inc     dword ptr [eax+4]
0x8D308A: pop     edi
0x8D308B: pop     esi
0x8D308C: pop     ebx
0x8D308D: mov     esp, ebp
0x8D308F: pop     ebp
0x8D3090: retn
0x8D3091: mov     eax, [ebp+arg_8]
0x8D3094: mov     edx, [eax]
0x8D3096: mov     ecx, [eax+4]
0x8D3099: mov     [edx+ecx*4], edi
0x8D309C: inc     dword ptr [eax+4]
0x8D309F: pop     edi
0x8D30A0: pop     esi
0x8D30A1: pop     ebx
0x8D30A2: mov     esp, ebp
0x8D30A4: pop     ebp
0x8D30A5: retn
