0x6A3A00: push    0FFFFFFFFh
0x6A3A02: push    offset SEH_8C8970
0x6A3A07: mov     eax, large fs:0
0x6A3A0D: push    eax
0x6A3A0E: push    ecx
0x6A3A0F: push    esi
0x6A3A10: push    edi
0x6A3A11: mov     eax, ds:0B30AACh
0x6A3A16: xor     eax, esp
0x6A3A18: push    eax
0x6A3A19: lea     eax, [esp+1Ch+var_C]
0x6A3A1D: mov     large fs:0, eax
0x6A3A23: mov     esi, ecx
0x6A3A25: push    60h ; '`'; Size
0x6A3A27: call    FormHeapAlloc
0x6A3A2C: add     esp, 4
0x6A3A2F: mov     [esp+1Ch+var_10], eax
0x6A3A33: xor     edi, edi
0x6A3A35: cmp     eax, edi
0x6A3A37: mov     [esp+1Ch+var_4], edi
0x6A3A3B: jz      short loc_6A3A52
0x6A3A3D: mov     ecx, [esi+0Ch]
0x6A3A40: mov     edx, [esi+8]
0x6A3A43: push    ecx; int
0x6A3A44: mov     ecx, [esi+24h]
0x6A3A47: push    edx; int
0x6A3A48: push    ecx; int
0x6A3A49: mov     ecx, eax; this
0x6A3A4B: call    ReanimateEffect_constr
0x6A3A50: mov     edi, eax
0x6A3A52: mov     edx, [esi]
0x6A3A54: mov     eax, [edx+2Ch]
0x6A3A57: push    edi
0x6A3A58: mov     ecx, esi
0x6A3A5A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A3A62: call    eax
0x6A3A64: mov     ecx, [esi+38h]
0x6A3A67: mov     [edi+38h], ecx
0x6A3A6A: mov     edx, [esi+3Ch]
0x6A3A6D: mov     [edi+3Ch], edx
0x6A3A70: fld     dword ptr [esi+40h]
0x6A3A73: fstp    dword ptr [edi+40h]
0x6A3A76: mov     eax, [esi+44h]
0x6A3A79: mov     [edi+44h], eax
0x6A3A7C: mov     ecx, [esi+48h]
0x6A3A7F: mov     [edi+48h], ecx
0x6A3A82: mov     edx, [esi+4Ch]
0x6A3A85: lea     eax, [esi+50h]
0x6A3A88: mov     [edi+4Ch], edx
0x6A3A8B: mov     ecx, [eax]
0x6A3A8D: mov     [edi+50h], ecx
0x6A3A90: mov     edx, [eax+4]
0x6A3A93: mov     [edi+54h], edx
0x6A3A96: mov     ecx, [eax+8]
0x6A3A99: mov     [edi+58h], ecx
0x6A3A9C: mov     edx, [eax+0Ch]
0x6A3A9F: mov     [edi+5Ch], edx
0x6A3AA2: mov     eax, edi
0x6A3AA4: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A3AA8: mov     large fs:0, ecx
0x6A3AAF: pop     ecx
0x6A3AB0: pop     edi
0x6A3AB1: pop     esi
0x6A3AB2: add     esp, 10h
0x6A3AB5: retn
