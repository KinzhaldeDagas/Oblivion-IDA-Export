0x6C5490: push    0FFFFFFFFh
0x6C5492: push    offset ??1NiDefaultAVObjectPalette@@UAE@XZ_SEH
0x6C5497: mov     eax, large fs:0
0x6C549D: push    eax
0x6C549E: push    ecx
0x6C549F: push    esi
0x6C54A0: mov     eax, ds:0B30AACh
0x6C54A5: xor     eax, esp
0x6C54A7: push    eax
0x6C54A8: lea     eax, [esp+18h+var_C]
0x6C54AC: mov     large fs:0, eax
0x6C54B2: mov     esi, ecx
0x6C54B4: mov     [esp+18h+var_10], esi
0x6C54B8: mov     dword ptr [esi], offset ??_7NiDefaultAVObjectPalette@@6B@; const NiDefaultAVObjectPalette::`vftable'
0x6C54BE: lea     ecx, [esi+8]
0x6C54C1: mov     [esp+18h+var_4], 0
0x6C54C9: call    ??1?$NiTStringPointerMap@PAVNiAVObject@@@@UAE@XZ; NiTStringPointerMap<NiAVObject *>::~NiTStringPointerMap<NiAVObject *>(void)
0x6C54CE: mov     ecx, esi
0x6C54D0: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6C54D8: mov     dword ptr [esi], offset ??_7NiAVObjectPalette@@6B@; const NiAVObjectPalette::`vftable'
0x6C54DE: call    NiRefObject_destr
0x6C54E3: mov     ecx, [esp+18h+var_C]
0x6C54E7: mov     large fs:0, ecx
0x6C54EE: pop     ecx
0x6C54EF: pop     esi
0x6C54F0: add     esp, 10h
0x6C54F3: retn
