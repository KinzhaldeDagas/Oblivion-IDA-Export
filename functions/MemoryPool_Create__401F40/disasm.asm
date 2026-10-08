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
0x401FC3: call    MemoryPool_Destroy; Destroys one small allocation pool: releases its 4 KiB pages, removes its registry entry, clears page metadata, frees its table, and deletes its lock.
0x401FC8: push    esi
0x401FC9: mov     ecx, offset FormHeap
0x401FCE: call    MemoryHeap_Free
0x401FD3: mov     ecx, [esp+14h+var_C]
0x401FD7: mov     large fs:0, ecx
0x401FDE: pop     ecx
0x401FDF: pop     esi
0x401FE0: add     esp, 0Ch
0x401FE3: retn    0Ch
0x9AFAD0: mov     eax, [ebp+4]
0x9AFAD3: push    eax
0x9AFAD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AFAD9: pop     ecx
0x9AFADA: retn
0x9AFADB: mov     edx, [esp+arg_4]
0x9AFADF: lea     eax, [edx-4]
0x9AFAE2: mov     ecx, [edx-8]
0x9AFAE5: xor     ecx, eax
0x9AFAE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFAEC: mov     eax, offset stru_ADBFDC
0x9AFAF1: jmp     ___CxxFrameHandler3
