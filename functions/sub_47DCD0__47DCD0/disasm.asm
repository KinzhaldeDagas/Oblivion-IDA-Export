0x47DCD0: push    ebp
0x47DCD1: mov     ebp, esp
0x47DCD3: and     esp, 0FFFFFFF0h
0x47DCD6: sub     esp, 20h
0x47DCD9: mov     eax, ds:0B30AACh
0x47DCDE: xor     eax, esp
0x47DCE0: mov     [esp+20h+var_4], eax
0x47DCE4: mov     eax, ecx
0x47DCE6: mov     ecx, [ebp+arg_0]
0x47DCE9: movaps  xmm0, xmmword ptr [ecx]
0x47DCEC: movss   [esp+20h+var_14], xmm0
0x47DCF2: fld     [esp+20h+var_14]
0x47DCF6: fstp    dword ptr [eax]
0x47DCF8: movaps  xmm0, xmmword ptr [ecx]
0x47DCFB: shufps  xmm0, xmm0, 55h ; 'U'
0x47DCFF: movss   [esp+20h+var_14], xmm0
0x47DD05: fld     [esp+20h+var_14]
0x47DD09: fstp    dword ptr [eax+4]
0x47DD0C: movaps  xmm0, xmmword ptr [ecx]
0x47DD0F: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x47DD13: movss   [esp+20h+var_14], xmm0
0x47DD19: fld     [esp+20h+var_14]
0x47DD1D: fstp    dword ptr [eax+8]
0x47DD20: movaps  xmm0, xmmword ptr [ecx]
0x47DD23: mov     ecx, [esp+20h+var_4]
0x47DD27: shufps  xmm0, xmm0, 0FFh
0x47DD2B: movss   [esp+20h+var_14], xmm0
0x47DD31: fld     [esp+20h+var_14]
0x47DD35: xor     ecx, esp
0x47DD37: fstp    dword ptr [eax+0Ch]
0x47DD3A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x47DD3F: mov     esp, ebp
0x47DD41: pop     ebp
0x47DD42: retn    4
