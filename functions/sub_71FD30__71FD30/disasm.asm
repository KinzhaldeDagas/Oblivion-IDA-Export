0x71FD30: push    0FFFFFFFFh
0x71FD32: push    offset SEH_8C8970
0x71FD37: mov     eax, large fs:0
0x71FD3D: push    eax
0x71FD3E: push    ecx
0x71FD3F: push    esi
0x71FD40: push    edi
0x71FD41: mov     eax, ds:0B30AACh
0x71FD46: xor     eax, esp
0x71FD48: push    eax
0x71FD49: lea     eax, [esp+1Ch+var_C]
0x71FD4D: mov     large fs:0, eax
0x71FD53: push    58h ; 'X'; Size
0x71FD55: call    FormHeapAlloc
0x71FD5A: mov     esi, eax
0x71FD5C: add     esp, 4
0x71FD5F: mov     [esp+1Ch+var_10], esi
0x71FD63: xor     edi, edi
0x71FD65: cmp     esi, edi
0x71FD67: mov     [esp+1Ch+var_4], edi
0x71FD6B: jz      short loc_71FD9E
0x71FD6D: mov     ecx, esi
0x71FD6F: call    sub_732DD0
0x71FD74: mov     dword ptr [esi], offset ??_7NiTriShapeData@@6B@; const NiTriShapeData::`vftable'
0x71FD7A: mov     [esi+44h], edi
0x71FD7D: mov     [esi+48h], edi
0x71FD80: mov     [esi+4Ch], edi
0x71FD83: mov     [esi+50h], di
0x71FD87: mov     [esi+54h], edi
0x71FD8A: mov     eax, esi
0x71FD8C: mov     ecx, [esp+1Ch+var_C]
0x71FD90: mov     large fs:0, ecx
0x71FD97: pop     ecx
0x71FD98: pop     edi
0x71FD99: pop     esi
0x71FD9A: add     esp, 10h
0x71FD9D: retn
0x71FD9E: xor     eax, eax
0x71FDA0: mov     ecx, [esp+1Ch+var_C]
0x71FDA4: mov     large fs:0, ecx
0x71FDAB: pop     ecx
0x71FDAC: pop     edi
0x71FDAD: pop     esi
0x71FDAE: add     esp, 10h
0x71FDB1: retn
