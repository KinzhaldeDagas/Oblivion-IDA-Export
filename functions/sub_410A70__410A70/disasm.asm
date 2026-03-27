0x410A70: push    ebx
0x410A71: push    esi
0x410A72: mov     esi, ecx
0x410A74: mov     ebx, 1
0x410A79: mov     [esi+20h], ebx
0x410A7C: mov     eax, OSGlobals
0x410A81: push    edi
0x410A82: mov     edi, [eax+24h]
0x410A85: test    edi, edi
0x410A87: jz      short loc_410A90
0x410A89: mov     ecx, edi
0x410A8B: call    sub_6A9B40
0x410A90: mov     ecx, [esp+0Ch+arg_14]
0x410A94: mov     edx, [esp+0Ch+arg_10]
0x410A98: mov     eax, [esp+0Ch+arg_8]
0x410A9C: push    ecx; float
0x410A9D: mov     ecx, dword ptr [esp+10h+ArgList]
0x410AA1: push    edx; int
0x410AA2: push    eax; int
0x410AA3: push    ecx; ArgList
0x410AA4: mov     ecx, esi
0x410AA6: mov     [esi+24h], bl
0x410AA9: call    sub_4104C0
0x410AAE: test    al, al
0x410AB0: mov     byte ptr [esi+24h], 0
0x410AB4: jnz     short loc_410ABC
0x410AB6: pop     edi
0x410AB7: pop     esi
0x410AB8: pop     ebx
0x410AB9: retn    18h
0x410ABC: mov     ebx, [esp+0Ch+arg_C]
0x410AC0: push    ebp
0x410AC1: mov     ebp, [esp+10h+arg_4]
0x410AC5: push    ebx
0x410AC6: push    ebp
0x410AC7: mov     ecx, esi
0x410AC9: call    VideoPass
0x410ACE: test    al, al
0x410AD0: jnz     short loc_410AC5
0x410AD2: mov     edx, [esi]
0x410AD4: mov     eax, [esi+0Ch]
0x410AD7: cmp     eax, [edx+8]
0x410ADA: mov     ecx, esi
0x410ADC: setnb   bl
0x410ADF: call    sub_4102C0
0x410AE4: test    edi, edi
0x410AE6: pop     ebp
0x410AE7: jz      short loc_410AF7
0x410AE9: mov     ecx, edi
0x410AEB: call    sub_6A9C00
0x410AF0: mov     ecx, edi
0x410AF2: call    sub_6A9C00
0x410AF7: pop     edi
0x410AF8: pop     esi
0x410AF9: mov     al, bl
0x410AFB: pop     ebx
0x410AFC: retn    18h
