0x4A2DB0: push    esi
0x4A2DB1: push    edi
0x4A2DB2: mov     edi, ecx
0x4A2DB4: call    TESForm_InitializeFormRecord
0x4A2DB9: mov     eax, [edi+20h]
0x4A2DBC: test    eax, eax
0x4A2DBE: jz      short loc_4A2DD1
0x4A2DC0: mov     eax, [eax+0Ch]
0x4A2DC3: push    eax
0x4A2DC4: push    4D414E57h
0x4A2DC9: call    TESForm_PutCurrentChunkData4
0x4A2DCE: add     esp, 8
0x4A2DD1: mov     esi, [edi+1Ch]
0x4A2DD4: test    esi, esi
0x4A2DD6: jz      short loc_4A2DF1
0x4A2DD8: cmp     dword ptr [esi+4], 0
0x4A2DDC: jnz     short loc_4A2DE3
0x4A2DDE: cmp     dword ptr [esi], 0
0x4A2DE1: jz      short loc_4A2DF1
0x4A2DE3: mov     ecx, [esi]
0x4A2DE5: call    sub_4A6E20
0x4A2DEA: mov     esi, [esi+4]
0x4A2DED: test    esi, esi
0x4A2DEF: jnz     short loc_4A2DD8
0x4A2DF1: mov     esi, [edi+18h]
0x4A2DF4: test    esi, esi
0x4A2DF6: jz      short loc_4A2E13
0x4A2DF8: cmp     dword ptr [esi+4], 0
0x4A2DFC: jnz     short loc_4A2E03
0x4A2DFE: cmp     dword ptr [esi], 0
0x4A2E01: jz      short loc_4A2E13
0x4A2E03: mov     ecx, [esi]
0x4A2E05: mov     edx, [ecx]
0x4A2E07: mov     eax, [edx+4]
0x4A2E0A: call    eax
0x4A2E0C: mov     esi, [esi+4]
0x4A2E0F: test    esi, esi
0x4A2E11: jnz     short loc_4A2DF8
0x4A2E13: mov     ecx, edi
0x4A2E15: pop     edi
0x4A2E16: pop     esi
0x4A2E17: jmp     TESForm_FinalizeFormRecord
