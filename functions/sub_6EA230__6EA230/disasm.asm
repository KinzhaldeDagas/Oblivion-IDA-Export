0x6EA230: push    0FFFFFFFFh
0x6EA232: push    offset SEH_8C62B0
0x6EA237: mov     eax, large fs:0
0x6EA23D: push    eax
0x6EA23E: push    ecx
0x6EA23F: push    esi
0x6EA240: mov     eax, ds:0B30AACh
0x6EA245: xor     eax, esp
0x6EA247: push    eax
0x6EA248: lea     eax, [esp+18h+var_C]
0x6EA24C: mov     large fs:0, eax
0x6EA252: push    40h ; '@'; Size
0x6EA254: call    FormHeapAlloc
0x6EA259: mov     esi, eax
0x6EA25B: add     esp, 4
0x6EA25E: mov     [esp+18h+var_10], esi
0x6EA262: xor     eax, eax
0x6EA264: cmp     esi, eax
0x6EA266: mov     [esp+18h+var_4], eax
0x6EA26A: jz      short loc_6EA29D
0x6EA26C: mov     ecx, esi
0x6EA26E: call    sub_6CC4E0
0x6EA273: mov     dword ptr [esi], offset ??_7NiBlendQuaternionInterpolator@@6B@; const NiBlendQuaternionInterpolator::`vftable'
0x6EA279: mov     eax, ds:0B3EBA0h
0x6EA27E: mov     [esi+30h], eax
0x6EA281: mov     ecx, ds:0B3EBA4h
0x6EA287: mov     [esi+34h], ecx
0x6EA28A: mov     edx, ds:0B3EBA8h
0x6EA290: mov     [esi+38h], edx
0x6EA293: mov     eax, ds:0B3EBACh
0x6EA298: mov     [esi+3Ch], eax
0x6EA29B: mov     eax, esi
0x6EA29D: mov     ecx, [esp+18h+var_C]
0x6EA2A1: mov     large fs:0, ecx
0x6EA2A8: pop     ecx
0x6EA2A9: pop     esi
0x6EA2AA: add     esp, 10h
0x6EA2AD: retn
