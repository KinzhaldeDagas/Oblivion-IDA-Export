0x8A7880: push    esi
0x8A7881: push    edi
0x8A7882: mov     edi, ecx
0x8A7884: mov     ecx, [edi+14h]; lpCriticalSection
0x8A7887: call    sub_8A7720
0x8A788C: mov     eax, [edi+0Ch]
0x8A788F: xor     esi, esi
0x8A7891: test    eax, eax
0x8A7893: jle     short loc_8A78D0
0x8A7895: push    ebx
0x8A7896: mov     ebx, [esp+0Ch+arg_18]
0x8A789A: push    ebp
0x8A789B: mov     ebp, [esp+10h+arg_14]
0x8A789F: nop
0x8A78A0: mov     eax, [edi+8]
0x8A78A3: mov     ecx, [eax+esi*4]
0x8A78A6: mov     eax, [esp+10h+arg_10]
0x8A78AA: mov     edx, [ecx]
0x8A78AC: push    ebx
0x8A78AD: push    ebp
0x8A78AE: push    eax
0x8A78AF: mov     eax, [esp+1Ch+arg_C]
0x8A78B3: push    eax
0x8A78B4: mov     eax, [esp+20h+arg_8]
0x8A78B8: push    eax
0x8A78B9: mov     eax, [esp+24h+arg_4]
0x8A78BD: push    eax
0x8A78BE: mov     eax, [esp+28h+arg_0]
0x8A78C2: push    eax
0x8A78C3: call    dword ptr [edx+14h]
0x8A78C6: mov     eax, [edi+0Ch]
0x8A78C9: inc     esi
0x8A78CA: cmp     esi, eax
0x8A78CC: jl      short loc_8A78A0
0x8A78CE: pop     ebp
0x8A78CF: pop     ebx
0x8A78D0: mov     ecx, [edi+14h]
0x8A78D3: push    ecx; lpCriticalSection
0x8A78D4: call    dword ptr ds:0A28074h
0x8A78DA: pop     edi
0x8A78DB: pop     esi
0x8A78DC: retn    1Ch
