0x6E3440: push    0FFFFFFFFh
0x6E3442: push    offset SEH_8C8970
0x6E3447: mov     eax, large fs:0
0x6E344D: push    eax
0x6E344E: push    ecx
0x6E344F: push    ebx
0x6E3450: push    esi
0x6E3451: mov     eax, ds:0B30AACh
0x6E3456: xor     eax, esp
0x6E3458: push    eax
0x6E3459: lea     eax, [esp+1Ch+var_C]
0x6E345D: mov     large fs:0, eax
0x6E3463: push    18h; Size
0x6E3465: call    FormHeapAlloc
0x6E346A: mov     esi, eax
0x6E346C: add     esp, 4
0x6E346F: mov     [esp+1Ch+var_10], esi
0x6E3473: xor     ebx, ebx
0x6E3475: cmp     esi, ebx
0x6E3477: mov     [esp+1Ch+var_4], ebx
0x6E347B: jz      short loc_6E34AA
0x6E347D: mov     ecx, esi
0x6E347F: call    NiObject_constr
0x6E3484: mov     dword ptr [esi], offset ??_7NiFloatData@@6B@; const NiFloatData::`vftable'
0x6E348A: mov     [esi+8], ebx
0x6E348D: mov     [esi+0Ch], ebx
0x6E3490: mov     [esi+10h], ebx
0x6E3493: mov     [esi+14h], bl
0x6E3496: mov     eax, esi
0x6E3498: mov     ecx, [esp+1Ch+var_C]
0x6E349C: mov     large fs:0, ecx
0x6E34A3: pop     ecx
0x6E34A4: pop     esi
0x6E34A5: pop     ebx
0x6E34A6: add     esp, 10h
0x6E34A9: retn
0x6E34AA: xor     eax, eax
0x6E34AC: mov     ecx, [esp+1Ch+var_C]
0x6E34B0: mov     large fs:0, ecx
0x6E34B7: pop     ecx
0x6E34B8: pop     esi
0x6E34B9: pop     ebx
0x6E34BA: add     esp, 10h
0x6E34BD: retn
