0x8D2CE0: sub     esp, 14h
0x8D2CE3: push    ebx
0x8D2CE4: mov     ebx, [esp+18h+arg_4]
0x8D2CE8: push    ebp
0x8D2CE9: push    esi
0x8D2CEA: push    edi
0x8D2CEB: mov     edi, [esp+24h+arg_0]
0x8D2CEF: inc     dword ptr [edi+88h]
0x8D2CF5: lea     eax, [ebx+4]
0x8D2CF8: mov     ebp, ecx
0x8D2CFA: mov     [esp+24h+arg_4], eax
0x8D2CFE: mov     [esp+24h+var_14], 2
0x8D2D06: mov     ecx, [esp+24h+arg_4]
0x8D2D0A: mov     eax, [ecx]
0x8D2D0C: mov     [esp+24h+arg_0], eax
0x8D2D10: mov     esi, [eax+50h]
0x8D2D13: mov     cl, [eax+92h]
0x8D2D19: add     esi, 10h
0x8D2D1C: test    cl, cl
0x8D2D1E: jnz     loc_8D2DC0
0x8D2D24: fld     dword ptr ds:0A2FAA8h
0x8D2D2A: fld     dword ptr [esi+5Ch]
0x8D2D2D: fucompp
0x8D2D2F: fnstsw  ax
0x8D2D31: test    ah, 44h
0x8D2D34: jnp     loc_8D2DC0
0x8D2D3A: mov     edx, [ebx]
0x8D2D3C: push    esi; int
0x8D2D3D: push    edx; float
0x8D2D3E: call    sub_8DD530
0x8D2D43: movaps  xmm0, xmmword ptr [esi+50h]
0x8D2D47: movaps  xmmword ptr [esi+40h], xmm0
0x8D2D4B: movaps  xmm0, xmmword ptr [esi+70h]
0x8D2D4F: movaps  xmmword ptr [esi+60h], xmm0
0x8D2D53: mov     eax, [ebx]
0x8D2D55: mov     [esi+4Ch], eax
0x8D2D58: mov     dword ptr [esi+5Ch], 0
0x8D2D5F: mov     ecx, [edi+74h]
0x8D2D62: mov     edx, [esp+2Ch+arg_0]
0x8D2D66: push    ecx
0x8D2D67: push    edx
0x8D2D68: call    sub_8E77C0
0x8D2D6D: mov     eax, [ebp+28h]
0x8D2D70: add     esp, 10h
0x8D2D73: cmp     eax, 1
0x8D2D76: jnz     short loc_8D2D9A
0x8D2D78: mov     eax, [esp+24h+arg_0]
0x8D2D7C: push    eax
0x8D2D7D: push    ebp
0x8D2D7E: call    sub_8CC4E0
0x8D2D83: mov     ecx, [edi+74h]
0x8D2D86: add     esp, 8
0x8D2D89: push    ecx
0x8D2D8A: push    1
0x8D2D8C: lea     edx, [esp+2Ch+arg_0]
0x8D2D90: push    edx
0x8D2D91: mov     ecx, ebp
0x8D2D93: call    sub_8D4AD0
0x8D2D98: jmp     short loc_8D2DC0
0x8D2D9A: test    eax, eax
0x8D2D9C: jnz     short loc_8D2DC0
0x8D2D9E: mov     eax, [edi+18h]
0x8D2DA1: mov     ecx, [edi+0Ch]
0x8D2DA4: mov     esi, [ebp+0]
0x8D2DA7: push    eax; float
0x8D2DA8: push    ecx; int
0x8D2DA9: lea     ecx, [esp+2Ch+var_10]
0x8D2DAD: call    sub_8D2C90
0x8D2DB2: push    eax
0x8D2DB3: push    edi
0x8D2DB4: push    1
0x8D2DB6: lea     edx, [esp+30h+arg_0]
0x8D2DBA: push    edx
0x8D2DBB: mov     ecx, ebp
0x8D2DBD: call    dword ptr [esi+18h]
0x8D2DC0: mov     ecx, [esp+24h+arg_4]
0x8D2DC4: mov     eax, [esp+24h+var_14]
0x8D2DC8: add     ecx, 4
0x8D2DCB: dec     eax
0x8D2DCC: mov     [esp+24h+arg_4], ecx
0x8D2DD0: mov     [esp+24h+var_14], eax
0x8D2DD4: jnz     loc_8D2D06
0x8D2DDA: dec     dword ptr [edi+88h]
0x8D2DE0: jnz     short loc_8D2DFD
0x8D2DE2: mov     eax, [edi+84h]
0x8D2DE8: test    eax, eax
0x8D2DEA: jz      short loc_8D2DFD
0x8D2DEC: mov     al, [edi+90h]
0x8D2DF2: test    al, al
0x8D2DF4: jnz     short loc_8D2DFD
0x8D2DF6: mov     ecx, edi
0x8D2DF8: call    sub_899210
0x8D2DFD: pop     edi
0x8D2DFE: pop     esi
0x8D2DFF: pop     ebp
0x8D2E00: pop     ebx
0x8D2E01: add     esp, 14h
0x8D2E04: retn    0Ch
