0x8BDF50: push    ebp
0x8BDF51: mov     ebp, esp
0x8BDF53: and     esp, 0FFFFFFF0h
0x8BDF56: push    0FFFFFFFFh
0x8BDF58: push    offset SEH_8BDF50
0x8BDF5D: mov     eax, large fs:0
0x8BDF63: push    eax
0x8BDF64: sub     esp, 28h
0x8BDF67: mov     eax, ds:0B30AACh
0x8BDF6C: xor     eax, esp
0x8BDF6E: mov     [esp+34h+var_14], eax
0x8BDF72: push    ebx
0x8BDF73: push    esi
0x8BDF74: push    edi
0x8BDF75: mov     eax, ds:0B30AACh
0x8BDF7A: xor     eax, esp
0x8BDF7C: push    eax
0x8BDF7D: lea     eax, [esp+44h+var_C]
0x8BDF81: mov     large fs:0, eax
0x8BDF87: mov     esi, [ebp+arg_0]
0x8BDF8A: test    esi, esi
0x8BDF8C: mov     ebx, ecx
0x8BDF8E: jz      loc_8BE036
0x8BDF94: mov     ecx, ds:0BA7D98h
0x8BDF9A: mov     eax, [ecx]
0x8BDF9C: mov     edx, [eax+10h]
0x8BDF9F: push    26h ; '&'
0x8BDFA1: push    40h ; '@'
0x8BDFA3: call    edx
0x8BDFA5: mov     word ptr [eax+4], 40h ; '@'
0x8BDFAB: mov     dword ptr [esp+44h+var_38+4], eax
0x8BDFAF: mov     ecx, [esi+8]
0x8BDFB2: mov     edx, [esi+4]
0x8BDFB5: push    0
0x8BDFB7: push    ecx
0x8BDFB8: push    edx
0x8BDFB9: mov     ecx, eax
0x8BDFBB: mov     [esp+50h+var_4], 0
0x8BDFC3: call    sub_90FDF0
0x8BDFC8: fld     dword ptr [esi+20h]
0x8BDFCB: mov     edi, eax
0x8BDFCD: fstp    dword ptr [edi+30h]
0x8BDFD0: push    edi
0x8BDFD1: fld     dword ptr [esi+24h]
0x8BDFD4: mov     ecx, ebx
0x8BDFD6: fstp    dword ptr [edi+34h]
0x8BDFD9: mov     [esp+48h+var_4], 0FFFFFFFFh
0x8BDFE1: fld     dword ptr [esi+10h]
0x8BDFE4: fstp    dword ptr [esp+48h+var_38+8]
0x8BDFE8: fld     dword ptr [esi+14h]
0x8BDFEB: fstp    dword ptr [esp+48h+var_38+0Ch]
0x8BDFEF: fld     dword ptr [esi+18h]
0x8BDFF2: fstp    [esp+48h+var_28]
0x8BDFF6: fld     dword ptr [esi+1Ch]
0x8BDFF9: fstp    [esp+48h+var_24]
0x8BDFFD: movaps  xmm0, [esp+48h+var_38+8]
0x8BE002: movaps  xmmword ptr [edi+20h], xmm0
0x8BE006: mov     eax, [ebx]
0x8BE008: mov     edx, [eax+4Ch]
0x8BE00B: call    edx
0x8BE00D: cmp     word ptr [edi+4], 0
0x8BE012: jz      short loc_8BE02C
0x8BE014: add     word ptr [edi+6], 0FFFFh
0x8BE019: movzx   eax, word ptr [edi+6]
0x8BE01D: test    ax, ax
0x8BE020: jnz     short loc_8BE02C
0x8BE022: mov     eax, [edi]
0x8BE024: mov     edx, [eax]
0x8BE026: push    1
0x8BE028: mov     ecx, edi
0x8BE02A: call    edx
0x8BE02C: mov     eax, [ebx]
0x8BE02E: mov     edx, [eax+7Ch]
0x8BE031: push    esi
0x8BE032: mov     ecx, ebx
0x8BE034: call    edx
0x8BE036: mov     ecx, [esp+44h+var_C]
0x8BE03A: mov     large fs:0, ecx
0x8BE041: pop     ecx
0x8BE042: pop     edi
0x8BE043: pop     esi
0x8BE044: pop     ebx
0x8BE045: mov     ecx, [esp+34h+var_14]
0x8BE049: xor     ecx, esp
0x8BE04B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BE050: mov     esp, ebp
0x8BE052: pop     ebp
0x8BE053: retn    4
