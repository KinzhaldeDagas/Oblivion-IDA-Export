0x585AC0: push    0FFFFFFFFh
0x585AC2: push    offset SEH_585AC0
0x585AC7: mov     eax, large fs:0
0x585ACD: push    eax
0x585ACE: push    ecx
0x585ACF: push    ebx
0x585AD0: push    ebp
0x585AD1: push    esi
0x585AD2: push    edi
0x585AD3: mov     eax, ds:0B30AACh
0x585AD8: xor     eax, esp
0x585ADA: push    eax
0x585ADB: lea     eax, [esp+24h+var_C]
0x585ADF: mov     large fs:0, eax
0x585AE5: mov     esi, ecx
0x585AE7: xor     ebp, ebp
0x585AE9: mov     [esp+24h+var_10], ebp
0x585AED: mov     ebx, [esi+4]
0x585AF0: mov     eax, [ebx]
0x585AF2: cmp     eax, ebp
0x585AF4: mov     [esp+24h+var_4], ebp
0x585AF8: mov     [esi+4], eax
0x585AFB: jz      short loc_585B02
0x585AFD: mov     [eax+4], ebp
0x585B00: jmp     short loc_585B05
0x585B02: mov     [esi+8], ebp
0x585B05: mov     edi, [esp+24h+arg_0]
0x585B09: mov     [edi], ebp
0x585B0B: mov     [edi+4], bp
0x585B0F: mov     [edi+6], bp
0x585B13: mov     eax, [ebx+8]
0x585B16: push    ebp; a3
0x585B17: push    eax; a2
0x585B18: mov     ecx, edi; this
0x585B1A: call    BSStringT_Set
0x585B1F: mov     eax, [esi]
0x585B21: mov     edx, [eax+8]
0x585B24: push    ebx
0x585B25: mov     ecx, esi
0x585B27: mov     [esp+28h+var_4], ebp
0x585B2B: mov     [esp+28h+var_10], 1
0x585B33: call    edx
0x585B35: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x585B39: mov     eax, edi
0x585B3B: mov     ecx, dword ptr [esp+24h+var_C]
0x585B3F: mov     large fs:0, ecx
0x585B46: pop     ecx
0x585B47: pop     edi
0x585B48: pop     esi
0x585B49: pop     ebp
0x585B4A: pop     ebx
0x585B4B: add     esp, 10h
0x585B4E: retn    4
