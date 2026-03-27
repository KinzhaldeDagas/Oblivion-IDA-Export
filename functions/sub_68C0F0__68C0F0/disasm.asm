0x68C0F0: push    ebp
0x68C0F1: push    esi
0x68C0F2: mov     esi, [esp+8+arg_0]
0x68C0F6: test    esi, esi
0x68C0F8: mov     ebp, ecx
0x68C0FA: jz      short loc_68C165
0x68C0FC: mov     eax, [ebp+0]
0x68C0FF: cmp     esi, eax
0x68C101: jnz     short loc_68C111
0x68C103: mov     dword ptr [ebp+0], 0
0x68C10A: mov     dword ptr [ebp+4], 0
0x68C111: push    ebx
0x68C112: xor     ebx, ebx
0x68C114: test    eax, eax
0x68C116: jz      short loc_68C164
0x68C118: cmp     eax, esi
0x68C11A: jz      short loc_68C12B
0x68C11C: mov     ecx, eax
0x68C11E: mov     ebx, eax
0x68C120: call    NiDX92DBufferData__GetSurfaceData
0x68C125: test    eax, eax
0x68C127: jnz     short loc_68C118
0x68C129: jmp     short loc_68C154
0x68C12B: push    edi
0x68C12C: lea     esp, [esp+0]
0x68C130: mov     ecx, esi
0x68C132: call    NiDX92DBufferData__GetSurfaceData
0x68C137: test    esi, esi
0x68C139: mov     edi, eax
0x68C13B: jz      short loc_68C14D
0x68C13D: mov     ecx, esi; void *
0x68C13F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68C144: push    esi
0x68C145: call    FormHeapFree
0x68C14A: add     esp, 4
0x68C14D: test    edi, edi
0x68C14F: mov     esi, edi
0x68C151: jnz     short loc_68C130
0x68C153: pop     edi
0x68C154: test    ebx, ebx
0x68C156: jz      short loc_68C164
0x68C158: push    0
0x68C15A: mov     ecx, ebx
0x68C15C: call    sub_6A2FD0
0x68C161: mov     [ebp+4], ebx
0x68C164: pop     ebx
0x68C165: pop     esi
0x68C166: pop     ebp
0x68C167: retn    4
