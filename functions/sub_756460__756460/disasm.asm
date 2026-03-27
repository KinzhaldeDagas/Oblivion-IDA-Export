0x756460: push    esi
0x756461: push    edi
0x756462: mov     edi, [esp+8+arg_0]
0x756466: push    edi
0x756467: mov     esi, ecx
0x756469: call    sub_75EFA0
0x75646E: mov     ecx, edi
0x756470: call    sub_712A20
0x756475: mov     eax, [edi+21Ch]
0x75647B: push    1
0x75647D: lea     ecx, [esp+0Ch+arg_0]
0x756481: push    ecx
0x756482: push    4
0x756484: lea     edx, [esi+30h]
0x756487: push    edx
0x756488: push    eax
0x756489: mov     eax, [eax+4]
0x75648C: mov     [esp+1Ch+arg_0], 4
0x756494: call    eax
0x756496: mov     eax, [edi+21Ch]
0x75649C: push    1
0x75649E: lea     ecx, [esp+20h+arg_0]
0x7564A2: push    ecx
0x7564A3: push    4
0x7564A5: lea     edx, [esi+34h]
0x7564A8: push    edx
0x7564A9: push    eax
0x7564AA: mov     eax, [eax+4]
0x7564AD: mov     [esp+30h+arg_0], 4
0x7564B5: call    eax
0x7564B7: add     esp, 28h
0x7564BA: push    edi
0x7564BB: lea     ecx, [esi+38h]
0x7564BE: call    sub_709430
0x7564C3: push    edi
0x7564C4: lea     ecx, [esi+44h]
0x7564C7: call    sub_709430
0x7564CC: pop     edi
0x7564CD: pop     esi
0x7564CE: retn    4
