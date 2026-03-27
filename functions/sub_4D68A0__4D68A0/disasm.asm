0x4D68A0: push    ebp
0x4D68A1: mov     ebp, esp
0x4D68A3: and     esp, 0FFFFFFF0h
0x4D68A6: sub     esp, 20h
0x4D68A9: mov     eax, ds:0B30AACh
0x4D68AE: xor     eax, esp
0x4D68B0: mov     [esp+20h+var_4], eax
0x4D68B4: mov     ecx, [ebp+arg_4]
0x4D68B7: movaps  xmm0, xmmword ptr [ecx]
0x4D68BA: mov     eax, [ebp+arg_0]
0x4D68BD: movss   [esp+20h+var_14], xmm0
0x4D68C3: fld     [esp+20h+var_14]
0x4D68C7: fstp    dword ptr [eax]
0x4D68C9: movaps  xmm0, xmmword ptr [ecx]
0x4D68CC: shufps  xmm0, xmm0, 55h ; 'U'
0x4D68D0: movss   [esp+20h+var_14], xmm0
0x4D68D6: fld     [esp+20h+var_14]
0x4D68DA: fstp    dword ptr [eax+4]
0x4D68DD: movaps  xmm0, xmmword ptr [ecx]
0x4D68E0: mov     ecx, [esp+20h+var_4]
0x4D68E4: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x4D68E8: movss   [esp+20h+var_14], xmm0
0x4D68EE: fld     [esp+20h+var_14]
0x4D68F2: xor     ecx, esp
0x4D68F4: fstp    dword ptr [eax+8]
0x4D68F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D68FC: mov     esp, ebp
0x4D68FE: pop     ebp
0x4D68FF: retn
