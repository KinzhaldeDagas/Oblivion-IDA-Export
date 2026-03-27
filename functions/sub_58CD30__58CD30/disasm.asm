0x58CD30: push    0FFFFFFFFh
0x58CD32: push    offset SEH_8C8970
0x58CD37: mov     eax, large fs:0
0x58CD3D: push    eax
0x58CD3E: push    ecx
0x58CD3F: push    esi
0x58CD40: push    edi
0x58CD41: mov     eax, ds:0B30AACh
0x58CD46: xor     eax, esp
0x58CD48: push    eax
0x58CD49: lea     eax, [esp+1Ch+var_C]
0x58CD4D: mov     large fs:0, eax
0x58CD53: mov     esi, ecx
0x58CD55: xor     edi, edi
0x58CD57: push    1Ch; Size
0x58CD59: mov     [esi+4], edi
0x58CD5C: mov     [esi+8], edi
0x58CD5F: call    FormHeapAlloc
0x58CD64: add     esp, 4
0x58CD67: mov     [esp+1Ch+var_10], eax
0x58CD6B: cmp     eax, edi
0x58CD6D: mov     [esp+1Ch+var_4], edi
0x58CD71: jz      short loc_58CD82
0x58CD73: push    esi
0x58CD74: push    offset aMain; "main"
0x58CD79: mov     ecx, eax
0x58CD7B: call    TileTemplateItem_constr
0x58CD80: jmp     short loc_58CD84
0x58CD82: xor     eax, eax
0x58CD84: mov     [esi], eax
0x58CD86: mov     [esi+0Ch], edi
0x58CD89: mov     byte ptr [esi+10h], 1
0x58CD8D: mov     eax, esi
0x58CD8F: mov     ecx, [esp+1Ch+var_C]
0x58CD93: mov     large fs:0, ecx
0x58CD9A: pop     ecx
0x58CD9B: pop     edi
0x58CD9C: pop     esi
0x58CD9D: add     esp, 10h
0x58CDA0: retn
