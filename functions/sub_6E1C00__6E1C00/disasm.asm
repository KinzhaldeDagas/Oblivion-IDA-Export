0x6E1C00: push    0FFFFFFFFh
0x6E1C02: push    offset SEH_8C8970
0x6E1C07: mov     eax, large fs:0
0x6E1C0D: push    eax
0x6E1C0E: push    ecx
0x6E1C0F: push    ebx
0x6E1C10: push    esi
0x6E1C11: mov     eax, ds:0B30AACh
0x6E1C16: xor     eax, esp
0x6E1C18: push    eax
0x6E1C19: lea     eax, [esp+1Ch+var_C]
0x6E1C1D: mov     large fs:0, eax
0x6E1C23: push    2Ch ; ','; Size
0x6E1C25: call    FormHeapAlloc
0x6E1C2A: mov     esi, eax
0x6E1C2C: add     esp, 4
0x6E1C2F: mov     [esp+1Ch+var_10], esi
0x6E1C33: xor     ebx, ebx
0x6E1C35: cmp     esi, ebx
0x6E1C37: mov     [esp+1Ch+var_4], ebx
0x6E1C3B: jz      short loc_6E1C85
0x6E1C3D: mov     ecx, esi
0x6E1C3F: call    NiObject_constr
0x6E1C44: mov     dword ptr [esi], offset ??_7NiTransformData@@6B@; const NiTransformData::`vftable'
0x6E1C4A: mov     [esi+8], bx
0x6E1C4E: mov     [esi+20h], ebx
0x6E1C51: mov     [esi+10h], ebx
0x6E1C54: mov     [esi+1Ch], bl
0x6E1C57: mov     [esi+0Ah], bx
0x6E1C5B: mov     [esi+24h], ebx
0x6E1C5E: mov     [esi+14h], ebx
0x6E1C61: mov     [esi+1Dh], bl
0x6E1C64: mov     [esi+0Ch], bx
0x6E1C68: mov     [esi+28h], ebx
0x6E1C6B: mov     [esi+18h], ebx
0x6E1C6E: mov     [esi+1Eh], bl
0x6E1C71: mov     eax, esi
0x6E1C73: mov     ecx, [esp+1Ch+var_C]
0x6E1C77: mov     large fs:0, ecx
0x6E1C7E: pop     ecx
0x6E1C7F: pop     esi
0x6E1C80: pop     ebx
0x6E1C81: add     esp, 10h
0x6E1C84: retn
0x6E1C85: xor     eax, eax
0x6E1C87: mov     ecx, [esp+1Ch+var_C]
0x6E1C8B: mov     large fs:0, ecx
0x6E1C92: pop     ecx
0x6E1C93: pop     esi
0x6E1C94: pop     ebx
0x6E1C95: add     esp, 10h
0x6E1C98: retn
