0x738D40: push    0FFFFFFFFh
0x738D42: push    offset SEH_8C8970
0x738D47: mov     eax, large fs:0
0x738D4D: push    eax
0x738D4E: push    ecx
0x738D4F: push    esi
0x738D50: push    edi
0x738D51: mov     eax, ds:0B30AACh
0x738D56: xor     eax, esp
0x738D58: push    eax
0x738D59: lea     eax, [esp+1Ch+var_C]
0x738D5D: mov     large fs:0, eax
0x738D63: mov     edi, ecx
0x738D65: push    0C0h ; 'À'; Size
0x738D6A: call    FormHeapAlloc
0x738D6F: mov     esi, eax
0x738D71: add     esp, 4
0x738D74: mov     [esp+1Ch+var_10], esi
0x738D78: test    esi, esi
0x738D7A: mov     [esp+1Ch+var_4], 0
0x738D82: jz      short loc_738D93
0x738D84: mov     ecx, esi
0x738D86: call    sub_717590
0x738D8B: mov     dword ptr [esi], offset ??_7NiScreenGeometry@@6B@; const NiScreenGeometry::`vftable'
0x738D91: jmp     short loc_738D95
0x738D93: xor     esi, esi
0x738D95: mov     eax, [esp+1Ch+arg_0]
0x738D99: push    eax
0x738D9A: push    esi
0x738D9B: mov     ecx, edi
0x738D9D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x738DA5: call    sub_7175B0
0x738DAA: mov     eax, esi
0x738DAC: mov     ecx, [esp+1Ch+var_C]
0x738DB0: mov     large fs:0, ecx
0x738DB7: pop     ecx
0x738DB8: pop     edi
0x738DB9: pop     esi
0x738DBA: add     esp, 10h
0x738DBD: retn    4
