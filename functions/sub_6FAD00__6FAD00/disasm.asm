0x6FAD00: push    0FFFFFFFFh
0x6FAD02: push    offset SEH_8C8970
0x6FAD07: mov     eax, large fs:0
0x6FAD0D: push    eax
0x6FAD0E: push    ecx
0x6FAD0F: push    esi
0x6FAD10: push    edi
0x6FAD11: mov     eax, ds:0B30AACh
0x6FAD16: xor     eax, esp
0x6FAD18: push    eax
0x6FAD19: lea     eax, [esp+1Ch+var_C]
0x6FAD1D: mov     large fs:0, eax
0x6FAD23: mov     edi, ecx
0x6FAD25: push    1Ch; Size
0x6FAD27: call    FormHeapAlloc
0x6FAD2C: mov     esi, eax
0x6FAD2E: add     esp, 4
0x6FAD31: mov     [esp+1Ch+var_10], esi
0x6FAD35: test    esi, esi
0x6FAD37: mov     [esp+1Ch+var_4], 0
0x6FAD3F: jz      short loc_6FAD5C
0x6FAD41: mov     ecx, esi
0x6FAD43: call    sub_752BF0
0x6FAD48: fld1
0x6FAD4A: fstp    dword ptr [esi+18h]
0x6FAD4D: mov     dword ptr [esi], offset ??_7BSWindModifier@@6B@; const BSWindModifier::`vftable'
0x6FAD53: mov     dword ptr [esi+0Ch], 0FA0h
0x6FAD5A: jmp     short loc_6FAD5E
0x6FAD5C: xor     esi, esi
0x6FAD5E: mov     eax, [esp+1Ch+arg_0]
0x6FAD62: push    eax
0x6FAD63: push    esi
0x6FAD64: mov     ecx, edi
0x6FAD66: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6FAD6E: call    sub_752C40
0x6FAD73: fld     dword ptr [edi+18h]
0x6FAD76: fstp    dword ptr [esi+18h]
0x6FAD79: mov     eax, esi
0x6FAD7B: mov     ecx, [esp+1Ch+var_C]
0x6FAD7F: mov     large fs:0, ecx
0x6FAD86: pop     ecx
0x6FAD87: pop     edi
0x6FAD88: pop     esi
0x6FAD89: add     esp, 10h
0x6FAD8C: retn    4
