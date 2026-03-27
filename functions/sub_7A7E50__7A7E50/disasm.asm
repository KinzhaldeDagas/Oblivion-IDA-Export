0x7A7E50: push    0FFFFFFFFh
0x7A7E52: push    offset SEH_8C8970
0x7A7E57: mov     eax, large fs:0
0x7A7E5D: push    eax
0x7A7E5E: push    ecx
0x7A7E5F: push    esi
0x7A7E60: push    edi
0x7A7E61: mov     eax, ds:0B30AACh
0x7A7E66: xor     eax, esp
0x7A7E68: push    eax
0x7A7E69: lea     eax, [esp+1Ch+var_C]
0x7A7E6D: mov     large fs:0, eax
0x7A7E73: mov     edi, ecx
0x7A7E75: push    4Ch ; 'L'; Size
0x7A7E77: call    FormHeapAlloc
0x7A7E7C: add     esp, 4
0x7A7E7F: mov     [esp+1Ch+var_10], eax
0x7A7E83: xor     esi, esi
0x7A7E85: cmp     eax, esi
0x7A7E87: mov     [esp+1Ch+var_4], esi
0x7A7E8B: jz      short loc_7A7E96
0x7A7E8D: mov     ecx, eax
0x7A7E8F: call    sub_7A7D80
0x7A7E94: mov     esi, eax
0x7A7E96: push    edi
0x7A7E97: mov     ecx, esi
0x7A7E99: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7A7EA1: call    sub_7A7DD0
0x7A7EA6: mov     eax, esi
0x7A7EA8: mov     ecx, [esp+1Ch+var_C]
0x7A7EAC: mov     large fs:0, ecx
0x7A7EB3: pop     ecx
0x7A7EB4: pop     edi
0x7A7EB5: pop     esi
0x7A7EB6: add     esp, 10h
0x7A7EB9: retn
