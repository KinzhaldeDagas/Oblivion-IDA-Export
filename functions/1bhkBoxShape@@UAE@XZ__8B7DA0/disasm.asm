0x8B7DA0: push    0FFFFFFFFh
0x8B7DA2: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8B7DA7: mov     eax, large fs:0
0x8B7DAD: push    eax
0x8B7DAE: push    ecx
0x8B7DAF: push    esi
0x8B7DB0: mov     eax, ds:0B30AACh
0x8B7DB5: xor     eax, esp
0x8B7DB7: push    eax
0x8B7DB8: lea     eax, [esp+18h+var_C]
0x8B7DBC: mov     large fs:0, eax
0x8B7DC2: mov     esi, ecx
0x8B7DC4: mov     [esp+18h+var_10], esi
0x8B7DC8: mov     dword ptr [esi], offset ??_7bhkBoxShape@@6B@; const bhkBoxShape::`vftable'
0x8B7DCE: mov     [esp+18h+var_4], 0
0x8B7DD6: call    sub_89D700
0x8B7DDB: sub     dword ptr ds:0BA7FF4h, 1
0x8B7DE2: mov     ecx, esi; this
0x8B7DE4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B7DEC: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8B7DF1: mov     ecx, [esp+18h+var_C]
0x8B7DF5: mov     large fs:0, ecx
0x8B7DFC: pop     ecx
0x8B7DFD: pop     esi
0x8B7DFE: add     esp, 10h
0x8B7E01: retn
