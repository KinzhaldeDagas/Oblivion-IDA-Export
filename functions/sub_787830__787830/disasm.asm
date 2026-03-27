0x787830: push    0FFFFFFFFh
0x787832: push    offset SEH_787830
0x787837: mov     eax, large fs:0
0x78783D: push    eax
0x78783E: push    ebx
0x78783F: push    esi
0x787840: push    edi
0x787841: mov     eax, ds:0B30AACh
0x787846: xor     eax, esp
0x787848: push    eax
0x787849: lea     eax, [esp+1Ch+var_C]
0x78784D: mov     large fs:0, eax
0x787853: mov     esi, ecx
0x787855: mov     eax, [esi+4]
0x787858: push    eax
0x787859: call    FormHeapFree
0x78785E: mov     ax, word ptr [esp+20h+arg_0]
0x787863: movzx   edi, ax
0x787866: mov     [esi], ax
0x787869: xor     ecx, ecx
0x78786B: mov     eax, edi
0x78786D: mov     edx, 40h ; '@'
0x787872: mul     edx
0x787874: seto    cl
0x787877: neg     ecx
0x787879: or      ecx, eax
0x78787B: push    ecx; Size
0x78787C: call    FormHeapAlloc
0x787881: mov     ebx, eax
0x787883: add     esp, 8
0x787886: mov     [esp+1Ch+arg_0], ebx
0x78788A: test    ebx, ebx
0x78788C: mov     [esp+1Ch+var_4], 0
0x787894: jz      short loc_7878A6
0x787896: push    offset sub_7A66B0
0x78789B: push    edi
0x78789C: push    40h ; '@'
0x78789E: push    ebx
0x78789F: call    sub_401080
0x7878A4: jmp     short loc_7878A8
0x7878A6: xor     ebx, ebx
0x7878A8: test    edi, edi
0x7878AA: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7878B2: mov     [esi+4], ebx
0x7878B5: jle     short loc_7878D2
0x7878B7: xor     ebx, ebx
0x7878B9: lea     esp, [esp+0]
0x7878C0: mov     ecx, [esi+4]
0x7878C3: add     ecx, ebx
0x7878C5: call    sub_7A6670
0x7878CA: add     ebx, 40h ; '@'
0x7878CD: sub     edi, 1
0x7878D0: jnz     short loc_7878C0
0x7878D2: mov     ecx, [esp+1Ch+var_C]
0x7878D6: mov     large fs:0, ecx
0x7878DD: pop     ecx
0x7878DE: pop     edi
0x7878DF: pop     esi
0x7878E0: pop     ebx
0x7878E1: add     esp, 0Ch
0x7878E4: retn    4
