0x41E9C0: push    0FFFFFFFFh
0x41E9C2: push    offset SEH_8C8970
0x41E9C7: mov     eax, large fs:0
0x41E9CD: push    eax
0x41E9CE: push    ecx
0x41E9CF: push    esi
0x41E9D0: push    edi
0x41E9D1: mov     eax, ___security_cookie
0x41E9D6: xor     eax, esp
0x41E9D8: push    eax
0x41E9D9: lea     eax, [esp+1Ch+var_C]
0x41E9DD: mov     large fs:0, eax
0x41E9E3: mov     edi, ecx
0x41E9E5: push    15h; a2
0x41E9E7: call    BaseExtraList_GetExtraData
0x41E9EC: mov     esi, eax
0x41E9EE: test    esi, esi
0x41E9F0: jz      short loc_41EA12
0x41E9F2: mov     edi, [esi+0Ch]
0x41E9F5: test    edi, edi
0x41E9F7: jz      short loc_41EA09
0x41E9F9: mov     ecx, edi; this
0x41E9FB: call    DisposeActorAnimData
0x41EA00: push    edi
0x41EA01: call    FormHeapFree
0x41EA06: add     esp, 4
0x41EA09: mov     eax, [esp+1Ch+arg_0]
0x41EA0D: mov     [esi+0Ch], eax
0x41EA10: jmp     short loc_41EA4E
0x41EA12: push    10h; Size
0x41EA14: call    FormHeapAlloc
0x41EA19: add     esp, 4
0x41EA1C: mov     [esp+1Ch+var_10], eax
0x41EA20: test    eax, eax
0x41EA22: mov     [esp+1Ch+var_4], 0
0x41EA2A: jz      short loc_41EA3C
0x41EA2C: mov     ecx, [esp+1Ch+arg_0]
0x41EA30: push    ecx
0x41EA31: mov     ecx, eax; this
0x41EA33: call    ??0ExtraAnim@@QAE@XZ; ExtraAnim::ExtraAnim(void)
0x41EA38: mov     esi, eax
0x41EA3A: jmp     short loc_41EA3E
0x41EA3C: xor     esi, esi
0x41EA3E: push    esi; BSExtraData *
0x41EA3F: mov     ecx, edi; ExtraDataList *
0x41EA41: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41EA49: call    BaseExtraList_AddExtra
0x41EA4E: mov     eax, esi
0x41EA50: mov     ecx, [esp+1Ch+var_C]
0x41EA54: mov     large fs:0, ecx
0x41EA5B: pop     ecx
0x41EA5C: pop     edi
0x41EA5D: pop     esi
0x41EA5E: add     esp, 10h
0x41EA61: retn    4
