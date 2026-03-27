0x495AF0: sub     esp, 34h
0x495AF3: push    esi
0x495AF4: mov     esi, [esp+38h+arg_4]
0x495AF8: test    esi, esi
0x495AFA: push    edi
0x495AFB: mov     edi, ecx
0x495AFD: jz      loc_495C06
0x495B03: cmp     dword ptr [esi+7Ch], 0
0x495B07: push    ebx
0x495B08: mov     ebx, [esp+40h+arg_0]
0x495B0C: push    ebp
0x495B0D: mov     [esp+44h+var_30], 0FFFF0002h
0x495B15: mov     [esp+44h+var_2C], 27h ; '''
0x495B1D: mov     [esp+44h+var_8], esi
0x495B21: mov     ebp, 5
0x495B26: jz      short loc_495B5E
0x495B28: mov     ecx, [edi+0Ch]
0x495B2B: lea     eax, [esp+44h+lParam]
0x495B2F: push    eax; lParam
0x495B30: push    0; wParam
0x495B32: push    1100h; Msg
0x495B37: push    ecx; hWnd
0x495B38: mov     [esp+54h+var_1C], offset aObjectPalette; "Object Palette"
0x495B40: mov     [esp+54h+var_14], ebp
0x495B44: mov     [esp+54h+var_10], ebp
0x495B48: mov     [esp+54h+lParam], ebx
0x495B4C: call    dword ptr ds:0A28290h
0x495B52: mov     edx, [esi+7Ch]
0x495B55: push    edx
0x495B56: push    eax
0x495B57: mov     ecx, edi
0x495B59: call    sub_495120
0x495B5E: mov     ecx, [edi+0Ch]
0x495B61: lea     eax, [esp+44h+lParam]
0x495B65: push    eax; lParam
0x495B66: push    0; wParam
0x495B68: push    1100h; Msg
0x495B6D: push    ecx; hWnd
0x495B6E: mov     [esp+54h+var_1C], offset aActiveSequence; "Active Sequences"
0x495B76: mov     [esp+54h+var_14], ebp
0x495B7A: mov     [esp+54h+var_10], ebp
0x495B7E: mov     [esp+54h+lParam], ebx
0x495B82: call    dword ptr ds:0A28290h
0x495B88: xor     ebx, ebx
0x495B8A: cmp     [esi+46h], bx
0x495B8E: mov     ebp, eax
0x495B90: jbe     short loc_495BB6
0x495B92: mov     edx, [esi+40h]
0x495B95: mov     eax, [edx+ebx*4]
0x495B98: test    eax, eax
0x495B9A: jz      short loc_495BAB
0x495B9C: cmp     dword ptr [eax+44h], 0
0x495BA0: jz      short loc_495BAB
0x495BA2: push    eax
0x495BA3: push    ebp
0x495BA4: mov     ecx, edi
0x495BA6: call    sub_495270
0x495BAB: movzx   eax, word ptr [esi+46h]
0x495BAF: add     ebx, 1
0x495BB2: cmp     ebx, eax
0x495BB4: jb      short loc_495B92
0x495BB6: mov     edx, [edi+0Ch]
0x495BB9: lea     ecx, [esp+44h+lParam]
0x495BBD: push    ecx; lParam
0x495BBE: push    0; wParam
0x495BC0: push    1100h; Msg
0x495BC5: push    edx; hWnd
0x495BC6: mov     [esp+54h+var_1C], offset aInactiveSequen; "Inactive Sequences"
0x495BCE: call    dword ptr ds:0A28290h
0x495BD4: xor     ebx, ebx
0x495BD6: cmp     [esi+46h], bx
0x495BDA: mov     ebp, eax
0x495BDC: jbe     short loc_495C04
0x495BDE: mov     edi, edi
0x495BE0: mov     eax, [esi+40h]
0x495BE3: mov     eax, [eax+ebx*4]
0x495BE6: test    eax, eax
0x495BE8: jz      short loc_495BF9
0x495BEA: cmp     dword ptr [eax+44h], 0
0x495BEE: jnz     short loc_495BF9
0x495BF0: push    eax
0x495BF1: push    ebp
0x495BF2: mov     ecx, edi
0x495BF4: call    sub_495270
0x495BF9: movzx   ecx, word ptr [esi+46h]
0x495BFD: add     ebx, 1
0x495C00: cmp     ebx, ecx
0x495C02: jb      short loc_495BE0
0x495C04: pop     ebp
0x495C05: pop     ebx
0x495C06: pop     edi
0x495C07: pop     esi
0x495C08: add     esp, 34h
0x495C0B: retn    8
