0x8B0560: push    0FFFFFFFFh
0x8B0562: push    offset ??1bhkTriSampledHeightFieldBvTreeShape@@UAE@XZ_SEH
0x8B0567: mov     eax, large fs:0
0x8B056D: push    eax
0x8B056E: push    ecx
0x8B056F: push    esi
0x8B0570: mov     eax, ds:0B30AACh
0x8B0575: xor     eax, esp
0x8B0577: push    eax
0x8B0578: lea     eax, [esp+18h+var_C]
0x8B057C: mov     large fs:0, eax
0x8B0582: mov     esi, ecx
0x8B0584: mov     [esp+18h+var_10], esi
0x8B0588: mov     dword ptr [esi], offset ??_7bhkTriSampledHeightFieldBvTreeShape@@6B@; const bhkTriSampledHeightFieldBvTreeShape::`vftable'
0x8B058E: mov     [esp+18h+var_4], 0
0x8B0596: call    sub_89D700
0x8B059B: sub     dword ptr ds:0BA7FA4h, 1
0x8B05A2: mov     ecx, esi; this
0x8B05A4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B05AC: call    ??1bhkBvTreeShape@@UAE@XZ; bhkBvTreeShape::~bhkBvTreeShape(void)
0x8B05B1: mov     ecx, [esp+18h+var_C]
0x8B05B5: mov     large fs:0, ecx
0x8B05BC: pop     ecx
0x8B05BD: pop     esi
0x8B05BE: add     esp, 10h
0x8B05C1: retn
