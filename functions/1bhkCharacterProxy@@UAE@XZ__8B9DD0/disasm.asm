0x8B9DD0: push    0FFFFFFFFh
0x8B9DD2: push    offset ??1bhkCharacterProxy@@UAE@XZ_SEH
0x8B9DD7: mov     eax, large fs:0
0x8B9DDD: push    eax
0x8B9DDE: push    ecx
0x8B9DDF: push    esi
0x8B9DE0: mov     eax, ds:0B30AACh
0x8B9DE5: xor     eax, esp
0x8B9DE7: push    eax
0x8B9DE8: lea     eax, [esp+18h+var_C]
0x8B9DEC: mov     large fs:0, eax
0x8B9DF2: mov     esi, ecx
0x8B9DF4: mov     [esp+18h+var_10], esi
0x8B9DF8: mov     dword ptr [esi], offset ??_7bhkCharacterProxy@@6B@; const bhkCharacterProxy::`vftable'
0x8B9DFE: mov     ecx, [esi+8]
0x8B9E01: test    ecx, ecx
0x8B9E03: mov     [esp+18h+var_4], 1
0x8B9E0B: jz      short loc_8B9E12
0x8B9E0D: call    sub_8AC0C0
0x8B9E12: mov     ecx, esi
0x8B9E14: call    sub_89D700
0x8B9E19: sub     dword ptr ds:0BA8020h, 1
0x8B9E20: lea     ecx, [esi+10h]; this
0x8B9E23: mov     byte ptr [esp+18h+var_4], 0
0x8B9E28: call    ??1bhkCharacterPointCollector@@UAE@XZ; bhkCharacterPointCollector::~bhkCharacterPointCollector(void)
0x8B9E2D: mov     ecx, esi; this
0x8B9E2F: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B9E37: call    ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x8B9E3C: mov     ecx, [esp+18h+var_C]
0x8B9E40: mov     large fs:0, ecx
0x8B9E47: pop     ecx
0x8B9E48: pop     esi
0x8B9E49: add     esp, 10h
0x8B9E4C: retn
