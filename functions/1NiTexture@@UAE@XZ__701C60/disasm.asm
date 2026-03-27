0x701C60: push    0FFFFFFFFh
0x701C62: push    offset ??1NiTexture@@UAE@XZ_SEH
0x701C67: mov     eax, large fs:0
0x701C6D: push    eax
0x701C6E: push    ecx
0x701C6F: push    esi
0x701C70: mov     eax, ds:0B30AACh
0x701C75: xor     eax, esp
0x701C77: push    eax
0x701C78: lea     eax, [esp+18h+var_C]
0x701C7C: mov     large fs:0, eax
0x701C82: mov     esi, ecx
0x701C84: mov     [esp+18h+var_10], esi
0x701C88: mov     dword ptr [esi], offset ??_7NiTexture@@6B@; const NiTexture::`vftable'
0x701C8E: mov     ecx, [esi+24h]
0x701C91: test    ecx, ecx
0x701C93: mov     [esp+18h+var_4], 0
0x701C9B: jz      short loc_701CA5
0x701C9D: mov     eax, [ecx]
0x701C9F: mov     edx, [eax]
0x701CA1: push    1
0x701CA3: call    edx
0x701CA5: mov     ecx, esi
0x701CA7: call    sub_701B80
0x701CAC: mov     ecx, esi; this
0x701CAE: mov     [esp+18h+var_4], 0FFFFFFFFh
0x701CB6: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x701CBB: mov     ecx, dword ptr [esp+18h+var_C]
0x701CBF: mov     large fs:0, ecx
0x701CC6: pop     ecx
0x701CC7: pop     esi
0x701CC8: add     esp, 10h
0x701CCB: retn
