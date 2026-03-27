0x85BD60: push    0FFFFFFFFh
0x85BD62: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x85BD67: mov     eax, large fs:0
0x85BD6D: push    eax
0x85BD6E: push    ecx
0x85BD6F: push    ebp
0x85BD70: push    esi
0x85BD71: push    edi
0x85BD72: mov     eax, ds:0B30AACh
0x85BD77: xor     eax, esp
0x85BD79: push    eax
0x85BD7A: lea     eax, [esp+20h+var_C]
0x85BD7E: mov     large fs:0, eax
0x85BD84: mov     ebp, ecx
0x85BD86: mov     eax, [ebp+34h]
0x85BD89: test    eax, eax
0x85BD8B: jnz     loc_85BE2D
0x85BD91: cmp     [ebp+70h], al
0x85BD94: jz      short loc_85BD9D
0x85BD96: mov     esi, 198h
0x85BD9B: jmp     short loc_85BDBE
0x85BD9D: cmp     byte ptr ds:0B47844h, 0
0x85BDA4: jz      short loc_85BDAD
0x85BDA6: mov     esi, 19Ah
0x85BDAB: jmp     short loc_85BDBE
0x85BDAD: mov     al, [ebp+71h]
0x85BDB0: neg     al
0x85BDB2: sbb     eax, eax
0x85BDB4: and     eax, 0FFFFFFE3h
0x85BDB7: add     eax, 199h
0x85BDBC: mov     esi, eax
0x85BDBE: push    10h; Size
0x85BDC0: call    FormHeapAlloc
0x85BDC5: add     esp, 4
0x85BDC8: mov     [esp+20h+var_10], eax
0x85BDCC: test    eax, eax
0x85BDCE: mov     [esp+20h+var_4], 0
0x85BDD6: jz      short loc_85BDF1
0x85BDD8: mov     ecx, [esp+20h+arg_0]
0x85BDDC: push    0
0x85BDDE: push    0
0x85BDE0: push    1
0x85BDE2: push    esi
0x85BDE3: push    ecx
0x85BDE4: push    eax
0x85BDE5: call    sub_7E2370
0x85BDEA: add     esp, 18h
0x85BDED: mov     edi, eax
0x85BDEF: jmp     short loc_85BDF3
0x85BDF1: xor     edi, edi
0x85BDF3: mov     edx, [ebp+28h]
0x85BDF6: mov     eax, [edx+4]
0x85BDF9: lea     esi, [ebp+28h]
0x85BDFC: mov     ecx, esi
0x85BDFE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x85BE06: call    eax
0x85BE08: mov     [eax+8], edi
0x85BE0B: mov     dword ptr [eax+4], 0
0x85BE12: mov     ecx, [esi+4]
0x85BE15: mov     [eax], ecx
0x85BE17: mov     ecx, [esi+4]
0x85BE1A: test    ecx, ecx
0x85BE1C: jz      short loc_85BE23
0x85BE1E: mov     [ecx+4], eax
0x85BE21: jmp     short loc_85BE26
0x85BE23: mov     [esi+8], eax
0x85BE26: add     dword ptr [esi+0Ch], 1
0x85BE2A: mov     [esi+4], eax
0x85BE2D: lea     eax, [ebp+28h]
0x85BE30: mov     ecx, [esp+20h+var_C]
0x85BE34: mov     large fs:0, ecx
0x85BE3B: pop     ecx
0x85BE3C: pop     edi
0x85BE3D: pop     esi
0x85BE3E: pop     ebp
0x85BE3F: add     esp, 10h
0x85BE42: retn    10h
