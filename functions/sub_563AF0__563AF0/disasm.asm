0x563AF0: push    0FFFFFFFFh; 2026-05-18 73000 consumer decode: constructs bhkTransformShape from the transform cinfo. Used by stock single sphere and box paths. This is the narrowest helper for sidecar rotation of those shapes.
0x563AF2: push    offset ??1bhkShapeCollection@@UAE@XZ_SEH
0x563AF7: mov     eax, large fs:0
0x563AFD: push    eax
0x563AFE: push    ecx
0x563AFF: push    esi
0x563B00: mov     eax, ds:0B30AACh
0x563B05: xor     eax, esp
0x563B07: push    eax
0x563B08: lea     eax, [esp+18h+var_C]
0x563B0C: mov     large fs:0, eax
0x563B12: mov     esi, ecx
0x563B14: mov     [esp+18h+var_10], esi
0x563B18: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x563B1D: xor     eax, eax
0x563B1F: mov     [esi+0Ch], eax
0x563B22: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x563B28: mov     [esi+10h], eax
0x563B2B: add     dword ptr ds:0BA7D70h, 1
0x563B32: mov     [esp+18h+var_4], eax
0x563B36: mov     eax, [esp+18h+info]
0x563B3A: push    eax
0x563B3B: mov     ecx, esi
0x563B3D: mov     dword ptr [esi], offset ??_7bhkTransformShape@@6B@; const bhkTransformShape::`vftable'
0x563B43: call    sub_8A2160; 2026-05-18 73000 consumer decode: bhkTransformShape setup consumes cinfo +0x04 child shape and cinfo +0x10 4x4 transform. This proves a rotation sidecar can be applied by building a non-identity transform cinfo instead of extending stock collision records.
0x563B48: add     dword ptr ds:0BA7D64h, 1
0x563B4F: mov     eax, esi
0x563B51: mov     ecx, [esp+18h+var_C]
0x563B55: mov     large fs:0, ecx
0x563B5C: pop     ecx
0x563B5D: pop     esi
0x563B5E: add     esp, 10h
0x563B61: retn    4
0x9D69F0: mov     ecx, [ebp-10h]; this
0x9D69F3: jmp     ??1bhkShape@@UAE@XZ; bhkShape::~bhkShape(void)
0x9D69F8: mov     edx, [esp+arg_4]
0x9D69FC: lea     eax, [edx-8]
0x9D69FF: mov     ecx, [edx-0Ch]
0x9D6A02: xor     ecx, eax
0x9D6A04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D6A09: mov     eax, offset stru_AFE788
0x9D6A0E: jmp     ___CxxFrameHandler3
