0x8C8B60: push    0FFFFFFFFh
0x8C8B62: push    offset SEH_8D25A0
0x8C8B67: mov     eax, large fs:0
0x8C8B6D: push    eax
0x8C8B6E: sub     esp, 0Ch
0x8C8B71: push    ebx
0x8C8B72: push    ebp
0x8C8B73: push    esi
0x8C8B74: push    edi
0x8C8B75: mov     eax, ds:0B30AACh
0x8C8B7A: xor     eax, esp
0x8C8B7C: push    eax
0x8C8B7D: lea     eax, [esp+2Ch+var_C]
0x8C8B81: mov     large fs:0, eax
0x8C8B87: mov     ebx, ecx
0x8C8B89: mov     edi, [esp+2Ch+arg_0]
0x8C8B8D: test    edi, edi
0x8C8B8F: jz      loc_8C8C31
0x8C8B95: mov     eax, [edi+8]
0x8C8B98: mov     ecx, ds:0BA7D98h
0x8C8B9E: mov     edx, [ecx]
0x8C8BA0: mov     esi, [edi+0Ch]
0x8C8BA3: push    24h ; '$'
0x8C8BA5: mov     [esp+30h+var_18], eax
0x8C8BA9: mov     eax, [edx+10h]
0x8C8BAC: push    50h ; 'P'
0x8C8BAE: mov     ebp, 10h
0x8C8BB3: call    eax
0x8C8BB5: mov     word ptr [eax+4], 50h ; 'P'
0x8C8BBB: mov     [esp+2Ch+arg_0], eax
0x8C8BBF: fld     dword ptr ds:0B2FFE4h
0x8C8BC5: mov     edx, [esp+2Ch+var_18]
0x8C8BC9: push    ecx
0x8C8BCA: fstp    [esp+30h+var_30]
0x8C8BCD: lea     ecx, [edi+14h]
0x8C8BD0: push    ecx
0x8C8BD1: sub     esp, 0Ch
0x8C8BD4: mov     ecx, esp
0x8C8BD6: mov     [ecx], edx
0x8C8BD8: mov     [ecx+4], esi
0x8C8BDB: mov     [ecx+8], ebp
0x8C8BDE: mov     ecx, eax
0x8C8BE0: mov     [esp+40h+var_4], 0
0x8C8BE8: call    sub_917720
0x8C8BED: fld     dword ptr ds:0B2EFC4h
0x8C8BF3: mov     esi, eax
0x8C8BF5: fstp    dword ptr [esi+0Ch]
0x8C8BF8: mov     eax, [ebx]
0x8C8BFA: mov     edx, [eax+4Ch]
0x8C8BFD: or      ebp, 0FFFFFFFFh
0x8C8C00: push    esi
0x8C8C01: mov     ecx, ebx
0x8C8C03: mov     [esp+30h+var_4], ebp
0x8C8C07: call    edx
0x8C8C09: cmp     word ptr [esi+4], 0
0x8C8C0E: jz      short loc_8C8C27
0x8C8C10: add     [esi+6], bp
0x8C8C14: movzx   eax, word ptr [esi+6]
0x8C8C18: test    ax, ax
0x8C8C1B: jnz     short loc_8C8C27
0x8C8C1D: mov     eax, [esi]
0x8C8C1F: mov     edx, [eax]
0x8C8C21: push    1
0x8C8C23: mov     ecx, esi
0x8C8C25: call    edx
0x8C8C27: mov     eax, [ebx]
0x8C8C29: mov     edx, [eax+7Ch]
0x8C8C2C: push    edi
0x8C8C2D: mov     ecx, ebx
0x8C8C2F: call    edx
0x8C8C31: mov     ecx, [esp+2Ch+var_C]
0x8C8C35: mov     large fs:0, ecx
0x8C8C3C: pop     ecx
0x8C8C3D: pop     edi
0x8C8C3E: pop     esi
0x8C8C3F: pop     ebp
0x8C8C40: pop     ebx
0x8C8C41: add     esp, 18h
0x8C8C44: retn    4
