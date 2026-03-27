0x401F40: push    0FFFFFFFFh
0x401F42: push    offset SEH_6F8920
0x401F47: mov     eax, large fs:0
0x401F4D: push    eax
0x401F4E: push    esi
0x401F4F: mov     eax, ___security_cookie
0x401F54: xor     eax, esp
0x401F56: push    eax
0x401F57: lea     eax, [esp+14h+var_C]
0x401F5B: mov     large fs:0, eax
0x401F61: mov     esi, [esp+14h+arg_0]
0x401F65: cmp     esi, 8
0x401F68: jb      short loc_401FD3
0x401F6A: mov     ecx, [ecx+4]
0x401F6D: lea     eax, [ecx-1]
0x401F70: test    esi, eax
0x401F72: jz      short loc_401F7A
0x401F74: add     esi, ecx
0x401F76: not     eax
0x401F78: and     esi, eax
0x401F7A: push    1; int
0x401F7C: push    180h; Size
0x401F81: mov     ecx, offset FormHeap
0x401F86: call    MemoryHeap_Allocate
0x401F8B: mov     [esp+14h+arg_0], eax
0x401F8F: test    eax, eax
0x401F91: mov     [esp+14h+var_4], 0
0x401F99: jz      short loc_401FB1
0x401F9B: mov     ecx, [esp+14h+arg_8]
0x401F9F: mov     edx, [esp+14h+arg_4]
0x401FA3: push    ecx; int
0x401FA4: push    edx; int
0x401FA5: push    esi; int
0x401FA6: mov     ecx, eax; Dest
0x401FA8: call    MemoryPool_Init
0x401FAD: mov     esi, eax
0x401FAF: jmp     short loc_401FB3
0x401FB1: xor     esi, esi
0x401FB3: cmp     dword ptr [esi+40h], 0
0x401FB7: mov     [esp+14h+var_4], 0FFFFFFFFh
0x401FBF: jnz     short loc_401FD3
0x401FC1: mov     ecx, esi
0x401FC3: call    sub_402400
0x401FC8: push    esi
0x401FC9: mov     ecx, offset FormHeap
0x401FCE: call    MemoryHeap_Free
0x401FD3: mov     ecx, [esp+14h+var_C]
0x401FD7: mov     large fs:0, ecx
0x401FDE: pop     ecx
0x401FDF: pop     esi
0x401FE0: add     esp, 0Ch
0x401FE3: retn    0Ch
