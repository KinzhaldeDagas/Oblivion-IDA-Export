0x8915F0: push    ebp
0x8915F1: mov     ebp, esp
0x8915F3: and     esp, 0FFFFFFF0h
0x8915F6: push    0FFFFFFFFh
0x8915F8: push    offset SEH_8915F0
0x8915FD: mov     eax, large fs:0
0x891603: push    eax
0x891604: sub     esp, 0E8h
0x89160A: mov     eax, ds:0B30AACh
0x89160F: xor     eax, esp
0x891611: mov     [esp+0F4h+var_14], eax
0x891618: push    ebx
0x891619: push    esi
0x89161A: push    edi
0x89161B: mov     eax, ds:0B30AACh
0x891620: xor     eax, esp
0x891622: push    eax
0x891623: lea     eax, [esp+104h+var_C]
0x89162A: mov     large fs:0, eax
0x891630: fld1
0x891632: mov     edi, [ebp+arg_4]
0x891635: xor     ebx, ebx
0x891637: fst     [esp+104h+var_5C]
0x89163E: fst     [esp+104h+var_BC]
0x891642: mov     esi, ecx
0x891644: fstp    [esp+104h+var_DC]
0x891648: mov     [esp+104h+var_80], bl
0x89164F: mov     [esp+104h+var_7C], ebx
0x891656: mov     [esp+104h+var_50], ebx
0x89165D: mov     [esp+104h+var_30], ebx
0x891664: mov     [esp+104h+var_E0], offset ??_7hkClosestRayHitCollector@@6B@; const hkClosestRayHitCollector::`vftable'
0x89166C: mov     [esp+104h+var_B0], ebx
0x891670: mov     ecx, [ebp+arg_0]
0x891673: add     ecx, 38h ; '8'
0x891676: shl     ecx, 4
0x891679: movaps  xmm0, xmmword ptr [ecx+esi]
0x89167D: movaps  xmmword ptr [edi], xmm0
0x891680: fld     dword ptr [edi+8]
0x891683: fsub    qword ptr ds:0A492B0h
0x891689: movaps  [esp+104h+var_A0], xmm0
0x89168E: lea     edx, [esp+104h+var_E4]
0x891692: lea     eax, [esp+104h+var_E0]
0x891696: fstp    dword ptr [edi+8]
0x891699: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x8916A0: movaps  [esp+104h+var_40], xmm0
0x8916A8: movaps  xmm0, xmmword ptr [edi]
0x8916AB: push    edx
0x8916AC: mov     ecx, esi
0x8916AE: mov     [esp+108h+var_4], ebx
0x8916B5: mov     [esp+108h+var_2C], eax
0x8916BC: mov     [esp+108h+var_28], ebx
0x8916C3: movaps  [esp+108h+var_90], xmm0
0x8916C8: call    sub_57E270
0x8916CD: cmp     esi, ebx
0x8916CF: mov     eax, [esp+104h+var_E4]
0x8916D3: mov     [esp+104h+var_7C], eax
0x8916DA: jz      short loc_8916EA
0x8916DC: mov     ecx, [esi+8]
0x8916DF: cmp     ecx, ebx
0x8916E1: jz      short loc_8916EA
0x8916E3: call    sub_8AC0C0
0x8916E8: jmp     short loc_8916EC
0x8916EA: xor     eax, eax
0x8916EC: mov     eax, [eax+8]
0x8916EF: cmp     eax, ebx
0x8916F1: jz      short loc_8916FB
0x8916F3: mov     esi, [eax+2B0h]
0x8916F9: jmp     short loc_8916FD
0x8916FB: xor     esi, esi
0x8916FD: cmp     esi, ebx
0x8916FF: jz      short loc_89170A
0x891701: mov     edx, [esi]
0x891703: mov     eax, [edx+58h]
0x891706: mov     ecx, esi
0x891708: call    eax
0x89170A: mov     edx, [esi]
0x89170C: mov     edx, [edx+88h]
0x891712: lea     eax, [esp+104h+var_A0]
0x891716: push    eax
0x891717: mov     ecx, esi
0x891719: call    edx
0x89171B: mov     byte ptr [esp+104h+var_E8+3], al
0x89171F: mov     eax, [esi]
0x891721: mov     edx, [eax+58h]
0x891724: mov     ecx, esi
0x891726: call    edx
0x891728: mov     al, byte ptr [esp+104h+var_E8+3]
0x89172C: cmp     al, bl
0x89172E: jz      short loc_89174C
0x891730: fld     [esp+104h+var_BC]
0x891734: fld1
0x891736: fsubrp  st(1), st
0x891738: fstp    [esp+104h+var_E4]
0x89173C: fld     [esp+104h+var_E4]
0x891740: fmul    qword ptr ds:0A492B0h
0x891746: fadd    dword ptr [edi+8]
0x891749: fstp    dword ptr [edi+8]
0x89174C: mov     ecx, dword ptr [esp+104h+var_C]
0x891753: mov     large fs:0, ecx
0x89175A: pop     ecx
0x89175B: pop     edi
0x89175C: pop     esi
0x89175D: pop     ebx
0x89175E: mov     ecx, [esp+0F4h+var_14]
0x891765: xor     ecx, esp
0x891767: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89176C: mov     esp, ebp
0x89176E: pop     ebp
0x89176F: retn    8
