0x6D9BC0: push    ebx
0x6D9BC1: push    esi
0x6D9BC2: mov     esi, [esp+8+arg_0]
0x6D9BC6: push    edi
0x6D9BC7: push    esi
0x6D9BC8: mov     ebx, ecx
0x6D9BCA: call    sub_6EC460
0x6D9BCF: mov     eax, ds:0B3DC68h
0x6D9BD4: push    eax; ArgList
0x6D9BD5: call    TESOutput_PrintString
0x6D9BDA: movzx   edi, word ptr [esi+0Ah]
0x6D9BDE: movzx   ecx, word ptr [esi+8]
0x6D9BE2: add     esp, 4
0x6D9BE5: cmp     edi, ecx
0x6D9BE7: mov     [esp+0Ch+arg_0], eax
0x6D9BEB: jb      short loc_6D9BFB
0x6D9BED: movzx   edx, word ptr [esi+0Eh]
0x6D9BF1: add     edx, edi
0x6D9BF3: push    edx
0x6D9BF4: mov     ecx, esi
0x6D9BF6: call    NiTArray_SetSize
0x6D9BFB: lea     eax, [esp+0Ch+arg_0]
0x6D9BFF: push    eax
0x6D9C00: push    edi
0x6D9C01: mov     ecx, esi
0x6D9C03: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D9C08: push    offset aM_kquaternionv; "m_kQuaternionValue"
0x6D9C0D: lea     ecx, [ebx+0Ch]
0x6D9C10: call    sub_7153C0
0x6D9C15: movzx   edi, word ptr [esi+0Ah]
0x6D9C19: movzx   ecx, word ptr [esi+8]
0x6D9C1D: cmp     edi, ecx
0x6D9C1F: mov     [esp+0Ch+arg_0], eax
0x6D9C23: jb      short loc_6D9C33
0x6D9C25: movzx   edx, word ptr [esi+0Eh]
0x6D9C29: add     edx, edi
0x6D9C2B: push    edx
0x6D9C2C: mov     ecx, esi
0x6D9C2E: call    NiTArray_SetSize
0x6D9C33: lea     eax, [esp+0Ch+arg_0]
0x6D9C37: push    eax
0x6D9C38: push    edi
0x6D9C39: mov     ecx, esi
0x6D9C3B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D9C40: mov     ebx, [ebx+1Ch]
0x6D9C43: push    ebx; int
0x6D9C44: push    offset aM_spquaternion; "m_spQuaternionData"
0x6D9C49: call    TESOutput_PrintLabeledPointer
0x6D9C4E: movzx   edi, word ptr [esi+0Ah]
0x6D9C52: movzx   ecx, word ptr [esi+8]
0x6D9C56: add     esp, 8
0x6D9C59: cmp     edi, ecx
0x6D9C5B: mov     [esp+0Ch+arg_0], eax
0x6D9C5F: jb      short loc_6D9C6F
0x6D9C61: movzx   edx, word ptr [esi+0Eh]
0x6D9C65: add     edx, edi
0x6D9C67: push    edx
0x6D9C68: mov     ecx, esi
0x6D9C6A: call    NiTArray_SetSize
0x6D9C6F: lea     eax, [esp+0Ch+arg_0]
0x6D9C73: push    eax
0x6D9C74: push    edi
0x6D9C75: mov     ecx, esi
0x6D9C77: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D9C7C: pop     edi
0x6D9C7D: pop     esi
0x6D9C7E: pop     ebx
0x6D9C7F: retn    4
