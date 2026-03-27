0x785C50: push    esi
0x785C51: push    edi
0x785C52: mov     edi, [esp+8+arg_0]
0x785C56: fld     dword ptr [edi]
0x785C58: mov     esi, ecx
0x785C5A: fstp    dword ptr [esi]
0x785C5C: lea     eax, [edi+0Ch]
0x785C5F: fld     dword ptr [edi+4]
0x785C62: push    eax
0x785C63: fstp    dword ptr [esi+4]
0x785C66: lea     ecx, [esi+0Ch]
0x785C69: fld     dword ptr [edi+8]
0x785C6C: fstp    dword ptr [esi+8]
0x785C6F: call    sub_785400
0x785C74: lea     ecx, [edi+1Ch]
0x785C77: push    ecx
0x785C78: lea     ecx, [esi+1Ch]
0x785C7B: call    sub_785400
0x785C80: lea     edx, [edi+2Ch]
0x785C83: push    edx
0x785C84: lea     ecx, [esi+2Ch]
0x785C87: call    sub_785580
0x785C8C: lea     eax, [edi+3Ch]
0x785C8F: push    eax
0x785C90: lea     ecx, [esi+3Ch]
0x785C93: call    sub_785400
0x785C98: add     edi, 4Ch ; 'L'
0x785C9B: push    edi
0x785C9C: lea     ecx, [esi+4Ch]
0x785C9F: call    sub_785400
0x785CA4: pop     edi
0x785CA5: mov     eax, esi
0x785CA7: pop     esi
0x785CA8: retn    4
