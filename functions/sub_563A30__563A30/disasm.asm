0x563A30: push    0FFFFFFFFh; 2026-05-18 73000 consumer decode: constructs bhkMultiSphereShape from packed 16-byte sphere vectors. Rotations are irrelevant for this stock multi-sphere path; multiple non-sphere collision records remain unsupported by stock 0x565510.
0x563A32: push    offset ??1bhkConvexShape@@UAE@XZ_SEH
0x563A37: mov     eax, large fs:0
0x563A3D: push    eax
0x563A3E: push    ecx
0x563A3F: push    esi
0x563A40: mov     eax, ds:0B30AACh
0x563A45: xor     eax, esp
0x563A47: push    eax
0x563A48: lea     eax, [esp+18h+var_C]
0x563A4C: mov     large fs:0, eax
0x563A52: mov     esi, ecx
0x563A54: mov     [esp+18h+var_10], esi
0x563A58: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x563A5D: xor     eax, eax
0x563A5F: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x563A65: mov     [esi+0Ch], eax
0x563A68: mov     [esi+10h], eax
0x563A6B: add     dword ptr ds:0BA7D70h, 1
0x563A72: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x563A78: add     dword ptr ds:0BA7F44h, 1
0x563A7F: mov     [esp+18h+var_4], eax
0x563A83: mov     eax, [esp+18h+arg_0]
0x563A87: push    eax
0x563A88: mov     ecx, esi
0x563A8A: mov     dword ptr [esi], offset ??_7bhkMultiSphereShape@@6B@; const bhkMultiSphereShape::`vftable'
0x563A90: call    sub_8B76E0
0x563A95: add     dword ptr ds:0BA7FE8h, 1
0x563A9C: mov     eax, esi
0x563A9E: mov     ecx, [esp+18h+var_C]
0x563AA2: mov     large fs:0, ecx
0x563AA9: pop     ecx
0x563AAA: pop     esi
0x563AAB: add     esp, 10h
0x563AAE: retn    4
0x9BD420: mov     ecx, [ebp-10h]; this
0x9BD423: jmp     ??1bhkSphereRepShape@@UAE@XZ; bhkSphereRepShape::~bhkSphereRepShape(void)
0x9BD428: mov     edx, [esp+arg_4]
0x9BD42C: lea     eax, [edx-8]
0x9BD42F: mov     ecx, [edx-0Ch]
0x9BD432: xor     ecx, eax
0x9BD434: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD439: mov     eax, offset stru_AE6DF8
0x9BD43E: jmp     ___CxxFrameHandler3
