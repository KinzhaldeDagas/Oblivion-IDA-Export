0x41EF30: push    0FFFFFFFFh
0x41EF32: push    offset SEH_8C62B0
0x41EF37: mov     eax, large fs:0
0x41EF3D: push    eax
0x41EF3E: push    ecx
0x41EF3F: push    esi
0x41EF40: mov     eax, ___security_cookie
0x41EF45: xor     eax, esp
0x41EF47: push    eax
0x41EF48: lea     eax, [esp+18h+var_C]
0x41EF4C: mov     large fs:0, eax
0x41EF52: mov     esi, ecx
0x41EF54: push    2Fh ; '/'; a2
0x41EF56: call    BaseExtraList_GetExtraData
0x41EF5B: test    eax, eax
0x41EF5D: jz      short loc_41EF79
0x41EF5F: mov     cl, byte ptr [esp+18h+arg_0]
0x41EF63: mov     [eax+0Ch], cl
0x41EF66: mov     ecx, [esp+18h+var_C]
0x41EF6A: mov     large fs:0, ecx
0x41EF71: pop     ecx
0x41EF72: pop     esi
0x41EF73: add     esp, 10h
0x41EF76: retn    4
0x41EF79: push    10h; Size
0x41EF7B: call    FormHeapAlloc
0x41EF80: add     esp, 4
0x41EF83: mov     [esp+18h+var_10], eax
0x41EF87: test    eax, eax
0x41EF89: mov     [esp+18h+var_4], 0
0x41EF91: jz      short loc_41EFA1
0x41EF93: mov     edx, [esp+18h+arg_0]
0x41EF97: push    edx
0x41EF98: mov     ecx, eax
0x41EF9A: call    sub_429F00
0x41EF9F: jmp     short loc_41EFA3
0x41EFA1: xor     eax, eax
0x41EFA3: push    eax; BSExtraData *
0x41EFA4: mov     ecx, esi; ExtraDataList *
0x41EFA6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41EFAE: call    BaseExtraList_AddExtra
0x41EFB3: mov     ecx, [esp+18h+var_C]
0x41EFB7: mov     large fs:0, ecx
0x41EFBE: pop     ecx
0x41EFBF: pop     esi
0x41EFC0: add     esp, 10h
0x41EFC3: retn    4
