0x738460: sub     esp, 804h
0x738466: mov     eax, ds:0B30AACh
0x73846B: xor     eax, esp
0x73846D: mov     [esp+804h+var_4], eax
0x738474: cmp     dword ptr ds:0B40120h, 0
0x73847B: jz      short loc_7384DC
0x73847D: mov     ecx, [esp+804h+Format]
0x738484: lea     eax, [esp+804h+ArgList]
0x73848B: push    eax; Format
0x73848C: push    ecx; Format
0x73848D: lea     edx, [esp+80Ch+DstBuf]
0x738491: push    800h; SizeInBytes
0x738496: push    edx; DstBuf
0x738497: call    _vsprintf_s
0x73849C: mov     eax, ds:0B40120h
0x7384A1: add     esp, 10h
0x7384A4: cmp     dword ptr [eax+10h], 0
0x7384A8: jz      short loc_7384DC
0x7384AA: mov     ecx, [esp+804h+arg_4]
0x7384B1: mov     edx, [esp+804h+arg_0]
0x7384B8: push    ecx
0x7384B9: push    edx
0x7384BA: mov     edx, [eax+10h]
0x7384BD: lea     ecx, [esp+80Ch+DstBuf]
0x7384C1: push    ecx
0x7384C2: call    edx
0x7384C4: add     esp, 0Ch
0x7384C7: mov     ecx, [esp+804h+var_4]
0x7384CE: xor     ecx, esp
0x7384D0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7384D5: add     esp, 804h
0x7384DB: retn
0x7384DC: mov     ecx, [esp+804h+var_4]
0x7384E3: xor     ecx, esp
0x7384E5: xor     eax, eax
0x7384E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7384EC: add     esp, 804h
0x7384F2: retn
