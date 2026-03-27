0x8B7300: sub     esp, 34h
0x8B7303: push    esi
0x8B7304: mov     esi, ecx
0x8B7306: mov     ecx, [esi+10h]
0x8B7309: test    ecx, ecx
0x8B730B: jz      short loc_8B732B
0x8B730D: cmp     dword ptr [ecx+8], 0
0x8B7311: jz      short loc_8B732B
0x8B7313: lea     eax, [esp+38h+var_34]
0x8B7317: push    eax
0x8B7318: call    sub_8AEDC0
0x8B731D: mov     edx, [esi]
0x8B731F: mov     edx, [edx+78h]
0x8B7322: lea     eax, [esp+38h+var_34]
0x8B7326: push    eax
0x8B7327: mov     ecx, esi
0x8B7329: call    edx
0x8B732B: pop     esi
0x8B732C: add     esp, 34h
0x8B732F: retn
