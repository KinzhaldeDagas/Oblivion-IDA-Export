0x551F40: push    0FFFFFFFFh
0x551F42: push    offset SEH_5527D0
0x551F47: mov     eax, large fs:0
0x551F4D: push    eax
0x551F4E: push    ecx
0x551F4F: push    esi
0x551F50: mov     eax, ds:0B30AACh
0x551F55: xor     eax, esp
0x551F57: push    eax
0x551F58: lea     eax, [esp+18h+var_C]
0x551F5C: mov     large fs:0, eax
0x551F62: mov     esi, ecx
0x551F64: mov     [esp+18h+var_10], esi
0x551F68: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x551F6D: push    2; int
0x551F6F: push    18h; unsigned int
0x551F71: lea     eax, [esi+48h]
0x551F74: push    eax; void *
0x551F75: mov     [esp+28h+var_4], 1
0x551F7D: call    $LN21
0x551F82: mov     eax, [esi+3Ch]
0x551F85: test    eax, eax
0x551F87: jz      short loc_551F92
0x551F89: push    eax
0x551F8A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x551F8F: add     esp, 4
0x551F92: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x551F97: push    2; int
0x551F99: push    18h; unsigned int
0x551F9B: push    esi; void *
0x551F9C: mov     dword ptr [esi+3Ch], 0
0x551FA3: mov     dword ptr [esi+40h], 0
0x551FAA: mov     dword ptr [esi+44h], 0
0x551FB1: mov     [esp+28h+var_4], 0FFFFFFFFh
0x551FB9: call    $LN21
0x551FBE: mov     ecx, [esp+18h+var_C]
0x551FC2: mov     large fs:0, ecx
0x551FC9: pop     ecx
0x551FCA: pop     esi
0x551FCB: add     esp, 10h
0x551FCE: retn
0x9BBCC0: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9BBCC5: push    2; int
0x9BBCC7: push    18h; unsigned int
0x9BBCC9: mov     eax, [ebp-10h]
0x9BBCCC: push    eax; void *
0x9BBCCD: call    $LN21
0x9BBCD2: retn
0x9BBCD3: mov     ecx, [ebp-10h]
0x9BBCD6: add     ecx, 30h ; '0'; this
0x9BBCD9: jmp     FaceGenMatrix_Destruct; Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
0x9BBCDE: mov     edx, [esp+arg_4]
0x9BBCE2: lea     eax, [edx-8]
0x9BBCE5: mov     ecx, [edx-0Ch]
0x9BBCE8: xor     ecx, eax
0x9BBCEA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBCEF: mov     eax, offset stru_AE59E4
0x9BBCF4: jmp     ___CxxFrameHandler3
