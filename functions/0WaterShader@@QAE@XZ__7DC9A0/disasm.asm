0x7DC9A0: push    0FFFFFFFFh
0x7DC9A2: push    offset ??0WaterShader@@QAE@XZ_SEH
0x7DC9A7: mov     eax, large fs:0
0x7DC9AD: push    eax
0x7DC9AE: sub     esp, 14h
0x7DC9B1: push    ebx
0x7DC9B2: push    ebp
0x7DC9B3: push    esi
0x7DC9B4: push    edi
0x7DC9B5: mov     eax, ds:0B30AACh
0x7DC9BA: xor     eax, esp
0x7DC9BC: push    eax
0x7DC9BD: lea     eax, [esp+34h+var_C]
0x7DC9C1: mov     large fs:0, eax
0x7DC9C7: mov     esi, ecx
0x7DC9C9: mov     [esp+34h+var_20], esi
0x7DC9CD: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7DC9D2: push    offset sub_4027D0; a5
0x7DC9D7: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7DC9DC: push    10h; size
0x7DC9DE: push    4; a2
0x7DC9E0: lea     eax, [esi+7Ch]
0x7DC9E3: xor     ebx, ebx
0x7DC9E5: push    eax; a1
0x7DC9E6: mov     [esp+48h+var_4], ebx
0x7DC9EA: mov     dword ptr [esi], offset ??_7WaterShader@@6B@; const WaterShader::`vftable'
0x7DC9F0: call    ArrayConstructor
0x7DC9F5: mov     [esi+0BCh], ebx
0x7DC9FB: mov     [esi+0C0h], ebx
0x7DCA01: push    offset sub_7016A0; a5
0x7DCA06: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7DCA0B: push    10h; size
0x7DCA0D: push    4; a2
0x7DCA0F: lea     ecx, [esi+0C4h]
0x7DCA15: push    ecx; a1
0x7DCA16: mov     byte ptr [esp+48h+var_4], 3
0x7DCA1B: call    ArrayConstructor
0x7DCA20: mov     [esi+104h], ebx
0x7DCA26: mov     [esi+108h], ebx
0x7DCA2C: mov     [esi+10Ch], ebx
0x7DCA32: mov     [esi+110h], ebx
0x7DCA38: mov     [esi+114h], ebx
0x7DCA3E: mov     ebp, ds:0A2807Ch
0x7DCA44: mov     byte ptr [esi+20h], 1
0x7DCA48: mov     edi, [esi+108h]
0x7DCA4E: cmp     edi, ebx
0x7DCA50: mov     byte ptr [esp+34h+var_4], 9
0x7DCA55: jz      short loc_7DCA75
0x7DCA57: lea     edx, [edi+4]
0x7DCA5A: push    edx; lpAddend
0x7DCA5B: call    ebp ; InterlockedDecrement
0x7DCA5D: test    eax, eax
0x7DCA5F: jnz     short loc_7DCA6F
0x7DCA61: cmp     edi, ebx
0x7DCA63: jz      short loc_7DCA6F
0x7DCA65: mov     eax, [edi]
0x7DCA67: mov     edx, [eax]
0x7DCA69: push    1
0x7DCA6B: mov     ecx, edi
0x7DCA6D: call    edx
0x7DCA6F: mov     [esi+108h], ebx
0x7DCA75: mov     edi, [esi+110h]
0x7DCA7B: cmp     edi, ebx
0x7DCA7D: jz      short loc_7DCA9D
0x7DCA7F: lea     eax, [edi+4]
0x7DCA82: push    eax; lpAddend
0x7DCA83: call    ebp ; InterlockedDecrement
0x7DCA85: test    eax, eax
0x7DCA87: jnz     short loc_7DCA97
0x7DCA89: cmp     edi, ebx
0x7DCA8B: jz      short loc_7DCA97
0x7DCA8D: mov     edx, [edi]
0x7DCA8F: mov     eax, [edx]
0x7DCA91: push    1
0x7DCA93: mov     ecx, edi
0x7DCA95: call    eax
0x7DCA97: mov     [esi+110h], ebx
0x7DCA9D: mov     edi, [esi+104h]
0x7DCAA3: cmp     edi, ebx
0x7DCAA5: jz      short loc_7DCAC5
0x7DCAA7: lea     ecx, [edi+4]
0x7DCAAA: push    ecx; lpAddend
0x7DCAAB: call    ebp ; InterlockedDecrement
0x7DCAAD: test    eax, eax
0x7DCAAF: jnz     short loc_7DCABF
0x7DCAB1: cmp     edi, ebx
0x7DCAB3: jz      short loc_7DCABF
0x7DCAB5: mov     edx, [edi]
0x7DCAB7: mov     eax, [edx]
0x7DCAB9: push    1
0x7DCABB: mov     ecx, edi
0x7DCABD: call    eax
0x7DCABF: mov     [esi+104h], ebx
0x7DCAC5: mov     edi, [esi+114h]
0x7DCACB: cmp     edi, ebx
0x7DCACD: jz      short loc_7DCAED
0x7DCACF: lea     ecx, [edi+4]
0x7DCAD2: push    ecx; lpAddend
0x7DCAD3: call    ebp ; InterlockedDecrement
0x7DCAD5: test    eax, eax
0x7DCAD7: jnz     short loc_7DCAE7
0x7DCAD9: cmp     edi, ebx
0x7DCADB: jz      short loc_7DCAE7
0x7DCADD: mov     edx, [edi]
0x7DCADF: mov     eax, [edx]
0x7DCAE1: push    1
0x7DCAE3: mov     ecx, edi
0x7DCAE5: call    eax
0x7DCAE7: mov     [esi+114h], ebx
0x7DCAED: cmp     dword ptr ds:0B42F48h, 2
0x7DCAF4: fldz
0x7DCAF6: fst     dword ptr ds:0B45E64h
0x7DCAFC: mov     ds:0B45DCCh, esi
0x7DCB02: fst     dword ptr ds:0B45E68h
0x7DCB08: mov     ds:0B45DBBh, bl
0x7DCB0E: fst     dword ptr ds:0B45E54h
0x7DCB14: mov     ds:0B45DC0h, bl
0x7DCB1A: fst     dword ptr ds:0B45E58h
0x7DCB20: fst     [esp+34h+var_1C]
0x7DCB24: mov     ecx, [esp+34h+var_1C]
0x7DCB28: fst     [esp+34h+var_18]
0x7DCB2C: mov     edx, [esp+34h+var_18]
0x7DCB30: fst     [esp+34h+var_14]
0x7DCB34: mov     eax, [esp+34h+var_14]
0x7DCB38: fst     [esp+34h+var_10]
0x7DCB3C: fst     [esp+34h+var_1C]
0x7DCB40: mov     ds:0B45EC4h, ecx
0x7DCB46: mov     ecx, [esp+34h+var_10]
0x7DCB4A: fst     [esp+34h+var_18]
0x7DCB4E: mov     ds:0B45EC8h, edx
0x7DCB54: fst     [esp+34h+var_14]
0x7DCB58: mov     edx, [esp+34h+var_1C]
0x7DCB5C: fstp    [esp+34h+var_10]
0x7DCB60: mov     ds:0B45ECCh, eax
0x7DCB65: mov     eax, [esp+34h+var_18]
0x7DCB69: mov     ds:0B45ED0h, ecx
0x7DCB6F: mov     ecx, [esp+34h+var_14]
0x7DCB73: mov     ds:0B45EE4h, edx
0x7DCB79: mov     edx, [esp+34h+var_10]
0x7DCB7D: mov     ds:0B45EE8h, eax
0x7DCB82: mov     ds:0B45EECh, ecx
0x7DCB88: mov     ds:0B45EF0h, edx
0x7DCB8E: mov     eax, esi
0x7DCB90: jg      short loc_7DCB98
0x7DCB92: mov     ds:0B45DB9h, bl
0x7DCB98: mov     ecx, dword ptr [esp+34h+var_C]
0x7DCB9C: mov     large fs:0, ecx
0x7DCBA3: pop     ecx
0x7DCBA4: pop     edi
0x7DCBA5: pop     esi
0x7DCBA6: pop     ebp
0x7DCBA7: pop     ebx
0x7DCBA8: add     esp, 20h
0x7DCBAB: retn
