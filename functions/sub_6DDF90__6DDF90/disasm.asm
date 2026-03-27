0x6DDF90: push    0FFFFFFFFh
0x6DDF92: push    offset SEH_8C8970
0x6DDF97: mov     eax, large fs:0
0x6DDF9D: push    eax
0x6DDF9E: push    ecx
0x6DDF9F: push    ebx
0x6DDFA0: push    esi
0x6DDFA1: mov     eax, ds:0B30AACh
0x6DDFA6: xor     eax, esp
0x6DDFA8: push    eax
0x6DDFA9: lea     eax, [esp+1Ch+var_C]
0x6DDFAD: mov     large fs:0, eax
0x6DDFB3: push    18h; Size
0x6DDFB5: call    FormHeapAlloc
0x6DDFBA: mov     esi, eax
0x6DDFBC: add     esp, 4
0x6DDFBF: mov     [esp+1Ch+var_10], esi
0x6DDFC3: xor     ebx, ebx
0x6DDFC5: cmp     esi, ebx
0x6DDFC7: mov     [esp+1Ch+var_4], ebx
0x6DDFCB: jz      short loc_6DDFFA
0x6DDFCD: mov     ecx, esi
0x6DDFCF: call    NiObject_constr
0x6DDFD4: mov     dword ptr [esi], offset ??_7NiMorphData@@6B@; const NiMorphData::`vftable'
0x6DDFDA: mov     [esi+8], ebx
0x6DDFDD: mov     [esi+0Ch], ebx
0x6DDFE0: mov     [esi+10h], ebx
0x6DDFE3: mov     [esi+14h], bl
0x6DDFE6: mov     eax, esi
0x6DDFE8: mov     ecx, [esp+1Ch+var_C]
0x6DDFEC: mov     large fs:0, ecx
0x6DDFF3: pop     ecx
0x6DDFF4: pop     esi
0x6DDFF5: pop     ebx
0x6DDFF6: add     esp, 10h
0x6DDFF9: retn
0x6DDFFA: xor     eax, eax
0x6DDFFC: mov     ecx, [esp+1Ch+var_C]
0x6DE000: mov     large fs:0, ecx
0x6DE007: pop     ecx
0x6DE008: pop     esi
0x6DE009: pop     ebx
0x6DE00A: add     esp, 10h
0x6DE00D: retn
