0x7EFD10: push    0FFFFFFFFh
0x7EFD12: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7EFD17: mov     eax, large fs:0
0x7EFD1D: push    eax
0x7EFD1E: push    ecx
0x7EFD1F: push    ebx
0x7EFD20: push    esi
0x7EFD21: push    edi
0x7EFD22: mov     eax, ds:0B30AACh
0x7EFD27: xor     eax, esp
0x7EFD29: push    eax
0x7EFD2A: lea     eax, [esp+20h+var_C]
0x7EFD2E: mov     large fs:0, eax
0x7EFD34: mov     ebx, ecx
0x7EFD36: push    0ACh ; '¬'; Size
0x7EFD3B: call    FormHeapAlloc
0x7EFD40: mov     esi, eax
0x7EFD42: add     esp, 4
0x7EFD45: mov     [esp+20h+var_10], esi
0x7EFD49: xor     edi, edi
0x7EFD4B: cmp     esi, edi
0x7EFD4D: mov     [esp+20h+var_4], edi
0x7EFD51: jz      short loc_7EFD80
0x7EFD53: mov     ecx, esi; this
0x7EFD55: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7EFD5A: fldz
0x7EFD5C: fstp    dword ptr [esi+74h]
0x7EFD5F: mov     dword ptr [esi], offset ??_7PrecipitationShaderProperty@@6B@; const PrecipitationShaderProperty::`vftable'
0x7EFD65: mov     [esi+6Ch], edi
0x7EFD68: mov     [esi+9Ch], edi
0x7EFD6E: mov     dword ptr [esi+0A4h], 1
0x7EFD78: mov     [esi+0A8h], edi
0x7EFD7E: jmp     short loc_7EFD82
0x7EFD80: xor     esi, esi
0x7EFD82: mov     eax, [esp+20h+arg_0]
0x7EFD86: push    eax
0x7EFD87: push    esi
0x7EFD88: mov     ecx, ebx
0x7EFD8A: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7EFD92: call    sub_7EFBF0
0x7EFD97: mov     eax, esi
0x7EFD99: mov     ecx, [esp+20h+var_C]
0x7EFD9D: mov     large fs:0, ecx
0x7EFDA4: pop     ecx
0x7EFDA5: pop     edi
0x7EFDA6: pop     esi
0x7EFDA7: pop     ebx
0x7EFDA8: add     esp, 10h
0x7EFDAB: retn    4
