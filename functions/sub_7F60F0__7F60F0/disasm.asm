0x7F60F0: mov     eax, [esp+arg_8]
0x7F60F4: fld     dword ptr [eax+94h]
0x7F60FA: push    ebx
0x7F60FB: push    edi
0x7F60FC: fstp    [esp+8+arg_8]
0x7F6100: mov     edi, [esp+8+arg_4]
0x7F6104: xor     bl, bl
0x7F6106: cmp     [edi+8], bl
0x7F6109: jbe     short loc_7F6145
0x7F610B: push    esi
0x7F610C: mov     esi, [esp+0Ch+arg_C]
0x7F6110: test    esi, esi
0x7F6112: mov     ecx, [edi+0Ch]
0x7F6115: movzx   eax, bl
0x7F6118: mov     ecx, [ecx+eax*4]
0x7F611B: jz      short loc_7F612A
0x7F611D: cmp     bl, [esi+8]
0x7F6120: jnb     short loc_7F612A
0x7F6122: mov     edx, [esi+0Ch]
0x7F6125: cmp     ecx, [edx+eax*4]
0x7F6128: jz      short loc_7F613C
0x7F612A: fld     [esp+0Ch+arg_8]
0x7F612E: push    ecx
0x7F612F: fstp    [esp+10h+var_10]; float
0x7F6132: push    ecx; int
0x7F6133: push    eax; int
0x7F6134: call    sub_7EE390
0x7F6139: add     esp, 0Ch
0x7F613C: add     bl, 1
0x7F613F: cmp     bl, [edi+8]
0x7F6142: jb      short loc_7F6110
0x7F6144: pop     esi
0x7F6145: pop     edi
0x7F6146: pop     ebx
0x7F6147: retn    10h
