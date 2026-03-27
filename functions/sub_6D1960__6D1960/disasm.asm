0x6D1960: sub     esp, 0Ch
0x6D1963: push    esi
0x6D1964: mov     esi, ecx
0x6D1966: mov     al, [esi+8]
0x6D1969: shr     al, 5
0x6D196C: test    al, 1
0x6D196E: jz      short loc_6D197B
0x6D1970: fld     dword ptr ds:0A7A164h
0x6D1976: fstp    dword ptr [esi+28h]
0x6D1979: jmp     short loc_6D19A9
0x6D197B: fld     [esp+10h+arg_0]
0x6D197F: push    ecx
0x6D1980: fstp    [esp+14h+var_14]; float
0x6D1983: call    sub_6C36B0
0x6D1988: test    al, al
0x6D198A: jz      short loc_6D19A9
0x6D198C: mov     ecx, [esi+3Ch]
0x6D198F: test    ecx, ecx
0x6D1991: jz      loc_6D1A85
0x6D1997: mov     edx, [ecx]
0x6D1999: mov     eax, [edx+94h]
0x6D199F: call    eax
0x6D19A1: test    al, al
0x6D19A3: jz      loc_6D1A85
0x6D19A9: mov     ecx, [esi+3Ch]
0x6D19AC: test    ecx, ecx
0x6D19AE: jz      loc_6D1A85
0x6D19B4: mov     edx, [ecx]
0x6D19B6: fld     dword ptr [esi+28h]
0x6D19B9: mov     edx, [edx+5Ch]
0x6D19BC: lea     eax, [esp+10h+var_C]
0x6D19C0: push    eax
0x6D19C1: mov     eax, [esi+30h]
0x6D19C4: push    eax
0x6D19C5: push    ecx
0x6D19C6: fstp    [esp+1Ch+var_1C]
0x6D19C9: call    edx
0x6D19CB: test    al, al
0x6D19CD: jz      loc_6D1A85
0x6D19D3: fld     [esp+10h+var_C]
0x6D19D7: movzx   ecx, word ptr [esi+4Ah]
0x6D19DB: fadd    qword ptr ds:0A3B150h
0x6D19E1: fnstcw  word ptr [esp+10h+arg_0]
0x6D19E5: movzx   eax, word ptr [esp+10h+arg_0]
0x6D19EA: or      eax, 0C00h
0x6D19EF: mov     dword ptr [esp+10h+var_8], eax
0x6D19F3: fldcw   word ptr [esp+10h+var_8]
0x6D19F7: fistp   [esp+10h+var_8]
0x6D19FB: mov     eax, dword ptr [esp+10h+var_8]
0x6D19FF: cmp     eax, ecx
0x6D1A01: mov     [esi+50h], eax
0x6D1A04: fldcw   word ptr [esp+10h+arg_0]
0x6D1A08: jb      short loc_6D1A10
0x6D1A0A: add     ecx, 0FFFFFFFFh
0x6D1A0D: mov     [esi+50h], ecx
0x6D1A10: push    edi
0x6D1A11: mov     edi, [esi+30h]
0x6D1A14: test    edi, edi
0x6D1A16: jz      short loc_6D1A84
0x6D1A18: movzx   ecx, word ptr [edi+26h]
0x6D1A1C: mov     eax, [esi+54h]
0x6D1A1F: cmp     eax, ecx
0x6D1A21: jnb     short loc_6D1A48
0x6D1A23: mov     edx, [edi+20h]
0x6D1A26: cmp     dword ptr [edx+eax*4], 0
0x6D1A2A: lea     ecx, [edx+eax*4]
0x6D1A2D: jz      short loc_6D1A48
0x6D1A2F: mov     eax, [esi+50h]
0x6D1A32: mov     edx, [esi+44h]
0x6D1A35: mov     eax, [edx+eax*4]
0x6D1A38: mov     ecx, [ecx]; this
0x6D1A3A: push    eax; a2
0x6D1A3B: call    NiDX9Renderer__SetShaderAccumulator
0x6D1A40: pop     edi
0x6D1A41: pop     esi
0x6D1A42: add     esp, 0Ch
0x6D1A45: retn    4
0x6D1A48: push    ebx
0x6D1A49: lea     ebx, [eax-400h]
0x6D1A4F: mov     eax, [edi+2Ch]
0x6D1A52: test    eax, eax
0x6D1A54: jz      short loc_6D1A83
0x6D1A56: movzx   eax, word ptr [eax+0Ah]
0x6D1A5A: cmp     ebx, eax
0x6D1A5C: jnb     short loc_6D1A83
0x6D1A5E: push    ebx
0x6D1A5F: mov     ecx, edi
0x6D1A61: call    sub_6D1920
0x6D1A66: test    eax, eax
0x6D1A68: jz      short loc_6D1A83
0x6D1A6A: mov     ecx, [esi+50h]
0x6D1A6D: mov     edx, [esi+44h]
0x6D1A70: mov     eax, [edx+ecx*4]
0x6D1A73: push    eax; a2
0x6D1A74: push    ebx
0x6D1A75: mov     ecx, edi
0x6D1A77: call    sub_6D1920
0x6D1A7C: mov     ecx, eax; this
0x6D1A7E: call    NiDX9Renderer__SetShaderAccumulator
0x6D1A83: pop     ebx
0x6D1A84: pop     edi
0x6D1A85: pop     esi
0x6D1A86: add     esp, 0Ch
0x6D1A89: retn    4
