0x6D7AD0: push    0FFFFFFFFh
0x6D7AD2: push    offset SEH_8C8970
0x6D7AD7: mov     eax, large fs:0
0x6D7ADD: push    eax
0x6D7ADE: push    ecx
0x6D7ADF: push    esi
0x6D7AE0: push    edi
0x6D7AE1: mov     eax, ds:0B30AACh
0x6D7AE6: xor     eax, esp
0x6D7AE8: push    eax
0x6D7AE9: lea     eax, [esp+1Ch+var_C]
0x6D7AED: mov     large fs:0, eax
0x6D7AF3: push    14h; Size
0x6D7AF5: call    FormHeapAlloc
0x6D7AFA: mov     esi, eax
0x6D7AFC: add     esp, 4
0x6D7AFF: mov     [esp+1Ch+var_10], esi
0x6D7B03: xor     edi, edi
0x6D7B05: cmp     esi, edi
0x6D7B07: mov     [esp+1Ch+var_4], edi
0x6D7B0B: jz      short loc_6D7B37
0x6D7B0D: mov     ecx, esi
0x6D7B0F: call    NiObject_constr
0x6D7B14: mov     dword ptr [esi], offset ??_7NiStringPalette@@6B@; const NiStringPalette::`vftable'
0x6D7B1A: mov     [esi+8], edi
0x6D7B1D: mov     [esi+0Ch], edi
0x6D7B20: mov     [esi+10h], edi
0x6D7B23: mov     eax, esi
0x6D7B25: mov     ecx, [esp+1Ch+var_C]
0x6D7B29: mov     large fs:0, ecx
0x6D7B30: pop     ecx
0x6D7B31: pop     edi
0x6D7B32: pop     esi
0x6D7B33: add     esp, 10h
0x6D7B36: retn
0x6D7B37: xor     eax, eax
0x6D7B39: mov     ecx, [esp+1Ch+var_C]
0x6D7B3D: mov     large fs:0, ecx
0x6D7B44: pop     ecx
0x6D7B45: pop     edi
0x6D7B46: pop     esi
0x6D7B47: add     esp, 10h
0x6D7B4A: retn
