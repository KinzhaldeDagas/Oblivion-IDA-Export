0x431C10: sub     esp, 8
0x431C13: push    ebx
0x431C14: push    ebp
0x431C15: push    esi
0x431C16: push    edi
0x431C17: mov     edi, ecx
0x431C19: movzx   eax, word ptr [edi+10h]
0x431C1D: push    eax; int
0x431C1E: push    offset aFilefinderPath; "FileFinder Paths"
0x431C23: mov     [esp+20h+var_8], edi
0x431C27: call    TESOutput_PrintLabeledUnsignedInt
0x431C2C: mov     esi, [esp+20h+arg_0]
0x431C30: movzx   ebx, word ptr [esi+0Ah]
0x431C34: mov     [esp+20h+var_4], eax
0x431C38: movzx   eax, word ptr [esi+8]
0x431C3C: add     esp, 8
0x431C3F: cmp     ebx, eax
0x431C41: jb      short loc_431C51
0x431C43: movzx   ecx, word ptr [esi+0Eh]
0x431C47: add     ecx, ebx
0x431C49: push    ecx
0x431C4A: mov     ecx, esi
0x431C4C: call    NiTArray_SetSize
0x431C51: lea     edx, [esp+18h+var_4]
0x431C55: push    edx
0x431C56: push    ebx
0x431C57: mov     ecx, esi
0x431C59: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x431C5E: xor     ebp, ebp
0x431C60: cmp     [edi+10h], bp
0x431C64: jbe     loc_431CF8
0x431C6A: jmp     short loc_431C72
0x431C6C: align 10h
0x431C70: mov     edi, edx
0x431C72: mov     eax, [edi+8]
0x431C75: mov     eax, [eax+ebp*4]
0x431C78: push    eax; int
0x431C79: push    offset word_A36430; ArgList
0x431C7E: call    TESOutput_PrintLabeledString
0x431C83: movzx   edi, word ptr [esi+0Ah]
0x431C87: movzx   ecx, word ptr [esi+8]
0x431C8B: add     esp, 8
0x431C8E: cmp     edi, ecx
0x431C90: mov     ebx, eax
0x431C92: jb      short loc_431CA2
0x431C94: movzx   edx, word ptr [esi+0Eh]
0x431C98: add     edx, edi
0x431C9A: push    edx
0x431C9B: mov     ecx, esi
0x431C9D: call    NiTArray_SetSize
0x431CA2: movzx   eax, word ptr [esi+0Ah]
0x431CA6: cmp     edi, eax
0x431CA8: jb      short loc_431CBC
0x431CAA: test    ebx, ebx
0x431CAC: lea     ecx, [edi+1]
0x431CAF: mov     [esi+0Ah], cx
0x431CB3: jz      short loc_431CDF
0x431CB5: add     word ptr [esi+0Ch], 1
0x431CBA: jmp     short loc_431CDF
0x431CBC: test    ebx, ebx
0x431CBE: jz      short loc_431CD0
0x431CC0: mov     edx, [esi+4]
0x431CC3: cmp     dword ptr [edx+edi*4], 0
0x431CC7: jnz     short loc_431CDF
0x431CC9: add     word ptr [esi+0Ch], 1
0x431CCE: jmp     short loc_431CDF
0x431CD0: mov     eax, [esi+4]
0x431CD3: cmp     dword ptr [eax+edi*4], 0
0x431CD7: jz      short loc_431CDF
0x431CD9: add     word ptr [esi+0Ch], 0FFFFh
0x431CDF: mov     ecx, [esi+4]
0x431CE2: mov     edx, [esp+18h+var_8]
0x431CE6: mov     [ecx+edi*4], ebx
0x431CE9: movzx   eax, word ptr [edx+10h]
0x431CED: add     ebp, 1
0x431CF0: cmp     ebp, eax
0x431CF2: jb      loc_431C70
0x431CF8: pop     edi
0x431CF9: pop     esi
0x431CFA: pop     ebp
0x431CFB: pop     ebx
0x431CFC: add     esp, 8
0x431CFF: retn    4
