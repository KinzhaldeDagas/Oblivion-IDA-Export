0x7F2A30: push    0FFFFFFFFh
0x7F2A32: push    offset ??1BoltShaderProperty@@UAE@XZ_SEH
0x7F2A37: mov     eax, large fs:0
0x7F2A3D: push    eax
0x7F2A3E: push    ecx
0x7F2A3F: push    esi
0x7F2A40: mov     eax, ds:0B30AACh
0x7F2A45: xor     eax, esp
0x7F2A47: push    eax
0x7F2A48: lea     eax, [esp+18h+var_C]
0x7F2A4C: mov     large fs:0, eax
0x7F2A52: mov     esi, ecx
0x7F2A54: mov     [esp+18h+var_10], esi
0x7F2A58: mov     dword ptr [esi], offset ??_7BoltShaderProperty@@6B@; const BoltShaderProperty::`vftable'
0x7F2A5E: mov     eax, [esi+6Ch]
0x7F2A61: push    eax
0x7F2A62: mov     [esp+1Ch+var_4], 0
0x7F2A6A: call    FormHeapFree
0x7F2A6F: add     esp, 4
0x7F2A72: sub     dword ptr ds:0B468E8h, 1
0x7F2A79: jnz     short loc_7F2A80
0x7F2A7B: call    sub_7F3870
0x7F2A80: mov     ecx, esi; this
0x7F2A82: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7F2A8A: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x7F2A8F: mov     ecx, [esp+18h+var_C]
0x7F2A93: mov     large fs:0, ecx
0x7F2A9A: pop     ecx
0x7F2A9B: pop     esi
0x7F2A9C: add     esp, 10h
0x7F2A9F: retn
