0x4BC570: push    ebp
0x4BC571: mov     ebp, esp
0x4BC573: sub     esp, 18h
0x4BC576: mov     eax, ds:0B30AACh
0x4BC57B: xor     eax, ebp
0x4BC57D: mov     [ebp+var_4], eax
0x4BC580: push    ebx
0x4BC581: push    esi
0x4BC582: push    edi
0x4BC583: mov     edi, [ebp+a1]
0x4BC586: mov     esi, ecx
0x4BC588: mov     ecx, edi
0x4BC58A: call    TESFile_GetRecordType
0x4BC58F: cmp     al, 29h ; ')'
0x4BC591: jz      short loc_4BC59A
0x4BC593: xor     al, al
0x4BC595: jmp     loc_4BC6F3
0x4BC59A: push    esi
0x4BC59B: mov     ecx, edi
0x4BC59D: call    TESFile_InitializeFormFromRecord
0x4BC5A2: push    0; a2
0x4BC5A4: mov     ecx, esi; this
0x4BC5A6: call    TESForm_SetIsLinked
0x4BC5AB: mov     ecx, edi
0x4BC5AD: call    TESFile_GetChunkType
0x4BC5B2: test    eax, eax
0x4BC5B4: jz      loc_4BC68F
0x4BC5BA: lea     ebx, [ebx+0]
0x4BC5C0: cmp     eax, 44494445h
0x4BC5C5: jz      loc_4BC64E
0x4BC5CB: cmp     eax, 4D414E44h
0x4BC5D0: jnz     loc_4BC675
0x4BC5D6: push    0Ch; a4
0x4BC5D8: lea     eax, [ebp+Dst]
0x4BC5DB: push    eax; Dst
0x4BC5DC: mov     ecx, edi; a1
0x4BC5DE: call    TESFile_GetChunkData
0x4BC5E3: fld     dword ptr [ebp+Dst]
0x4BC5E6: fnstcw  [ebp+var_A]
0x4BC5E9: movzx   eax, [ebp+var_A]
0x4BC5ED: or      eax, 0C00h
0x4BC5F2: mov     [ebp+var_8], eax
0x4BC5F5: fldcw   word ptr [ebp+var_8]
0x4BC5F8: fistp   [ebp+var_8]
0x4BC5FB: mov     cx, word ptr [ebp+var_8]
0x4BC5FF: mov     [esi+24h], cx
0x4BC603: fldcw   [ebp+var_A]
0x4BC606: fld     [ebp+var_14]
0x4BC609: fnstcw  [ebp+var_A]
0x4BC60C: movzx   eax, [ebp+var_A]
0x4BC610: or      eax, 0C00h
0x4BC615: mov     [ebp+var_8], eax
0x4BC618: fldcw   word ptr [ebp+var_8]
0x4BC61B: fistp   [ebp+var_8]
0x4BC61E: mov     dx, word ptr [ebp+var_8]
0x4BC622: mov     [esi+26h], dx
0x4BC626: fldcw   [ebp+var_A]
0x4BC629: fld     [ebp+var_10]
0x4BC62C: fnstcw  [ebp+var_A]
0x4BC62F: movzx   eax, [ebp+var_A]
0x4BC633: or      eax, 0C00h
0x4BC638: mov     [ebp+var_8], eax
0x4BC63B: fldcw   word ptr [ebp+var_8]
0x4BC63E: fistp   [ebp+var_8]
0x4BC641: mov     ax, word ptr [ebp+var_8]
0x4BC645: mov     [esi+28h], ax
0x4BC649: fldcw   [ebp+var_A]
0x4BC64C: jmp     short loc_4BC675
0x4BC64E: mov     eax, [edi+254h]
0x4BC654: call    __alloca?
0x4BC659: mov     ebx, esp
0x4BC65B: push    200h; a4
0x4BC660: push    ebx; Dst
0x4BC661: mov     ecx, edi; a1
0x4BC663: call    TESFile_GetChunkData
0x4BC668: mov     edx, [esi]
0x4BC66A: mov     eax, [edx+0D8h]
0x4BC670: push    ebx
0x4BC671: mov     ecx, esi
0x4BC673: call    eax
0x4BC675: mov     ecx, edi
0x4BC677: call    TESFile_GetNextChunk
0x4BC67C: test    al, al
0x4BC67E: jz      short loc_4BC68F
0x4BC680: mov     ecx, edi
0x4BC682: call    TESFile_GetChunkType
0x4BC687: test    eax, eax
0x4BC689: jnz     loc_4BC5C0
0x4BC68F: movzx   ecx, word ptr [esi+24h]
0x4BC693: movzx   edx, word ptr [esi+26h]
0x4BC697: movzx   eax, word ptr [esi+28h]
0x4BC69B: mov     [ebp+var_8], ecx
0x4BC69E: fild    [ebp+var_8]
0x4BC6A1: mov     [ebp+var_8], edx
0x4BC6A4: fld     qword ptr ds:0A2FAA0h
0x4BC6AA: fmul    st(1), st
0x4BC6AC: fxch    st(1)
0x4BC6AE: fstp    dword ptr [ebp+Dst]
0x4BC6B1: fild    [ebp+var_8]
0x4BC6B4: mov     [ebp+var_8], eax
0x4BC6B7: fmul    st, st(1)
0x4BC6B9: fstp    [ebp+var_14]
0x4BC6BC: fild    [ebp+var_8]
0x4BC6BF: fmulp   st(1), st
0x4BC6C1: fstp    [ebp+var_10]
0x4BC6C4: fld     dword ptr [ebp+Dst]
0x4BC6C7: fld     [ebp+var_14]
0x4BC6CA: fld     [ebp+var_10]
0x4BC6CD: fld     st(1)
0x4BC6CF: fmulp   st(2), st
0x4BC6D1: fld     st(2)
0x4BC6D3: fmulp   st(3), st
0x4BC6D5: fxch    st(1)
0x4BC6D7: faddp   st(2), st
0x4BC6D9: fmul    st, st
0x4BC6DB: faddp   st(1), st
0x4BC6DD: fstp    [ebp+var_8]
0x4BC6E0: fld     [ebp+var_8]
0x4BC6E3: call    __CIsqrt
0x4BC6E8: fstp    [ebp+var_8]
0x4BC6EB: fld     [ebp+var_8]
0x4BC6EE: mov     al, 1
0x4BC6F0: fstp    dword ptr [esi+2Ch]
0x4BC6F3: lea     esp, [ebp-24h]
0x4BC6F6: pop     edi
0x4BC6F7: pop     esi
0x4BC6F8: pop     ebx
0x4BC6F9: mov     ecx, [ebp+var_4]
0x4BC6FC: xor     ecx, ebp
0x4BC6FE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BC703: mov     esp, ebp
0x4BC705: pop     ebp
0x4BC706: retn    4
