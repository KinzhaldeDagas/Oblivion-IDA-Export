0x8A0C30: push    esi
0x8A0C31: push    edi
0x8A0C32: mov     edi, [esp+8+arg_0]
0x8A0C36: mov     esi, ecx
0x8A0C38: mov     ecx, edi
0x8A0C3A: call    sub_712AE0
0x8A0C3F: mov     eax, [esi]
0x8A0C41: mov     edx, [eax+10h]
0x8A0C44: mov     ecx, esi
0x8A0C46: call    edx
0x8A0C48: mov     eax, [edi+21Ch]
0x8A0C4E: mov     edx, [eax+4]
0x8A0C51: push    1
0x8A0C53: lea     ecx, [esp+0Ch+arg_0]
0x8A0C57: push    ecx
0x8A0C58: push    4
0x8A0C5A: add     esi, 8
0x8A0C5D: push    esi
0x8A0C5E: push    eax
0x8A0C5F: mov     [esp+1Ch+arg_0], 4
0x8A0C67: call    edx
0x8A0C69: add     esp, 14h
0x8A0C6C: pop     edi
0x8A0C6D: pop     esi
0x8A0C6E: retn    4
