0x8C8010: push    0FFFFFFFFh
0x8C8012: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8C8017: mov     eax, large fs:0
0x8C801D: push    eax
0x8C801E: push    ecx
0x8C801F: push    esi
0x8C8020: mov     eax, ds:0B30AACh
0x8C8025: xor     eax, esp
0x8C8027: push    eax
0x8C8028: lea     eax, [esp+18h+var_C]
0x8C802C: mov     large fs:0, eax
0x8C8032: mov     esi, ecx
0x8C8034: mov     [esp+18h+var_10], esi
0x8C8038: mov     dword ptr [esi], offset ??_7bhkCylinderShape@@6B@; const bhkCylinderShape::`vftable'
0x8C803E: mov     [esp+18h+var_4], 0
0x8C8046: call    sub_89D700
0x8C804B: sub     dword ptr ds:0BA8140h, 1
0x8C8052: mov     ecx, esi; this
0x8C8054: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C805C: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8C8061: mov     ecx, [esp+18h+var_C]
0x8C8065: mov     large fs:0, ecx
0x8C806C: pop     ecx
0x8C806D: pop     esi
0x8C806E: add     esp, 10h
0x8C8071: retn
