0x4E3F30: push    ecx
0x4E3F31: push    ebx
0x4E3F32: mov     ebx, ecx
0x4E3F34: mov     eax, [ebx+8]
0x4E3F37: mov     ecx, eax
0x4E3F39: shr     ecx, 5
0x4E3F3C: test    cl, 1
0x4E3F3F: jnz     loc_4E407D
0x4E3F45: shr     eax, 0Bh
0x4E3F48: test    al, 1
0x4E3F4A: jnz     loc_4E407D
0x4E3F50: mov     edx, [ebx+1Ch]
0x4E3F53: movzx   eax, byte ptr [edx+4]
0x4E3F57: cmp     eax, 1Ah
0x4E3F5A: jz      short loc_4E3F64
0x4E3F5C: add     eax, 0FFFFFFDDh
0x4E3F5F: cmp     eax, 1
0x4E3F62: ja      short loc_4E3F70
0x4E3F64: mov     eax, [ebx]
0x4E3F66: mov     edx, [eax+0FCh]
0x4E3F6C: mov     ecx, ebx
0x4E3F6E: call    edx
0x4E3F70: mov     eax, [ebx]
0x4E3F72: mov     edx, [eax+154h]
0x4E3F78: push    ebp
0x4E3F79: mov     ecx, ebx
0x4E3F7B: call    edx
0x4E3F7D: xor     ebp, ebp
0x4E3F7F: cmp     eax, ebp
0x4E3F81: jz      loc_4E4041
0x4E3F87: cmp     [eax+0B6h], bp
0x4E3F8E: jbe     loc_4E4041
0x4E3F94: mov     eax, [eax+0B0h]
0x4E3F9A: mov     eax, [eax]
0x4E3F9C: cmp     eax, ebp
0x4E3F9E: jz      loc_4E4041
0x4E3FA4: mov     eax, [eax+0Ch]
0x4E3FA7: cmp     eax, ebp
0x4E3FA9: jz      loc_4E4041
0x4E3FAF: push    edi
0x4E3FB0: push    eax
0x4E3FB1: push    offset stru_B3CAC0
0x4E3FB6: call    NiRTTI_Cast
0x4E3FBB: mov     edi, eax
0x4E3FBD: add     esp, 8
0x4E3FC0: cmp     edi, ebp
0x4E3FC2: mov     [esp+10h+var_4], ebp
0x4E3FC6: jz      short loc_4E4040
0x4E3FC8: mov     cl, [edi+8]
0x4E3FCB: shr     cl, 3
0x4E3FCE: test    cl, 1
0x4E3FD1: jz      short loc_4E4040
0x4E3FD3: cmp     [edi+46h], bp
0x4E3FD7: jbe     short loc_4E403A
0x4E3FD9: push    esi
0x4E3FDA: lea     ebx, [ebx+0]
0x4E3FE0: mov     edx, [edi+40h]
0x4E3FE3: mov     esi, [edx+ebp*4]
0x4E3FE6: test    esi, esi
0x4E3FE8: jz      short loc_4E4027
0x4E3FEA: cmp     dword ptr [esi+44h], 0
0x4E3FEE: jz      short loc_4E4027
0x4E3FF0: push    ebx
0x4E3FF1: push    esi
0x4E3FF2: call    sub_49F950
0x4E3FF7: add     esp, 8
0x4E3FFA: test    al, al
0x4E3FFC: jz      short loc_4E4022
0x4E3FFE: push    esi
0x4E3FFF: mov     ecx, ebx
0x4E4001: call    sub_4E0D90
0x4E4006: fldz
0x4E4008: push    0; char
0x4E400A: push    ecx
0x4E400B: mov     ecx, esi
0x4E400D: fstp    [esp+1Ch+var_1C]; float
0x4E4010: call    sub_6C9CB0
0x4E4015: mov     eax, [esi+8]
0x4E4018: push    eax
0x4E4019: mov     ecx, ebx
0x4E401B: call    sub_4D90D0
0x4E4020: jmp     short loc_4E4027
0x4E4022: add     [esp+14h+var_4], 1
0x4E4027: movzx   ecx, word ptr [edi+46h]
0x4E402B: add     ebp, 1
0x4E402E: cmp     ebp, ecx
0x4E4030: jb      short loc_4E3FE0
0x4E4032: cmp     [esp+14h+var_4], 0
0x4E4037: pop     esi
0x4E4038: jnz     short loc_4E4040
0x4E403A: and     word ptr [edi+8], 0FFF7h
0x4E4040: pop     edi
0x4E4041: mov     edx, [ebx]
0x4E4043: mov     eax, [edx+164h]
0x4E4049: mov     ecx, ebx
0x4E404B: call    eax
0x4E404D: test    eax, eax
0x4E404F: pop     ebp
0x4E4050: jz      short loc_4E407D
0x4E4052: mov     edx, [ebx+3Ch]
0x4E4055: test    edx, edx
0x4E4057: jz      short loc_4E407D
0x4E4059: cmp     dword ptr [edx+1Ch], 0
0x4E405D: jz      short loc_4E407D
0x4E405F: fld     dword ptr ds:0A30634h
0x4E4065: sub     esp, 8
0x4E4068: fstp    [esp+10h+var_C]; float
0x4E406C: mov     ecx, eax; this
0x4E406E: fld     dword ptr ds:0B33E9Ch
0x4E4074: fstp    [esp+10h+var_10]; float
0x4E4077: push    ebx; int
0x4E4078: call    sub_476D10
0x4E407D: pop     ebx
0x4E407E: pop     ecx
0x4E407F: retn
