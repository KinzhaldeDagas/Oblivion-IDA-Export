0x77F720: sub     esp, 104h
0x77F726: mov     eax, ds:0B30AACh
0x77F72B: xor     eax, esp
0x77F72D: mov     [esp+104h+var_4], eax
0x77F734: push    ebp
0x77F735: mov     ebp, [esp+108h+arg_4]
0x77F73C: push    esi
0x77F73D: mov     esi, [esp+10Ch+Str]
0x77F744: test    esi, esi
0x77F746: jz      short loc_77F7BD
0x77F748: push    2Eh ; '.'; Val
0x77F74A: push    esi; Str
0x77F74B: call    _strchr
0x77F750: add     esp, 8
0x77F753: test    eax, eax
0x77F755: jnz     short loc_77F7BD
0x77F757: push    ebx
0x77F758: push    edi
0x77F759: lea     ebx, [esp+114h+var_104]
0x77F75D: xor     edi, edi
0x77F75F: sub     ebx, esi
0x77F761: movsx   eax, byte ptr [esi]
0x77F764: push    eax; C
0x77F765: call    _tolower
0x77F76A: add     esp, 4
0x77F76D: cmp     byte ptr [esi], 0
0x77F770: mov     [ebx+esi], al
0x77F773: jz      short loc_77F783
0x77F775: add     edi, 1
0x77F778: add     esi, 1
0x77F77B: cmp     edi, 100h
0x77F781: jb      short loc_77F761
0x77F783: cmp     dword ptr ds:0B428ACh, 0
0x77F78A: pop     edi
0x77F78B: pop     ebx
0x77F78C: jnz     short loc_77F793
0x77F78E: call    sub_77F680
0x77F793: push    ebp
0x77F794: lea     ecx, [esp+110h+var_104]
0x77F798: push    ecx
0x77F799: mov     ecx, ds:0B428ACh
0x77F79F: call    sub_412D30
0x77F7A4: pop     esi
0x77F7A5: mov     al, 1
0x77F7A7: pop     ebp
0x77F7A8: mov     ecx, [esp+104h+var_4]
0x77F7AF: xor     ecx, esp
0x77F7B1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77F7B6: add     esp, 104h
0x77F7BC: retn
0x77F7BD: mov     ecx, [esp+10Ch+var_4]
0x77F7C4: pop     esi
0x77F7C5: pop     ebp
0x77F7C6: xor     ecx, esp
0x77F7C8: xor     al, al
0x77F7CA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77F7CF: add     esp, 104h
0x77F7D5: retn
