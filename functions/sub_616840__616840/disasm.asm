0x616840: sub     esp, 0D8h
0x616846: mov     eax, ds:0B30AACh
0x61684B: xor     eax, esp
0x61684D: mov     [esp+0D8h+var_4], eax
0x616854: mov     al, [esp+0D8h+arg_8]
0x61685B: test    al, al
0x61685D: push    ebx
0x61685E: mov     ebx, [esp+0DCh+arg_10]
0x616865: push    ebp
0x616866: mov     ebp, [esp+0E0h+arg_4]
0x61686D: push    esi
0x61686E: mov     esi, [esp+0E4h+arg_0]
0x616875: push    edi
0x616876: mov     edi, [ebx]
0x616878: mov     [esp+0E8h+var_D4], edi
0x61687C: jz      short loc_616888
0x61687E: mov     [esp+0E8h+var_D8], 0Ah
0x616886: jmp     short loc_616897
0x616888: mov     ecx, 500h
0x61688D: sub     ecx, ds:0B02E24h
0x616893: mov     [esp+0E8h+var_D8], ecx
0x616897: fild    [esp+0E8h+var_D8]
0x61689B: xor     edx, edx
0x61689D: test    al, al
0x61689F: setz    dl
0x6168A2: test    esi, esi
0x6168A4: fstp    [esp+0E8h+var_D0]
0x6168A8: lea     edx, [edx+edx+1]
0x6168AC: mov     [esp+0E8h+var_D8], edx
0x6168B0: jz      loc_61695D
0x6168B6: mov     ecx, [esi]
0x6168B8: test    ecx, ecx
0x6168BA: jz      loc_61695D
0x6168C0: cmp     dword ptr [esi+4], 0
0x6168C4: jz      short loc_6168F5
0x6168C6: mov     eax, [ecx]
0x6168C8: mov     edx, [eax+18h]
0x6168CB: call    edx
0x6168CD: mov     eax, ds:0B037ACh[eax*4]
0x6168D4: test    eax, eax
0x6168D6: jz      short loc_6168DC
0x6168D8: mov     eax, [eax]
0x6168DA: jmp     short loc_6168DE
0x6168DC: xor     eax, eax
0x6168DE: mov     ecx, [esi+4]
0x6168E1: push    eax
0x6168E2: call    sub_488DF0
0x6168E7: push    eax
0x6168E8: push    ebp
0x6168E9: push    offset aSMagicSS; "%s Magic: %s (%s)"
0x6168EE: lea     eax, [esp+0F8h+var_CC]
0x6168F2: push    eax
0x6168F3: jmp     short loc_616928
0x6168F5: mov     edx, [ecx]
0x6168F7: mov     eax, [edx+18h]
0x6168FA: call    eax
0x6168FC: mov     eax, ds:0B037ACh[eax*4]
0x616903: test    eax, eax
0x616905: jz      short loc_61690B
0x616907: mov     ecx, [eax]
0x616909: jmp     short loc_61690D
0x61690B: xor     ecx, ecx
0x61690D: mov     esi, [esi]
0x61690F: mov     eax, [esi+4]
0x616912: test    eax, eax
0x616914: jnz     short loc_61691B
0x616916: mov     eax, offset EmptyString
0x61691B: push    ecx
0x61691C: push    eax
0x61691D: push    ebp
0x61691E: push    offset aSMagicSS; "%s Magic: %s (%s)"
0x616923: lea     ecx, [esp+0F8h+var_CC]
0x616927: push    ecx
0x616928: call    __sprintf
0x61692D: fild    [esp+0FCh+var_D4]
0x616931: mov     edx, [esp+0FCh+var_D8]
0x616935: add     esp, 14h
0x616938: push    0FFFFFFFFh; int
0x61693A: push    edx; int
0x61693B: sub     esp, 8
0x61693E: fstp    [esp+0F8h+var_F4]; float
0x616942: lea     eax, [esp+0F8h+var_CC]
0x616946: fld     [esp+0F8h+var_D0]
0x61694A: fstp    [esp+0F8h+var_F8]; float
0x61694D: push    eax; int
0x61694E: call    InterfaceMgr_DebugTextLine
0x616953: add     esp, 14h
0x616956: add     edi, [esp+0E8h+arg_C]
0x61695D: mov     ecx, [esp+0E8h+var_4]
0x616964: mov     [ebx], edi
0x616966: pop     edi
0x616967: pop     esi
0x616968: pop     ebp
0x616969: pop     ebx
0x61696A: xor     ecx, esp
0x61696C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x616971: add     esp, 0D8h
0x616977: retn
