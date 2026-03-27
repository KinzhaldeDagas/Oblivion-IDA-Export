0x702970: push    0FFFFFFFFh
0x702972: push    offset SEH_702970
0x702977: mov     eax, large fs:0
0x70297D: push    eax
0x70297E: sub     esp, 20h
0x702981: push    ebx
0x702982: push    ebp
0x702983: push    esi
0x702984: push    edi
0x702985: mov     eax, ds:0B30AACh
0x70298A: xor     eax, esp
0x70298C: push    eax
0x70298D: lea     eax, [esp+40h+var_C]
0x702991: mov     large fs:0, eax
0x702997: mov     esi, ecx
0x702999: mov     ebp, [esp+40h+arg_0]
0x70299D: cmp     bp, 3
0x7029A1: jnb     short loc_7029AB
0x7029A3: or      eax, 0FFFFFFFFh
0x7029A6: jmp     loc_702EA9
0x7029AB: mov     ebx, [esp+40h+arg_4]
0x7029AF: test    bx, bx
0x7029B2: jbe     short loc_7029BE
0x7029B4: cmp     [esp+40h+Src], 0
0x7029B9: jz      short loc_7029A3
0x7029BB: test    bx, bx
0x7029BE: jnz     short loc_7029CC
0x7029C0: lea     eax, [ebp-2]
0x7029C3: movzx   ecx, ax
0x7029C6: mov     [esp+40h+arg_4], ecx
0x7029CA: mov     ebx, ecx
0x7029CC: movzx   eax, word ptr [esi+64h]
0x7029D0: lea     ecx, [eax+1]
0x7029D3: movzx   edx, ax
0x7029D6: movzx   eax, word ptr [esi+60h]
0x7029DA: cmp     cx, ax
0x7029DD: mov     [esp+40h+var_2C], edx
0x7029E1: mov     [esi+64h], cx
0x7029E5: jbe     loc_702A94
0x7029EB: mov     dx, [esi+62h]
0x7029EF: add     dx, ax
0x7029F2: movzx   ebp, dx
0x7029F5: movzx   edi, bp
0x7029F8: xor     ecx, ecx
0x7029FA: mov     eax, edi
0x7029FC: mov     edx, 8
0x702A01: mul     edx
0x702A03: seto    cl
0x702A06: neg     ecx
0x702A08: or      ecx, eax
0x702A0A: push    ecx; Size
0x702A0B: call    FormHeapAlloc
0x702A10: movzx   ecx, word ptr [esi+60h]
0x702A14: add     ecx, ecx
0x702A16: add     ecx, ecx
0x702A18: mov     ebx, eax
0x702A1A: mov     eax, [esi+58h]
0x702A1D: add     ecx, ecx
0x702A1F: push    ecx; Size
0x702A20: push    eax; Src
0x702A21: push    ebx; Dst
0x702A22: call    _memcpy
0x702A27: mov     eax, [esi+58h]
0x702A2A: push    eax
0x702A2B: call    FormHeapFree
0x702A30: xor     ecx, ecx
0x702A32: mov     eax, edi
0x702A34: mov     edx, 2
0x702A39: mul     edx
0x702A3B: seto    cl
0x702A3E: mov     [esi+58h], ebx
0x702A41: neg     ecx
0x702A43: or      ecx, eax
0x702A45: push    ecx; Size
0x702A46: call    FormHeapAlloc
0x702A4B: movzx   ecx, word ptr [esi+60h]
0x702A4F: mov     ebx, eax
0x702A51: mov     eax, [esi+5Ch]
0x702A54: add     ecx, ecx
0x702A56: push    ecx; Size
0x702A57: push    eax; Src
0x702A58: push    ebx; Dst
0x702A59: call    _memcpy
0x702A5E: movzx   eax, word ptr [esi+60h]
0x702A62: sub     edi, eax
0x702A64: add     edi, edi
0x702A66: push    edi
0x702A67: lea     edx, [ebx+eax*2]
0x702A6A: push    0FFh
0x702A6F: push    edx
0x702A70: call    __memset
0x702A75: mov     eax, [esi+5Ch]
0x702A78: push    eax
0x702A79: call    FormHeapFree
0x702A7E: mov     edx, [esp+74h+var_2C]
0x702A82: mov     [esi+5Ch], ebx
0x702A85: mov     ebx, [esp+74h+arg_4]
0x702A89: mov     [esi+60h], bp
0x702A8D: mov     ebp, [esp+74h+arg_0]
0x702A91: add     esp, 34h
0x702A94: mov     ecx, [esi+58h]
0x702A97: movzx   eax, dx
0x702A9A: lea     edi, [ecx+eax*8]
0x702A9D: mov     [edi], bp
0x702AA0: mov     ax, [esi+8]
0x702AA4: mov     [edi+2], ax
0x702AA8: mov     [edi+4], bx
0x702AAC: mov     cx, [esi+40h]
0x702AB0: imul    cx, 3
0x702AB4: xor     eax, eax
0x702AB6: mov     [edi+6], cx
0x702ABA: cmp     [esi+64h], ax
0x702ABE: mov     [esp+40h+var_1C], edi
0x702AC2: jbe     short loc_702AF4
0x702AC4: mov     ecx, [esi+5Ch]
0x702AC7: jmp     short loc_702AD0
0x702AC9: align 10h
0x702AD0: movzx   ebp, ax
0x702AD3: cmp     word ptr [ecx+ebp*2], 0FFFFh
0x702AD9: jz      short loc_702AE6
0x702ADB: add     eax, 1
0x702ADE: cmp     ax, [esi+64h]
0x702AE2: jb      short loc_702AD0
0x702AE4: jmp     short loc_702AF4
0x702AE6: movzx   ebp, ax
0x702AE9: mov     [ecx+ebp*2], dx
0x702AED: movzx   edx, ax
0x702AF0: mov     [esp+40h+var_2C], edx
0x702AF4: mov     ax, [edi]
0x702AF7: add     [esi+8], ax
0x702AFB: movzx   eax, word ptr [esi+8]
0x702AFF: movzx   edx, word ptr [esi+66h]
0x702B03: movzx   ecx, dx
0x702B06: movzx   eax, ax
0x702B09: sub     eax, ecx
0x702B0B: test    eax, eax
0x702B0D: mov     [esp+40h+arg_0], eax
0x702B11: jle     loc_702D79
0x702B17: movzx   ecx, word ptr [esi+68h]
0x702B1B: fild    [esp+40h+arg_0]
0x702B1F: movzx   eax, cx
0x702B22: mov     [esp+40h+arg_0], eax
0x702B26: fild    [esp+40h+arg_0]
0x702B2A: fdivp   st(1), st
0x702B2C: fstp    [esp+40h+arg_0]
0x702B30: fld     [esp+40h+arg_0]
0x702B34: fadd    qword ptr ds:0A2FAA0h
0x702B3A: fnstcw  word ptr [esp+40h+arg_0]
0x702B3E: movzx   eax, word ptr [esp+40h+arg_0]
0x702B43: or      eax, 0C00h
0x702B48: mov     [esp+40h+var_28], eax
0x702B4C: fldcw   word ptr [esp+40h+var_28]
0x702B50: fistp   [esp+40h+var_28]
0x702B54: mov     ax, word ptr [esp+40h+var_28]
0x702B59: add     ax, 1
0x702B5D: movzx   eax, ax
0x702B60: imul    ecx, eax
0x702B63: fldcw   word ptr [esp+40h+arg_0]
0x702B67: add     ecx, edx
0x702B69: movzx   eax, cx
0x702B6C: movzx   ebp, ax
0x702B6F: mov     [esp+40h+var_28], eax
0x702B73: xor     ecx, ecx
0x702B75: mov     eax, ebp
0x702B77: mov     edx, 0Ch
0x702B7C: mul     edx
0x702B7E: seto    cl
0x702B81: neg     ecx
0x702B83: or      ecx, eax
0x702B85: push    ecx; Size
0x702B86: call    FormHeapAlloc
0x702B8B: mov     ebx, eax
0x702B8D: movzx   eax, word ptr [esi+66h]
0x702B91: lea     edi, [eax+eax*2]
0x702B94: mov     eax, [esi+1Ch]
0x702B97: add     edi, edi
0x702B99: add     edi, edi
0x702B9B: push    edi; Size
0x702B9C: push    eax; Src
0x702B9D: push    ebx; Dst
0x702B9E: call    _memcpy
0x702BA3: mov     eax, [esi+1Ch]
0x702BA6: push    eax
0x702BA7: call    FormHeapFree
0x702BAC: add     esp, 14h
0x702BAF: cmp     dword ptr [esi+20h], 0
0x702BB3: mov     [esi+1Ch], ebx
0x702BB6: jz      loc_702C6D
0x702BBC: xor     ecx, ecx
0x702BBE: mov     eax, ebp
0x702BC0: mov     edx, 0Ch
0x702BC5: mul     edx
0x702BC7: seto    cl
0x702BCA: neg     ecx
0x702BCC: or      ecx, eax
0x702BCE: push    ecx; Size
0x702BCF: call    FormHeapAlloc
0x702BD4: mov     ebx, eax
0x702BD6: mov     eax, [esi+20h]
0x702BD9: push    edi; Size
0x702BDA: push    eax; Src
0x702BDB: push    ebx; Dst
0x702BDC: call    _memcpy
0x702BE1: mov     eax, [esi+20h]
0x702BE4: push    eax
0x702BE5: call    FormHeapFree
0x702BEA: movzx   eax, word ptr [esi+66h]
0x702BEE: mov     edx, [esp+54h+var_28]
0x702BF2: add     esp, 14h
0x702BF5: cmp     ax, dx
0x702BF8: mov     [esi+20h], ebx
0x702BFB: jnb     short loc_702C6D
0x702BFD: movzx   ecx, ax
0x702C00: lea     ecx, [ecx+ecx*2]
0x702C03: add     ecx, ecx
0x702C05: add     ecx, ecx
0x702C07: sub     edx, eax
0x702C09: movzx   edx, dx
0x702C0C: lea     esp, [esp+0]
0x702C10: fld     dword ptr ds:0B258E8h
0x702C16: mov     eax, [esi+20h]
0x702C19: fchs
0x702C1B: add     eax, ecx
0x702C1D: fstp    [esp+40h+arg_0]
0x702C21: add     ecx, 0Ch
0x702C24: sub     edx, 1
0x702C27: fld     dword ptr ds:0B258ECh
0x702C2D: fchs
0x702C2F: fstp    [esp+40h+var_24]
0x702C33: fld     dword ptr ds:0B258F0h
0x702C39: fchs
0x702C3B: fstp    [esp+40h+var_20]
0x702C3F: fld     [esp+40h+arg_0]
0x702C43: fstp    [esp+40h+var_18]
0x702C47: mov     edi, [esp+40h+var_18]
0x702C4B: fld     [esp+40h+var_24]
0x702C4F: mov     [eax], edi
0x702C51: fstp    [esp+40h+var_14]
0x702C55: mov     edi, [esp+40h+var_14]
0x702C59: fld     [esp+40h+var_20]
0x702C5D: mov     [eax+4], edi
0x702C60: fstp    [esp+40h+var_10]
0x702C64: mov     edi, [esp+40h+var_10]
0x702C68: mov     [eax+8], edi
0x702C6B: jnz     short loc_702C10
0x702C6D: cmp     dword ptr [esi+24h], 0
0x702C71: jz      short loc_702CDB
0x702C73: xor     ecx, ecx
0x702C75: mov     eax, ebp
0x702C77: mov     edx, 10h
0x702C7C: mul     edx
0x702C7E: seto    cl
0x702C81: neg     ecx
0x702C83: or      ecx, eax
0x702C85: push    ecx; Size
0x702C86: call    FormHeapAlloc
0x702C8B: mov     edi, eax
0x702C8D: add     esp, 4
0x702C90: mov     [esp+40h+arg_0], edi
0x702C94: test    edi, edi
0x702C96: mov     [esp+40h+var_4], 0
0x702C9E: jz      short loc_702CB0
0x702CA0: push    offset sub_47EA50
0x702CA5: push    ebp
0x702CA6: push    10h
0x702CA8: push    edi
0x702CA9: call    sub_401080
0x702CAE: jmp     short loc_702CB2
0x702CB0: xor     edi, edi
0x702CB2: movzx   eax, word ptr [esi+66h]
0x702CB6: mov     ecx, [esi+24h]
0x702CB9: shl     eax, 4
0x702CBC: push    eax; Size
0x702CBD: push    ecx; Src
0x702CBE: push    edi; Dst
0x702CBF: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x702CC7: call    _memcpy
0x702CCC: mov     edx, [esi+24h]
0x702CCF: push    edx
0x702CD0: call    FormHeapFree
0x702CD5: add     esp, 10h
0x702CD8: mov     [esi+24h], edi
0x702CDB: movzx   eax, byte ptr [esi+2Ch]
0x702CDF: and     eax, 3Fh
0x702CE2: test    ax, ax
0x702CE5: mov     [esp+40h+arg_0], eax
0x702CE9: jbe     short loc_702D68
0x702CEB: movzx   eax, ax
0x702CEE: mov     [esp+40h+var_20], eax
0x702CF2: imul    eax, ebp
0x702CF5: xor     ecx, ecx
0x702CF7: mov     edx, 8
0x702CFC: mul     edx
0x702CFE: seto    cl
0x702D01: neg     ecx
0x702D03: or      ecx, eax
0x702D05: push    ecx; Size
0x702D06: call    FormHeapAlloc
0x702D0B: movzx   edi, word ptr [esi+66h]
0x702D0F: add     edi, edi
0x702D11: add     edi, edi
0x702D13: add     esp, 4
0x702D16: add     edi, edi
0x702D18: cmp     word ptr [esp+40h+arg_0], 0
0x702D1E: mov     ebx, eax
0x702D20: jbe     short loc_702D59
0x702D22: mov     eax, [esp+40h+var_20]
0x702D26: xor     ebp, ebp
0x702D28: mov     [esp+40h+arg_0], eax
0x702D2C: lea     esp, [esp+0]
0x702D30: movzx   eax, word ptr [esi+8]
0x702D34: mov     ecx, [esi+28h]
0x702D37: imul    eax, ebp
0x702D3A: add     eax, eax
0x702D3C: add     eax, eax
0x702D3E: add     eax, eax
0x702D40: add     ecx, eax
0x702D42: push    edi; Size
0x702D43: push    ecx; Src
0x702D44: add     eax, ebx
0x702D46: push    eax; Dst
0x702D47: call    _memcpy
0x702D4C: add     esp, 0Ch
0x702D4F: add     ebp, 1
0x702D52: sub     [esp+40h+arg_0], 1
0x702D57: jnz     short loc_702D30
0x702D59: mov     edx, [esi+28h]
0x702D5C: push    edx
0x702D5D: call    FormHeapFree
0x702D62: add     esp, 4
0x702D65: mov     [esi+28h], ebx
0x702D68: mov     ax, word ptr [esp+40h+var_28]
0x702D6D: mov     edi, [esp+40h+var_1C]
0x702D71: mov     ebx, [esp+40h+arg_4]
0x702D75: mov     [esi+66h], ax
0x702D79: add     [esi+40h], bx
0x702D7D: movzx   eax, word ptr [esi+40h]
0x702D81: movzx   ecx, bx
0x702D84: lea     edx, [ecx+ecx*2]
0x702D87: add     [esi+44h], edx
0x702D8A: movzx   edx, word ptr [esi+6Ah]
0x702D8E: movzx   eax, ax
0x702D91: movzx   ebp, dx
0x702D94: lea     eax, [eax+eax*2]
0x702D97: sub     eax, ebp
0x702D99: test    eax, eax
0x702D9B: mov     [esp+40h+var_20], ecx
0x702D9F: mov     [esp+40h+arg_0], eax
0x702DA3: jle     loc_702E44
0x702DA9: movzx   ecx, word ptr [esi+6Ch]
0x702DAD: fild    [esp+40h+arg_0]
0x702DB1: movzx   eax, cx
0x702DB4: mov     [esp+40h+arg_0], eax
0x702DB8: fild    [esp+40h+arg_0]
0x702DBC: fdivp   st(1), st
0x702DBE: fstp    [esp+40h+arg_0]
0x702DC2: fld     [esp+40h+arg_0]
0x702DC6: fadd    qword ptr ds:0A2FAA0h
0x702DCC: fnstcw  word ptr [esp+40h+arg_0]
0x702DD0: movzx   eax, word ptr [esp+40h+arg_0]
0x702DD5: or      eax, 0C00h
0x702DDA: mov     [esp+40h+var_1C], eax
0x702DDE: fldcw   word ptr [esp+40h+var_1C]
0x702DE2: fistp   [esp+40h+var_1C]
0x702DE6: mov     ax, word ptr [esp+40h+var_1C]
0x702DEB: add     ax, 1
0x702DEF: imul    ax, cx
0x702DF3: fldcw   word ptr [esp+40h+arg_0]
0x702DF7: add     ax, dx
0x702DFA: movzx   ebp, ax
0x702DFD: xor     ecx, ecx
0x702DFF: movzx   eax, bp
0x702E02: mov     edx, 2
0x702E07: mul     edx
0x702E09: seto    cl
0x702E0C: neg     ecx
0x702E0E: or      ecx, eax
0x702E10: push    ecx; Size
0x702E11: call    FormHeapAlloc
0x702E16: mov     ecx, [esi+48h]
0x702E19: mov     ebx, eax
0x702E1B: movzx   eax, word ptr [esi+6Ah]
0x702E1F: add     eax, eax
0x702E21: push    eax; Size
0x702E22: push    ecx; Src
0x702E23: push    ebx; Dst
0x702E24: call    _memcpy
0x702E29: mov     edx, [esi+48h]
0x702E2C: push    edx
0x702E2D: call    FormHeapFree
0x702E32: mov     ecx, [esp+54h+var_20]
0x702E36: mov     [esi+48h], ebx
0x702E39: mov     ebx, [esp+54h+arg_4]
0x702E3D: add     esp, 14h
0x702E40: mov     [esi+6Ah], bp
0x702E44: movzx   eax, word ptr [edi+6]
0x702E48: mov     edx, [esi+48h]
0x702E4B: lea     eax, [edx+eax*2]
0x702E4E: mov     edx, [esp+40h+Src]
0x702E52: test    edx, edx
0x702E54: jz      short loc_702E68
0x702E56: lea     ecx, [ecx+ecx*2]
0x702E59: add     ecx, ecx
0x702E5B: push    ecx; Size
0x702E5C: push    edx; Src
0x702E5D: push    eax; Dst
0x702E5E: call    _memcpy
0x702E63: add     esp, 0Ch
0x702E66: jmp     short loc_702EA4
0x702E68: xor     ecx, ecx
0x702E6A: test    bx, bx
0x702E6D: jbe     short loc_702EA4
0x702E6F: nop
0x702E70: movzx   edx, word ptr [edi+2]
0x702E74: mov     [eax], dx
0x702E77: movzx   edx, word ptr [edi+2]
0x702E7B: add     dx, cx
0x702E7E: add     dx, 1
0x702E82: add     eax, 2
0x702E85: mov     [eax], dx
0x702E88: movzx   edx, word ptr [edi+2]
0x702E8C: add     dx, cx
0x702E8F: add     eax, 2
0x702E92: add     dx, 2
0x702E96: mov     [eax], dx
0x702E99: add     ecx, 1
0x702E9C: add     eax, 2
0x702E9F: cmp     cx, bx
0x702EA2: jb      short loc_702E70
0x702EA4: movzx   eax, word ptr [esp+40h+var_2C]
0x702EA9: mov     ecx, [esp+40h+var_C]
0x702EAD: mov     large fs:0, ecx
0x702EB4: pop     ecx
0x702EB5: pop     edi
0x702EB6: pop     esi
0x702EB7: pop     ebp
0x702EB8: pop     ebx
0x702EB9: add     esp, 2Ch
0x702EBC: retn    0Ch
