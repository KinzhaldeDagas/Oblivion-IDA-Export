0x8C3350: push    0FFFFFFFFh
0x8C3352: push    offset ??1bhkTriSampledHeightFieldBvTreeShape@@UAE@XZ_SEH
0x8C3357: mov     eax, large fs:0
0x8C335D: push    eax
0x8C335E: push    ecx
0x8C335F: push    esi
0x8C3360: mov     eax, ds:0B30AACh
0x8C3365: xor     eax, esp
0x8C3367: push    eax
0x8C3368: lea     eax, [esp+18h+var_C]
0x8C336C: mov     large fs:0, eax
0x8C3372: mov     esi, ecx
0x8C3374: mov     [esp+18h+var_10], esi
0x8C3378: mov     dword ptr [esi], offset ??_7bhkMoppBvTreeShape@@6B@; const bhkMoppBvTreeShape::`vftable'
0x8C337E: mov     [esp+18h+var_4], 0
0x8C3386: call    sub_89D700
0x8C338B: sub     dword ptr ds:0BA80F4h, 1
0x8C3392: mov     ecx, esi; this
0x8C3394: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C339C: call    ??1bhkBvTreeShape@@UAE@XZ; bhkBvTreeShape::~bhkBvTreeShape(void)
0x8C33A1: mov     ecx, [esp+18h+var_C]
0x8C33A5: mov     large fs:0, ecx
0x8C33AC: pop     ecx
0x8C33AD: pop     esi
0x8C33AE: add     esp, 10h
0x8C33B1: retn
