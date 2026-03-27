0x945A50: push    ebp
0x945A51: mov     ebp, esp
0x945A53: and     esp, 0FFFFFFF8h
0x945A56: sub     esp, 48h
0x945A59: mov     eax, ds:0BA94F0h
0x945A5E: mov     edx, ds:0BA94F4h
0x945A64: push    ebx
0x945A65: push    ebp
0x945A66: mov     ebx, ecx
0x945A68: mov     ecx, eax
0x945A6A: or      ecx, edx
0x945A6C: push    esi
0x945A6D: push    edi
0x945A6E: jnz     loc_945BBE
0x945A74: fld     qword ptr ds:0A47CA8h
0x945A7A: mov     [esp+58h+var_44], 0Ah
0x945A82: fstp    [esp+58h+var_40]
0x945A86: mov     edx, [ebx]
0x945A88: mov     ecx, ebx
0x945A8A: call    dword ptr [edx+8]
0x945A8D: mov     ebp, eax
0x945A8F: lea     eax, [esp+58h+PerformanceCount]
0x945A93: push    eax; lpPerformanceCount
0x945A94: mov     [esp+5Ch+var_4], edx
0x945A98: call    dword ptr ds:0A28158h
0x945A9E: mov     [esp+58h+var_48], 1
0x945AA6: mov     eax, 1388h
0x945AAB: jmp     short loc_945AB0
0x945AAD: align 10h
0x945AB0: mov     ecx, [esp+58h+var_48]
0x945AB4: mov     edx, [esp+58h+var_48]
0x945AB8: imul    ecx, edx
0x945ABB: add     ecx, [esp+58h+var_48]
0x945ABF: dec     eax
0x945AC0: mov     [esp+58h+var_48], ecx
0x945AC4: jnz     short loc_945AB0
0x945AC6: mov     eax, [ebx]
0x945AC8: mov     ecx, ebx
0x945ACA: call    dword ptr [eax+8]
0x945ACD: lea     ecx, [esp+58h+var_28]
0x945AD1: push    ecx; lpPerformanceCount
0x945AD2: mov     esi, eax
0x945AD4: mov     edi, edx
0x945AD6: call    dword ptr ds:0A28158h
0x945ADC: push    offset stru_BA94F0; lpFrequency
0x945AE1: call    dword ptr ds:0A2815Ch
0x945AE7: mov     ecx, dword ptr [esp+58h+var_28]
0x945AEB: sub     esi, ebp
0x945AED: sbb     edi, [esp+58h+var_4]
0x945AF1: mov     ebp, dword ptr [esp+58h+PerformanceCount]
0x945AF5: mov     eax, edi
0x945AF7: and     eax, 80000000h
0x945AFC: and     edi, 7FFFFFFFh
0x945B02: mov     dword ptr [esp+58h+var_30+4], eax
0x945B06: mov     eax, dword ptr [esp+58h+var_28+4]
0x945B0A: xor     edx, edx
0x945B0C: sub     ecx, ebp
0x945B0E: mov     dword ptr [esp+58h+var_38+4], edi
0x945B12: sbb     eax, dword ptr [esp+58h+PerformanceCount+4]
0x945B16: mov     dword ptr [esp+58h+var_38], esi
0x945B1A: fild    [esp+58h+var_38]
0x945B1E: mov     dword ptr [esp+58h+var_30], edx
0x945B22: fild    [esp+58h+var_30]
0x945B26: mov     dword ptr [esp+58h+var_18], ecx
0x945B2A: mov     ecx, eax
0x945B2C: and     eax, 7FFFFFFFh
0x945B31: fchs
0x945B33: and     ecx, 80000000h
0x945B39: faddp   st(1), st
0x945B3B: mov     dword ptr [esp+58h+var_18+4], eax
0x945B3F: fild    [esp+58h+var_18]
0x945B43: mov     dword ptr [esp+58h+var_10+4], ecx
0x945B47: mov     dword ptr [esp+58h+var_10], edx
0x945B4B: fild    [esp+58h+var_10]
0x945B4F: fchs
0x945B51: faddp   st(1), st
0x945B53: fdivp   st(1), st
0x945B55: fcom    [esp+58h+var_40]
0x945B59: fnstsw  ax
0x945B5B: test    ah, 5
0x945B5E: jp      short loc_945B66
0x945B60: fstp    [esp+58h+var_40]
0x945B64: jmp     short loc_945B68
0x945B66: fstp    st
0x945B68: dec     [esp+58h+var_44]
0x945B6C: jnz     loc_945A86
0x945B72: mov     eax, ds:0BA94F4h
0x945B77: mov     edx, ds:0BA94F0h
0x945B7D: mov     ecx, eax
0x945B7F: mov     dword ptr [esp+58h+var_10], edx
0x945B83: and     eax, 7FFFFFFFh
0x945B88: mov     dword ptr [esp+58h+var_10+4], eax
0x945B8C: fild    [esp+58h+var_10]
0x945B90: and     ecx, 80000000h
0x945B96: mov     dword ptr [esp+58h+var_10+4], ecx
0x945B9A: mov     dword ptr [esp+58h+var_10], 0
0x945BA2: fild    [esp+58h+var_10]
0x945BA6: fchs
0x945BA8: faddp   st(1), st
0x945BAA: fmul    [esp+58h+var_40]
0x945BAE: call    __ftol2
0x945BB3: mov     ds:0BA94F0h, eax
0x945BB8: mov     ds:0BA94F4h, edx
0x945BBE: pop     edi
0x945BBF: pop     esi
0x945BC0: pop     ebp
0x945BC1: pop     ebx
0x945BC2: mov     esp, ebp
0x945BC4: pop     ebp
0x945BC5: retn
