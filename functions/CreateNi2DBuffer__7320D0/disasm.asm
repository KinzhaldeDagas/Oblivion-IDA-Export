0x7320D0: push    0FFFFFFFFh
0x7320D2: push    offset SEH_7320D0
0x7320D7: mov     eax, large fs:0
0x7320DD: push    eax
0x7320DE: push    ebx
0x7320DF: push    esi
0x7320E0: push    edi
0x7320E1: mov     eax, ds:0B30AACh
0x7320E6: xor     eax, esp
0x7320E8: push    eax
0x7320E9: lea     eax, [esp+1Ch+var_C]
0x7320ED: mov     large fs:0, eax
0x7320F3: mov     edi, [esp+1Ch+a2]
0x7320F7: xor     ebx, ebx
0x7320F9: cmp     edi, ebx
0x7320FB: jnz     short loc_732112
0x7320FD: xor     eax, eax
0x7320FF: mov     ecx, [esp+1Ch+var_C]
0x732103: mov     large fs:0, ecx
0x73210A: pop     ecx
0x73210B: pop     edi
0x73210C: pop     esi
0x73210D: pop     ebx
0x73210E: add     esp, 0Ch
0x732111: retn
0x732112: mov     eax, [edi]
0x732114: mov     edx, [eax+0Ch]
0x732117: mov     ecx, edi
0x732119: call    edx
0x73211B: cmp     eax, ebx
0x73211D: jz      short loc_7320FD
0x73211F: push    14h; Size
0x732121: call    FormHeapAlloc
0x732126: mov     esi, eax
0x732128: add     esp, 4
0x73212B: mov     [esp+1Ch+a2], esi
0x73212F: cmp     esi, ebx
0x732131: mov     [esp+1Ch+var_4], ebx
0x732135: jz      short loc_73214F
0x732137: mov     ecx, esi
0x732139: call    NiObject_constr
0x73213E: mov     dword ptr [esi], offset ??_7Ni2DBuffer@@6B@; const Ni2DBuffer::`vftable'
0x732144: mov     [esi+8], ebx
0x732147: mov     [esi+0Ch], ebx
0x73214A: mov     [esi+10h], ebx
0x73214D: jmp     short loc_732151
0x73214F: xor     esi, esi
0x732151: mov     ecx, [esp+1Ch+height]
0x732155: mov     eax, [esp+1Ch+width]
0x732159: mov     [esi+0Ch], ecx
0x73215C: push    edi; a2
0x73215D: lea     ecx, [esi+10h]; this
0x732160: mov     [esp+20h+var_4], 0FFFFFFFFh
0x732168: mov     [esi+8], eax
0x73216B: call    NiSmartPointer_Set??
0x732170: push    edi; a2
0x732171: mov     ecx, esi; this
0x732173: call    sub_70BD60
0x732178: mov     eax, esi
0x73217A: mov     ecx, [esp+1Ch+var_C]
0x73217E: mov     large fs:0, ecx
0x732185: pop     ecx
0x732186: pop     edi
0x732187: pop     esi
0x732188: pop     ebx
0x732189: add     esp, 0Ch
0x73218C: retn
