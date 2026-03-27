0x8AF310: push    0FFFFFFFFh
0x8AF312: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8AF317: mov     eax, large fs:0
0x8AF31D: push    eax
0x8AF31E: push    ecx
0x8AF31F: push    esi
0x8AF320: mov     eax, ds:0B30AACh
0x8AF325: xor     eax, esp
0x8AF327: push    eax
0x8AF328: lea     eax, [esp+18h+var_C]
0x8AF32C: mov     large fs:0, eax
0x8AF332: mov     esi, ecx
0x8AF334: mov     [esp+18h+var_10], esi
0x8AF338: mov     dword ptr [esi], offset ??_7bhkSphereShape@@6B@; const bhkSphereShape::`vftable'
0x8AF33E: mov     [esp+18h+var_4], 0
0x8AF346: call    sub_89D700
0x8AF34B: sub     dword ptr ds:0BA7F80h, 1
0x8AF352: mov     ecx, esi; this
0x8AF354: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AF35C: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8AF361: mov     ecx, [esp+18h+var_C]
0x8AF365: mov     large fs:0, ecx
0x8AF36C: pop     ecx
0x8AF36D: pop     esi
0x8AF36E: add     esp, 10h
0x8AF371: retn
