0x8BE190: push    ebp
0x8BE191: mov     ebp, esp
0x8BE193: and     esp, 0FFFFFFF0h
0x8BE196: sub     esp, 34h
0x8BE199: mov     eax, ds:0B30AACh
0x8BE19E: xor     eax, esp
0x8BE1A0: mov     [esp+34h+var_4], eax
0x8BE1A4: push    ebx
0x8BE1A5: push    esi
0x8BE1A6: push    edi
0x8BE1A7: mov     edi, [ebp+arg_0]
0x8BE1AA: push    edi
0x8BE1AB: mov     esi, ecx
0x8BE1AD: call    sub_89FD10
0x8BE1B2: test    esi, esi
0x8BE1B4: jz      short loc_8BE1CF
0x8BE1B6: mov     eax, [esi+8]
0x8BE1B9: test    eax, eax
0x8BE1BB: jz      short loc_8BE1CF
0x8BE1BD: movaps  xmm0, xmmword ptr [eax+20h]
0x8BE1C1: movaps  [esp+40h+var_30], xmm0
0x8BE1C6: movaps  xmm0, xmmword ptr [eax+30h]
0x8BE1CA: movaps  [esp+40h+var_20], xmm0
0x8BE1CF: lea     eax, [esp+40h+var_30]
0x8BE1D3: lea     ebx, [edi+10h]
0x8BE1D6: push    eax
0x8BE1D7: mov     ecx, ebx
0x8BE1D9: call    sub_47DCD0
0x8BE1DE: lea     ecx, [esp+40h+var_20]
0x8BE1E2: push    ecx
0x8BE1E3: mov     ecx, ebx
0x8BE1E5: call    sub_47DCD0
0x8BE1EA: fldz
0x8BE1EC: test    esi, esi
0x8BE1EE: jz      short loc_8BE200
0x8BE1F0: mov     eax, [esi+8]
0x8BE1F3: test    eax, eax
0x8BE1F5: jz      short loc_8BE200
0x8BE1F7: fld     dword ptr [eax+40h]
0x8BE1FA: fstp    [esp+40h+var_34]
0x8BE1FE: jmp     short loc_8BE204
0x8BE200: fst     [esp+40h+var_34]
0x8BE204: test    esi, esi
0x8BE206: fld     [esp+40h+var_34]
0x8BE20A: fstp    dword ptr [edi+30h]
0x8BE20D: jz      short loc_8BE21B
0x8BE20F: mov     esi, [esi+8]
0x8BE212: test    esi, esi
0x8BE214: jz      short loc_8BE21B
0x8BE216: fstp    st
0x8BE218: fld     dword ptr [esi+44h]
0x8BE21B: mov     ecx, [esp+40h+var_4]
0x8BE21F: fstp    [esp+40h+var_34]
0x8BE223: fld     [esp+40h+var_34]
0x8BE227: fstp    dword ptr [edi+34h]
0x8BE22A: pop     edi
0x8BE22B: pop     esi
0x8BE22C: pop     ebx
0x8BE22D: xor     ecx, esp
0x8BE22F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BE234: mov     esp, ebp
0x8BE236: pop     ebp
0x8BE237: retn    4
