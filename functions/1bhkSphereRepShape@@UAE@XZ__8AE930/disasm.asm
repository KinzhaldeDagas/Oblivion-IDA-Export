0x8AE930: push    0FFFFFFFFh
0x8AE932: push    offset ??1bhkShapeCollection@@UAE@XZ_SEH
0x8AE937: mov     eax, large fs:0
0x8AE93D: push    eax
0x8AE93E: push    ecx
0x8AE93F: push    esi
0x8AE940: mov     eax, ds:0B30AACh
0x8AE945: xor     eax, esp
0x8AE947: push    eax
0x8AE948: lea     eax, [esp+18h+var_C]
0x8AE94C: mov     large fs:0, eax
0x8AE952: mov     esi, ecx
0x8AE954: mov     [esp+18h+var_10], esi
0x8AE958: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8AE95E: mov     [esp+18h+var_4], 0
0x8AE966: call    sub_89D700
0x8AE96B: sub     dword ptr ds:0BA7F44h, 1
0x8AE972: mov     ecx, esi; this
0x8AE974: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AE97C: call    ??1bhkShape@@UAE@XZ; bhkShape::~bhkShape(void)
0x8AE981: mov     ecx, [esp+18h+var_C]
0x8AE985: mov     large fs:0, ecx
0x8AE98C: pop     ecx
0x8AE98D: pop     esi
0x8AE98E: add     esp, 10h
0x8AE991: retn
