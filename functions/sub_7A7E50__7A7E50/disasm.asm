0x7A7E50: push    0FFFFFFFFh; Allocates a 0x4C-byte CBillboardLeaf, default-constructs it, then applies the local copy-assignment helper.
0x7A7E52: push    offset SEH_8C8970
0x7A7E57: mov     eax, large fs:0
0x7A7E5D: push    eax
0x7A7E5E: push    ecx
0x7A7E5F: push    esi
0x7A7E60: push    edi
0x7A7E61: mov     eax, ds:0B30AACh
0x7A7E66: xor     eax, esp
0x7A7E68: push    eax
0x7A7E69: lea     eax, [esp+1Ch+var_C]
0x7A7E6D: mov     large fs:0, eax
0x7A7E73: mov     edi, ecx
0x7A7E75: push    4Ch ; 'L'; Size
0x7A7E77: call    FormHeapAlloc
0x7A7E7C: add     esp, 4
0x7A7E7F: mov     [esp+1Ch+var_10], eax
0x7A7E83: xor     esi, esi
0x7A7E85: cmp     eax, esi
0x7A7E87: mov     [esp+1Ch+var_4], esi
0x7A7E8B: jz      short loc_7A7E96
0x7A7E8D: mov     ecx, eax; this
0x7A7E8F: call    OB_CBillboardLeaf_ctor_010201A0; Compact stock CBillboardLeaf default constructor. Initializes only the 0x4C-byte Oblivion layout: position, angle/color/colorScale, one normal/tangent/binormal block, texture index, primary wind weight/group.
0x7A7E94: mov     esi, eax
0x7A7E96: push    edi; source
0x7A7E97: mov     ecx, esi; this
0x7A7E99: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7A7EA1: call    OB_CBillboardLeaf_copy_assign_010201A0; Copies the complete 0x4C-byte Oblivion billboard-leaf state (position base, angle, packed color/dimming byte, normal/tangent/binormal, texture index, and one wind weight/group).
0x7A7EA6: mov     eax, esi
0x7A7EA8: mov     ecx, [esp+1Ch+var_C]
0x7A7EAC: mov     large fs:0, ecx
0x7A7EB3: pop     ecx
0x7A7EB4: pop     edi
0x7A7EB5: pop     esi
0x7A7EB6: add     esp, 10h
0x7A7EB9: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
