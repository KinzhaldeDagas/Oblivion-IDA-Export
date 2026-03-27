0x7F30B0: push    0FFFFFFFFh
0x7F30B2: push    offset SEH_8C8970
0x7F30B7: mov     eax, large fs:0
0x7F30BD: push    eax
0x7F30BE: push    ecx
0x7F30BF: push    esi
0x7F30C0: push    edi
0x7F30C1: mov     eax, ds:0B30AACh
0x7F30C6: xor     eax, esp
0x7F30C8: push    eax
0x7F30C9: lea     eax, [esp+1Ch+var_C]
0x7F30CD: mov     large fs:0, eax
0x7F30D3: mov     edi, ecx
0x7F30D5: push    19Ch; Size
0x7F30DA: call    FormHeapAlloc
0x7F30DF: add     esp, 4
0x7F30E2: mov     [esp+1Ch+var_10], eax
0x7F30E6: xor     esi, esi
0x7F30E8: cmp     eax, esi
0x7F30EA: mov     [esp+1Ch+var_4], esi
0x7F30EE: jz      short loc_7F30F9
0x7F30F0: mov     ecx, eax; this
0x7F30F2: call    ??0BoltShaderProperty@@QAE@XZ; BoltShaderProperty::BoltShaderProperty(void)
0x7F30F7: mov     esi, eax
0x7F30F9: mov     eax, [esp+1Ch+arg_0]
0x7F30FD: push    eax
0x7F30FE: push    esi
0x7F30FF: mov     ecx, edi
0x7F3101: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F3109: call    sub_7E2490
0x7F310E: mov     eax, esi
0x7F3110: mov     ecx, [esp+1Ch+var_C]
0x7F3114: mov     large fs:0, ecx
0x7F311B: pop     ecx
0x7F311C: pop     edi
0x7F311D: pop     esi
0x7F311E: add     esp, 10h
0x7F3121: retn    4
