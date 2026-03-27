0x8B9050: push    ebp
0x8B9051: mov     ebp, esp
0x8B9053: and     esp, 0FFFFFFF0h
0x8B9056: sub     esp, 28h
0x8B9059: mov     eax, ds:0B30AACh
0x8B905E: xor     eax, esp
0x8B9060: mov     [esp+28h+var_4], eax
0x8B9064: push    esi
0x8B9065: push    edi
0x8B9066: mov     edi, [ebp+arg_0]
0x8B9069: push    edi
0x8B906A: mov     esi, ecx
0x8B906C: call    sub_8A3030
0x8B9071: test    esi, esi
0x8B9073: jz      short loc_8B909E
0x8B9075: mov     eax, [esi+8]
0x8B9078: test    eax, eax
0x8B907A: jz      short loc_8B909E
0x8B907C: mov     eax, [eax+50h]
0x8B907F: add     esi, 30h ; '0'
0x8B9082: push    esi
0x8B9083: add     eax, 10h
0x8B9086: push    eax
0x8B9087: lea     ecx, [esp+38h+var_20]
0x8B908B: call    sub_88FE00
0x8B9090: movaps  xmm0, xmmword ptr [edi]
0x8B9093: movaps  xmm1, [esp+30h+var_20]
0x8B9098: subps   xmm0, xmm1
0x8B909B: movaps  xmmword ptr [edi], xmm0
0x8B909E: mov     ecx, [esp+30h+var_4]
0x8B90A2: mov     eax, edi
0x8B90A4: pop     edi
0x8B90A5: pop     esi
0x8B90A6: xor     ecx, esp
0x8B90A8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B90AD: mov     esp, ebp
0x8B90AF: pop     ebp
0x8B90B0: retn    4
