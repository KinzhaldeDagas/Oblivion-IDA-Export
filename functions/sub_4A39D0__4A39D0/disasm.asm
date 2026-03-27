0x4A39D0: push    esi
0x4A39D1: push    edi
0x4A39D2: mov     edi, [esp+8+arg_0]
0x4A39D6: test    edi, edi
0x4A39D8: mov     esi, ecx
0x4A39DA: jz      loc_4A3B7E
0x4A39E0: mov     eax, [edi]
0x4A39E2: mov     edx, [eax+0Ch]
0x4A39E5: mov     ecx, edi
0x4A39E7: call    edx
0x4A39E9: cmp     eax, 6
0x4A39EC: jnz     loc_4A3B7E
0x4A39F2: cmp     [esp+8+arg_4], 0
0x4A39F7: jz      loc_4A3B7E
0x4A39FD: cmp     byte ptr [esi+5], 0
0x4A3A01: jz      short loc_4A3A10
0x4A3A03: mov     al, [edi+4]
0x4A3A06: mov     [esi+4], al
0x4A3A09: movzx   ecx, byte ptr [edi+6]
0x4A3A0D: push    ecx
0x4A3A0E: jmp     short loc_4A3A81
0x4A3A10: cmp     byte ptr [edi+5], 0
0x4A3A14: jnz     loc_4A3B7E
0x4A3A1A: cmp     byte ptr [esi+4], 0
0x4A3A1E: mov     al, [edi+4]
0x4A3A21: jz      short loc_4A3A75
0x4A3A23: test    al, al
0x4A3A25: jz      loc_4A3B7E
0x4A3A2B: mov     cl, [edi+6]
0x4A3A2E: cmp     cl, [esi+6]
0x4A3A31: jbe     loc_4A3B7E
0x4A3A37: mov     [esi+4], al
0x4A3A3A: movzx   edx, byte ptr [edi+6]
0x4A3A3E: push    edx
0x4A3A3F: mov     ecx, esi
0x4A3A41: call    sub_4A3520
0x4A3A46: mov     eax, [esi]
0x4A3A48: mov     edx, [eax+24h]
0x4A3A4B: mov     ecx, esi
0x4A3A4D: call    edx
0x4A3A4F: mov     ecx, eax
0x4A3A51: call    sub_4A6010
0x4A3A56: mov     eax, [esi]
0x4A3A58: mov     edx, [eax+24h]
0x4A3A5B: mov     ecx, esi
0x4A3A5D: call    edx
0x4A3A5F: push    eax
0x4A3A60: mov     eax, [edi]
0x4A3A62: mov     edx, [eax+24h]
0x4A3A65: mov     ecx, edi
0x4A3A67: call    edx
0x4A3A69: mov     ecx, eax
0x4A3A6B: call    sub_4A6120
0x4A3A70: pop     edi
0x4A3A71: pop     esi
0x4A3A72: retn    8
0x4A3A75: test    al, al
0x4A3A77: jz      short loc_4A3AB7
0x4A3A79: mov     [esi+4], al
0x4A3A7C: movzx   eax, byte ptr [edi+6]
0x4A3A80: push    eax
0x4A3A81: mov     ecx, esi
0x4A3A83: call    sub_4A3520
0x4A3A88: mov     edx, [esi]
0x4A3A8A: mov     eax, [edx+24h]
0x4A3A8D: mov     ecx, esi
0x4A3A8F: call    eax
0x4A3A91: mov     ecx, eax
0x4A3A93: call    sub_4A6010
0x4A3A98: mov     edx, [esi]
0x4A3A9A: mov     eax, [edx+24h]
0x4A3A9D: mov     ecx, esi
0x4A3A9F: call    eax
0x4A3AA1: mov     edx, [edi]
0x4A3AA3: push    eax
0x4A3AA4: mov     eax, [edx+24h]
0x4A3AA7: mov     ecx, edi
0x4A3AA9: call    eax
0x4A3AAB: mov     ecx, eax
0x4A3AAD: call    sub_4A6120
0x4A3AB2: pop     edi
0x4A3AB3: pop     esi
0x4A3AB4: retn    8
0x4A3AB7: mov     al, [edi+6]
0x4A3ABA: mov     edx, [edi]
0x4A3ABC: movzx   ecx, al
0x4A3ABF: mov     eax, [edx+24h]
0x4A3AC2: mov     [esp+8+arg_0], ecx
0x4A3AC6: push    ebx
0x4A3AC7: mov     bl, [esi+6]
0x4A3ACA: fild    [esp+0Ch+arg_0]
0x4A3ACE: push    ecx
0x4A3ACF: mov     ecx, edi
0x4A3AD1: fstp    [esp+10h+var_10]; float
0x4A3AD4: call    eax
0x4A3AD6: mov     edx, [esi]
0x4A3AD8: movzx   ecx, bl
0x4A3ADB: mov     [esp+10h+arg_0], ecx
0x4A3ADF: push    eax; int
0x4A3AE0: mov     eax, [edx+24h]
0x4A3AE3: fild    [esp+14h+arg_0]
0x4A3AE7: push    ecx
0x4A3AE8: mov     ecx, esi
0x4A3AEA: fstp    [esp+18h+var_18]; float
0x4A3AED: call    eax
0x4A3AEF: mov     ecx, eax
0x4A3AF1: call    sub_4A61E0
0x4A3AF6: movzx   ecx, byte ptr [edi+6]
0x4A3AFA: movzx   eax, byte ptr [esi+6]
0x4A3AFE: mov     edi, eax
0x4A3B00: mov     edx, 64h ; 'd'
0x4A3B05: imul    edi, eax
0x4A3B08: sub     edx, eax
0x4A3B0A: imul    edx, ecx
0x4A3B0D: add     edx, edi
0x4A3B0F: mov     [esp+0Ch+arg_0], edx
0x4A3B13: mov     edx, 64h ; 'd'
0x4A3B18: sub     edx, ecx
0x4A3B1A: fild    [esp+0Ch+arg_0]
0x4A3B1E: imul    edx, eax
0x4A3B21: mov     eax, ecx
0x4A3B23: imul    eax, ecx
0x4A3B26: add     edx, eax
0x4A3B28: mov     [esp+0Ch+arg_0], edx
0x4A3B2C: push    ecx
0x4A3B2D: fiadd   [esp+10h+arg_0]
0x4A3B31: fstp    [esp+10h+arg_0]
0x4A3B35: fld     [esp+10h+arg_0]
0x4A3B39: fmul    qword ptr ds:0A40048h
0x4A3B3F: fstp    [esp+10h+arg_0]
0x4A3B43: fld     [esp+10h+arg_0]
0x4A3B47: fstp    [esp+10h+var_10]; float
0x4A3B4A: call    sub_4842F0
0x4A3B4F: fnstcw  word ptr [esp+10h+arg_0]
0x4A3B53: add     esp, 4
0x4A3B56: movzx   eax, word ptr [esp+0Ch+arg_0]
0x4A3B5B: or      eax, 0C00h
0x4A3B60: mov     [esp+0Ch+arg_4], eax
0x4A3B64: fldcw   word ptr [esp+0Ch+arg_4]
0x4A3B68: fistp   [esp+0Ch+arg_4]
0x4A3B6C: movzx   ecx, byte ptr [esp+0Ch+arg_4]
0x4A3B71: push    ecx
0x4A3B72: mov     ecx, esi
0x4A3B74: fldcw   word ptr [esp+10h+arg_0]
0x4A3B78: call    sub_4A3520
0x4A3B7D: pop     ebx
0x4A3B7E: pop     edi
0x4A3B7F: pop     esi
0x4A3B80: retn    8
