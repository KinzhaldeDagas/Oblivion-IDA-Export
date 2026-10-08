0x526E70: push    0FFFFFFFFh
0x526E72: push    offset SEH_526E70
0x526E77: mov     eax, large fs:0
0x526E7D: push    eax
0x526E7E: push    ecx
0x526E7F: push    esi
0x526E80: mov     eax, ds:0B30AACh
0x526E85: xor     eax, esp
0x526E87: push    eax
0x526E88: lea     eax, [esp+18h+var_C]
0x526E8C: mov     large fs:0, eax
0x526E92: mov     esi, ecx
0x526E94: mov     [esp+18h+var_10], esi
0x526E98: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x526E9D: push    4; int
0x526E9F: push    18h; unsigned int
0x526EA1: lea     eax, [esi+60h]
0x526EA4: push    eax; void *
0x526EA5: mov     [esp+28h+var_4], 0
0x526EAD: call    $LN21
0x526EB2: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x526EB7: push    4; int
0x526EB9: push    18h; unsigned int
0x526EBB: push    esi; void *
0x526EBC: mov     [esp+28h+var_4], 0FFFFFFFFh
0x526EC4: call    $LN21
0x526EC9: mov     ecx, [esp+18h+var_C]
0x526ECD: mov     large fs:0, ecx
0x526ED4: pop     ecx
0x526ED5: pop     esi
0x526ED6: add     esp, 10h
0x526ED9: retn
0x9B8100: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B8105: push    4; int
0x9B8107: push    18h; unsigned int
0x9B8109: mov     eax, [ebp-10h]
0x9B810C: push    eax; void *
0x9B810D: call    $LN21
0x9B8112: retn
0x9B8113: mov     edx, [esp+arg_4]
0x9B8117: lea     eax, [edx-8]
0x9B811A: mov     ecx, [edx-0Ch]
0x9B811D: xor     ecx, eax
0x9B811F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8124: mov     eax, offset stru_AE2898
0x9B8129: jmp     ___CxxFrameHandler3
