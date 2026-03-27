0x740BC0: push    ecx
0x740BC1: push    ebx
0x740BC2: push    ebp
0x740BC3: push    esi
0x740BC4: mov     esi, [esp+10h+arg_0]
0x740BC8: push    edi
0x740BC9: mov     edi, ecx
0x740BCB: push    esi
0x740BCC: mov     [esp+18h+var_4], edi
0x740BD0: call    sub_721730
0x740BD5: mov     eax, ds:0B401ECh
0x740BDA: push    eax; ArgList
0x740BDB: call    TESOutput_PrintString
0x740BE0: movzx   ebx, word ptr [esi+0Ah]
0x740BE4: movzx   ecx, word ptr [esi+8]
0x740BE8: add     esp, 4
0x740BEB: cmp     ebx, ecx
0x740BED: mov     [esp+14h+arg_0], eax
0x740BF1: jb      short loc_740C01
0x740BF3: movzx   edx, word ptr [esi+0Eh]
0x740BF7: add     edx, ebx
0x740BF9: push    edx
0x740BFA: mov     ecx, esi
0x740BFC: call    NiTArray_SetSize
0x740C01: lea     eax, [esp+14h+arg_0]
0x740C05: push    eax
0x740C06: push    ebx
0x740C07: mov     ecx, esi
0x740C09: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x740C0E: mov     ecx, [edi+0Ch]
0x740C11: push    ecx; int
0x740C12: push    offset aM_uisize; "m_uiSize"
0x740C17: call    TESOutput_PrintLabeledUnsignedInt
0x740C1C: movzx   ebx, word ptr [esi+0Ah]
0x740C20: movzx   edx, word ptr [esi+8]
0x740C24: add     esp, 8
0x740C27: cmp     ebx, edx
0x740C29: mov     [esp+14h+arg_0], eax
0x740C2D: jb      short loc_740C3D
0x740C2F: movzx   eax, word ptr [esi+0Eh]
0x740C33: add     eax, ebx
0x740C35: push    eax
0x740C36: mov     ecx, esi
0x740C38: call    NiTArray_SetSize
0x740C3D: lea     ecx, [esp+14h+arg_0]
0x740C41: push    ecx
0x740C42: push    ebx
0x740C43: mov     ecx, esi
0x740C45: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x740C4A: xor     ebp, ebp
0x740C4C: cmp     [edi+0Ch], ebp
0x740C4F: jbe     loc_740CDC
0x740C55: jmp     short loc_740C59
0x740C57: mov     edi, edx
0x740C59: mov     edx, [edi+10h]
0x740C5C: mov     eax, [edx+ebp*4]
0x740C5F: push    eax; int
0x740C60: push    offset aM_pivalueI; "m_piValue[i]"
0x740C65: call    TESOutput_PrintLabeledSignedInt
0x740C6A: movzx   edi, word ptr [esi+0Ah]
0x740C6E: movzx   ecx, word ptr [esi+8]
0x740C72: add     esp, 8
0x740C75: cmp     edi, ecx
0x740C77: mov     ebx, eax
0x740C79: jb      short loc_740C89
0x740C7B: movzx   edx, word ptr [esi+0Eh]
0x740C7F: add     edx, edi
0x740C81: push    edx
0x740C82: mov     ecx, esi
0x740C84: call    NiTArray_SetSize
0x740C89: movzx   eax, word ptr [esi+0Ah]
0x740C8D: cmp     edi, eax
0x740C8F: jb      short loc_740CA3
0x740C91: test    ebx, ebx
0x740C93: lea     ecx, [edi+1]
0x740C96: mov     [esi+0Ah], cx
0x740C9A: jz      short loc_740CC6
0x740C9C: add     word ptr [esi+0Ch], 1
0x740CA1: jmp     short loc_740CC6
0x740CA3: test    ebx, ebx
0x740CA5: jz      short loc_740CB7
0x740CA7: mov     edx, [esi+4]
0x740CAA: cmp     dword ptr [edx+edi*4], 0
0x740CAE: jnz     short loc_740CC6
0x740CB0: add     word ptr [esi+0Ch], 1
0x740CB5: jmp     short loc_740CC6
0x740CB7: mov     eax, [esi+4]
0x740CBA: cmp     dword ptr [eax+edi*4], 0
0x740CBE: jz      short loc_740CC6
0x740CC0: add     word ptr [esi+0Ch], 0FFFFh
0x740CC6: mov     ecx, [esi+4]
0x740CC9: mov     edx, [esp+14h+var_4]
0x740CCD: add     ebp, 1
0x740CD0: mov     [ecx+edi*4], ebx
0x740CD3: cmp     ebp, [edx+0Ch]
0x740CD6: jb      loc_740C57
0x740CDC: pop     edi
0x740CDD: pop     esi
0x740CDE: pop     ebp
0x740CDF: pop     ebx
0x740CE0: pop     ecx
0x740CE1: retn    4
