0x94CD00: sub     esp, 18h
0x94CD03: push    edi
0x94CD04: mov     edi, ecx
0x94CD06: mov     eax, [edi+50h]
0x94CD09: test    eax, eax
0x94CD0B: jz      loc_94CEDC
0x94CD11: mov     ecx, [eax+10h]
0x94CD14: dec     ecx
0x94CD15: js      loc_94CEDC
0x94CD1B: push    ebx
0x94CD1C: lea     eax, [ecx+ecx*2]
0x94CD1F: push    ebp
0x94CD20: shl     eax, 2
0x94CD23: push    esi
0x94CD24: mov     esi, [esp+28h+arg_0]
0x94CD28: inc     ecx
0x94CD29: mov     [esp+28h+arg_0], eax
0x94CD2D: mov     [esp+28h+var_18], ecx
0x94CD31: jmp     short loc_94CD40
0x94CD33: mov     eax, [esp+28h+arg_0]
0x94CD37: jmp     short loc_94CD40
0x94CD39: align 10h
0x94CD40: mov     edx, [edi+50h]
0x94CD43: mov     ecx, [edx+0Ch]
0x94CD46: mov     ebp, [eax+ecx+4]
0x94CD4A: mov     ebx, [edx]
0x94CD4C: add     eax, ecx
0x94CD4E: mov     ecx, [eax]
0x94CD50: mov     eax, [eax+8]
0x94CD53: shl     ecx, 4
0x94CD56: add     ebx, ecx
0x94CD58: mov     [esp+28h+var_14], ecx
0x94CD5C: mov     ecx, [esi+8]
0x94CD5F: mov     [esp+28h+var_4], eax
0x94CD63: mov     eax, [esi+4]
0x94CD66: and     ecx, 3FFFFFFFh
0x94CD6C: cmp     eax, ecx
0x94CD6E: jnz     short loc_94CD7B
0x94CD70: push    10h
0x94CD72: push    esi
0x94CD73: call    sub_8A6EE0
0x94CD78: add     esp, 8
0x94CD7B: mov     ecx, [esi+4]
0x94CD7E: mov     edx, [esi]
0x94CD80: mov     eax, ecx
0x94CD82: shl     eax, 4
0x94CD85: add     eax, edx
0x94CD87: inc     ecx
0x94CD88: mov     [esi+4], ecx
0x94CD8B: movaps  xmm0, xmmword ptr [ebx]
0x94CD8E: movaps  xmmword ptr [eax], xmm0
0x94CD91: mov     edx, [edi+50h]
0x94CD94: mov     eax, [esi+8]
0x94CD97: mov     ebx, [edx]
0x94CD99: mov     ecx, [esi+4]
0x94CD9C: shl     ebp, 4
0x94CD9F: and     eax, 3FFFFFFFh
0x94CDA4: add     ebx, ebp
0x94CDA6: cmp     ecx, eax
0x94CDA8: mov     [esp+28h+var_10], ebp
0x94CDAC: jnz     short loc_94CDB9
0x94CDAE: push    10h
0x94CDB0: push    esi
0x94CDB1: call    sub_8A6EE0
0x94CDB6: add     esp, 8
0x94CDB9: mov     ecx, [esi+4]
0x94CDBC: mov     ebp, [esi]
0x94CDBE: mov     edx, [esp+28h+var_14]
0x94CDC2: mov     eax, ecx
0x94CDC4: shl     eax, 4
0x94CDC7: add     eax, ebp
0x94CDC9: inc     ecx
0x94CDCA: mov     [esi+4], ecx
0x94CDCD: movaps  xmm0, xmmword ptr [ebx]
0x94CDD0: movaps  xmmword ptr [eax], xmm0
0x94CDD3: mov     ecx, [edi+50h]
0x94CDD6: mov     ebx, [ecx]
0x94CDD8: mov     eax, [esi+4]
0x94CDDB: add     ebx, edx
0x94CDDD: mov     edx, [esi+8]
0x94CDE0: and     edx, 3FFFFFFFh
0x94CDE6: cmp     eax, edx
0x94CDE8: jnz     short loc_94CDF5
0x94CDEA: push    10h
0x94CDEC: push    esi
0x94CDED: call    sub_8A6EE0
0x94CDF2: add     esp, 8
0x94CDF5: mov     ecx, [esi+4]
0x94CDF8: mov     edx, [esi]
0x94CDFA: mov     eax, ecx
0x94CDFC: shl     eax, 4
0x94CDFF: add     eax, edx
0x94CE01: inc     ecx
0x94CE02: mov     [esi+4], ecx
0x94CE05: movaps  xmm0, xmmword ptr [ebx]
0x94CE08: movaps  xmmword ptr [eax], xmm0
0x94CE0B: mov     eax, [esp+28h+var_4]
0x94CE0F: mov     ecx, [esi+8]
0x94CE12: shl     eax, 4
0x94CE15: mov     ebp, eax
0x94CE17: mov     eax, [edi+50h]
0x94CE1A: mov     ebx, [eax]
0x94CE1C: mov     eax, [esi+4]
0x94CE1F: and     ecx, 3FFFFFFFh
0x94CE25: add     ebx, ebp
0x94CE27: cmp     eax, ecx
0x94CE29: jnz     short loc_94CE36
0x94CE2B: push    10h
0x94CE2D: push    esi
0x94CE2E: call    sub_8A6EE0
0x94CE33: add     esp, 8
0x94CE36: mov     ecx, [esi+4]
0x94CE39: mov     edx, [esi]
0x94CE3B: mov     eax, ecx
0x94CE3D: shl     eax, 4
0x94CE40: add     eax, edx
0x94CE42: inc     ecx
0x94CE43: mov     [esi+4], ecx
0x94CE46: movaps  xmm0, xmmword ptr [ebx]
0x94CE49: movaps  xmmword ptr [eax], xmm0
0x94CE4C: mov     edx, [edi+50h]
0x94CE4F: mov     eax, [esp+28h+var_10]
0x94CE53: mov     ebx, [edx]
0x94CE55: mov     ecx, [esi+4]
0x94CE58: add     ebx, eax
0x94CE5A: mov     eax, [esi+8]
0x94CE5D: and     eax, 3FFFFFFFh
0x94CE62: cmp     ecx, eax
0x94CE64: jnz     short loc_94CE71
0x94CE66: push    10h
0x94CE68: push    esi
0x94CE69: call    sub_8A6EE0
0x94CE6E: add     esp, 8
0x94CE71: mov     ecx, [esi+4]
0x94CE74: mov     edx, [esi]
0x94CE76: mov     eax, ecx
0x94CE78: shl     eax, 4
0x94CE7B: add     eax, edx
0x94CE7D: inc     ecx
0x94CE7E: mov     [esi+4], ecx
0x94CE81: movaps  xmm0, xmmword ptr [ebx]
0x94CE84: movaps  xmmword ptr [eax], xmm0
0x94CE87: mov     ecx, [edi+50h]
0x94CE8A: mov     edx, [esi+8]
0x94CE8D: mov     ebx, [ecx]
0x94CE8F: mov     eax, [esi+4]
0x94CE92: and     edx, 3FFFFFFFh
0x94CE98: add     ebx, ebp
0x94CE9A: cmp     eax, edx
0x94CE9C: jnz     short loc_94CEA9
0x94CE9E: push    10h
0x94CEA0: push    esi
0x94CEA1: call    sub_8A6EE0
0x94CEA6: add     esp, 8
0x94CEA9: mov     ecx, [esi+4]
0x94CEAC: mov     edx, [esi]
0x94CEAE: mov     eax, ecx
0x94CEB0: shl     eax, 4
0x94CEB3: add     eax, edx
0x94CEB5: inc     ecx
0x94CEB6: mov     [esi+4], ecx
0x94CEB9: movaps  xmm0, xmmword ptr [ebx]
0x94CEBC: mov     ecx, [esp+28h+arg_0]
0x94CEC0: movaps  xmmword ptr [eax], xmm0
0x94CEC3: mov     eax, [esp+28h+var_18]
0x94CEC7: sub     ecx, 0Ch
0x94CECA: dec     eax
0x94CECB: mov     [esp+28h+arg_0], ecx
0x94CECF: mov     [esp+28h+var_18], eax
0x94CED3: jnz     loc_94CD33
0x94CED9: pop     esi
0x94CEDA: pop     ebp
0x94CEDB: pop     ebx
0x94CEDC: pop     edi
0x94CEDD: add     esp, 18h
0x94CEE0: retn    4
