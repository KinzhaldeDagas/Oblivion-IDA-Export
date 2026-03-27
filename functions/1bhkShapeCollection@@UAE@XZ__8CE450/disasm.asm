0x8CE450: push    0FFFFFFFFh
0x8CE452: push    offset ??1bhkShapeCollection@@UAE@XZ_SEH
0x8CE457: mov     eax, large fs:0
0x8CE45D: push    eax
0x8CE45E: push    ecx
0x8CE45F: push    esi
0x8CE460: mov     eax, ds:0B30AACh
0x8CE465: xor     eax, esp
0x8CE467: push    eax
0x8CE468: lea     eax, [esp+18h+var_C]
0x8CE46C: mov     large fs:0, eax
0x8CE472: mov     esi, ecx
0x8CE474: mov     [esp+18h+var_10], esi
0x8CE478: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x8CE47E: mov     [esp+18h+var_4], 0
0x8CE486: call    sub_89D700
0x8CE48B: sub     dword ptr ds:0BA816Ch, 1
0x8CE492: mov     ecx, esi; this
0x8CE494: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8CE49C: call    ??1bhkShape@@UAE@XZ; bhkShape::~bhkShape(void)
0x8CE4A1: mov     ecx, [esp+18h+var_C]
0x8CE4A5: mov     large fs:0, ecx
0x8CE4AC: pop     ecx
0x8CE4AD: pop     esi
0x8CE4AE: add     esp, 10h
0x8CE4B1: retn
