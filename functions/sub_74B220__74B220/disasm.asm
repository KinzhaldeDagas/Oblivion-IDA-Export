0x74B220: sub     esp, 18h
0x74B223: push    ebx
0x74B224: push    edi
0x74B225: mov     edi, [esp+20h+arg_4]
0x74B229: test    edi, edi
0x74B22B: mov     ebx, ecx
0x74B22D: jz      loc_74B3AD
0x74B233: mov     eax, [edi]
0x74B235: mov     edx, [eax+10h]
0x74B238: mov     ecx, edi
0x74B23A: call    edx
0x74B23C: test    eax, eax
0x74B23E: jz      loc_74B3AD
0x74B244: push    ebp
0x74B245: mov     ebp, [esp+24h+arg_0]
0x74B249: mov     eax, [ebp+8]
0x74B24C: test    eax, eax
0x74B24E: jnz     short loc_74B25B
0x74B250: pop     ebp
0x74B251: pop     edi
0x74B252: xor     al, al
0x74B254: pop     ebx
0x74B255: add     esp, 18h
0x74B258: retn    10h
0x74B25B: movzx   eax, word ptr [eax+8]
0x74B25F: push    esi
0x74B260: movzx   esi, ax
0x74B263: mov     [esp+28h+arg_0], esi
0x74B267: call    _rand
0x74B26C: mov     [esp+28h+arg_4], eax
0x74B270: lea     ecx, [esi-1]
0x74B273: fild    [esp+28h+arg_4]
0x74B277: fdiv    qword ptr ds:0A3D5A8h
0x74B27D: fstp    [esp+28h+arg_4]
0x74B281: fld     [esp+28h+arg_4]
0x74B285: fimul   [esp+28h+arg_0]
0x74B289: fnstcw  word ptr [esp+28h+arg_4]
0x74B28D: movzx   eax, word ptr [esp+28h+arg_4]
0x74B292: or      eax, 0C00h
0x74B297: mov     [esp+28h+arg_0], eax
0x74B29B: fldcw   word ptr [esp+28h+arg_0]
0x74B29F: fistp   qword ptr [esp+28h+var_18]
0x74B2A3: mov     eax, dword ptr [esp+28h+var_18]
0x74B2A7: cmp     eax, ecx
0x74B2A9: fldcw   word ptr [esp+28h+arg_4]
0x74B2AD: jl      short loc_74B2B1
0x74B2AF: mov     eax, ecx
0x74B2B1: mov     ecx, [ebp+8]
0x74B2B4: imul    eax, 2Ch ; ','
0x74B2B7: add     eax, [ecx+0Ch]
0x74B2BA: mov     esi, eax
0x74B2BC: call    _rand
0x74B2C1: mov     [esp+28h+arg_4], eax
0x74B2C5: fild    [esp+28h+arg_4]
0x74B2C9: mov     ecx, [edi+0B8h]
0x74B2CF: test    ecx, ecx
0x74B2D1: fdiv    qword ptr ds:0A3D5A8h
0x74B2D7: fstp    [esp+28h+arg_0]
0x74B2DB: jnz     short loc_74B2E9
0x74B2DD: pop     esi
0x74B2DE: pop     ebp
0x74B2DF: pop     edi
0x74B2E0: xor     al, al
0x74B2E2: pop     ebx
0x74B2E3: add     esp, 18h
0x74B2E6: retn    10h
0x74B2E9: movzx   edx, word ptr [esi+1Ch]
0x74B2ED: sub     edx, 1
0x74B2F0: mov     [esp+28h+arg_4], edx
0x74B2F4: lea     edx, [esp+28h+var_18]
0x74B2F8: fild    [esp+28h+arg_4]
0x74B2FC: fnstcw  word ptr [esp+28h+arg_4]
0x74B300: movzx   eax, word ptr [esp+28h+arg_4]
0x74B305: fmul    [esp+28h+arg_0]
0x74B309: or      eax, 0C00h
0x74B30E: mov     [esp+28h+arg_0], eax
0x74B312: fldcw   word ptr [esp+28h+arg_0]
0x74B316: fistp   qword ptr [esp+28h+var_18]
0x74B31A: mov     eax, dword ptr [esp+28h+var_18]
0x74B31E: push    eax
0x74B31F: push    esi
0x74B320: push    ecx
0x74B321: fldcw   word ptr [esp+34h+arg_4]
0x74B325: push    edi
0x74B326: lea     ecx, [esp+38h+var_C]
0x74B32A: push    ecx
0x74B32B: push    edx
0x74B32C: mov     ecx, ebx
0x74B32E: call    sub_74A390
0x74B333: mov     esi, [esp+28h+arg_8]
0x74B337: mov     eax, dword ptr [esp+28h+var_18]
0x74B33B: mov     ecx, dword ptr [esp+28h+var_18+4]
0x74B33F: mov     edx, dword ptr [esp+28h+var_18+8]
0x74B343: mov     ebp, [esp+28h+arg_C]
0x74B347: mov     [esi], eax
0x74B349: mov     [esi+4], ecx
0x74B34C: mov     [esi+8], edx
0x74B34F: cmp     dword ptr [ebx+70h], 0
0x74B353: jnz     short loc_74B397
0x74B355: mov     eax, [edi+0B4h]
0x74B35B: cmp     dword ptr [eax+20h], 0
0x74B35F: jz      short loc_74B397
0x74B361: mov     ecx, ebp
0x74B363: call    sub_404C90
0x74B368: fstp    [esp+28h+arg_4]
0x74B36C: fld     [esp+28h+arg_4]
0x74B370: lea     ecx, [esp+28h+var_C]
0x74B374: push    ecx; int
0x74B375: push    ecx
0x74B376: lea     edx, [esp+30h+var_18]
0x74B37A: fstp    [esp+30h+var_30]; float
0x74B37D: push    edx; int
0x74B37E: call    sub_47DA10
0x74B383: mov     ecx, [eax]
0x74B385: mov     [ebp+0], ecx
0x74B388: mov     edx, [eax+4]
0x74B38B: mov     [ebp+4], edx
0x74B38E: mov     eax, [eax+8]
0x74B391: add     esp, 0Ch
0x74B394: mov     [ebp+8], eax
0x74B397: push    ebp
0x74B398: push    esi
0x74B399: push    edi
0x74B39A: mov     ecx, ebx
0x74B39C: call    sub_74A0A0
0x74B3A1: pop     esi
0x74B3A2: pop     ebp
0x74B3A3: pop     edi
0x74B3A4: mov     al, 1
0x74B3A6: pop     ebx
0x74B3A7: add     esp, 18h
0x74B3AA: retn    10h
0x74B3AD: pop     edi
0x74B3AE: xor     al, al
0x74B3B0: pop     ebx
0x74B3B1: add     esp, 18h
0x74B3B4: retn    10h
