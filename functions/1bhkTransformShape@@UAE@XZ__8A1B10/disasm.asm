0x8A1B10: push    0FFFFFFFFh
0x8A1B12: push    offset ??1bhkShapeCollection@@UAE@XZ_SEH
0x8A1B17: mov     eax, large fs:0
0x8A1B1D: push    eax
0x8A1B1E: push    ecx
0x8A1B1F: push    esi
0x8A1B20: mov     eax, ds:0B30AACh
0x8A1B25: xor     eax, esp
0x8A1B27: push    eax
0x8A1B28: lea     eax, [esp+18h+var_C]
0x8A1B2C: mov     large fs:0, eax
0x8A1B32: mov     esi, ecx
0x8A1B34: mov     [esp+18h+var_10], esi
0x8A1B38: mov     dword ptr [esi], offset ??_7bhkTransformShape@@6B@; const bhkTransformShape::`vftable'
0x8A1B3E: mov     [esp+18h+var_4], 0
0x8A1B46: call    sub_89D700
0x8A1B4B: sub     dword ptr ds:0BA7D64h, 1
0x8A1B52: mov     ecx, esi; this
0x8A1B54: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8A1B5C: call    ??1bhkShape@@UAE@XZ; bhkShape::~bhkShape(void)
0x8A1B61: mov     ecx, [esp+18h+var_C]
0x8A1B65: mov     large fs:0, ecx
0x8A1B6C: pop     ecx
0x8A1B6D: pop     esi
0x8A1B6E: add     esp, 10h
0x8A1B71: retn
