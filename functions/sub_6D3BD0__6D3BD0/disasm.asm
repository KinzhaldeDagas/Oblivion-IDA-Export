0x6D3BD0: push    0FFFFFFFFh
0x6D3BD2: push    offset SEH_6D3BD0
0x6D3BD7: mov     eax, large fs:0
0x6D3BDD: push    eax
0x6D3BDE: sub     esp, 18h
0x6D3BE1: push    ebx
0x6D3BE2: push    ebp
0x6D3BE3: push    esi
0x6D3BE4: push    edi
0x6D3BE5: mov     eax, ds:0B30AACh
0x6D3BEA: xor     eax, esp
0x6D3BEC: push    eax
0x6D3BED: lea     eax, [esp+38h+var_C]
0x6D3BF1: mov     large fs:0, eax
0x6D3BF7: mov     ebp, [esp+38h+arg_0]
0x6D3BFB: mov     ecx, [ebp+30h]
0x6D3BFE: push    offset dword_B3CA58
0x6D3C03: mov     [esp+3Ch+var_1C], ecx
0x6D3C07: mov     [esp+3Ch+var_21], 0
0x6D3C0C: call    sub_700010
0x6D3C11: mov     ebx, eax
0x6D3C13: xor     edi, edi
0x6D3C15: cmp     ebx, edi
0x6D3C17: jz      short loc_6D3C45
0x6D3C19: mov     eax, [ebx]
0x6D3C1B: mov     edx, [eax+80h]
0x6D3C21: push    edi
0x6D3C22: mov     ecx, ebx
0x6D3C24: call    edx
0x6D3C26: cmp     eax, edi
0x6D3C28: jz      short loc_6D3C45
0x6D3C2A: mov     edx, [eax]
0x6D3C2C: mov     ecx, eax
0x6D3C2E: mov     eax, [edx+4]
0x6D3C31: call    eax
0x6D3C33: cmp     eax, edi
0x6D3C35: jz      short loc_6D3C45
0x6D3C37: cmp     eax, offset dword_B3D91C
0x6D3C3C: jz      short loc_6D3C7F
0x6D3C3E: mov     eax, [eax+4]
0x6D3C41: cmp     eax, edi
0x6D3C43: jnz     short loc_6D3C37
0x6D3C45: push    40h ; '@'; Size
0x6D3C47: mov     [esp+3Ch+var_21], 1
0x6D3C4C: call    FormHeapAlloc
0x6D3C51: add     esp, 4
0x6D3C54: mov     [esp+38h+var_14], eax
0x6D3C58: cmp     eax, edi
0x6D3C5A: mov     [esp+38h+var_4], edi
0x6D3C5E: jz      short loc_6D3C69
0x6D3C60: mov     ecx, eax
0x6D3C62: call    sub_6C3E50
0x6D3C67: jmp     short loc_6D3C6B
0x6D3C69: xor     eax, eax
0x6D3C6B: push    eax
0x6D3C6C: push    ebp
0x6D3C6D: mov     [esp+40h+var_4], 0FFFFFFFFh
0x6D3C75: mov     ebx, eax
0x6D3C77: call    sub_6D3B40
0x6D3C7C: add     esp, 8
0x6D3C7F: push    44h ; 'D'; Size
0x6D3C81: call    FormHeapAlloc
0x6D3C86: add     esp, 4
0x6D3C89: mov     [esp+38h+var_14], eax
0x6D3C8D: cmp     eax, edi
0x6D3C8F: mov     esi, 1
0x6D3C94: mov     [esp+38h+var_4], esi
0x6D3C98: jz      short loc_6D3CA6
0x6D3C9A: push    edi
0x6D3C9B: push    edi
0x6D3C9C: push    edi
0x6D3C9D: mov     ecx, eax; this
0x6D3C9F: call    ??0NiLookAtInterpolator@@QAE@XZ; NiLookAtInterpolator::NiLookAtInterpolator(void)
0x6D3CA4: mov     edi, eax
0x6D3CA6: mov     eax, [ebp+40h]
0x6D3CA9: push    0; Src
0x6D3CAB: mov     ecx, edi
0x6D3CAD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x6D3CB5: mov     [edi+10h], eax
0x6D3CB8: call    sub_6DF010
0x6D3CBD: mov     cl, [ebp+3Ch]
0x6D3CC0: and     cl, 1
0x6D3CC3: jz      short loc_6D3CCB
0x6D3CC5: or      [edi+0Ch], si
0x6D3CC9: jmp     short loc_6D3CD1
0x6D3CCB: and     word ptr [edi+0Ch], 0FFFEh
0x6D3CD1: movzx   eax, byte ptr [ebp+3Ch]
0x6D3CD5: mov     dx, [edi+0Ch]
0x6D3CD9: shr     eax, 1
0x6D3CDB: and     eax, 3
0x6D3CDE: and     dx, 0FFF9h
0x6D3CE3: add     eax, eax
0x6D3CE5: or      dx, ax
0x6D3CE8: mov     [edi+0Ch], dx
0x6D3CEC: mov     edx, [ebx]
0x6D3CEE: mov     eax, [edx+80h]
0x6D3CF4: push    0
0x6D3CF6: mov     ecx, ebx
0x6D3CF8: call    eax
0x6D3CFA: mov     esi, eax
0x6D3CFC: test    esi, esi
0x6D3CFE: mov     [esp+38h+var_10], esi
0x6D3D02: jz      short loc_6D3D0E
0x6D3D04: lea     ecx, [esi+4]
0x6D3D07: push    ecx; lpAddend
0x6D3D08: call    dword ptr ds:0A28078h
0x6D3D0E: test    esi, esi
0x6D3D10: mov     [esp+38h+var_4], 2
0x6D3D18: jz      loc_6D3E3B
0x6D3D1E: mov     edx, [esi]
0x6D3D20: mov     eax, [edx+4]
0x6D3D23: mov     ecx, esi
0x6D3D25: call    eax
0x6D3D27: test    eax, eax
0x6D3D29: jz      loc_6D3E3B
0x6D3D2F: nop
0x6D3D30: cmp     eax, offset dword_B3D91C
0x6D3D35: jz      short loc_6D3D43
0x6D3D37: mov     eax, [eax+4]
0x6D3D3A: test    eax, eax
0x6D3D3C: jnz     short loc_6D3D30
0x6D3D3E: jmp     loc_6D3E3B
0x6D3D43: mov     eax, [esi+2Ch]
0x6D3D46: test    eax, eax
0x6D3D48: jz      short loc_6D3DBF
0x6D3D4A: movzx   eax, word ptr [eax+0Ah]
0x6D3D4E: test    eax, eax
0x6D3D50: jz      short loc_6D3DBF
0x6D3D52: push    20h ; ' '; Size
0x6D3D54: call    FormHeapAlloc
0x6D3D59: add     esp, 4
0x6D3D5C: mov     [esp+38h+var_14], eax
0x6D3D60: test    eax, eax
0x6D3D62: mov     byte ptr [esp+38h+var_4], 3
0x6D3D67: jz      short loc_6D3D76
0x6D3D69: push    0
0x6D3D6B: mov     ecx, eax
0x6D3D6D: call    sub_6DA160
0x6D3D72: mov     ebp, eax
0x6D3D74: jmp     short loc_6D3D78
0x6D3D76: xor     ebp, ebp
0x6D3D78: lea     ecx, [esp+38h+var_20]
0x6D3D7C: push    ecx
0x6D3D7D: lea     edx, [esp+3Ch+var_18]
0x6D3D81: push    edx
0x6D3D82: lea     eax, [esp+40h+var_14]
0x6D3D86: push    eax
0x6D3D87: mov     ecx, esi
0x6D3D89: mov     byte ptr [esp+44h+var_4], 2
0x6D3D8E: call    sub_6D3AA0
0x6D3D93: mov     ecx, [esp+38h+var_18]
0x6D3D97: mov     edx, [esp+38h+var_14]
0x6D3D9B: push    ecx
0x6D3D9C: push    edx
0x6D3D9D: push    eax
0x6D3D9E: mov     ecx, ebp; this
0x6D3DA0: call    ??0NiPosData@@QAE@XZ; NiPosData::NiPosData(void)
0x6D3DA5: mov     ecx, [esi+2Ch]
0x6D3DA8: push    0
0x6D3DAA: push    0
0x6D3DAC: push    0
0x6D3DAE: call    sub_6E1A80
0x6D3DB3: push    ebp
0x6D3DB4: mov     ecx, edi
0x6D3DB6: call    sub_6D38F0
0x6D3DBB: mov     ebp, [esp+38h+arg_0]
0x6D3DBF: mov     eax, [esi+2Ch]
0x6D3DC2: test    eax, eax
0x6D3DC4: jz      short loc_6D3E3B
0x6D3DC6: movzx   eax, word ptr [eax+0Ch]
0x6D3DCA: test    eax, eax
0x6D3DCC: jz      short loc_6D3E3B
0x6D3DCE: push    18h; Size
0x6D3DD0: call    FormHeapAlloc
0x6D3DD5: add     esp, 4
0x6D3DD8: mov     [esp+38h+var_14], eax
0x6D3DDC: test    eax, eax
0x6D3DDE: mov     byte ptr [esp+38h+var_4], 4
0x6D3DE3: jz      short loc_6D3DF2
0x6D3DE5: push    0
0x6D3DE7: mov     ecx, eax
0x6D3DE9: call    sub_6D2990
0x6D3DEE: mov     ebp, eax
0x6D3DF0: jmp     short loc_6D3DF4
0x6D3DF2: xor     ebp, ebp
0x6D3DF4: lea     eax, [esp+38h+var_20]
0x6D3DF8: push    eax
0x6D3DF9: lea     ecx, [esp+3Ch+var_14]
0x6D3DFD: push    ecx
0x6D3DFE: lea     edx, [esp+40h+var_18]
0x6D3E02: push    edx
0x6D3E03: mov     ecx, esi
0x6D3E05: mov     byte ptr [esp+44h+var_4], 2
0x6D3E0A: call    sub_6D3AF0
0x6D3E0F: mov     ecx, [esp+38h+var_14]
0x6D3E13: mov     edx, [esp+38h+var_18]
0x6D3E17: push    ecx
0x6D3E18: push    edx
0x6D3E19: push    eax
0x6D3E1A: mov     ecx, ebp
0x6D3E1C: call    sub_6D3830
0x6D3E21: mov     ecx, [esi+2Ch]
0x6D3E24: push    0
0x6D3E26: push    0
0x6D3E28: push    0
0x6D3E2A: call    sub_6E1AC0
0x6D3E2F: push    ebp
0x6D3E30: mov     ecx, edi
0x6D3E32: call    sub_6D3990
0x6D3E37: mov     ebp, [esp+38h+arg_0]
0x6D3E3B: mov     eax, [ebx]
0x6D3E3D: mov     edx, [eax+84h]
0x6D3E43: push    0
0x6D3E45: push    edi
0x6D3E46: mov     ecx, ebx
0x6D3E48: call    edx
0x6D3E4A: mov     eax, [edi]
0x6D3E4C: mov     edx, [eax+7Ch]
0x6D3E4F: mov     ecx, edi
0x6D3E51: call    edx
0x6D3E53: cmp     [esp+38h+var_21], 0
0x6D3E58: mov     edi, [esp+38h+var_1C]
0x6D3E5C: jz      short loc_6D3E68
0x6D3E5E: mov     eax, [ebx]
0x6D3E60: mov     edx, [eax+58h]
0x6D3E63: push    edi
0x6D3E64: mov     ecx, ebx
0x6D3E66: call    edx
0x6D3E68: test    edi, edi
0x6D3E6A: jz      short loc_6D3E74
0x6D3E6C: push    ebp
0x6D3E6D: mov     ecx, edi
0x6D3E6F: call    sub_6FFE90
0x6D3E74: test    esi, esi
0x6D3E76: mov     [esp+38h+var_4], 0FFFFFFFFh
0x6D3E7E: jz      short loc_6D3E98
0x6D3E80: lea     eax, [esi+4]
0x6D3E83: push    eax; lpAddend
0x6D3E84: call    dword ptr ds:0A2807Ch
0x6D3E8A: test    eax, eax
0x6D3E8C: jnz     short loc_6D3E98
0x6D3E8E: mov     edx, [esi]
0x6D3E90: mov     eax, [edx]
0x6D3E92: push    1
0x6D3E94: mov     ecx, esi
0x6D3E96: call    eax
0x6D3E98: mov     ecx, [esp+38h+var_C]
0x6D3E9C: mov     large fs:0, ecx
0x6D3EA3: pop     ecx
0x6D3EA4: pop     edi
0x6D3EA5: pop     esi
0x6D3EA6: pop     ebp
0x6D3EA7: pop     ebx
0x6D3EA8: add     esp, 24h
0x6D3EAB: retn
