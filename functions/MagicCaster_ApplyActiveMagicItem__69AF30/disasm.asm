0x69AF30: push    0FFFFFFFFh
0x69AF32: push    offset MagicCaster_ApplyActiveMagicItem_SEH
0x69AF37: mov     eax, large fs:0
0x69AF3D: push    eax
0x69AF3E: sub     esp, 54h
0x69AF41: push    ebx
0x69AF42: push    ebp
0x69AF43: push    esi
0x69AF44: push    edi
0x69AF45: mov     eax, ds:0B30AACh
0x69AF4A: xor     eax, esp
0x69AF4C: push    eax
0x69AF4D: lea     eax, [esp+74h+var_C]
0x69AF51: mov     large fs:0, eax
0x69AF57: mov     esi, ecx
0x9C5C40: mov     eax, [ebp-34h]
0x9C5C43: push    eax
0x9C5C44: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C5C49: pop     ecx
0x9C5C4A: retn
0x9C5C4B: mov     edx, [esp+arg_4]
0x9C5C4F: lea     eax, [edx-64h]
0x9C5C52: mov     ecx, [edx-68h]
0x9C5C55: xor     ecx, eax
0x9C5C57: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5C5C: mov     eax, offset stru_AEE30C
0x9C5C61: jmp     ___CxxFrameHandler3
