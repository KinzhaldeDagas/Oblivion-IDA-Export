0x8A1B80: push    0FFFFFFFFh
0x8A1B82: push    offset SEH_8C62B0
0x8A1B87: mov     eax, large fs:0
0x8A1B8D: push    eax
0x8A1B8E: push    ecx
0x8A1B8F: push    esi
0x8A1B90: mov     eax, ds:0B30AACh
0x8A1B95: xor     eax, esp
0x8A1B97: push    eax
0x8A1B98: lea     eax, [esp+18h+var_C]
0x8A1B9C: mov     large fs:0, eax
0x8A1BA2: push    14h; Size
0x8A1BA4: call    FormHeapAlloc
0x8A1BA9: mov     esi, eax
0x8A1BAB: add     esp, 4
0x8A1BAE: mov     [esp+18h+var_10], esi
0x8A1BB2: test    esi, esi
0x8A1BB4: mov     [esp+18h+var_4], 0
0x8A1BBC: jz      short loc_8A1C03
0x8A1BBE: mov     ecx, esi; this
0x8A1BC0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8A1BC5: mov     eax, 1
0x8A1BCA: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8A1BD0: mov     dword ptr [esi+0Ch], 0
0x8A1BD7: mov     dword ptr [esi+10h], 0
0x8A1BDE: add     ds:0BA7D70h, eax
0x8A1BE4: mov     dword ptr [esi], offset ??_7bhkTransformShape@@6B@; const bhkTransformShape::`vftable'
0x8A1BEA: add     ds:0BA7D64h, eax
0x8A1BF0: mov     eax, esi
0x8A1BF2: mov     ecx, [esp+18h+var_C]
0x8A1BF6: mov     large fs:0, ecx
0x8A1BFD: pop     ecx
0x8A1BFE: pop     esi
0x8A1BFF: add     esp, 10h
0x8A1C02: retn
0x8A1C03: xor     eax, eax
0x8A1C05: mov     ecx, [esp+18h+var_C]
0x8A1C09: mov     large fs:0, ecx
0x8A1C10: pop     ecx
0x8A1C11: pop     esi
0x8A1C12: add     esp, 10h
0x8A1C15: retn
