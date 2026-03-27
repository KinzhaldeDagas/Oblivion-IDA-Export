0x8D5970: sub     esp, 24h
0x8D5973: push    esi
0x8D5974: mov     esi, [esp+28h+arg_8]
0x8D5978: mov     eax, [esi+88h]
0x8D597E: test    eax, eax
0x8D5980: mov     [esp+28h+var_24], ecx
0x8D5984: jz      short loc_8D59B0
0x8D5986: mov     cx, word ptr [esp+28h+arg_4]
0x8D598B: mov     eax, [esp+28h+arg_0]
0x8D598F: lea     edx, [esp+28h+var_20]
0x8D5993: mov     word ptr [esp+28h+var_18], cx
0x8D5998: push    edx
0x8D5999: mov     ecx, esi
0x8D599B: mov     byte ptr [esp+2Ch+var_20], 16h
0x8D59A0: mov     [esp+2Ch+var_1C], eax
0x8D59A4: call    sub_898820
0x8D59A9: pop     esi
0x8D59AA: add     esp, 24h
0x8D59AD: retn    0Ch
0x8D59B0: mov     ecx, [esi+74h]
0x8D59B3: fld     dword ptr [esi+18h]
0x8D59B6: fld     dword ptr [esi+0Ch]
0x8D59B9: add     ecx, 10h
0x8D59BC: mov     dword ptr [esi+88h], 1
0x8D59C6: mov     eax, ecx
0x8D59C8: mov     edx, [eax]
0x8D59CA: mov     [esp+28h+var_20], edx
0x8D59CE: mov     edx, [eax+4]
0x8D59D1: mov     [esp+28h+var_1C], edx
0x8D59D5: mov     edx, [eax+8]
0x8D59D8: mov     eax, [eax+0Ch]
0x8D59DB: fst     [esp+28h+var_10]
0x8D59DF: fld     st(1)
0x8D59E1: mov     [esp+28h+var_14], eax
0x8D59E5: fstp    [esp+28h+var_C]
0x8D59E9: mov     [esp+28h+var_18], edx
0x8D59ED: fxch    st(1)
0x8D59EF: fsub    st, st(1)
0x8D59F1: fstp    [esp+28h+var_8]
0x8D59F5: fstp    st
0x8D59F7: fld     dword ptr ds:0A2FAA8h
0x8D59FD: fld     [esp+28h+var_8]
0x8D5A01: fucompp
0x8D5A03: fnstsw  ax
0x8D5A05: test    ah, 44h
0x8D5A08: jp      short loc_8D5A14
0x8D5A0A: mov     [esp+28h+var_4], 0
0x8D5A12: jmp     short loc_8D5A22
0x8D5A14: fld     dword ptr ds:0A2F948h
0x8D5A1A: fdiv    [esp+28h+var_8]
0x8D5A1E: fstp    [esp+28h+var_4]
0x8D5A22: mov     edx, [esp+28h+var_10]
0x8D5A26: mov     [ecx], edx
0x8D5A28: mov     eax, [esp+28h+var_C]
0x8D5A2C: push    ebx
0x8D5A2D: mov     ebx, [esp+2Ch+arg_4]
0x8D5A31: mov     [ecx+4], eax
0x8D5A34: mov     edx, [esp+2Ch+var_8]
0x8D5A38: push    ebp
0x8D5A39: mov     [ecx+8], edx
0x8D5A3C: mov     eax, [esp+30h+var_4]
0x8D5A40: push    edi
0x8D5A41: xor     edi, edi
0x8D5A43: test    ebx, ebx
0x8D5A45: mov     [ecx+0Ch], eax
0x8D5A48: jle     short loc_8D5A7C
0x8D5A4A: lea     ebx, [ebx+0]
0x8D5A50: mov     ecx, [esp+34h+arg_0]
0x8D5A54: mov     ebp, [ecx+edi*4]
0x8D5A57: mov     edx, [ebp+50h]
0x8D5A5A: mov     eax, [esi+0Ch]
0x8D5A5D: add     edx, 10h
0x8D5A60: push    edx; int
0x8D5A61: push    eax; float
0x8D5A62: call    sub_8DD530
0x8D5A67: mov     ecx, [ebp+50h]
0x8D5A6A: mov     edx, [ecx]
0x8D5A6C: add     esp, 8
0x8D5A6F: lea     eax, [esp+34h+var_10]
0x8D5A73: push    eax
0x8D5A74: call    dword ptr [edx+0Ch]
0x8D5A77: inc     edi
0x8D5A78: cmp     edi, ebx
0x8D5A7A: jl      short loc_8D5A50
0x8D5A7C: mov     ebp, [esp+34h+arg_0]
0x8D5A80: mov     ecx, [esp+34h+var_24]
0x8D5A84: push    0; lpCriticalSection
0x8D5A86: push    esi; int
0x8D5A87: push    ebx; int
0x8D5A88: push    ebp; int
0x8D5A89: call    sub_8D4590
0x8D5A8E: xor     edi, edi
0x8D5A90: test    ebx, ebx
0x8D5A92: jle     short loc_8D5AAA
0x8D5A94: mov     ecx, [esi+74h]
0x8D5A97: mov     edx, [ebp+edi*4+0]
0x8D5A9B: push    ecx
0x8D5A9C: push    edx
0x8D5A9D: call    sub_8E77C0
0x8D5AA2: add     esp, 8
0x8D5AA5: inc     edi
0x8D5AA6: cmp     edi, ebx
0x8D5AA8: jl      short loc_8D5A94
0x8D5AAA: mov     eax, [esi+74h]
0x8D5AAD: mov     ecx, [esp+34h+var_24]
0x8D5AB1: push    offset sub_8D44D0
0x8D5AB6: push    eax
0x8D5AB7: push    ebx
0x8D5AB8: push    ebp
0x8D5AB9: call    sub_8D72F0
0x8D5ABE: mov     eax, [esi+88h]
0x8D5AC4: pop     edi
0x8D5AC5: dec     eax
0x8D5AC6: pop     ebp
0x8D5AC7: mov     [esi+88h], eax
0x8D5ACD: pop     ebx
0x8D5ACE: jnz     short loc_8D5AEB
0x8D5AD0: mov     eax, [esi+84h]
0x8D5AD6: test    eax, eax
0x8D5AD8: jz      short loc_8D5AEB
0x8D5ADA: mov     al, [esi+90h]
0x8D5AE0: test    al, al
0x8D5AE2: jnz     short loc_8D5AEB
0x8D5AE4: mov     ecx, esi
0x8D5AE6: call    sub_899210
0x8D5AEB: mov     ecx, [esi+74h]
0x8D5AEE: mov     edx, [esp+28h+var_20]
0x8D5AF2: mov     eax, [esp+28h+var_1C]
0x8D5AF6: add     ecx, 10h
0x8D5AF9: mov     [ecx], edx
0x8D5AFB: mov     edx, [esp+28h+var_18]
0x8D5AFF: mov     [ecx+4], eax
0x8D5B02: mov     eax, [esp+28h+var_14]
0x8D5B06: mov     [ecx+8], edx
0x8D5B09: mov     [ecx+0Ch], eax
0x8D5B0C: pop     esi
0x8D5B0D: add     esp, 24h
0x8D5B10: retn    0Ch
