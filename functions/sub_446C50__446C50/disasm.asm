0x446C50: mov     eax, [esp+arg_0]
0x446C54: cmp     eax, [ecx+0Ch]
0x446C57: jb      short loc_446C77
0x446C59: lea     edx, [eax+1]
0x446C5C: mov     [ecx+0Ch], edx
0x446C5F: mov     edx, [esp+arg_4]
0x446C63: cmp     dword ptr [edx], 0
0x446C66: jz      short loc_446CA5
0x446C68: add     dword ptr [ecx+10h], 1
0x446C6C: mov     ecx, [ecx+4]
0x446C6F: mov     edx, [edx]
0x446C71: mov     [ecx+eax*4], edx
0x446C74: retn    8
0x446C77: mov     edx, [esp+arg_4]
0x446C7B: cmp     dword ptr [edx], 0
0x446C7E: push    esi
0x446C7F: mov     esi, [ecx+4]
0x446C82: jz      short loc_446C9A
0x446C84: cmp     dword ptr [esi+eax*4], 0
0x446C88: jnz     short loc_446CA4
0x446C8A: add     dword ptr [ecx+10h], 1
0x446C8E: mov     ecx, [ecx+4]
0x446C91: mov     edx, [edx]
0x446C93: pop     esi
0x446C94: mov     [ecx+eax*4], edx
0x446C97: retn    8
0x446C9A: cmp     dword ptr [esi+eax*4], 0
0x446C9E: jz      short loc_446CA4
0x446CA0: add     dword ptr [ecx+10h], 0FFFFFFFFh
0x446CA4: pop     esi
0x446CA5: mov     ecx, [ecx+4]
0x446CA8: mov     edx, [edx]
0x446CAA: mov     [ecx+eax*4], edx
0x446CAD: retn    8
