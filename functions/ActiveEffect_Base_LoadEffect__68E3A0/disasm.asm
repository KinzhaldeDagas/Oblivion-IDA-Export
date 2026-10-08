0x68E3A0: push    0FFFFFFFFh
0x68E3A2: push    offset ActiveEffect_Base_LoadEffect_SEH
0x68E3A7: mov     eax, large fs:0
0x68E3AD: push    eax
0x68E3AE: sub     esp, 18h
0x68E3B1: push    ebx
0x68E3B2: push    ebp
0x68E3B3: push    esi
0x68E3B4: push    edi
0x68E3B5: mov     eax, ds:0B30AACh
0x68E3BA: xor     eax, esp
0x68E3BC: push    eax
0x68E3BD: lea     eax, [esp+38h+var_C]
0x68E3C1: mov     large fs:0, eax
0x9C54B0: mov     eax, [ebp-10h]
0x9C54B3: push    eax
0x9C54B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C54B9: pop     ecx
0x9C54BA: retn
0x9C54BB: mov     eax, [ebp-10h]
0x9C54BE: push    eax
0x9C54BF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C54C4: pop     ecx
0x9C54C5: retn
0x9C54C6: mov     edx, [esp+arg_4]
0x9C54CA: lea     eax, [edx-28h]
0x9C54CD: mov     ecx, [edx-2Ch]
0x9C54D0: xor     ecx, eax
0x9C54D2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C54D7: mov     eax, offset stru_AEDC90
0x9C54DC: jmp     ___CxxFrameHandler3
