0x577AA0: push    0FFFFFFFFh
0x577AA2: push    offset SEH_577AA0
0x577AA7: mov     eax, large fs:0
0x577AAD: push    eax
0x577AAE: push    ecx
0x577AAF: push    ebx
0x577AB0: push    esi
0x577AB1: push    edi
0x577AB2: mov     eax, ds:0B30AACh
0x577AB7: xor     eax, esp
0x577AB9: push    eax
0x577ABA: lea     eax, [esp+20h+var_C]
0x577ABE: mov     large fs:0, eax
0x577AC4: mov     esi, ecx
0x577AC6: mov     [esp+20h+var_10], esi
0x577ACA: mov     eax, [esi+0Ch]
0x577ACD: xor     ebx, ebx
0x577ACF: cmp     eax, ebx
0x577AD1: mov     [esp+20h+var_4], ebx
0x577AD5: jz      short loc_577B15
0x577AD7: mov     eax, [esi+4]
0x577ADA: mov     ecx, [eax]
0x577ADC: cmp     ecx, ebx
0x577ADE: mov     [esi+4], ecx
0x577AE1: jz      short loc_577AE8
0x577AE3: mov     [ecx+4], ebx
0x577AE6: jmp     short loc_577AEB
0x577AE8: mov     [esi+8], ebx
0x577AEB: mov     edx, [esi]
0x577AED: mov     edi, [eax+8]
0x577AF0: push    eax
0x577AF1: mov     eax, [edx+8]
0x577AF4: mov     ecx, esi
0x577AF6: call    eax
0x577AF8: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x577AFC: cmp     edi, ebx
0x577AFE: jz      short loc_577B10
0x577B00: mov     ecx, edi
0x577B02: call    sub_5777A0
0x577B07: push    edi
0x577B08: call    FormHeapFree
0x577B0D: add     esp, 4
0x577B10: cmp     [esi+0Ch], ebx
0x577B13: jnz     short loc_577AD7
0x577B15: mov     ecx, esi
0x577B17: mov     [esp+20h+var_4], 0FFFFFFFFh
0x577B1F: call    ??1?$NiTList@PAVTextPage@FontManager@@@@UAE@XZ; NiTList<FontManager::TextPage *>::~NiTList<FontManager::TextPage *>(void)
0x577B24: mov     ecx, dword ptr [esp+20h+var_C]
0x577B28: mov     large fs:0, ecx
0x577B2F: pop     ecx
0x577B30: pop     edi
0x577B31: pop     esi
0x577B32: pop     ebx
0x577B33: add     esp, 10h
0x577B36: retn
