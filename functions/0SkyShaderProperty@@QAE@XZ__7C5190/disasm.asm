0x7C5190: push    0FFFFFFFFh
0x7C5192: push    offset ??1SkyShaderProperty@@UAE@XZ_SEH
0x7C5197: mov     eax, large fs:0
0x7C519D: push    eax
0x7C519E: push    ecx
0x7C519F: push    ebx
0x7C51A0: push    esi
0x7C51A1: push    edi
0x7C51A2: mov     eax, ds:0B30AACh
0x7C51A7: xor     eax, esp
0x7C51A9: push    eax
0x7C51AA: lea     eax, [esp+20h+var_C]
0x7C51AE: mov     large fs:0, eax
0x7C51B4: mov     esi, ecx
0x7C51B6: mov     [esp+20h+var_10], esi
0x7C51BA: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7C51BF: fldz
0x7C51C1: mov     dword ptr [esi], offset ??_7SkyShaderProperty@@6B@; const SkyShaderProperty::`vftable'
0x7C51C7: fst     dword ptr [esi+6Ch]
0x7C51CA: fst     dword ptr [esi+70h]
0x7C51CD: xor     ebx, ebx
0x7C51CF: fst     dword ptr [esi+74h]
0x7C51D2: mov     [esp+20h+var_4], ebx
0x7C51D6: fst     dword ptr [esi+78h]
0x7C51D9: mov     [esi+7Ch], ebx
0x7C51DC: mov     edi, ebx
0x7C51DE: cmp     edi, ebx
0x7C51E0: mov     byte ptr [esp+20h+var_4], 1
0x7C51E5: jz      short loc_7C520A
0x7C51E7: lea     eax, [edi+4]
0x7C51EA: fstp    st
0x7C51EC: push    eax; lpAddend
0x7C51ED: call    dword ptr ds:0A2807Ch
0x7C51F3: test    eax, eax
0x7C51F5: jnz     short loc_7C5205
0x7C51F7: cmp     edi, ebx
0x7C51F9: jz      short loc_7C5205
0x7C51FB: mov     edx, [edi]
0x7C51FD: mov     eax, [edx]
0x7C51FF: push    1
0x7C5201: mov     ecx, edi
0x7C5203: call    eax
0x7C5205: fldz
0x7C5207: mov     [esi+7Ch], ebx
0x7C520A: fstp    dword ptr [esi+80h]
0x7C5210: mov     dword ptr [esi+88h], 8
0x7C521A: mov     [esi+84h], bx
0x7C5221: mov     ecx, ds:0B25AE0h
0x7C5227: mov     [esi+6Ch], ecx
0x7C522A: mov     edx, ds:0B25AE4h
0x7C5230: mov     [esi+70h], edx
0x7C5233: mov     eax, ds:0B25AE8h
0x7C5238: mov     [esi+74h], eax
0x7C523B: mov     ecx, ds:0B25AECh
0x7C5241: mov     [esi+78h], ecx
0x7C5244: mov     eax, esi
0x7C5246: mov     ecx, dword ptr [esp+20h+var_C]
0x7C524A: mov     large fs:0, ecx
0x7C5251: pop     ecx
0x7C5252: pop     edi
0x7C5253: pop     esi
0x7C5254: pop     ebx
0x7C5255: add     esp, 10h
0x7C5258: retn
