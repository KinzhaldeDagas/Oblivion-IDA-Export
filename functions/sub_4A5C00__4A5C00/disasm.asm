0x4A5C00: push    0FFFFFFFFh
0x4A5C02: push    offset SEH_787830
0x4A5C07: mov     eax, large fs:0
0x4A5C0D: push    eax
0x4A5C0E: push    ebx
0x4A5C0F: push    esi
0x4A5C10: push    edi
0x4A5C11: mov     eax, ds:0B30AACh
0x4A5C16: xor     eax, esp
0x4A5C18: push    eax
0x4A5C19: lea     eax, [esp+1Ch+var_C]
0x4A5C1D: mov     large fs:0, eax
0x4A5C23: mov     edi, ecx
0x4A5C25: mov     eax, [esp+1Ch+arg_0]
0x4A5C29: test    eax, eax
0x4A5C2B: jnz     short loc_4A5C82
0x4A5C2D: push    0Ch; Size
0x4A5C2F: call    FormHeapAlloc
0x4A5C34: mov     esi, eax
0x4A5C36: add     esp, 4
0x4A5C39: mov     [esp+1Ch+arg_0], esi
0x4A5C3D: test    esi, esi
0x4A5C3F: mov     [esp+1Ch+var_4], 0
0x4A5C47: jz      short loc_4A5C80
0x4A5C49: mov     eax, [edi]
0x4A5C4B: mov     edx, [eax+0Ch]
0x4A5C4E: mov     ecx, edi
0x4A5C50: call    edx
0x4A5C52: mov     ebx, eax
0x4A5C54: mov     eax, [edi]
0x4A5C56: mov     edx, [eax+4]
0x4A5C59: mov     ecx, edi
0x4A5C5B: call    edx
0x4A5C5D: mov     [esi+4], eax
0x4A5C60: mov     dword ptr [esi], offset ??_7TESRegionGrassObject@@6B@; const TESRegionGrassObject::`vftable'
0x4A5C66: mov     [esi+8], ebx
0x4A5C69: mov     eax, esi
0x4A5C6B: mov     ecx, [esp+1Ch+var_C]
0x4A5C6F: mov     large fs:0, ecx
0x4A5C76: pop     ecx
0x4A5C77: pop     edi
0x4A5C78: pop     esi
0x4A5C79: pop     ebx
0x4A5C7A: add     esp, 0Ch
0x4A5C7D: retn    4
0x4A5C80: xor     eax, eax
0x4A5C82: mov     ecx, [esp+1Ch+var_C]
0x4A5C86: mov     large fs:0, ecx
0x4A5C8D: pop     ecx
0x4A5C8E: pop     edi
0x4A5C8F: pop     esi
0x4A5C90: pop     ebx
0x4A5C91: add     esp, 0Ch
0x4A5C94: retn    4
