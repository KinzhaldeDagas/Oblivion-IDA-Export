0x8B7400: push    0FFFFFFFFh
0x8B7402: push    offset ??1bhkConvexShape@@UAE@XZ_SEH
0x8B7407: mov     eax, large fs:0
0x8B740D: push    eax
0x8B740E: push    ecx
0x8B740F: push    esi
0x8B7410: mov     eax, ds:0B30AACh
0x8B7415: xor     eax, esp
0x8B7417: push    eax
0x8B7418: lea     eax, [esp+18h+var_C]
0x8B741C: mov     large fs:0, eax
0x8B7422: mov     esi, ecx
0x8B7424: mov     [esp+18h+var_10], esi
0x8B7428: mov     dword ptr [esi], offset ??_7bhkMultiSphereShape@@6B@; const bhkMultiSphereShape::`vftable'
0x8B742E: mov     [esp+18h+var_4], 0
0x8B7436: call    sub_89D700
0x8B743B: sub     dword ptr ds:0BA7FE8h, 1
0x8B7442: mov     ecx, esi; this
0x8B7444: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B744C: call    ??1bhkSphereRepShape@@UAE@XZ; bhkSphereRepShape::~bhkSphereRepShape(void)
0x8B7451: mov     ecx, [esp+18h+var_C]
0x8B7455: mov     large fs:0, ecx
0x8B745C: pop     ecx
0x8B745D: pop     esi
0x8B745E: add     esp, 10h
0x8B7461: retn
