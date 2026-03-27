0x543C10: push    0FFFFFFFFh
0x543C12: push    offset ??0SkyObject@@QAE@XZ_SEH
0x543C17: mov     eax, large fs:0
0x543C1D: push    eax
0x543C1E: push    ecx
0x543C1F: push    esi
0x543C20: push    edi
0x543C21: mov     eax, ds:0B30AACh
0x543C26: xor     eax, esp
0x543C28: push    eax
0x543C29: lea     eax, [esp+1Ch+var_C]
0x543C2D: mov     large fs:0, eax
0x543C33: mov     esi, ecx
0x543C35: mov     [esp+1Ch+var_10], esi
0x543C39: mov     dword ptr [esi], offset ??_7SkyObject@@6B@; const SkyObject::`vftable'
0x543C3F: mov     dword ptr [esi+4], 0
0x543C46: mov     edi, [esi+4]
0x543C49: test    edi, edi
0x543C4B: mov     [esp+1Ch+var_4], 0
0x543C53: jz      short loc_543C78
0x543C55: lea     eax, [edi+4]
0x543C58: push    eax; lpAddend
0x543C59: call    dword ptr ds:0A2807Ch
0x543C5F: test    eax, eax
0x543C61: jnz     short loc_543C71
0x543C63: test    edi, edi
0x543C65: jz      short loc_543C71
0x543C67: mov     edx, [edi]
0x543C69: mov     eax, [edx]
0x543C6B: push    1
0x543C6D: mov     ecx, edi
0x543C6F: call    eax
0x543C71: mov     dword ptr [esi+4], 0
0x543C78: mov     eax, esi
0x543C7A: mov     ecx, dword ptr [esp+1Ch+var_C]
0x543C7E: mov     large fs:0, ecx
0x543C85: pop     ecx
0x543C86: pop     edi
0x543C87: pop     esi
0x543C88: add     esp, 10h
0x543C8B: retn
