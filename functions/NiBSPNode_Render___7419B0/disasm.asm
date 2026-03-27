0x7419B0: sub     esp, 0Ch
0x7419B3: push    ebx
0x7419B4: push    ebp
0x7419B5: mov     ebp, [esp+14h+a2]
0x7419B9: push    esi
0x7419BA: mov     esi, [ebp+0Ch]
0x7419BD: push    edi
0x7419BE: mov     edi, ecx
0x7419C0: lea     eax, [esi+88h]
0x7419C6: lea     ebx, [edi+0ECh]
0x7419CC: push    eax
0x7419CD: mov     ecx, ebx
0x7419CF: call    sub_7415E0
0x7419D4: test    eax, eax
0x7419D6: jnz     short loc_7419F9
0x7419D8: fld     dword ptr [esi+64h]
0x7419DB: lea     ecx, [esp+1Ch+var_C]
0x7419DF: fstp    [esp+1Ch+var_C]
0x7419E3: push    ecx
0x7419E4: fld     dword ptr [esi+70h]
0x7419E7: mov     ecx, ebx
0x7419E9: fstp    [esp+20h+var_8]
0x7419ED: fld     dword ptr [esi+7Ch]
0x7419F0: fstp    [esp+20h+var_4]
0x7419F4: call    sub_7415E0
0x7419F9: cmp     eax, 2
0x7419FC: mov     edi, [edi+0B0h]
0x741A02: mov     esi, [edi]
0x741A04: mov     edi, [edi+4]
0x741A07: jnz     short loc_741A2B
0x741A09: test    edi, edi
0x741A0B: jz      short loc_741A15
0x741A0D: push    ebp; a2
0x741A0E: mov     ecx, edi; this
0x741A10: call    NiAVObject_Render
0x741A15: test    esi, esi
0x741A17: jz      short loc_741A43
0x741A19: mov     ecx, esi; this
0x741A1B: push    ebp; a2
0x741A1C: call    NiAVObject_Render
0x741A21: pop     edi
0x741A22: pop     esi
0x741A23: pop     ebp
0x741A24: pop     ebx
0x741A25: add     esp, 0Ch
0x741A28: retn    4
0x741A2B: test    esi, esi
0x741A2D: jz      short loc_741A37
0x741A2F: push    ebp; a2
0x741A30: mov     ecx, esi; this
0x741A32: call    NiAVObject_Render
0x741A37: test    edi, edi
0x741A39: jz      short loc_741A43
0x741A3B: mov     ecx, edi; this
0x741A3D: push    ebp; a2
0x741A3E: call    NiAVObject_Render
0x741A43: pop     edi
0x741A44: pop     esi
0x741A45: pop     ebp
0x741A46: pop     ebx
0x741A47: add     esp, 0Ch
0x741A4A: retn    4
