0x552240: push    0FFFFFFFFh; Initializes rows/columns and resizes the embedded coefficient vector to rows*columns floats.
0x552242: push    offset SEH_552240
0x552247: mov     eax, large fs:0
0x55224D: push    eax
0x55224E: push    ecx
0x55224F: push    esi
0x552250: mov     eax, ds:0B30AACh
0x552255: xor     eax, esp
0x552257: push    eax
0x552258: lea     eax, [esp+18h+var_C]
0x55225C: mov     large fs:0, eax
0x552262: mov     esi, ecx
0x552264: mov     [esp+18h+var_10], esi
0x552268: mov     eax, [esp+18h+rows]
0x55226C: mov     ecx, [esp+18h+columns]
0x552270: mov     [esi], eax
0x552272: mov     [esi+4], ecx
0x552275: lea     ecx, [esi+8]; int
0x552278: xor     eax, eax
0x55227A: mov     [ecx+4], eax
0x55227D: mov     [ecx+8], eax
0x552280: mov     [ecx+0Ch], eax
0x552283: fldz
0x552285: mov     edx, [esi+4]
0x552288: imul    edx, [esi]
0x55228B: push    ecx
0x55228C: mov     [esp+1Ch+var_4], eax
0x552290: fstp    [esp+1Ch+var_1C]; int
0x552293: push    edx; int
0x552294: call    FaceGenFloatVector_ResizeFill; Unchecked 32-bit rows*columns becomes the float-vector element count. Overflow can allocate fewer coefficients than the stored dimensions describe.
0x552299: mov     eax, esi
0x55229B: mov     ecx, [esp+18h+var_C]
0x55229F: mov     large fs:0, ecx
0x5522A6: pop     ecx
0x5522A7: pop     esi
0x5522A8: add     esp, 10h
0x5522AB: retn    8
0x9BBD30: mov     ecx, [ebp-10h]
0x9BBD33: add     ecx, 8; this
0x9BBD36: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9BBD3B: mov     edx, [esp+columns]
0x9BBD3F: lea     eax, [edx-8]
0x9BBD42: mov     ecx, [edx-0Ch]
0x9BBD45: xor     ecx, eax
0x9BBD47: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBD4C: mov     eax, offset stru_AE5A3C
0x9BBD51: jmp     ___CxxFrameHandler3
